#import <AppKit/AppKit.h>
#import "ns-alignmentfeedbackfilter.h"
#import "ns-view.h"
#import "ns-gesturerecognizer.h"

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

static NSAlignmentFeedbackFilter *ns_alignmentfeedbackfilter_from(uintptr_t handle)
{
    id obj = ns_bridge_obj(handle);
    return [obj isKindOfClass:[NSAlignmentFeedbackFilter class]] ? (NSAlignmentFeedbackFilter *)obj : nil;
}

uintptr_t ns_alignmentfeedbackfilter_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSAlignmentFeedbackFilter alloc] init]);
    }
}

uintptr_t ns_alignmentfeedbackfilter_wrap(void *filter)
{
    if (!filter) {
        return 0;
    }
    @autoreleasepool {
        NSAlignmentFeedbackFilter *obj = (__bridge NSAlignmentFeedbackFilter *)filter;
        return [obj isKindOfClass:[NSAlignmentFeedbackFilter class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_alignmentfeedbackfilter_destroy(uintptr_t filter)
{
    ns_release_handle(filter);
}

void *ns_alignmentfeedbackfilter_nsalignmentfeedbackfilter(uintptr_t filter)
{
    NSAlignmentFeedbackFilter *obj = ns_alignmentfeedbackfilter_from(filter);
    return obj ? (__bridge void *)obj : NULL;
}

unsigned long long ns_alignmentfeedbackfilter_input_event_mask(void)
{
    @autoreleasepool {
        return (unsigned long long)[NSAlignmentFeedbackFilter inputEventMask];
    }
}

void ns_alignmentfeedbackfilter_update_with_event(uintptr_t filter, void *event)
{
    @autoreleasepool {
        NSAlignmentFeedbackFilter *obj = ns_alignmentfeedbackfilter_from(filter);
        if (!obj || !event) {
            return;
        }
        [obj updateWithEvent:(__bridge NSEvent *)event];
    }
}

void ns_alignmentfeedbackfilter_update_with_pan_recognizer(uintptr_t filter, uintptr_t recognizer)
{
    @autoreleasepool {
        NSAlignmentFeedbackFilter *obj = ns_alignmentfeedbackfilter_from(filter);
        void *native = ns_gesturerecognizer_nsgesturerecognizer(recognizer);
        NSPanGestureRecognizer *pan = native ? (__bridge NSPanGestureRecognizer *)native : nil;
        if (obj && [pan isKindOfClass:[NSPanGestureRecognizer class]]) {
            [obj updateWithPanRecognizer:pan];
        }
    }
}

uintptr_t ns_alignmentfeedbackfilter_token_for_movement(uintptr_t filter, uintptr_t view, double prev_x, double prev_y, double aligned_x, double aligned_y, double default_x, double default_y)
{
    @autoreleasepool {
        NSAlignmentFeedbackFilter *obj = ns_alignmentfeedbackfilter_from(filter);
        if (!obj) {
            return 0;
        }
        void *nativeView = ns_view_nsview(view);
        NSView *v = nativeView ? (__bridge NSView *)nativeView : nil;
        id<NSAlignmentFeedbackToken> token = [obj alignmentFeedbackTokenForMovementInView:v
                                                                            previousPoint:NSMakePoint((CGFloat)prev_x, (CGFloat)prev_y)
                                                                              alignedPoint:NSMakePoint((CGFloat)aligned_x, (CGFloat)aligned_y)
                                                                              defaultPoint:NSMakePoint((CGFloat)default_x, (CGFloat)default_y)];
        return token ? ns_retain_obj(token) : 0;
    }
}

uintptr_t ns_alignmentfeedbackfilter_token_for_horizontal_movement(uintptr_t filter, uintptr_t view, double previous_x, double aligned_x, double default_x)
{
    @autoreleasepool {
        NSAlignmentFeedbackFilter *obj = ns_alignmentfeedbackfilter_from(filter);
        if (!obj) {
            return 0;
        }
        void *nativeView = ns_view_nsview(view);
        NSView *v = nativeView ? (__bridge NSView *)nativeView : nil;
        id<NSAlignmentFeedbackToken> token = [obj alignmentFeedbackTokenForHorizontalMovementInView:v
                                                                                          previousX:(CGFloat)previous_x
                                                                                           alignedX:(CGFloat)aligned_x
                                                                                           defaultX:(CGFloat)default_x];
        return token ? ns_retain_obj(token) : 0;
    }
}

uintptr_t ns_alignmentfeedbackfilter_token_for_vertical_movement(uintptr_t filter, uintptr_t view, double previous_y, double aligned_y, double default_y)
{
    @autoreleasepool {
        NSAlignmentFeedbackFilter *obj = ns_alignmentfeedbackfilter_from(filter);
        if (!obj) {
            return 0;
        }
        void *nativeView = ns_view_nsview(view);
        NSView *v = nativeView ? (__bridge NSView *)nativeView : nil;
        id<NSAlignmentFeedbackToken> token = [obj alignmentFeedbackTokenForVerticalMovementInView:v
                                                                                          previousY:(CGFloat)previous_y
                                                                                           alignedY:(CGFloat)aligned_y
                                                                                           defaultY:(CGFloat)default_y];
        return token ? ns_retain_obj(token) : 0;
    }
}

void ns_alignmentfeedbackfilter_perform_feedback(uintptr_t filter, const uintptr_t *tokens, int count, int performance_time)
{
    @autoreleasepool {
        NSAlignmentFeedbackFilter *obj = ns_alignmentfeedbackfilter_from(filter);
        if (!obj || !tokens || count <= 0) {
            return;
        }
        NSMutableArray<id<NSAlignmentFeedbackToken>> *list = [NSMutableArray array];
        int i;
        for (i = 0; i < count; i++) {
            id token = ns_bridge_obj(tokens[i]);
            if (token) {
                [list addObject:token];
            }
        }
        [obj performFeedback:list performanceTime:(NSHapticFeedbackPerformanceTime)performance_time];
    }
}

void ns_alignmentfeedbackfilter_destroy_token(uintptr_t token)
{
    ns_release_handle(token);
}
