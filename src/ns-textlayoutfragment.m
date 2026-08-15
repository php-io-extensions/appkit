#import <AppKit/AppKit.h>
#import "ns-textlayoutfragment.h"

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

static NSTextLayoutFragment *ns_textlayoutfragment_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextLayoutFragment class]] ? (NSTextLayoutFragment *)obj : nil;
}

static void ns_copy_cgrect(CGRect rect, double *x, double *y, double *w, double *h)
{
    if (x) {
        *x = (double)rect.origin.x;
    }
    if (y) {
        *y = (double)rect.origin.y;
    }
    if (w) {
        *w = (double)rect.size.width;
    }
    if (h) {
        *h = (double)rect.size.height;
    }
}

uintptr_t ns_textlayoutfragment_wrap(void *fragment)
{
    if (!fragment) {
        return 0;
    }
    @autoreleasepool {
        NSTextLayoutFragment *obj = (__bridge NSTextLayoutFragment *)fragment;
        return [obj isKindOfClass:[NSTextLayoutFragment class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textlayoutfragment_destroy(uintptr_t fragment)
{
    ns_release_handle(fragment);
}

void *ns_textlayoutfragment_nstextlayoutfragment(uintptr_t fragment)
{
    NSTextLayoutFragment *obj = ns_textlayoutfragment_from(fragment);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_textlayoutfragment_get_state(uintptr_t fragment)
{
    @autoreleasepool {
        NSTextLayoutFragment *obj = ns_textlayoutfragment_from(fragment);
        return obj ? (int)obj.state : 0;
    }
}

void ns_textlayoutfragment_layout_fragment_frame(uintptr_t fragment, double *x, double *y, double *w, double *h)
{
    @autoreleasepool {
        NSTextLayoutFragment *obj = ns_textlayoutfragment_from(fragment);
        ns_copy_cgrect(obj ? obj.layoutFragmentFrame : CGRectZero, x, y, w, h);
    }
}

void ns_textlayoutfragment_rendering_surface_bounds(uintptr_t fragment, double *x, double *y, double *w, double *h)
{
    @autoreleasepool {
        NSTextLayoutFragment *obj = ns_textlayoutfragment_from(fragment);
        ns_copy_cgrect(obj ? obj.renderingSurfaceBounds : CGRectZero, x, y, w, h);
    }
}

int ns_textlayoutfragment_text_line_fragments_count(uintptr_t fragment)
{
    @autoreleasepool {
        NSTextLayoutFragment *obj = ns_textlayoutfragment_from(fragment);
        return obj ? (int)obj.textLineFragments.count : 0;
    }
}

void ns_textlayoutfragment_invalidate_layout(uintptr_t fragment)
{
    @autoreleasepool {
        NSTextLayoutFragment *obj = ns_textlayoutfragment_from(fragment);
        if (obj) {
            [obj invalidateLayout];
        }
    }
}

double ns_textlayoutfragment_leading_padding(uintptr_t fragment)
{
    @autoreleasepool {
        NSTextLayoutFragment *obj = ns_textlayoutfragment_from(fragment);
        return obj ? (double)obj.leadingPadding : 0.0;
    }
}

double ns_textlayoutfragment_trailing_padding(uintptr_t fragment)
{
    @autoreleasepool {
        NSTextLayoutFragment *obj = ns_textlayoutfragment_from(fragment);
        return obj ? (double)obj.trailingPadding : 0.0;
    }
}

double ns_textlayoutfragment_top_margin(uintptr_t fragment)
{
    @autoreleasepool {
        NSTextLayoutFragment *obj = ns_textlayoutfragment_from(fragment);
        return obj ? (double)obj.topMargin : 0.0;
    }
}

double ns_textlayoutfragment_bottom_margin(uintptr_t fragment)
{
    @autoreleasepool {
        NSTextLayoutFragment *obj = ns_textlayoutfragment_from(fragment);
        return obj ? (double)obj.bottomMargin : 0.0;
    }
}
