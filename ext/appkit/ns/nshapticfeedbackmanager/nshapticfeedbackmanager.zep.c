
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"

#include "ns-hapticfeedbackmanager.h"
#include <stdint.h>



/**
 * NSHapticFeedbackManager — Force Touch trackpad haptic feedback.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSHapticFeedbackManager_NSHapticFeedbackManager)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSHapticFeedbackManager, NSHapticFeedbackManager, appkit, ns_nshapticfeedbackmanager_nshapticfeedbackmanager, appkit_ns_nshapticfeedbackmanager_nshapticfeedbackmanager_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSHapticFeedbackManager_NSHapticFeedbackManager, defaultPerformer)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_hapticfeedbackmanager_default_performer();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSHapticFeedbackManager_NSHapticFeedbackManager, destroyPerformer)
{
	zval *performer_param = NULL;
	zend_long performer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(performer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &performer_param);
	
            ns_hapticfeedbackmanager_destroy_performer((uintptr_t) performer);
        
}

PHP_METHOD(AppKit_NS_NSHapticFeedbackManager_NSHapticFeedbackManager, performFeedback)
{
	zval *performer_param = NULL, *pattern_param = NULL, *performanceTime_param = NULL;
	zend_long performer, pattern, performanceTime;

	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(performer)
		Z_PARAM_LONG(pattern)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(performanceTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &performer_param, &pattern_param, &performanceTime_param);
	if (!performanceTime_param) {
		performanceTime = 0;
	} else {
		}
	
            ns_hapticfeedbackmanager_perform_feedback((uintptr_t) performer, (int) pattern, (int) performanceTime);
        
}

PHP_METHOD(AppKit_NS_NSHapticFeedbackManager_NSHapticFeedbackManager, performDefaultFeedback)
{
	zval *pattern_param = NULL, *performanceTime_param = NULL;
	zend_long pattern, performanceTime;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(pattern)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(performanceTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &pattern_param, &performanceTime_param);
	if (!performanceTime_param) {
		performanceTime = 0;
	} else {
		}
	
            ns_hapticfeedbackmanager_perform_default_feedback((int) pattern, (int) performanceTime);
        
}

