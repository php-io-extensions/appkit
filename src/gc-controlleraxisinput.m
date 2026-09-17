#include "gc-controlleraxisinput.h"
#include "ns-value.h"
#import <GameController/GameController.h>

/* ====================================================================== */
/* GCControllerAxisInput                                                  */
/* ====================================================================== */

double ns_gccontrolleraxisinput_value(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        GCControllerAxisInput *o = NS_ARG_AS(GCControllerAxisInput, handle);
        r = o != nil ? (double) [o value] : 0.0;
    }
    return r;
}
