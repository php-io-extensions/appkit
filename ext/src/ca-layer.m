#include "ca-layer.h"
#include "ns-value.h"
/* AppKit only forward-declares CALayer; contentsGravity needs the real interface. */
#import <QuartzCore/CALayer.h>

/* ====================================================================== */
/* CALayer                                                                */
/* ====================================================================== */

zend_long ns_calayer_init(void)
{
    @autoreleasepool {
        return ns_handle_for([[CALayer alloc] init]);
    }
}

zend_long ns_calayer_background_color(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        CALayer *l = NS_ARG_AS(CALayer, handle);
        CGColorRef cg = l != nil ? [l backgroundColor] : NULL;
        r = (zend_long) (uintptr_t) cg;
    }
    return r;
}

void ns_calayer_set_background_color(zval *handle, zval *backgroundColor)
{
    @autoreleasepool {
        CALayer *l = NS_ARG_AS(CALayer, handle);
        if (l == nil) return;
        [l setBackgroundColor:(CGColorRef) (uintptr_t) ns_arg_long(backgroundColor)];
    }
}

void ns_calayer_contents_gravity(zval *return_value, zval *handle)
{
    @autoreleasepool {
        CALayer *l = NS_ARG_AS(CALayer, handle);
        ns_ret_string(return_value, l != nil ? [l contentsGravity] : nil);
    }
}

void ns_calayer_set_contents_gravity(zval *handle, zval *contentsGravity)
{
    @autoreleasepool {
        CALayer *l = NS_ARG_AS(CALayer, handle);
        if (l == nil) return;
        [l setContentsGravity:ns_arg_string(contentsGravity)];
    }
}

double ns_calayer_corner_radius(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        CALayer *l = NS_ARG_AS(CALayer, handle);
        r = l != nil ? (double) [l cornerRadius] : 0.0;
    }
    return r;
}

void ns_calayer_set_corner_radius(zval *handle, zval *cornerRadius)
{
    @autoreleasepool {
        CALayer *l = NS_ARG_AS(CALayer, handle);
        if (l == nil) return;
        [l setCornerRadius:ns_arg_double(cornerRadius)];
    }
}

zend_long ns_calayer_masks_to_bounds(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        CALayer *l = NS_ARG_AS(CALayer, handle);
        r = (l != nil && [l masksToBounds]) ? 1 : 0;
    }
    return r;
}

void ns_calayer_set_masks_to_bounds(zval *handle, zval *masksToBounds)
{
    @autoreleasepool {
        CALayer *l = NS_ARG_AS(CALayer, handle);
        if (l == nil) return;
        [l setMasksToBounds:ns_arg_bool(masksToBounds)];
    }
}
