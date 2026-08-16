
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
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"

#include "ns-draggingsession.h"
#include <stdint.h>



/** NSDraggingSession — active drag session state and pasteboard. */
ZEPHIR_INIT_CLASS(AppKit_NS_NSDraggingSession_NSDraggingSession)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSDraggingSession, NSDraggingSession, appkit, ns_nsdraggingsession_nsdraggingsession, appkit_ns_nsdraggingsession_nsdraggingsession_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSDraggingSession_NSDraggingSession, wrap)
{
	zval *nsDraggingSessionPtr_param = NULL;
	zend_long nsDraggingSessionPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsDraggingSessionPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsDraggingSessionPtr_param);
	
            handle = (zend_long) ns_draggingsession_wrap((void *)(uintptr_t) nsDraggingSessionPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDraggingSession_NSDraggingSession, destroy)
{
	zval *session_param = NULL;
	zend_long session;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(session)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &session_param);
	
            ns_draggingsession_destroy((uintptr_t) session);
        
}

PHP_METHOD(AppKit_NS_NSDraggingSession_NSDraggingSession, nsDraggingSession)
{
	zval *session_param = NULL;
	zend_long session, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(session)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &session_param);
	
            ptr = (zend_long)(uintptr_t) ns_draggingsession_nsdraggingsession((uintptr_t) session);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSDraggingSession_NSDraggingSession, getDraggingFormation)
{
	zval *session_param = NULL;
	zend_long session, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(session)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &session_param);
	
            value = (zend_long) ns_draggingsession_get_dragging_formation((uintptr_t) session);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSDraggingSession_NSDraggingSession, setDraggingFormation)
{
	zval *session_param = NULL, *formation_param = NULL;
	zend_long session, formation;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(session)
		Z_PARAM_LONG(formation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &session_param, &formation_param);
	
            ns_draggingsession_set_dragging_formation((uintptr_t) session, formation);
        
}

PHP_METHOD(AppKit_NS_NSDraggingSession_NSDraggingSession, animatesToStartingPositions)
{
	zend_bool result = 0;
	zval *session_param = NULL;
	zend_long session;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(session)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &session_param);
	
            result = ns_draggingsession_get_animates_to_starting_positions((uintptr_t) session) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDraggingSession_NSDraggingSession, setAnimatesToStartingPositions)
{
	zend_bool value;
	zval *session_param = NULL, *value_param = NULL;
	zend_long session;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(session)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &session_param, &value_param);
	
            ns_draggingsession_set_animates_to_starting_positions((uintptr_t) session, value ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSDraggingSession_NSDraggingSession, getDraggingLeaderIndex)
{
	zval *session_param = NULL;
	zend_long session, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(session)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &session_param);
	
            value = (zend_long) ns_draggingsession_get_dragging_leader_index((uintptr_t) session);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSDraggingSession_NSDraggingSession, setDraggingLeaderIndex)
{
	zval *session_param = NULL, *index_param = NULL;
	zend_long session, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(session)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &session_param, &index_param);
	
            ns_draggingsession_set_dragging_leader_index((uintptr_t) session, (long long) index);
        
}

PHP_METHOD(AppKit_NS_NSDraggingSession_NSDraggingSession, draggingPasteboard)
{
	zval *session_param = NULL;
	zend_long session, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(session)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &session_param);
	
            handle = (zend_long) ns_draggingsession_dragging_pasteboard((uintptr_t) session);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDraggingSession_NSDraggingSession, draggingSequenceNumber)
{
	zval *session_param = NULL;
	zend_long session, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(session)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &session_param);
	
            value = (zend_long) ns_draggingsession_dragging_sequence_number((uintptr_t) session);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSDraggingSession_NSDraggingSession, draggingLocation)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *session_param = NULL;
	zend_long session;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(session)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &session_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0;
            ns_draggingsession_dragging_location((uintptr_t) session, &x, &y);
            add_assoc_double(&out, "x", x);
            add_assoc_double(&out, "y", y);
        
	RETURN_CTOR(&out);
}

