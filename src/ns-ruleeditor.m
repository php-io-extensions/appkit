#import <AppKit/AppKit.h>
#import "ns-ruleeditor.h"
#import "ns-view.h"

static NSRuleEditor *ns_ruleeditor_view(uintptr_t handle)
{
    void *ptr = ns_view_nsview(handle);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSRuleEditor class]] ? (NSRuleEditor *)view : nil;
}


uintptr_t ns_ruleeditor_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 400;
    }
    if (height <= 0) {
        height = 180;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSRuleEditor *obj = [[NSRuleEditor alloc] initWithFrame:rect];
        
        return ns_view_wrap((__bridge void *)obj);
    }
}

void ns_ruleeditor_destroy(uintptr_t handle)
{
    ns_view_destroy(handle);
}


void ns_ruleeditor_set_editable(uintptr_t editor, int flag)
{
    @autoreleasepool {
        NSRuleEditor *obj = ns_ruleeditor_view(editor);
        if (obj) {
            obj.editable = flag ? YES : NO;
        }
    }
}

int ns_ruleeditor_is_editable(uintptr_t editor)
{
    @autoreleasepool {
        NSRuleEditor *obj = ns_ruleeditor_view(editor);
        return obj && obj.editable ? 1 : 0;
    }
}

int ns_ruleeditor_number_of_rows(uintptr_t editor)
{
    @autoreleasepool {
        NSRuleEditor *obj = ns_ruleeditor_view(editor);
        return obj ? (int)obj.numberOfRows : 0;
    }
}

void ns_ruleeditor_add_row(uintptr_t editor)
{
    @autoreleasepool {
        NSRuleEditor *obj = ns_ruleeditor_view(editor);
        if (obj) {
            [obj addRow:nil];
        }
    }
}

void ns_ruleeditor_remove_row_at(uintptr_t editor, int index)
{
    @autoreleasepool {
        NSRuleEditor *obj = ns_ruleeditor_view(editor);
        if (obj && index >= 0 && index < obj.numberOfRows) {
            [obj removeRowAtIndex:(NSInteger)index];
        }
    }
}

void ns_ruleeditor_set_nesting_mode(uintptr_t editor, int mode)
{
    @autoreleasepool {
        NSRuleEditor *obj = ns_ruleeditor_view(editor);
        if (obj) {
            obj.nestingMode = (NSRuleEditorNestingMode)mode;
        }
    }
}

int ns_ruleeditor_get_nesting_mode(uintptr_t editor)
{
    @autoreleasepool {
        NSRuleEditor *obj = ns_ruleeditor_view(editor);
        return obj ? (int)obj.nestingMode : 0;
    }
}

void ns_ruleeditor_set_can_remove_all_rows(uintptr_t editor, int flag)
{
    @autoreleasepool {
        NSRuleEditor *obj = ns_ruleeditor_view(editor);
        if (obj) {
            obj.canRemoveAllRows = flag ? YES : NO;
        }
    }
}

int ns_ruleeditor_can_remove_all_rows(uintptr_t editor)
{
    @autoreleasepool {
        NSRuleEditor *obj = ns_ruleeditor_view(editor);
        return obj && obj.canRemoveAllRows ? 1 : 0;
    }
}
