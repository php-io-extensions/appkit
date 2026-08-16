#import <AppKit/AppKit.h>
#import "ns-draggingitem.h"

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

static NSDraggingItem *ns_draggingitem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSDraggingItem class]] ? (NSDraggingItem *)obj : nil;
}

uintptr_t ns_draggingitem_create_with_string(const char *string)
{
    @autoreleasepool {
        if (!string) {
            return 0;
        }
        NSString *text = [NSString stringWithUTF8String:string];
        NSDraggingItem *item = [[NSDraggingItem alloc] initWithPasteboardWriter:text];
        return item ? ns_retain_obj(item) : 0;
    }
}

uintptr_t ns_draggingitem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSDraggingItem *obj = (__bridge NSDraggingItem *)item;
        return [obj isKindOfClass:[NSDraggingItem class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_draggingitem_destroy(uintptr_t item)
{
    ns_release_handle(item);
}

void *ns_draggingitem_nsdraggingitem(uintptr_t item)
{
    NSDraggingItem *obj = ns_draggingitem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

void *ns_draggingitem_item(uintptr_t item)
{
    NSDraggingItem *obj = ns_draggingitem_from(item);
    return obj && obj.item ? (__bridge void *)obj.item : NULL;
}

void ns_draggingitem_get_dragging_frame(uintptr_t item, double *x, double *y, double *w, double *h)
{
    @autoreleasepool {
        NSDraggingItem *obj = ns_draggingitem_from(item);
        if (!obj) {
            if (x) {
                *x = 0;
            }
            if (y) {
                *y = 0;
            }
            if (w) {
                *w = 0;
            }
            if (h) {
                *h = 0;
            }
            return;
        }
        NSRect frame = obj.draggingFrame;
        if (x) {
            *x = (double)frame.origin.x;
        }
        if (y) {
            *y = (double)frame.origin.y;
        }
        if (w) {
            *w = (double)frame.size.width;
        }
        if (h) {
            *h = (double)frame.size.height;
        }
    }
}

void ns_draggingitem_set_dragging_frame(uintptr_t item, double x, double y, double w, double h)
{
    @autoreleasepool {
        NSDraggingItem *obj = ns_draggingitem_from(item);
        if (obj) {
            obj.draggingFrame = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)w, (CGFloat)h);
        }
    }
}

void ns_draggingitem_set_dragging_frame_contents(uintptr_t item, double x, double y, double w, double h, void *contents)
{
    @autoreleasepool {
        NSDraggingItem *obj = ns_draggingitem_from(item);
        if (!obj) {
            return;
        }
        id contentObj = contents ? (__bridge id)contents : nil;
        [obj setDraggingFrame:NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)w, (CGFloat)h) contents:contentObj];
    }
}

int ns_draggingitem_image_components_count(uintptr_t item)
{
    @autoreleasepool {
        NSDraggingItem *obj = ns_draggingitem_from(item);
        return obj && obj.imageComponents ? (int)obj.imageComponents.count : 0;
    }
}
