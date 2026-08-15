#import <AppKit/AppKit.h>
#import "ns-textcontainer.h"
#import "ns-layoutmanager.h"

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

static NSTextContainer *ns_textcontainer_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextContainer class]] ? (NSTextContainer *)obj : nil;
}

uintptr_t ns_textcontainer_create(double width, double height)
{
    @autoreleasepool {
        NSTextContainer *container = [[NSTextContainer alloc] initWithSize:NSMakeSize((CGFloat)width, (CGFloat)height)];
        return ns_retain_obj(container);
    }
}

uintptr_t ns_textcontainer_wrap(void *container)
{
    if (!container) {
        return 0;
    }
    @autoreleasepool {
        NSTextContainer *obj = (__bridge NSTextContainer *)container;
        return [obj isKindOfClass:[NSTextContainer class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textcontainer_destroy(uintptr_t container)
{
    ns_release_handle(container);
}

void *ns_textcontainer_nstextcontainer(uintptr_t container)
{
    NSTextContainer *obj = ns_textcontainer_from(container);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_textcontainer_set_size(uintptr_t container, double width, double height)
{
    @autoreleasepool {
        NSTextContainer *obj = ns_textcontainer_from(container);
        if (obj) {
            obj.size = NSMakeSize((CGFloat)width, (CGFloat)height);
        }
    }
}

void ns_textcontainer_get_size(uintptr_t container, double *width, double *height)
{
    if (width) {
        *width = 0;
    }
    if (height) {
        *height = 0;
    }
    @autoreleasepool {
        NSTextContainer *obj = ns_textcontainer_from(container);
        if (!obj) {
            return;
        }
        if (width) {
            *width = obj.size.width;
        }
        if (height) {
            *height = obj.size.height;
        }
    }
}

void ns_textcontainer_set_line_break_mode(uintptr_t container, int mode)
{
    @autoreleasepool {
        NSTextContainer *obj = ns_textcontainer_from(container);
        if (obj) {
            obj.lineBreakMode = (NSLineBreakMode)mode;
        }
    }
}

int ns_textcontainer_get_line_break_mode(uintptr_t container)
{
    @autoreleasepool {
        NSTextContainer *obj = ns_textcontainer_from(container);
        return obj ? (int)obj.lineBreakMode : 0;
    }
}

void ns_textcontainer_set_line_fragment_padding(uintptr_t container, double padding)
{
    @autoreleasepool {
        NSTextContainer *obj = ns_textcontainer_from(container);
        if (obj) {
            obj.lineFragmentPadding = (CGFloat)padding;
        }
    }
}

double ns_textcontainer_get_line_fragment_padding(uintptr_t container)
{
    @autoreleasepool {
        NSTextContainer *obj = ns_textcontainer_from(container);
        return obj ? obj.lineFragmentPadding : 0.0;
    }
}

void ns_textcontainer_set_maximum_number_of_lines(uintptr_t container, int lines)
{
    @autoreleasepool {
        NSTextContainer *obj = ns_textcontainer_from(container);
        if (obj) {
            obj.maximumNumberOfLines = (NSUInteger)lines;
        }
    }
}

int ns_textcontainer_get_maximum_number_of_lines(uintptr_t container)
{
    @autoreleasepool {
        NSTextContainer *obj = ns_textcontainer_from(container);
        return obj ? (int)obj.maximumNumberOfLines : 0;
    }
}

void ns_textcontainer_set_width_tracks_text_view(uintptr_t container, int flag)
{
    @autoreleasepool {
        NSTextContainer *obj = ns_textcontainer_from(container);
        if (obj) {
            obj.widthTracksTextView = flag ? YES : NO;
        }
    }
}

int ns_textcontainer_width_tracks_text_view(uintptr_t container)
{
    @autoreleasepool {
        NSTextContainer *obj = ns_textcontainer_from(container);
        return obj && obj.widthTracksTextView ? 1 : 0;
    }
}

void ns_textcontainer_set_height_tracks_text_view(uintptr_t container, int flag)
{
    @autoreleasepool {
        NSTextContainer *obj = ns_textcontainer_from(container);
        if (obj) {
            obj.heightTracksTextView = flag ? YES : NO;
        }
    }
}

int ns_textcontainer_height_tracks_text_view(uintptr_t container)
{
    @autoreleasepool {
        NSTextContainer *obj = ns_textcontainer_from(container);
        return obj && obj.heightTracksTextView ? 1 : 0;
    }
}

int ns_textcontainer_is_simple_rectangular(uintptr_t container)
{
    @autoreleasepool {
        NSTextContainer *obj = ns_textcontainer_from(container);
        return obj && obj.simpleRectangularTextContainer ? 1 : 0;
    }
}

void ns_textcontainer_replace_layout_manager(uintptr_t container, uintptr_t layout_manager)
{
    @autoreleasepool {
        NSTextContainer *obj = ns_textcontainer_from(container);
        NSLayoutManager *lm = (__bridge NSLayoutManager *)ns_layoutmanager_nslayoutmanager(layout_manager);
        if (obj && lm) {
            [obj replaceLayoutManager:lm];
        }
    }
}
