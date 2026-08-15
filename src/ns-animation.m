#import <AppKit/AppKit.h>
#import "ns-animation.h"

static uintptr_t ns_animation_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSAnimation *ns_animation_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSAnimation class]] ? (NSAnimation *)obj : nil;
}

uintptr_t ns_animation_create(double duration, int curve)
{
    @autoreleasepool {
        NSAnimation *animation = [[NSAnimation alloc] initWithDuration:duration animationCurve:(NSAnimationCurve)curve];
        return ns_animation_retain_obj(animation);
    }
}

uintptr_t ns_animation_wrap(void *animation)
{
    if (!animation) {
        return 0;
    }
    @autoreleasepool {
        NSAnimation *obj = (__bridge NSAnimation *)animation;
        return [obj isKindOfClass:[NSAnimation class]] ? ns_animation_retain_obj(obj) : 0;
    }
}

void ns_animation_destroy(uintptr_t animation)
{
    if (!animation) {
        return;
    }
    CFRelease((void *)animation);
}

void *ns_animation_nsanimation(uintptr_t animation)
{
    NSAnimation *obj = ns_animation_from(animation);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_animation_start(uintptr_t animation)
{
    @autoreleasepool {
        NSAnimation *obj = ns_animation_from(animation);
        if (obj) {
            [obj startAnimation];
        }
    }
}

void ns_animation_stop(uintptr_t animation)
{
    @autoreleasepool {
        NSAnimation *obj = ns_animation_from(animation);
        if (obj) {
            [obj stopAnimation];
        }
    }
}

int ns_animation_is_animating(uintptr_t animation)
{
    @autoreleasepool {
        NSAnimation *obj = ns_animation_from(animation);
        return obj && obj.animating ? 1 : 0;
    }
}

void ns_animation_set_current_progress(uintptr_t animation, float progress)
{
    @autoreleasepool {
        NSAnimation *obj = ns_animation_from(animation);
        if (obj) {
            obj.currentProgress = progress;
        }
    }
}

float ns_animation_get_current_progress(uintptr_t animation)
{
    @autoreleasepool {
        NSAnimation *obj = ns_animation_from(animation);
        return obj ? obj.currentProgress : 0.0f;
    }
}

void ns_animation_set_duration(uintptr_t animation, double duration)
{
    @autoreleasepool {
        NSAnimation *obj = ns_animation_from(animation);
        if (obj) {
            obj.duration = duration;
        }
    }
}

double ns_animation_get_duration(uintptr_t animation)
{
    @autoreleasepool {
        NSAnimation *obj = ns_animation_from(animation);
        return obj ? obj.duration : 0.0;
    }
}

void ns_animation_set_blocking_mode(uintptr_t animation, int mode)
{
    @autoreleasepool {
        NSAnimation *obj = ns_animation_from(animation);
        if (obj) {
            obj.animationBlockingMode = (NSAnimationBlockingMode)mode;
        }
    }
}

int ns_animation_get_blocking_mode(uintptr_t animation)
{
    @autoreleasepool {
        NSAnimation *obj = ns_animation_from(animation);
        return obj ? (int)obj.animationBlockingMode : 0;
    }
}

void ns_animation_set_frame_rate(uintptr_t animation, float frameRate)
{
    @autoreleasepool {
        NSAnimation *obj = ns_animation_from(animation);
        if (obj) {
            obj.frameRate = frameRate;
        }
    }
}

float ns_animation_get_frame_rate(uintptr_t animation)
{
    @autoreleasepool {
        NSAnimation *obj = ns_animation_from(animation);
        return obj ? obj.frameRate : 0.0f;
    }
}

void ns_animation_set_curve(uintptr_t animation, int curve)
{
    @autoreleasepool {
        NSAnimation *obj = ns_animation_from(animation);
        if (obj) {
            obj.animationCurve = (NSAnimationCurve)curve;
        }
    }
}

int ns_animation_get_curve(uintptr_t animation)
{
    @autoreleasepool {
        NSAnimation *obj = ns_animation_from(animation);
        return obj ? (int)obj.animationCurve : 0;
    }
}

float ns_animation_get_current_value(uintptr_t animation)
{
    @autoreleasepool {
        NSAnimation *obj = ns_animation_from(animation);
        return obj ? obj.currentValue : 0.0f;
    }
}

void ns_animation_add_progress_mark(uintptr_t animation, float mark)
{
    @autoreleasepool {
        NSAnimation *obj = ns_animation_from(animation);
        if (obj) {
            [obj addProgressMark:mark];
        }
    }
}

void ns_animation_remove_progress_mark(uintptr_t animation, float mark)
{
    @autoreleasepool {
        NSAnimation *obj = ns_animation_from(animation);
        if (obj) {
            [obj removeProgressMark:mark];
        }
    }
}
