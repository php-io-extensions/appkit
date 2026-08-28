#ifndef PHP_APPKIT_NS_DRIFT_FIXTURE_H
#define PHP_APPKIT_NS_DRIFT_FIXTURE_H

/*
 * Negative-control fixture for gen-zep.php: the annotation declares two
 * parameters but the C prototype only takes one. The generator must refuse
 * to generate and exit non-zero.
 */

#include "php.h"

/*@zep NS\NSDrift setThing(int handle, int thing) -> void */
void ns_nsdrift_set_thing(zval *handle);

#endif
