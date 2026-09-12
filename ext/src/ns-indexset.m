#include "ns-indexset.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSIndexSet                                                             */
/* ====================================================================== */

zend_long ns_nsindexset_index_set(void)
{
    @autoreleasepool {
        return ns_handle_for([NSIndexSet indexSet]);
    }
}

zend_long ns_nsindexset_index_set_with_index(zval *value)
{
    @autoreleasepool {
        return ns_handle_for([NSIndexSet indexSetWithIndex:(NSUInteger) ns_arg_long(value)]);
    }
}

zend_long ns_nsindexset_contains_index(zval *handle, zval *value)
{
    zend_long r = 0;
    @autoreleasepool {
        NSIndexSet *s = NS_ARG_AS(NSIndexSet, handle);
        r = (s != nil && [s containsIndex:(NSUInteger) ns_arg_long(value)]) ? 1 : 0;
    }
    return r;
}
