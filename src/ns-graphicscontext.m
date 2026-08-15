#import <AppKit/AppKit.h>
#import "ns-graphicscontext.h"
#import "ns-bitmapimagerep.h"

static uintptr_t ns_graphicscontext_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSGraphicsContext *ns_graphicscontext_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSGraphicsContext class]] ? (NSGraphicsContext *)obj : nil;
}

uintptr_t ns_graphicscontext_current(void)
{
    @autoreleasepool {
        NSGraphicsContext *ctx = NSGraphicsContext.currentContext;
        return ctx ? ns_graphicscontext_retain_obj(ctx) : 0;
    }
}

void ns_graphicscontext_set_current(uintptr_t context)
{
    @autoreleasepool {
        NSGraphicsContext *obj = ns_graphicscontext_from(context);
        NSGraphicsContext.currentContext = obj;
    }
}

int ns_graphicscontext_drawing_to_screen(void)
{
    @autoreleasepool {
        return [NSGraphicsContext currentContextDrawingToScreen] ? 1 : 0;
    }
}

int ns_graphicscontext_instance_drawing_to_screen(uintptr_t context)
{
    @autoreleasepool {
        NSGraphicsContext *obj = ns_graphicscontext_from(context);
        return obj && obj.drawingToScreen ? 1 : 0;
    }
}

void ns_graphicscontext_save_state(void)
{
    @autoreleasepool {
        [NSGraphicsContext saveGraphicsState];
    }
}

void ns_graphicscontext_restore_state(void)
{
    @autoreleasepool {
        [NSGraphicsContext restoreGraphicsState];
    }
}

uintptr_t ns_graphicscontext_with_bitmap_rep(uintptr_t bitmapRep)
{
    @autoreleasepool {
        NSBitmapImageRep *rep = (__bridge NSBitmapImageRep *)ns_bitmapimagerep_nsbitmapimagerep(bitmapRep);
        if (!rep) {
            return 0;
        }
        NSGraphicsContext *ctx = [NSGraphicsContext graphicsContextWithBitmapImageRep:rep];
        return ctx ? ns_graphicscontext_retain_obj(ctx) : 0;
    }
}

uintptr_t ns_graphicscontext_wrap(void *context)
{
    if (!context) {
        return 0;
    }
    @autoreleasepool {
        NSGraphicsContext *obj = (__bridge NSGraphicsContext *)context;
        return [obj isKindOfClass:[NSGraphicsContext class]] ? ns_graphicscontext_retain_obj(obj) : 0;
    }
}

void ns_graphicscontext_destroy(uintptr_t context)
{
    if (!context) {
        return;
    }
    CFRelease((void *)context);
}

void *ns_graphicscontext_nsgraphicscontext(uintptr_t context)
{
    NSGraphicsContext *obj = ns_graphicscontext_from(context);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_graphicscontext_save_graphics_state(uintptr_t context)
{
    @autoreleasepool {
        NSGraphicsContext *previous = NSGraphicsContext.currentContext;
        NSGraphicsContext *obj = ns_graphicscontext_from(context);
        if (obj) {
            NSGraphicsContext.currentContext = obj;
            [obj saveGraphicsState];
            NSGraphicsContext.currentContext = previous;
        }
    }
}

void ns_graphicscontext_restore_graphics_state(uintptr_t context)
{
    @autoreleasepool {
        NSGraphicsContext *previous = NSGraphicsContext.currentContext;
        NSGraphicsContext *obj = ns_graphicscontext_from(context);
        if (obj) {
            NSGraphicsContext.currentContext = obj;
            [obj restoreGraphicsState];
            NSGraphicsContext.currentContext = previous;
        }
    }
}

void ns_graphicscontext_flush(uintptr_t context)
{
    @autoreleasepool {
        NSGraphicsContext *obj = ns_graphicscontext_from(context);
        if (obj) {
            [obj flushGraphics];
        }
    }
}

void ns_graphicscontext_set_should_antialias(uintptr_t context, int enabled)
{
    @autoreleasepool {
        NSGraphicsContext *obj = ns_graphicscontext_from(context);
        if (obj) {
            obj.shouldAntialias = enabled ? YES : NO;
        }
    }
}

int ns_graphicscontext_get_should_antialias(uintptr_t context)
{
    @autoreleasepool {
        NSGraphicsContext *obj = ns_graphicscontext_from(context);
        return obj && obj.shouldAntialias ? 1 : 0;
    }
}

void ns_graphicscontext_set_image_interpolation(uintptr_t context, int interpolation)
{
    @autoreleasepool {
        NSGraphicsContext *obj = ns_graphicscontext_from(context);
        if (obj) {
            obj.imageInterpolation = (NSImageInterpolation)interpolation;
        }
    }
}

int ns_graphicscontext_get_image_interpolation(uintptr_t context)
{
    @autoreleasepool {
        NSGraphicsContext *obj = ns_graphicscontext_from(context);
        return obj ? (int)obj.imageInterpolation : 0;
    }
}

void ns_graphicscontext_set_pattern_phase(uintptr_t context, double x, double y)
{
    @autoreleasepool {
        NSGraphicsContext *obj = ns_graphicscontext_from(context);
        if (obj) {
            obj.patternPhase = NSMakePoint((CGFloat)x, (CGFloat)y);
        }
    }
}

void ns_graphicscontext_get_pattern_phase(uintptr_t context, double *x, double *y)
{
    if (!x || !y) {
        return;
    }
    @autoreleasepool {
        NSGraphicsContext *obj = ns_graphicscontext_from(context);
        if (!obj) {
            *x = 0.0;
            *y = 0.0;
            return;
        }
        *x = (double)obj.patternPhase.x;
        *y = (double)obj.patternPhase.y;
    }
}

void ns_graphicscontext_set_compositing_operation(uintptr_t context, int operation)
{
    @autoreleasepool {
        NSGraphicsContext *obj = ns_graphicscontext_from(context);
        if (obj) {
            obj.compositingOperation = (NSCompositingOperation)operation;
        }
    }
}

int ns_graphicscontext_get_compositing_operation(uintptr_t context)
{
    @autoreleasepool {
        NSGraphicsContext *obj = ns_graphicscontext_from(context);
        return obj ? (int)obj.compositingOperation : 0;
    }
}

int ns_graphicscontext_is_flipped(uintptr_t context)
{
    @autoreleasepool {
        NSGraphicsContext *obj = ns_graphicscontext_from(context);
        return obj && obj.flipped ? 1 : 0;
    }
}
