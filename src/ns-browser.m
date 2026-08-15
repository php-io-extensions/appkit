#import <AppKit/AppKit.h>
#import "ns-browser.h"
#import "ns-view.h"

static int ns_copy_nsstring(NSString *text, char *out, int out_len)
{
    if (!out || out_len <= 0) {
        return 0;
    }
    if (!text) {
        out[0] = '\0';
        return 1;
    }
    return [text getCString:out maxLength:(NSUInteger)out_len encoding:NSUTF8StringEncoding] ? 1 : 0;
}


static NSBrowser *ns_browser_view(uintptr_t handle)
{
    void *ptr = ns_view_nsview(handle);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSBrowser class]] ? (NSBrowser *)view : nil;
}


uintptr_t ns_browser_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 320;
    }
    if (height <= 0) {
        height = 200;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSBrowser *obj = [[NSBrowser alloc] initWithFrame:rect];
        obj.maxVisibleColumns = 3;
        return ns_view_wrap((__bridge void *)obj);
    }
}

void ns_browser_destroy(uintptr_t handle)
{
    ns_view_destroy(handle);
}


void ns_browser_set_path(uintptr_t browser, const char *path)
{
    @autoreleasepool {
        NSBrowser *obj = ns_browser_view(browser);
        if (obj) {
            [obj setPath:path ? [NSString stringWithUTF8String:path] : @"/"];
        }
    }
}

int ns_browser_get_path(uintptr_t browser, char *out, int out_len)
{
    @autoreleasepool {
        NSBrowser *obj = ns_browser_view(browser);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.path, out, out_len);
    }
}

void ns_browser_set_max_visible_columns(uintptr_t browser, int count)
{
    @autoreleasepool {
        NSBrowser *obj = ns_browser_view(browser);
        if (obj) {
            obj.maxVisibleColumns = count < 1 ? 1 : (NSInteger)count;
        }
    }
}

int ns_browser_get_max_visible_columns(uintptr_t browser)
{
    @autoreleasepool {
        NSBrowser *obj = ns_browser_view(browser);
        return obj ? (int)obj.maxVisibleColumns : 0;
    }
}

int ns_browser_last_column(uintptr_t browser)
{
    @autoreleasepool {
        NSBrowser *obj = ns_browser_view(browser);
        return obj ? (int)obj.lastColumn : -1;
    }
}

void ns_browser_reload_column(uintptr_t browser, int column)
{
    @autoreleasepool {
        NSBrowser *obj = ns_browser_view(browser);
        if (obj) {
            [obj reloadColumn:column];
        }
    }
}

void ns_browser_set_takes_title_from_previous_column(uintptr_t browser, int flag)
{
    @autoreleasepool {
        NSBrowser *obj = ns_browser_view(browser);
        if (obj) {
            obj.takesTitleFromPreviousColumn = flag ? YES : NO;
        }
    }
}

int ns_browser_takes_title_from_previous_column(uintptr_t browser)
{
    @autoreleasepool {
        NSBrowser *obj = ns_browser_view(browser);
        return obj && obj.takesTitleFromPreviousColumn ? 1 : 0;
    }
}

int ns_browser_selected_row_in_column(uintptr_t browser, int column)
{
    @autoreleasepool {
        NSBrowser *obj = ns_browser_view(browser);
        return obj ? (int)[obj selectedRowInColumn:column] : -1;
    }
}

void ns_browser_select_row_in_column(uintptr_t browser, int row, int column)
{
    @autoreleasepool {
        NSBrowser *obj = ns_browser_view(browser);
        if (obj) {
            [obj selectRow:row inColumn:column];
        }
    }
}
