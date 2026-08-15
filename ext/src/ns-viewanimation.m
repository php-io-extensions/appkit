#import <AppKit/AppKit.h>
#import "ns-viewanimation.h"
#import "ns-view.h"
#import "ns-window.h"

static uintptr_t ns_viewanimation_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSViewAnimation *ns_viewanimation_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSViewAnimation class]] ? (NSViewAnimation *)obj : nil;
}

static id ns_viewanimation_target_from(uintptr_t targetHandle, int isWindow)
{
    if (!targetHandle) {
        return nil;
    }
    if (isWindow) {
        return (__bridge id)ns_window_nswindow(targetHandle);
    }
    return (__bridge id)ns_view_nsview(targetHandle);
}

uintptr_t ns_viewanimation_create_fade(uintptr_t targetHandle, int isWindow, int effect, double duration)
{
    @autoreleasepool {
        id target = ns_viewanimation_target_from(targetHandle, isWindow);
        if (!target) {
            return 0;
        }
        NSViewAnimationEffectName effectName = effect == NS_VIEW_ANIMATION_EFFECT_FADE_OUT
            ? NSViewAnimationFadeOutEffect
            : NSViewAnimationFadeInEffect;
        NSDictionary *dict = @{
            NSViewAnimationTargetKey: target,
            NSViewAnimationEffectKey: effectName
        };
        NSViewAnimation *animation = [[NSViewAnimation alloc] initWithViewAnimations:@[dict]];
        animation.duration = duration;
        return ns_viewanimation_retain_obj(animation);
    }
}

uintptr_t ns_viewanimation_create_frame(uintptr_t targetHandle, int isWindow, double startX, double startY, double startW, double startH, double endX, double endY, double endW, double endH, double duration)
{
    @autoreleasepool {
        id target = ns_viewanimation_target_from(targetHandle, isWindow);
        if (!target) {
            return 0;
        }
        NSRect start = NSMakeRect((CGFloat)startX, (CGFloat)startY, (CGFloat)startW, (CGFloat)startH);
        NSRect end = NSMakeRect((CGFloat)endX, (CGFloat)endY, (CGFloat)endW, (CGFloat)endH);
        NSDictionary *dict = @{
            NSViewAnimationTargetKey: target,
            NSViewAnimationStartFrameKey: [NSValue valueWithRect:start],
            NSViewAnimationEndFrameKey: [NSValue valueWithRect:end]
        };
        NSViewAnimation *animation = [[NSViewAnimation alloc] initWithViewAnimations:@[dict]];
        animation.duration = duration;
        return ns_viewanimation_retain_obj(animation);
    }
}

uintptr_t ns_viewanimation_wrap(void *animation)
{
    if (!animation) {
        return 0;
    }
    @autoreleasepool {
        NSViewAnimation *obj = (__bridge NSViewAnimation *)animation;
        return [obj isKindOfClass:[NSViewAnimation class]] ? ns_viewanimation_retain_obj(obj) : 0;
    }
}

void ns_viewanimation_destroy(uintptr_t animation)
{
    if (!animation) {
        return;
    }
    CFRelease((void *)animation);
}

void *ns_viewanimation_nsviewanimation(uintptr_t animation)
{
    NSViewAnimation *obj = ns_viewanimation_from(animation);
    return obj ? (__bridge void *)obj : NULL;
}
