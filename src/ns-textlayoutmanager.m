#import <AppKit/AppKit.h>
#import "ns-textlayoutmanager.h"
#import "ns-textcontentmanager.h"
#import "ns-textcontainer.h"

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

static uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static void ns_release_handle(uintptr_t handle)
{
    if (handle) {
        CFRelease((void *)handle);
    }
}

static NSColor *ns_color_from_handle(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSColor class]] ? (NSColor *)obj : nil;
}

static NSTextLayoutManager *ns_textlayoutmanager_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextLayoutManager class]] ? (NSTextLayoutManager *)obj : nil;
}

uintptr_t ns_textlayoutmanager_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSTextLayoutManager alloc] init]);
    }
}

uintptr_t ns_textlayoutmanager_wrap(void *manager)
{
    if (!manager) {
        return 0;
    }
    @autoreleasepool {
        NSTextLayoutManager *obj = (__bridge NSTextLayoutManager *)manager;
        return [obj isKindOfClass:[NSTextLayoutManager class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textlayoutmanager_destroy(uintptr_t manager)
{
    ns_release_handle(manager);
}

void *ns_textlayoutmanager_nstextlayoutmanager(uintptr_t manager)
{
    NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_textlayoutmanager_uses_font_leading(uintptr_t manager)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        return obj && obj.usesFontLeading ? 1 : 0;
    }
}

void ns_textlayoutmanager_set_uses_font_leading(uintptr_t manager, int flag)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        if (obj) {
            obj.usesFontLeading = flag ? YES : NO;
        }
    }
}

int ns_textlayoutmanager_limits_layout_for_suspicious_contents(uintptr_t manager)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        return obj && obj.limitsLayoutForSuspiciousContents ? 1 : 0;
    }
}

void ns_textlayoutmanager_set_limits_layout_for_suspicious_contents(uintptr_t manager, int flag)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        if (obj) {
            obj.limitsLayoutForSuspiciousContents = flag ? YES : NO;
        }
    }
}

int ns_textlayoutmanager_uses_hyphenation(uintptr_t manager)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        return obj && obj.usesHyphenation ? 1 : 0;
    }
}

void ns_textlayoutmanager_set_uses_hyphenation(uintptr_t manager, int flag)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        if (obj) {
            obj.usesHyphenation = flag ? YES : NO;
        }
    }
}

void ns_textlayoutmanager_replace_text_content_manager(uintptr_t manager, uintptr_t content_manager)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        NSTextContentManager *cm = (__bridge NSTextContentManager *)ns_textcontentmanager_nstextcontentmanager(content_manager);
        if (obj && cm) {
            [obj replaceTextContentManager:cm];
        }
    }
}

void ns_textlayoutmanager_set_text_container(uintptr_t manager, uintptr_t container)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        NSTextContainer *tc = (__bridge NSTextContainer *)ns_textcontainer_nstextcontainer(container);
        if (obj) {
            obj.textContainer = tc;
        }
    }
}

uintptr_t ns_textlayoutmanager_get_text_container(uintptr_t manager)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        return obj && obj.textContainer ? ns_textcontainer_wrap((__bridge void *)obj.textContainer) : 0;
    }
}

void ns_textlayoutmanager_usage_bounds_for_text_container(uintptr_t manager, double *x, double *y, double *w, double *h)
{
    if (x) {
        *x = 0.0;
    }
    if (y) {
        *y = 0.0;
    }
    if (w) {
        *w = 0.0;
    }
    if (h) {
        *h = 0.0;
    }
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        if (!obj) {
            return;
        }
        CGRect bounds = obj.usageBoundsForTextContainer;
        if (x) {
            *x = (double)bounds.origin.x;
        }
        if (y) {
            *y = (double)bounds.origin.y;
        }
        if (w) {
            *w = (double)bounds.size.width;
        }
        if (h) {
            *h = (double)bounds.size.height;
        }
    }
}

uintptr_t ns_textlayoutmanager_text_viewport_layout_controller(uintptr_t manager)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        return obj && obj.textViewportLayoutController ? ns_retain_obj(obj.textViewportLayoutController) : 0;
    }
}

void ns_textlayoutmanager_ensure_layout_for_bounds(uintptr_t manager, double x, double y, double w, double h)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        if (obj) {
            [obj ensureLayoutForBounds:CGRectMake((CGFloat)x, (CGFloat)y, (CGFloat)w, (CGFloat)h)];
        }
    }
}

void ns_textlayoutmanager_invalidate_layout_for_range(uintptr_t manager, uintptr_t ns_text_range_ptr)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        NSTextRange *range = ns_text_range_ptr ? (__bridge NSTextRange *)(void *)ns_text_range_ptr : nil;
        if (obj && range) {
            [obj invalidateLayoutForRange:range];
        }
    }
}

uintptr_t ns_textlayoutmanager_text_layout_fragment_for_position(uintptr_t manager, double x, double y)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        if (!obj) {
            return 0;
        }
        NSTextLayoutFragment *fragment = [obj textLayoutFragmentForPosition:CGPointMake((CGFloat)x, (CGFloat)y)];
        return ns_retain_obj(fragment);
    }
}

int ns_textlayoutmanager_text_selections_count(uintptr_t manager)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        return obj ? (int)obj.textSelections.count : 0;
    }
}
