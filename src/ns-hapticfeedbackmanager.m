#import <AppKit/AppKit.h>
#import "ns-hapticfeedbackmanager.h"

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

static id<NSHapticFeedbackPerformer> ns_haptic_performer_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    if ([obj conformsToProtocol:@protocol(NSHapticFeedbackPerformer)]) {
        return (id<NSHapticFeedbackPerformer>)obj;
    }
    return nil;
}

static NSHapticFeedbackPattern ns_haptic_pattern_from_int(int pattern)
{
    switch (pattern) {
        case 1:
            return NSHapticFeedbackPatternAlignment;
        case 2:
            return NSHapticFeedbackPatternLevelChange;
        default:
            return NSHapticFeedbackPatternGeneric;
    }
}

static NSHapticFeedbackPerformanceTime ns_haptic_performance_time_from_int(int performance_time)
{
    switch (performance_time) {
        case 1:
            return NSHapticFeedbackPerformanceTimeNow;
        case 2:
            return NSHapticFeedbackPerformanceTimeDrawCompleted;
        default:
            return NSHapticFeedbackPerformanceTimeDefault;
    }
}

uintptr_t ns_hapticfeedbackmanager_default_performer(void)
{
    @autoreleasepool {
        id<NSHapticFeedbackPerformer> performer = [NSHapticFeedbackManager defaultPerformer];
        return performer ? ns_retain_obj(performer) : 0;
    }
}

void ns_hapticfeedbackmanager_destroy_performer(uintptr_t performer)
{
    ns_release_handle(performer);
}

void ns_hapticfeedbackmanager_perform_feedback(uintptr_t performer, int pattern, int performance_time)
{
    @autoreleasepool {
        id<NSHapticFeedbackPerformer> obj = ns_haptic_performer_from(performer);
        if (obj) {
            [obj performFeedbackPattern:ns_haptic_pattern_from_int(pattern)
                        performanceTime:ns_haptic_performance_time_from_int(performance_time)];
        }
    }
}

void ns_hapticfeedbackmanager_perform_default_feedback(int pattern, int performance_time)
{
    @autoreleasepool {
        id<NSHapticFeedbackPerformer> performer = [NSHapticFeedbackManager defaultPerformer];
        if (performer) {
            [performer performFeedbackPattern:ns_haptic_pattern_from_int(pattern)
                            performanceTime:ns_haptic_performance_time_from_int(performance_time)];
        }
    }
}
