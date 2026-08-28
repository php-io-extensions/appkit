
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
#include "src/ns-event.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSEvent_NSEvent)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSEvent, NSEvent, appkit, ns_nsevent_nsevent, appkit_ns_nsevent_nsevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_type(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, modifierFlags)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_modifier_flags(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, timestamp)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsevent_timestamp(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, window)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_window(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, windowNumber)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_window_number(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, clickCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_click_count(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, buttonNumber)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_button_number(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, eventNumber)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_event_number(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, pressure)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsevent_pressure(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, locationInWindow)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsevent_location_in_window(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, deltaX)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsevent_delta_x(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, deltaY)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsevent_delta_y(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, deltaZ)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsevent_delta_z(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, hasPreciseScrollingDeltas)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsevent_has_precise_scrolling_deltas(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, scrollingDeltaX)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsevent_scrolling_delta_x(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, scrollingDeltaY)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsevent_scrolling_delta_y(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, momentumPhase)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_momentum_phase(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, isDirectionInvertedFromDevice)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsevent_is_direction_inverted_from_device(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, characters)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsevent_characters(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, charactersIgnoringModifiers)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsevent_characters_ignoring_modifiers(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, charactersByApplyingModifiers)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *modifiers_param = NULL, result, _0, _1;
	zend_long handle, modifiers;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(modifiers)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &modifiers_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, modifiers);
	ns_nsevent_characters_by_applying_modifiers(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, isARepeat)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsevent_is_a_repeat(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, keyCode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_key_code(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, trackingNumber)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_tracking_number(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, userData)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_user_data(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, trackingArea)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_tracking_area(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, subtype)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_subtype(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, data1)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_data1(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, data2)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_data2(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, eventWithEventRef)
{
	zval *eventRef_param = NULL, _0;
	zend_long eventRef;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(eventRef)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &eventRef_param);
	ZVAL_LONG(&_0, eventRef);
	RETURN_LONG(ns_nsevent_event_with_event_ref(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, eventWithCGEvent)
{
	zval *cgEvent_param = NULL, _0;
	zend_long cgEvent;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cgEvent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cgEvent_param);
	ZVAL_LONG(&_0, cgEvent);
	RETURN_LONG(ns_nsevent_event_with_cg_event(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, isMouseCoalescingEnabled)
{
	zend_long r = 0;
	r = ns_nsevent_is_mouse_coalescing_enabled();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, setMouseCoalescingEnabled)
{
	zval *flag_param = NULL, _0;
	zend_bool flag;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &flag_param);
	ZVAL_BOOL(&_0, (flag ? 1 : 0));
	ns_nsevent_set_mouse_coalescing_enabled(&_0);
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, magnification)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsevent_magnification(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, deviceID)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_device_id(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, rotation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsevent_rotation(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, absoluteX)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_absolute_x(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, absoluteY)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_absolute_y(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, absoluteZ)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_absolute_z(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, buttonMask)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_button_mask(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, tilt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsevent_tilt(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, tangentialPressure)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsevent_tangential_pressure(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, vendorDefined)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_vendor_defined(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, vendorID)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_vendor_id(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, tabletID)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_tablet_id(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, pointingDeviceID)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_pointing_device_id(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, systemTabletID)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_system_tablet_id(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, vendorPointingDeviceType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_vendor_pointing_device_type(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, pointingDeviceSerialNumber)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_pointing_device_serial_number(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, uniqueID)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_unique_id(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, capabilityMask)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_capability_mask(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, pointingDeviceType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_pointing_device_type(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, isEnteringProximity)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsevent_is_entering_proximity(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, touchesMatchingPhaseInView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *phase_param = NULL, *view_param = NULL, result, _0, _1, _2;
	zend_long handle, phase, view;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(phase)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &phase_param, &view_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, phase);
	ZVAL_LONG(&_2, view);
	ns_nsevent_touches_matching_phase_in_view(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, allTouches)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsevent_all_touches(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, touchesForView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *view_param = NULL, result, _0, _1;
	zend_long handle, view;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &view_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, view);
	ns_nsevent_touches_for_view(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, coalescedTouchesForTouch)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *touch_param = NULL, result, _0, _1;
	zend_long handle, touch;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(touch)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &touch_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, touch);
	ns_nsevent_coalesced_touches_for_touch(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, phase)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_phase(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, stage)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_stage(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, stageTransition)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsevent_stage_transition(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, associatedEventsMask)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_associated_events_mask(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, pressureBehavior)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsevent_pressure_behavior(&_0));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, isSwipeTrackingFromScrollEventsEnabled)
{
	zend_long r = 0;
	r = ns_nsevent_is_swipe_tracking_from_scroll_events_enabled();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, startPeriodicEventsAfterDelayWithPeriod)
{
	zval *delay_param = NULL, *period_param = NULL, _0, _1;
	double delay, period;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(delay)
		Z_PARAM_ZVAL(period)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &delay_param, &period_param);
	delay = zephir_get_doubleval(delay_param);
	period = zephir_get_doubleval(period_param);
	ZVAL_DOUBLE(&_0, delay);
	ZVAL_DOUBLE(&_1, period);
	ns_nsevent_start_periodic_events_after_delay_with_period(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, stopPeriodicEvents)
{

	ns_nsevent_stop_periodic_events();
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, mouseEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberClickCountPressure)
{
	double x, y, timestamp, pressure;
	zval *type_param = NULL, *x_param = NULL, *y_param = NULL, *flags_param = NULL, *timestamp_param = NULL, *windowNumber_param = NULL, *context_param = NULL, *eventNumber_param = NULL, *clickCount_param = NULL, *pressure_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
	zend_long type, flags, windowNumber, context, eventNumber, clickCount;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZEND_PARSE_PARAMETERS_START(10, 10)
		Z_PARAM_LONG(type)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_LONG(flags)
		Z_PARAM_ZVAL(timestamp)
		Z_PARAM_LONG(windowNumber)
		Z_PARAM_LONG(context)
		Z_PARAM_LONG(eventNumber)
		Z_PARAM_LONG(clickCount)
		Z_PARAM_ZVAL(pressure)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(10, 0, &type_param, &x_param, &y_param, &flags_param, &timestamp_param, &windowNumber_param, &context_param, &eventNumber_param, &clickCount_param, &pressure_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	timestamp = zephir_get_doubleval(timestamp_param);
	pressure = zephir_get_doubleval(pressure_param);
	ZVAL_LONG(&_0, type);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_LONG(&_3, flags);
	ZVAL_DOUBLE(&_4, timestamp);
	ZVAL_LONG(&_5, windowNumber);
	ZVAL_LONG(&_6, context);
	ZVAL_LONG(&_7, eventNumber);
	ZVAL_LONG(&_8, clickCount);
	ZVAL_DOUBLE(&_9, pressure);
	RETURN_LONG(ns_nsevent_mouse_event_with_type_location_modifier_flags_timestamp_window_number_context_event_number_click_count_pressure(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, keyEventWithTypeLocationModifierFlagsTimestampWindowNumberContextCharactersCharactersIgnoringModifiersIsARepeatKeyCode)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool flag;
	zval characters, charactersIgnoringModifiers;
	double x, y, timestamp;
	zval *type_param = NULL, *x_param = NULL, *y_param = NULL, *flags_param = NULL, *timestamp_param = NULL, *windowNumber_param = NULL, *context_param = NULL, *characters_param = NULL, *charactersIgnoringModifiers_param = NULL, *flag_param = NULL, *code_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8;
	zend_long type, flags, windowNumber, context, code;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&characters);
	ZVAL_UNDEF(&charactersIgnoringModifiers);
	ZEND_PARSE_PARAMETERS_START(11, 11)
		Z_PARAM_LONG(type)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_LONG(flags)
		Z_PARAM_ZVAL(timestamp)
		Z_PARAM_LONG(windowNumber)
		Z_PARAM_LONG(context)
		Z_PARAM_STR(characters)
		Z_PARAM_STR(charactersIgnoringModifiers)
		Z_PARAM_BOOL(flag)
		Z_PARAM_LONG(code)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 11, 0, &type_param, &x_param, &y_param, &flags_param, &timestamp_param, &windowNumber_param, &context_param, &characters_param, &charactersIgnoringModifiers_param, &flag_param, &code_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	timestamp = zephir_get_doubleval(timestamp_param);
	zephir_get_strval(&characters, characters_param);
	zephir_get_strval(&charactersIgnoringModifiers, charactersIgnoringModifiers_param);
	ZVAL_LONG(&_0, type);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_LONG(&_3, flags);
	ZVAL_DOUBLE(&_4, timestamp);
	ZVAL_LONG(&_5, windowNumber);
	ZVAL_LONG(&_6, context);
	ZVAL_BOOL(&_7, (flag ? 1 : 0));
	ZVAL_LONG(&_8, code);
	RETURN_MM_LONG(ns_nsevent_key_event_with_type_location_modifier_flags_timestamp_window_number_context_characters_characters_ignoring_modifiers_is_a_repeat_key_code(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &characters, &charactersIgnoringModifiers, &_7, &_8));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, enterExitEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberTrackingNumberUserData)
{
	double x, y, timestamp;
	zval *type_param = NULL, *x_param = NULL, *y_param = NULL, *flags_param = NULL, *timestamp_param = NULL, *windowNumber_param = NULL, *context_param = NULL, *eventNumber_param = NULL, *trackingNumber_param = NULL, *userData_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
	zend_long type, flags, windowNumber, context, eventNumber, trackingNumber, userData;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZEND_PARSE_PARAMETERS_START(10, 10)
		Z_PARAM_LONG(type)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_LONG(flags)
		Z_PARAM_ZVAL(timestamp)
		Z_PARAM_LONG(windowNumber)
		Z_PARAM_LONG(context)
		Z_PARAM_LONG(eventNumber)
		Z_PARAM_LONG(trackingNumber)
		Z_PARAM_LONG(userData)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(10, 0, &type_param, &x_param, &y_param, &flags_param, &timestamp_param, &windowNumber_param, &context_param, &eventNumber_param, &trackingNumber_param, &userData_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	timestamp = zephir_get_doubleval(timestamp_param);
	ZVAL_LONG(&_0, type);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_LONG(&_3, flags);
	ZVAL_DOUBLE(&_4, timestamp);
	ZVAL_LONG(&_5, windowNumber);
	ZVAL_LONG(&_6, context);
	ZVAL_LONG(&_7, eventNumber);
	ZVAL_LONG(&_8, trackingNumber);
	ZVAL_LONG(&_9, userData);
	RETURN_LONG(ns_nsevent_enter_exit_event_with_type_location_modifier_flags_timestamp_window_number_context_event_number_tracking_number_user_data(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, otherEventWithTypeLocationModifierFlagsTimestampWindowNumberContextSubtypeData1Data2)
{
	double x, y, timestamp;
	zval *type_param = NULL, *x_param = NULL, *y_param = NULL, *flags_param = NULL, *timestamp_param = NULL, *windowNumber_param = NULL, *context_param = NULL, *subtype_param = NULL, *data1_param = NULL, *data2_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
	zend_long type, flags, windowNumber, context, subtype, data1, data2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZEND_PARSE_PARAMETERS_START(10, 10)
		Z_PARAM_LONG(type)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_LONG(flags)
		Z_PARAM_ZVAL(timestamp)
		Z_PARAM_LONG(windowNumber)
		Z_PARAM_LONG(context)
		Z_PARAM_LONG(subtype)
		Z_PARAM_LONG(data1)
		Z_PARAM_LONG(data2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(10, 0, &type_param, &x_param, &y_param, &flags_param, &timestamp_param, &windowNumber_param, &context_param, &subtype_param, &data1_param, &data2_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	timestamp = zephir_get_doubleval(timestamp_param);
	ZVAL_LONG(&_0, type);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_LONG(&_3, flags);
	ZVAL_DOUBLE(&_4, timestamp);
	ZVAL_LONG(&_5, windowNumber);
	ZVAL_LONG(&_6, context);
	ZVAL_LONG(&_7, subtype);
	ZVAL_LONG(&_8, data1);
	ZVAL_LONG(&_9, data2);
	RETURN_LONG(ns_nsevent_other_event_with_type_location_modifier_flags_timestamp_window_number_context_subtype_data1_data2(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9));
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, mouseLocation)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	ns_nsevent_mouse_location(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, modifierFlagsClass)
{

	RETURN_LONG(ns_nsevent_modifier_flags_class());
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, pressedMouseButtons)
{

	RETURN_LONG(ns_nsevent_pressed_mouse_buttons());
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, doubleClickInterval)
{

	RETURN_DOUBLE(ns_nsevent_double_click_interval());
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, keyRepeatDelay)
{

	RETURN_DOUBLE(ns_nsevent_key_repeat_delay());
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, keyRepeatInterval)
{

	RETURN_DOUBLE(ns_nsevent_key_repeat_interval());
}

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, removeMonitor)
{
	zval *eventMonitor_param = NULL, _0;
	zend_long eventMonitor;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(eventMonitor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &eventMonitor_param);
	ZVAL_LONG(&_0, eventMonitor);
	ns_nsevent_remove_monitor(&_0);
}

