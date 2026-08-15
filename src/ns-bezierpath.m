#import <AppKit/AppKit.h>
#import "ns-bezierpath.h"

static uintptr_t ns_bezierpath_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSBezierPath *ns_bezierpath_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSBezierPath class]] ? (NSBezierPath *)obj : nil;
}

uintptr_t ns_bezierpath_create(void)
{
    @autoreleasepool {
        return ns_bezierpath_retain_obj([NSBezierPath bezierPath]);
    }
}

uintptr_t ns_bezierpath_with_rect(double x, double y, double width, double height)
{
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        return ns_bezierpath_retain_obj([NSBezierPath bezierPathWithRect:rect]);
    }
}

uintptr_t ns_bezierpath_with_oval_in_rect(double x, double y, double width, double height)
{
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        return ns_bezierpath_retain_obj([NSBezierPath bezierPathWithOvalInRect:rect]);
    }
}

uintptr_t ns_bezierpath_with_rounded_rect(double x, double y, double width, double height, double xRadius, double yRadius)
{
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        return ns_bezierpath_retain_obj([NSBezierPath bezierPathWithRoundedRect:rect
                                                                         xRadius:(CGFloat)xRadius
                                                                         yRadius:(CGFloat)yRadius]);
    }
}

uintptr_t ns_bezierpath_wrap(void *path)
{
    if (!path) {
        return 0;
    }
    @autoreleasepool {
        NSBezierPath *obj = (__bridge NSBezierPath *)path;
        return [obj isKindOfClass:[NSBezierPath class]] ? ns_bezierpath_retain_obj(obj) : 0;
    }
}

void ns_bezierpath_destroy(uintptr_t path)
{
    if (!path) {
        return;
    }
    CFRelease((void *)path);
}

void *ns_bezierpath_nsbezierpath(uintptr_t path)
{
    NSBezierPath *obj = ns_bezierpath_from(path);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_bezierpath_move_to_point(uintptr_t path, double x, double y)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        if (obj) {
            [obj moveToPoint:NSMakePoint((CGFloat)x, (CGFloat)y)];
        }
    }
}

void ns_bezierpath_line_to_point(uintptr_t path, double x, double y)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        if (obj) {
            [obj lineToPoint:NSMakePoint((CGFloat)x, (CGFloat)y)];
        }
    }
}

void ns_bezierpath_curve_to_point(uintptr_t path, double endX, double endY, double cp1X, double cp1Y, double cp2X, double cp2Y)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        if (obj) {
            [obj curveToPoint:NSMakePoint((CGFloat)endX, (CGFloat)endY)
                controlPoint1:NSMakePoint((CGFloat)cp1X, (CGFloat)cp1Y)
                controlPoint2:NSMakePoint((CGFloat)cp2X, (CGFloat)cp2Y)];
        }
    }
}

void ns_bezierpath_close_path(uintptr_t path)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        if (obj) {
            [obj closePath];
        }
    }
}

void ns_bezierpath_remove_all_points(uintptr_t path)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        if (obj) {
            [obj removeAllPoints];
        }
    }
}

void ns_bezierpath_append_path(uintptr_t path, uintptr_t other)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        NSBezierPath *otherObj = ns_bezierpath_from(other);
        if (obj && otherObj) {
            [obj appendBezierPath:otherObj];
        }
    }
}

void ns_bezierpath_append_rect(uintptr_t path, double x, double y, double width, double height)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        if (obj) {
            [obj appendBezierPathWithRect:NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height)];
        }
    }
}

void ns_bezierpath_append_oval_in_rect(uintptr_t path, double x, double y, double width, double height)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        if (obj) {
            [obj appendBezierPathWithOvalInRect:NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height)];
        }
    }
}

void ns_bezierpath_set_line_width(uintptr_t path, double width)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        if (obj) {
            obj.lineWidth = (CGFloat)width;
        }
    }
}

double ns_bezierpath_get_line_width(uintptr_t path)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        return obj ? (double)obj.lineWidth : 0.0;
    }
}

void ns_bezierpath_set_line_cap(uintptr_t path, int style)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        if (obj) {
            obj.lineCapStyle = (NSLineCapStyle)style;
        }
    }
}

int ns_bezierpath_get_line_cap(uintptr_t path)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        return obj ? (int)obj.lineCapStyle : 0;
    }
}

void ns_bezierpath_set_line_join(uintptr_t path, int style)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        if (obj) {
            obj.lineJoinStyle = (NSLineJoinStyle)style;
        }
    }
}

int ns_bezierpath_get_line_join(uintptr_t path)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        return obj ? (int)obj.lineJoinStyle : 0;
    }
}

void ns_bezierpath_set_winding_rule(uintptr_t path, int rule)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        if (obj) {
            obj.windingRule = (NSWindingRule)rule;
        }
    }
}

int ns_bezierpath_get_winding_rule(uintptr_t path)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        return obj ? (int)obj.windingRule : 0;
    }
}

void ns_bezierpath_set_miter_limit(uintptr_t path, double limit)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        if (obj) {
            obj.miterLimit = (CGFloat)limit;
        }
    }
}

double ns_bezierpath_get_miter_limit(uintptr_t path)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        return obj ? (double)obj.miterLimit : 0.0;
    }
}

void ns_bezierpath_set_flatness(uintptr_t path, double flatness)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        if (obj) {
            obj.flatness = (CGFloat)flatness;
        }
    }
}

double ns_bezierpath_get_flatness(uintptr_t path)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        return obj ? (double)obj.flatness : 0.0;
    }
}

void ns_bezierpath_stroke(uintptr_t path)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        if (obj) {
            [obj stroke];
        }
    }
}

void ns_bezierpath_fill(uintptr_t path)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        if (obj) {
            [obj fill];
        }
    }
}

void ns_bezierpath_add_clip(uintptr_t path)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        if (obj) {
            [obj addClip];
        }
    }
}

void ns_bezierpath_set_clip(uintptr_t path)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        if (obj) {
            [obj setClip];
        }
    }
}

int ns_bezierpath_contains_point(uintptr_t path, double x, double y)
{
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        return obj && [obj containsPoint:NSMakePoint((CGFloat)x, (CGFloat)y)] ? 1 : 0;
    }
}

int ns_bezierpath_get_bounds(uintptr_t path, double *x, double *y, double *width, double *height)
{
    if (!x || !y || !width || !height) {
        return 0;
    }
    @autoreleasepool {
        NSBezierPath *obj = ns_bezierpath_from(path);
        if (!obj) {
            return 0;
        }
        NSRect bounds = obj.bounds;
        *x = (double)bounds.origin.x;
        *y = (double)bounds.origin.y;
        *width = (double)bounds.size.width;
        *height = (double)bounds.size.height;
        return 1;
    }
}

void ns_bezierpath_fill_rect(double x, double y, double width, double height)
{
    @autoreleasepool {
        [NSBezierPath fillRect:NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height)];
    }
}

void ns_bezierpath_stroke_rect(double x, double y, double width, double height)
{
    @autoreleasepool {
        [NSBezierPath strokeRect:NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height)];
    }
}

void ns_bezierpath_clip_rect(double x, double y, double width, double height)
{
    @autoreleasepool {
        [NSBezierPath clipRect:NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height)];
    }
}

void ns_bezierpath_stroke_line_from_point(double x1, double y1, double x2, double y2)
{
    @autoreleasepool {
        [NSBezierPath strokeLineFromPoint:NSMakePoint((CGFloat)x1, (CGFloat)y1)
                                  toPoint:NSMakePoint((CGFloat)x2, (CGFloat)y2)];
    }
}
