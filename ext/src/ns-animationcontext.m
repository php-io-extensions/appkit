#import <AppKit/AppKit.h>
#import "ns-animationcontext.h"

static NSAnimationContext *ns_animationcontext_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSAnimationContext class]] ? (NSAnimationContext *)obj : nil;
}

void ns_animationcontext_begin_grouping(void)
{
    @autoreleasepool {
        [NSAnimationContext beginGrouping];
    }
}

void ns_animationcontext_end_grouping(void)
{
    @autoreleasepool {
        [NSAnimationContext endGrouping];
    }
}

uintptr_t ns_animationcontext_current(void)
{
    @autoreleasepool {
        NSAnimationContext *ctx = NSAnimationContext.currentContext;
        return ctx ? (uintptr_t)(__bridge void *)ctx : 0;
    }
}

void ns_animationcontext_set_duration(uintptr_t context, double duration)
{
    @autoreleasepool {
        NSAnimationContext *obj = ns_animationcontext_from(context);
        if (obj) {
            obj.duration = duration;
        }
    }
}

double ns_animationcontext_get_duration(uintptr_t context)
{
    @autoreleasepool {
        NSAnimationContext *obj = ns_animationcontext_from(context);
        return obj ? obj.duration : 0.0;
    }
}

void ns_animationcontext_set_allows_implicit_animation(uintptr_t context, int enabled)
{
    @autoreleasepool {
        NSAnimationContext *obj = ns_animationcontext_from(context);
        if (obj) {
            obj.allowsImplicitAnimation = enabled ? YES : NO;
        }
    }
}

int ns_animationcontext_get_allows_implicit_animation(uintptr_t context)
{
    @autoreleasepool {
        NSAnimationContext *obj = ns_animationcontext_from(context);
        return obj && obj.allowsImplicitAnimation ? 1 : 0;
    }
}
