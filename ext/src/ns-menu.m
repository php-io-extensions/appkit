#import <AppKit/AppKit.h>
#import "ns-menu.h"
#import "ns-app.h"

static NSString *ns_pending_action = nil;
static NSString *ns_menu_last_app_name = nil;
static NSMenuItem *ns_about_item = nil;

@interface NSPhpMenuTarget : NSObject
- (void)handleCustomAction:(id)sender;
- (void)handleQuit:(id)sender;
@end

@implementation NSPhpMenuTarget
- (void)handleCustomAction:(id)sender
{
    NSMenuItem *item = (NSMenuItem *)sender;
    if ([item.representedObject isKindOfClass:[NSString class]]) {
        ns_pending_action = [item.representedObject copy];
    }
}

- (void)handleQuit:(id)sender
{
    (void)sender;
    ns_pending_action = @"quit";
    ns_app_terminate();
}
@end

static NSPhpMenuTarget *ns_menu_target = nil;

static NSMenuItem *ns_find_top_menu(NSString *title)
{
    NSMenu *mainMenu = NSApp.mainMenu;
    if (!mainMenu) {
        return nil;
    }
    for (NSMenuItem *item in mainMenu.itemArray) {
        if ([item.title isEqualToString:title]) {
            return item;
        }
    }
    return nil;
}

int ns_menu_install_default(const char *app_name)
{
    if (!ns_app_init()) {
        return 0;
    }

    @autoreleasepool {
        if (!ns_menu_target) {
            ns_menu_target = [NSPhpMenuTarget new];
        }

        NSString *name = app_name && app_name[0]
            ? [NSString stringWithUTF8String:app_name]
            : @"AppKit";
        ns_menu_last_app_name = [name copy];
        ns_about_item = nil;

        NSMenu *mainMenu = [NSMenu new];

        // Application menu (no About — opt in via ns_menu_enable_about)
        NSMenu *appMenu = [NSMenu new];
        [appMenu addItem:[NSMenuItem separatorItem]];
        NSMenuItem *quit = [[NSMenuItem alloc] initWithTitle:[NSString stringWithFormat:@"Quit %@", name]
                                                      action:@selector(handleQuit:)
                                               keyEquivalent:@"q"];
        quit.target = ns_menu_target;
        quit.representedObject = @"quit";
        [appMenu addItem:quit];

        NSMenuItem *appMenuItem = [NSMenuItem new];
        appMenuItem.submenu = appMenu;
        [mainMenu addItem:appMenuItem];

        // File
        NSMenu *fileMenu = [[NSMenu alloc] initWithTitle:@"File"];
        NSMenuItem *fileItem = [[NSMenuItem alloc] initWithTitle:@"File" action:nil keyEquivalent:@""];
        fileItem.submenu = fileMenu;
        [mainMenu addItem:fileItem];

        // Edit
        NSMenu *editMenu = [[NSMenu alloc] initWithTitle:@"Edit"];
        NSMenuItem *editItem = [[NSMenuItem alloc] initWithTitle:@"Edit" action:nil keyEquivalent:@""];
        editItem.submenu = editMenu;
        [mainMenu addItem:editItem];

        // Window
        NSMenu *windowMenu = [[NSMenu alloc] initWithTitle:@"Window"];
        NSMenuItem *minimize = [[NSMenuItem alloc] initWithTitle:@"Minimize"
                                                          action:@selector(performMiniaturize:)
                                                   keyEquivalent:@"m"];
        [windowMenu addItem:minimize];
        NSMenuItem *windowItem = [[NSMenuItem alloc] initWithTitle:@"Window" action:nil keyEquivalent:@""];
        windowItem.submenu = windowMenu;
        [mainMenu addItem:windowItem];
        [NSApp setWindowsMenu:windowMenu];

        // Help
        NSMenu *helpMenu = [[NSMenu alloc] initWithTitle:@"Help"];
        NSMenuItem *helpItem = [[NSMenuItem alloc] initWithTitle:@"Help" action:nil keyEquivalent:@""];
        helpItem.submenu = helpMenu;
        [mainMenu addItem:helpItem];

        [NSApp setMainMenu:mainMenu];
        return 1;
    }
}

