#import <AppKit/AppKit.h>
#import "ns-form.h"
#import "ns-formcell.h"
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


static NSForm *ns_form_view(uintptr_t handle)
{
    void *ptr = ns_view_nsview(handle);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSForm class]] ? (NSForm *)view : nil;
}


uintptr_t ns_form_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 160;
    }
    if (height <= 0) {
        height = 80;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSForm *obj = [[NSForm alloc] initWithFrame:rect];
        
        return ns_view_wrap((__bridge void *)obj);
    }
}

void ns_form_destroy(uintptr_t handle)
{
    ns_view_destroy(handle);
}


int ns_form_add_entry(uintptr_t form, const char *title)
{
    @autoreleasepool {
        NSForm *obj = ns_form_view(form);
        if (!obj) {
            return -1;
        }
        NSString *label = title ? [NSString stringWithUTF8String:title] : @"";
        [obj addEntry:label];
        return (int)obj.numberOfRows - 1;
    }
}

void ns_form_set_title_at(uintptr_t form, int index, const char *title)
{
    @autoreleasepool {
        NSForm *obj = ns_form_view(form);
        if (!obj || index < 0 || index >= obj.numberOfRows) {
            return;
        }
        [[obj cellAtIndex:index] setTitle:title ? [NSString stringWithUTF8String:title] : @""];
    }
}

int ns_form_get_title_at(uintptr_t form, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSForm *obj = ns_form_view(form);
        if (!obj || index < 0 || index >= obj.numberOfRows) {
            return 0;
        }
        return ns_copy_nsstring([[obj cellAtIndex:index] title], out, out_len);
    }
}

void ns_form_set_value_at(uintptr_t form, int index, const char *value)
{
    @autoreleasepool {
        NSForm *obj = ns_form_view(form);
        if (!obj || index < 0 || index >= obj.numberOfRows) {
            return;
        }
        [[obj cellAtIndex:index] setStringValue:value ? [NSString stringWithUTF8String:value] : @""];
    }
}

int ns_form_get_value_at(uintptr_t form, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSForm *obj = ns_form_view(form);
        if (!obj || index < 0 || index >= obj.numberOfRows) {
            return 0;
        }
        return ns_copy_nsstring([[obj cellAtIndex:index] stringValue], out, out_len);
    }
}

int ns_form_number_of_rows(uintptr_t form)
{
    @autoreleasepool {
        NSForm *obj = ns_form_view(form);
        return obj ? (int)obj.numberOfRows : 0;
    }
}

uintptr_t ns_form_cell_at(uintptr_t form, int index)
{
    @autoreleasepool {
        NSForm *obj = ns_form_view(form);
        if (!obj || index < 0 || index >= obj.numberOfRows) {
            return 0;
        }
        NSCell *cell = [obj cellAtIndex:index];
        return ns_formcell_wrap((__bridge void *)cell);
    }
}
