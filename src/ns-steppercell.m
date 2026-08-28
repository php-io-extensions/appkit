#include "ns-steppercell.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSStepperCell                                                          */
/* ====================================================================== */

zend_long ns_nssteppercell_init_text_cell(zval *string_)
{
    @autoreleasepool {
        return ns_handle_for([[NSStepperCell alloc] initTextCell:ns_arg_string(string_)]);
    }
}

zend_long ns_nssteppercell_init_image_cell(zval *image)
{
    @autoreleasepool {
        return ns_handle_for([[NSStepperCell alloc] initImageCell:NS_ARG_AS(NSImage, image)]);
    }
}

double ns_nssteppercell_min_value(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSStepperCell *c = NS_ARG_AS(NSStepperCell, handle);
        r = c != nil ? [c minValue] : 0.0;
    }
    return r;
}

void ns_nssteppercell_set_min_value(zval *handle, zval *minValue)
{
    @autoreleasepool {
        NSStepperCell *c = NS_ARG_AS(NSStepperCell, handle);
        if (c == nil) return;
        [c setMinValue:ns_arg_double(minValue)];
    }
}

double ns_nssteppercell_max_value(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSStepperCell *c = NS_ARG_AS(NSStepperCell, handle);
        r = c != nil ? [c maxValue] : 0.0;
    }
    return r;
}

void ns_nssteppercell_set_max_value(zval *handle, zval *maxValue)
{
    @autoreleasepool {
        NSStepperCell *c = NS_ARG_AS(NSStepperCell, handle);
        if (c == nil) return;
        [c setMaxValue:ns_arg_double(maxValue)];
    }
}

double ns_nssteppercell_increment(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSStepperCell *c = NS_ARG_AS(NSStepperCell, handle);
        r = c != nil ? [c increment] : 0.0;
    }
    return r;
}

void ns_nssteppercell_set_increment(zval *handle, zval *increment)
{
    @autoreleasepool {
        NSStepperCell *c = NS_ARG_AS(NSStepperCell, handle);
        if (c == nil) return;
        [c setIncrement:ns_arg_double(increment)];
    }
}

zend_long ns_nssteppercell_value_wraps(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSStepperCell *c = NS_ARG_AS(NSStepperCell, handle);
        r = (c != nil && [c valueWraps]) ? 1 : 0;
    }
    return r;
}

void ns_nssteppercell_set_value_wraps(zval *handle, zval *valueWraps)
{
    @autoreleasepool {
        NSStepperCell *c = NS_ARG_AS(NSStepperCell, handle);
        if (c == nil) return;
        [c setValueWraps:ns_arg_bool(valueWraps)];
    }
}

zend_long ns_nssteppercell_autorepeat(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSStepperCell *c = NS_ARG_AS(NSStepperCell, handle);
        r = (c != nil && [c autorepeat]) ? 1 : 0;
    }
    return r;
}

void ns_nssteppercell_set_autorepeat(zval *handle, zval *autorepeat)
{
    @autoreleasepool {
        NSStepperCell *c = NS_ARG_AS(NSStepperCell, handle);
        if (c == nil) return;
        [c setAutorepeat:ns_arg_bool(autorepeat)];
    }
}
