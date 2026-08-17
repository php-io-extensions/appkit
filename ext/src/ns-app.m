#import <AppKit/AppKit.h>
#import "ns-app.h"
#import "ns-event.h"
#import "ns-protocol.h"

static BOOL ns_app_ready = NO;
static BOOL ns_app_quit = NO;

@interface NSPhpAppDelegate : NSObject <NSApplicationDelegate>
@end

@implementation NSPhpAppDelegate
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(NSApplication *)sender
{
    (void)sender;
    ns_protocol_enqueue("NSApplicationDelegate", "applicationShouldTerminateAfterLastWindowClosed:", (uintptr_t)(__bridge void *)sender, 0, NULL);
    return NO;
}

- (NSApplicationTerminateReply)applicationShouldTerminate:(NSApplication *)sender
{
    (void)sender;
    ns_app_quit = YES;
    ns_protocol_enqueue("NSApplicationDelegate", "applicationShouldTerminate:", (uintptr_t)(__bridge void *)sender, 0, NULL);
    return NSTerminateCancel;
}

- (void)applicationDidFinishLaunching:(NSNotification *)notification
{
    ns_protocol_enqueue("NSApplicationDelegate", "applicationDidFinishLaunching:", (uintptr_t)(__bridge void *)notification.object, 0, NULL);
}

- (void)applicationDidBecomeActive:(NSNotification *)notification
{
    ns_protocol_enqueue("NSApplicationDelegate", "applicationDidBecomeActive:", (uintptr_t)(__bridge void *)notification.object, 0, NULL);
}

- (void)applicationDidResignActive:(NSNotification *)notification
{
    ns_protocol_enqueue("NSApplicationDelegate", "applicationDidResignActive:", (uintptr_t)(__bridge void *)notification.object, 0, NULL);
}
@end

static NSPhpAppDelegate *ns_app_delegate = nil;

int ns_app_init(void)
{
    if (ns_app_ready) {
        return 1;
    }

    @autoreleasepool {
        [NSApplication sharedApplication];
        [NSApp setActivationPolicy:NSApplicationActivationPolicyRegular];

        ns_app_delegate = [NSPhpAppDelegate new];
        [NSApp setDelegate:ns_app_delegate];

        [NSApp finishLaunching];
        ns_app_ready = YES;
        ns_app_quit = NO;
    }

    return 1;
}

void *ns_app_shared(void)
{
    if (!ns_app_ready) {
        return NULL;
    }
    return (__bridge void *)NSApp;
}

static void ns_app_send_event(NSEvent *event)
{
    if (event == nil) {
        return;
    }
    ns_event_handle_event((__bridge void *)event);
    [NSApp sendEvent:event];
}

int ns_app_poll(void)
{
    if (!ns_app_ready) {
        return 0;
    }

    ns_event_begin_frame();

    @autoreleasepool {
        NSEvent *event;
        BOOL hadEvents = NO;
        while ((event = [NSApp nextEventMatchingMask:NSEventMaskAny
                                           untilDate:[NSDate distantPast]
                                              inMode:NSDefaultRunLoopMode
                                             dequeue:YES])) {
            hadEvents = YES;
            ns_app_send_event(event);
        }
        [NSApp updateWindows];

        if (!hadEvents) {
            event = [NSApp nextEventMatchingMask:NSEventMaskAny
                                         untilDate:[NSDate distantFuture]
                                            inMode:NSDefaultRunLoopMode
                                           dequeue:YES];
            if (event != nil) {
                ns_app_send_event(event);
                [NSApp updateWindows];
            }
        }
    }

    return ns_app_quit ? 0 : 1;
}

void ns_app_run(void)
{
    if (!ns_app_ready) {
        ns_app_init();
    }
    [NSApp run];
}

void ns_app_terminate(void)
{
    ns_app_quit = YES;
    if (ns_app_ready) {
        [NSApp stop:nil];
        // Nudge the run loop so stop is noticed if someone called run().
        NSEvent *event = [NSEvent otherEventWithType:NSEventTypeApplicationDefined
                                            location:NSMakePoint(0, 0)
                                       modifierFlags:0
                                           timestamp:0
                                        windowNumber:0
                                             context:nil
                                             subtype:0
                                               data1:0
                                               data2:0];
        [NSApp postEvent:event atStart:YES];
    }
}

int ns_app_should_quit(void)
{
    return ns_app_quit ? 1 : 0;
}

void ns_app_reset_quit(void)
{
    ns_app_quit = NO;
}

void *ns_app_nsapp(void)
{
    return (__bridge void *)NSApp;
}

double ns_app_kit_version_number(void)
{
    return (double)NSAppKitVersionNumber;
}