int ns_menu_add_item(
    const char *menu_title,
    const char *item_title,
    const char *key_equivalent,
    const char *action_id
) {
    if (!menu_title || !item_title || !action_id) {
        return 0;
    }
    if (!ns_app_init()) {
        return 0;
    }
    if (!NSApp.mainMenu) {
        ns_menu_install_default("AppKit");
    }

    @autoreleasepool {
        if (!ns_menu_target) {
            ns_menu_target = [NSPhpMenuTarget new];
        }

        NSString *menuTitle = [NSString stringWithUTF8String:menu_title];
        NSString *itemTitle = [NSString stringWithUTF8String:item_title];
        NSString *key = key_equivalent ? [NSString stringWithUTF8String:key_equivalent] : @"";
        NSString *action = [NSString stringWithUTF8String:action_id];

        NSMenuItem *top = ns_find_top_menu(menuTitle);
        if (!top) {
            NSMenu *submenu = [[NSMenu alloc] initWithTitle:menuTitle];
            top = [[NSMenuItem alloc] initWithTitle:menuTitle action:nil keyEquivalent:@""];
            top.submenu = submenu;
            [NSApp.mainMenu addItem:top];
        }

        NSMenuItem *item = [[NSMenuItem alloc] initWithTitle:itemTitle
                                                      action:@selector(handleCustomAction:)
                                               keyEquivalent:key];
        item.target = ns_menu_target;
        item.representedObject = action;

        // Quit convenience: wire terminate as well when action_id is "quit"
        if ([action isEqualToString:@"quit"]) {
            item.action = @selector(handleQuit:);
        }

        [top.submenu addItem:item];
        return 1;
    }
}

int ns_menu_enable_about(int enabled, const char *action_id)
{
    if (!ns_app_init()) {
        return 0;
    }
    if (!NSApp.mainMenu) {
        ns_menu_install_default("AppKit");
    }

    @autoreleasepool {
        if (!ns_menu_target) {
            ns_menu_target = [NSPhpMenuTarget new];
        }

        NSMenu *mainMenu = NSApp.mainMenu;
        if (!mainMenu || mainMenu.itemArray.count == 0) {
            return 0;
        }
        NSMenuItem *appMenuItem = mainMenu.itemArray[0];
        NSMenu *appMenu = appMenuItem.submenu;
        if (!appMenu) {
            return 0;
        }

        if (enabled == 0) {
            if (ns_about_item) {
                if ([appMenu.itemArray containsObject:ns_about_item]) {
                    [appMenu removeItem:ns_about_item];
                }
                ns_about_item = nil;
            }
            return 1;
        }

        const char *id_utf8 = (action_id && action_id[0]) ? action_id : "about";
        NSString *action = [NSString stringWithUTF8String:id_utf8];
        NSString *name = ns_menu_last_app_name ?: @"AppKit";
        NSString *title = [NSString stringWithFormat:@"About %@", name];

        BOOL reuse = ns_about_item && [appMenu.itemArray containsObject:ns_about_item];
        if (!reuse) {
            ns_about_item = [[NSMenuItem alloc] initWithTitle:title
                                                      action:@selector(handleCustomAction:)
                                               keyEquivalent:@""];
            [appMenu insertItem:ns_about_item atIndex:0];
        } else {
            ns_about_item.title = title;
            ns_about_item.action = @selector(handleCustomAction:);
        }

        ns_about_item.target = ns_menu_target;
        ns_about_item.representedObject = action;
        return 1;
    }
}

int ns_menu_poll_action(char *out_action, int out_action_len)
{
    if (!out_action || out_action_len <= 0) {
        return 0;
    }
    out_action[0] = '\0';

    if (!ns_pending_action) {
        return 0;
    }

    @autoreleasepool {
        BOOL ok = [ns_pending_action getCString:out_action
                                      maxLength:(NSUInteger)out_action_len
                                       encoding:NSUTF8StringEncoding];
        ns_pending_action = nil;
        return ok ? 1 : 0;
    }
}
