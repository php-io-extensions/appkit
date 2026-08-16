#import <AppKit/AppKit.h>
#import "ns-docktile.h"
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

static id ns_bridge_obj(uintptr_t handle)
{
    return handle ? (__bridge id)(void *)handle : nil;
}

static NSDockTile *ns_docktile_from(uintptr_t handle)
{
    id obj = ns_bridge_obj(handle);
    return [obj isKindOfClass:[NSDockTile class]] ? (NSDockTile *)obj : nil;
}

uintptr_t ns_docktile_application(void)
{
    @autoreleasepool {
        return ns_retain_obj([NSApp dockTile]);
    }
}

uintptr_t ns_docktile_wrap(void *dock_tile)
{
    if (!dock_tile) {
        return 0;
    }
    @autoreleasepool {
        NSDockTile *obj = (__bridge NSDockTile *)dock_tile;
        return [obj isKindOfClass:[NSDockTile class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_docktile_destroy(uintptr_t tile)
{
    ns_release_handle(tile);
}

void *ns_docktile_nsdocktile(uintptr_t tile)
{
    NSDockTile *obj = ns_docktile_from(tile);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_docktile_size(uintptr_t tile, double *width, double *height)
{
    @autoreleasepool {
        NSDockTile *obj = ns_docktile_from(tile);
        if (!obj) {
            if (width) {
                *width = 0.0;
            }
            if (height) {
                *height = 0.0;
            }
            return;
        }
        NSSize size = obj.size;
        if (width) {
            *width = (double)size.width;
        }
        if (height) {
            *height = (double)size.height;
        }
    }
}

void ns_docktile_set_content_view(uintptr_t tile, uintptr_t view)
{
    @autoreleasepool {
        NSDockTile *obj = ns_docktile_from(tile);
        if (!obj) {
            return;
        }
        void *native = ns_view_nsview(view);
        obj.contentView = native ? (__bridge NSView *)native : nil;
    }
}

uintptr_t ns_docktile_content_view(uintptr_t tile)
{
    @autoreleasepool {
        NSDockTile *obj = ns_docktile_from(tile);
        if (!obj || !obj.contentView) {
            return 0;
        }
        return ns_view_wrap((__bridge void *)obj.contentView);
    }
}

void ns_docktile_display(uintptr_t tile)
{
    @autoreleasepool {
        NSDockTile *obj = ns_docktile_from(tile);
        if (obj) {
            [obj display];
        }
    }
}

void ns_docktile_set_shows_application_badge(uintptr_t tile, int flag)
{
    @autoreleasepool {
        NSDockTile *obj = ns_docktile_from(tile);
        if (obj) {
            obj.showsApplicationBadge = flag ? YES : NO;
        }
    }
}

int ns_docktile_shows_application_badge(uintptr_t tile)
{
    @autoreleasepool {
        NSDockTile *obj = ns_docktile_from(tile);
        return obj && obj.showsApplicationBadge ? 1 : 0;
    }
}

void ns_docktile_set_badge_label(uintptr_t tile, const char *label)
{
    @autoreleasepool {
        NSDockTile *obj = ns_docktile_from(tile);
        if (!obj) {
            return;
        }
        obj.badgeLabel = label ? [NSString stringWithUTF8String:label] : nil;
    }
}

int ns_docktile_badge_label(uintptr_t tile, char *out, int out_len)
{
    @autoreleasepool {
        NSDockTile *obj = ns_docktile_from(tile);
        return ns_copy_nsstring(obj.badgeLabel, out, out_len);
    }
}

void *ns_docktile_owner(uintptr_t tile)
{
    @autoreleasepool {
        NSDockTile *obj = ns_docktile_from(tile);
        return obj && obj.owner ? (__bridge void *)obj.owner : NULL;
    }
}
