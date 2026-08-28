#include "ns-stepper.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSStepper                                                              */
/* ====================================================================== */

zend_long ns_nsstepper_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSStepper alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

double ns_nsstepper_min_value(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSStepper *s = NS_ARG_AS(NSStepper, handle);
        r = s != nil ? [s minValue] : 0.0;
    }
    return r;
}

void ns_nsstepper_set_min_value(zval *handle, zval *minValue)
{
    @autoreleasepool {
        NSStepper *s = NS_ARG_AS(NSStepper, handle);
        if (s == nil) return;
        [s setMinValue:ns_arg_double(minValue)];
    }
}

double ns_nsstepper_max_value(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSStepper *s = NS_ARG_AS(NSStepper, handle);
        r = s != nil ? [s maxValue] : 0.0;
    }
    return r;
}

void ns_nsstepper_set_max_value(zval *handle, zval *maxValue)
{
    @autoreleasepool {
        NSStepper *s = NS_ARG_AS(NSStepper, handle);
        if (s == nil) return;
        [s setMaxValue:ns_arg_double(maxValue)];
    }
}

double ns_nsstepper_increment(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSStepper *s = NS_ARG_AS(NSStepper, handle);
        r = s != nil ? [s increment] : 0.0;
    }
    return r;
}

void ns_nsstepper_set_increment(zval *handle, zval *increment)
{
    @autoreleasepool {
        NSStepper *s = NS_ARG_AS(NSStepper, handle);
        if (s == nil) return;
        [s setIncrement:ns_arg_double(increment)];
    }
}

zend_long ns_nsstepper_value_wraps(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSStepper *s = NS_ARG_AS(NSStepper, handle);
        r = (s != nil && [s valueWraps]) ? 1 : 0;
    }
    return r;
}

void ns_nsstepper_set_value_wraps(zval *handle, zval *valueWraps)
{
    @autoreleasepool {
        NSStepper *s = NS_ARG_AS(NSStepper, handle);
        if (s == nil) return;
        [s setValueWraps:ns_arg_bool(valueWraps)];
    }
}

zend_long ns_nsstepper_autorepeat(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSStepper *s = NS_ARG_AS(NSStepper, handle);
        r = (s != nil && [s autorepeat]) ? 1 : 0;
    }
    return r;
}

void ns_nsstepper_set_autorepeat(zval *handle, zval *autorepeat)
{
    @autoreleasepool {
        NSStepper *s = NS_ARG_AS(NSStepper, handle);
        if (s == nil) return;
        [s setAutorepeat:ns_arg_bool(autorepeat)];
    }
}
