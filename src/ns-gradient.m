#import <AppKit/AppKit.h>
#import "ns-gradient.h"
#import "ns-color.h"
#import "ns-bezierpath.h"

static uintptr_t ns_gradient_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSGradient *ns_gradient_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSGradient class]] ? (NSGradient *)obj : nil;
}

static NSColor *ns_gradient_color_from_handle(uintptr_t handle)
{
    return (__bridge NSColor *)ns_color_nscolor(handle);
}

uintptr_t ns_gradient_with_starting_color(uintptr_t startingColor, uintptr_t endingColor)
{
    @autoreleasepool {
        NSColor *start = ns_gradient_color_from_handle(startingColor);
        NSColor *end = ns_gradient_color_from_handle(endingColor);
        if (!start || !end) {
            return 0;
        }
        NSGradient *gradient = [[NSGradient alloc] initWithStartingColor:start endingColor:end];
        return ns_gradient_retain_obj(gradient);
    }
}

uintptr_t ns_gradient_with_colors(const uintptr_t *colors, int count)
{
    if (!colors || count <= 0) {
        return 0;
    }
    @autoreleasepool {
        NSMutableArray<NSColor *> *array = [NSMutableArray arrayWithCapacity:(NSUInteger)count];
        for (int i = 0; i < count; i++) {
            NSColor *color = ns_gradient_color_from_handle(colors[i]);
            if (!color) {
                return 0;
            }
            [array addObject:color];
        }
        NSGradient *gradient = [[NSGradient alloc] initWithColors:array];
        return ns_gradient_retain_obj(gradient);
    }
}

uintptr_t ns_gradient_wrap(void *gradient)
{
    if (!gradient) {
        return 0;
    }
    @autoreleasepool {
        NSGradient *obj = (__bridge NSGradient *)gradient;
        return [obj isKindOfClass:[NSGradient class]] ? ns_gradient_retain_obj(obj) : 0;
    }
}

void ns_gradient_destroy(uintptr_t gradient)
{
    if (!gradient) {
        return;
    }
    CFRelease((void *)gradient);
}

void *ns_gradient_nsgradient(uintptr_t gradient)
{
    NSGradient *obj = ns_gradient_from(gradient);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_gradient_draw_from_point(uintptr_t gradient, double startX, double startY, double endX, double endY, int options)
{
    @autoreleasepool {
        NSGradient *obj = ns_gradient_from(gradient);
        if (obj) {
            [obj drawFromPoint:NSMakePoint((CGFloat)startX, (CGFloat)startY)
                       toPoint:NSMakePoint((CGFloat)endX, (CGFloat)endY)
                       options:(NSGradientDrawingOptions)options];
        }
    }
}

void ns_gradient_draw_in_rect_angle(uintptr_t gradient, double x, double y, double width, double height, double angle)
{
    @autoreleasepool {
        NSGradient *obj = ns_gradient_from(gradient);
        if (obj) {
            [obj drawInRect:NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height) angle:(CGFloat)angle];
        }
    }
}

void ns_gradient_draw_in_bezier_path_angle(uintptr_t gradient, uintptr_t path, double angle)
{
    @autoreleasepool {
        NSGradient *obj = ns_gradient_from(gradient);
        NSBezierPath *bezier = (__bridge NSBezierPath *)ns_bezierpath_nsbezierpath(path);
        if (obj && bezier) {
            [obj drawInBezierPath:bezier angle:(CGFloat)angle];
        }
    }
}

void ns_gradient_draw_from_center(uintptr_t gradient, double startCenterX, double startCenterY, double startRadius, double endCenterX, double endCenterY, double endRadius, int options)
{
    @autoreleasepool {
        NSGradient *obj = ns_gradient_from(gradient);
        if (obj) {
            [obj drawFromCenter:NSMakePoint((CGFloat)startCenterX, (CGFloat)startCenterY)
                         radius:(CGFloat)startRadius
                       toCenter:NSMakePoint((CGFloat)endCenterX, (CGFloat)endCenterY)
                         radius:(CGFloat)endRadius
                        options:(NSGradientDrawingOptions)options];
        }
    }
}

void ns_gradient_draw_in_rect_relative_center(uintptr_t gradient, double x, double y, double width, double height, double relCenterX, double relCenterY)
{
    @autoreleasepool {
        NSGradient *obj = ns_gradient_from(gradient);
        if (obj) {
            [obj drawInRect:NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height)
      relativeCenterPosition:NSMakePoint((CGFloat)relCenterX, (CGFloat)relCenterY)];
        }
    }
}

void ns_gradient_draw_in_bezier_path_relative_center(uintptr_t gradient, uintptr_t path, double relCenterX, double relCenterY)
{
    @autoreleasepool {
        NSGradient *obj = ns_gradient_from(gradient);
        NSBezierPath *bezier = (__bridge NSBezierPath *)ns_bezierpath_nsbezierpath(path);
        if (obj && bezier) {
            [obj drawInBezierPath:bezier relativeCenterPosition:NSMakePoint((CGFloat)relCenterX, (CGFloat)relCenterY)];
        }
    }
}

int ns_gradient_number_of_color_stops(uintptr_t gradient)
{
    @autoreleasepool {
        NSGradient *obj = ns_gradient_from(gradient);
        return obj ? (int)obj.numberOfColorStops : 0;
    }
}

uintptr_t ns_gradient_interpolated_color_at_location(uintptr_t gradient, double location)
{
    @autoreleasepool {
        NSGradient *obj = ns_gradient_from(gradient);
        if (!obj) {
            return 0;
        }
        return ns_color_wrap((__bridge void *)[obj interpolatedColorAtLocation:(CGFloat)location]);
    }
}
