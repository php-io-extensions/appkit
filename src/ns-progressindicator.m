#include "ns-progressindicator.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSProgressIndicator                                                    */
/* ====================================================================== */

zend_long ns_nsprogressindicator_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSProgressIndicator alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

zend_long ns_nsprogressindicator_is_indeterminate(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSProgressIndicator *p = NS_ARG_AS(NSProgressIndicator, handle);
        r = (p != nil && [p isIndeterminate]) ? 1 : 0;
    }
    return r;
}

void ns_nsprogressindicator_set_indeterminate(zval *handle, zval *indeterminate)
{
    @autoreleasepool {
        NSProgressIndicator *p = NS_ARG_AS(NSProgressIndicator, handle);
        if (p == nil) return;
        [p setIndeterminate:ns_arg_bool(indeterminate)];
    }
}

zend_long ns_nsprogressindicator_control_size(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSProgressIndicator *p = NS_ARG_AS(NSProgressIndicator, handle);
        r = p != nil ? (zend_long) [p controlSize] : 0;
    }
    return r;
}

void ns_nsprogressindicator_set_control_size(zval *handle, zval *controlSize)
{
    @autoreleasepool {
        NSProgressIndicator *p = NS_ARG_AS(NSProgressIndicator, handle);
        if (p == nil) return;
        [p setControlSize:(NSControlSize) ns_arg_long(controlSize)];
    }
}

double ns_nsprogressindicator_double_value(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSProgressIndicator *p = NS_ARG_AS(NSProgressIndicator, handle);
        r = p != nil ? (double) [p doubleValue] : 0.0;
    }
    return r;
}

void ns_nsprogressindicator_set_double_value(zval *handle, zval *doubleValue)
{
    @autoreleasepool {
        NSProgressIndicator *p = NS_ARG_AS(NSProgressIndicator, handle);
        if (p == nil) return;
        [p setDoubleValue:ns_arg_double(doubleValue)];
    }
}

void ns_nsprogressindicator_increment_by(zval *handle, zval *delta)
{
    @autoreleasepool {
        NSProgressIndicator *p = NS_ARG_AS(NSProgressIndicator, handle);
        if (p == nil) return;
        [p incrementBy:ns_arg_double(delta)];
    }
}

double ns_nsprogressindicator_min_value(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSProgressIndicator *p = NS_ARG_AS(NSProgressIndicator, handle);
        r = p != nil ? (double) [p minValue] : 0.0;
    }
    return r;
}

void ns_nsprogressindicator_set_min_value(zval *handle, zval *minValue)
{
    @autoreleasepool {
        NSProgressIndicator *p = NS_ARG_AS(NSProgressIndicator, handle);
        if (p == nil) return;
        [p setMinValue:ns_arg_double(minValue)];
    }
}

double ns_nsprogressindicator_max_value(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSProgressIndicator *p = NS_ARG_AS(NSProgressIndicator, handle);
        r = p != nil ? (double) [p maxValue] : 0.0;
    }
    return r;
}

void ns_nsprogressindicator_set_max_value(zval *handle, zval *maxValue)
{
    @autoreleasepool {
        NSProgressIndicator *p = NS_ARG_AS(NSProgressIndicator, handle);
        if (p == nil) return;
        [p setMaxValue:ns_arg_double(maxValue)];
    }
}

zend_long ns_nsprogressindicator_observed_progress(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSProgressIndicator *p = NS_ARG_AS(NSProgressIndicator, handle);
        h = ns_handle_for(p != nil ? [p observedProgress] : nil);
    }
    return h;
}

void ns_nsprogressindicator_set_observed_progress(zval *handle, zval *observedProgress)
{
    @autoreleasepool {
        NSProgressIndicator *p = NS_ARG_AS(NSProgressIndicator, handle);
        if (p == nil) return;
        [p setObservedProgress:NS_ARG_AS(NSProgress, observedProgress)];
    }
}

zend_long ns_nsprogressindicator_uses_threaded_animation(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSProgressIndicator *p = NS_ARG_AS(NSProgressIndicator, handle);
        r = (p != nil && [p usesThreadedAnimation]) ? 1 : 0;
    }
    return r;
}

void ns_nsprogressindicator_set_uses_threaded_animation(zval *handle, zval *usesThreadedAnimation)
{
    @autoreleasepool {
        NSProgressIndicator *p = NS_ARG_AS(NSProgressIndicator, handle);
        if (p == nil) return;
        [p setUsesThreadedAnimation:ns_arg_bool(usesThreadedAnimation)];
    }
}

void ns_nsprogressindicator_start_animation(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSProgressIndicator *p = NS_ARG_AS(NSProgressIndicator, handle);
        if (p == nil) return;
        [p startAnimation:ns_arg_object(sender)];
    }
}

void ns_nsprogressindicator_stop_animation(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSProgressIndicator *p = NS_ARG_AS(NSProgressIndicator, handle);
        if (p == nil) return;
        [p stopAnimation:ns_arg_object(sender)];
    }
}

zend_long ns_nsprogressindicator_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSProgressIndicator *p = NS_ARG_AS(NSProgressIndicator, handle);
        r = p != nil ? (zend_long) [p style] : 0;
    }
    return r;
}

void ns_nsprogressindicator_set_style(zval *handle, zval *style)
{
    @autoreleasepool {
        NSProgressIndicator *p = NS_ARG_AS(NSProgressIndicator, handle);
        if (p == nil) return;
        [p setStyle:(NSProgressIndicatorStyle) ns_arg_long(style)];
    }
}

void ns_nsprogressindicator_size_to_fit(zval *handle)
{
    @autoreleasepool {
        NSProgressIndicator *p = NS_ARG_AS(NSProgressIndicator, handle);
        if (p == nil) return;
        [p sizeToFit];
    }
}

zend_long ns_nsprogressindicator_is_displayed_when_stopped(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSProgressIndicator *p = NS_ARG_AS(NSProgressIndicator, handle);
        r = (p != nil && [p isDisplayedWhenStopped]) ? 1 : 0;
    }
    return r;
}

void ns_nsprogressindicator_set_displayed_when_stopped(zval *handle, zval *displayedWhenStopped)
{
    @autoreleasepool {
        NSProgressIndicator *p = NS_ARG_AS(NSProgressIndicator, handle);
        if (p == nil) return;
        [p setDisplayedWhenStopped:ns_arg_bool(displayedWhenStopped)];
    }
}
