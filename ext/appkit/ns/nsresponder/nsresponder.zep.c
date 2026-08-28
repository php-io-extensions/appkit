
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
#include "src/ns-responder.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSResponder_NSResponder)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSResponder, NSResponder, appkit, ns_nsresponder_nsresponder, appkit_ns_nsresponder_nsresponder_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, init)
{

	RETURN_LONG(ns_nsresponder_init());
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, nextResponder)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsresponder_next_responder(&_0));
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, setNextResponder)
{
	zval *handle_param = NULL, *nextResponder_param = NULL, _0, _1;
	zend_long handle, nextResponder;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(nextResponder)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &nextResponder_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, nextResponder);
	ns_nsresponder_set_next_responder(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, tryToPerformWith)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval action;
	zval *handle_param = NULL, *action_param = NULL, *object__param = NULL, _0, _1;
	zend_long handle, object_, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&action);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(action)
		Z_PARAM_LONG(object_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &action_param, &object__param);
	zephir_get_strval(&action, action_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, object_);
	r = ns_nsresponder_try_to_perform_with(&_0, &action, &_1);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, performKeyEquivalent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	r = ns_nsresponder_perform_key_equivalent(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, validRequestorForSendTypeReturnType)
{
	zval *handle_param = NULL, *sendType = NULL, sendType_sub, *returnType = NULL, returnType_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&sendType_sub);
	ZVAL_UNDEF(&returnType_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(sendType)
		Z_PARAM_ZVAL(returnType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &sendType, &returnType);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsresponder_valid_requestor_for_send_type_return_type(&_0, sendType, returnType));
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, mouseDown)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_mouse_down(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, rightMouseDown)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_right_mouse_down(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, otherMouseDown)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_other_mouse_down(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, mouseUp)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_mouse_up(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, rightMouseUp)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_right_mouse_up(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, otherMouseUp)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_other_mouse_up(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, mouseMoved)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_mouse_moved(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, mouseDragged)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_mouse_dragged(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, scrollWheel)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_scroll_wheel(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, rightMouseDragged)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_right_mouse_dragged(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, otherMouseDragged)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_other_mouse_dragged(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, mouseEntered)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_mouse_entered(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, mouseExited)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_mouse_exited(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, keyDown)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_key_down(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, keyUp)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_key_up(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, flagsChanged)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_flags_changed(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, tabletPoint)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_tablet_point(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, tabletProximity)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_tablet_proximity(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, cursorUpdate)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_cursor_update(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, magnifyWithEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_magnify_with_event(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, rotateWithEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_rotate_with_event(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, swipeWithEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_swipe_with_event(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, beginGestureWithEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_begin_gesture_with_event(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, endGestureWithEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_end_gesture_with_event(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, smartMagnifyWithEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_smart_magnify_with_event(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, changeModeWithEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_change_mode_with_event(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, touchesBeganWithEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_touches_began_with_event(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, touchesMovedWithEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_touches_moved_with_event(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, touchesEndedWithEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_touches_ended_with_event(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, touchesCancelledWithEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_touches_cancelled_with_event(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, quickLookWithEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_quick_look_with_event(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, pressureChangeWithEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_pressure_change_with_event(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, contextMenuKeyDown)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsresponder_context_menu_key_down(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, noResponderFor)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval eventSelector;
	zval *handle_param = NULL, *eventSelector_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&eventSelector);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(eventSelector)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &eventSelector_param);
	zephir_get_strval(&eventSelector, eventSelector_param);
	ZVAL_LONG(&_0, handle);
	ns_nsresponder_no_responder_for(&_0, &eventSelector);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, acceptsFirstResponder)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsresponder_accepts_first_responder(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, becomeFirstResponder)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsresponder_become_first_responder(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, resignFirstResponder)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsresponder_resign_first_responder(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, interpretKeyEvents)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval eventArray;
	zval *handle_param = NULL, *eventArray_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&eventArray);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(eventArray)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &eventArray_param);
	zephir_get_arrval(&eventArray, eventArray_param);
	ZVAL_LONG(&_0, handle);
	ns_nsresponder_interpret_key_events(&_0, &eventArray);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, flushBufferedKeyEvents)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsresponder_flush_buffered_key_events(&_0);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, menu)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsresponder_menu(&_0));
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, setMenu)
{
	zval *handle_param = NULL, *menu_param = NULL, _0, _1;
	zend_long handle, menu;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(menu)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &menu_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, menu);
	ns_nsresponder_set_menu(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, showContextHelp)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nsresponder_show_context_help(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, helpRequested)
{
	zval *handle_param = NULL, *eventPtr_param = NULL, _0, _1;
	zend_long handle, eventPtr;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(eventPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &eventPtr_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, eventPtr);
	ns_nsresponder_help_requested(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, shouldBeTreatedAsInkEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	r = ns_nsresponder_should_be_treated_as_ink_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, wantsScrollEventsForSwipeTrackingOnAxis)
{
	zval *handle_param = NULL, *axis_param = NULL, _0, _1;
	zend_long handle, axis, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(axis)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &axis_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, axis);
	r = ns_nsresponder_wants_scroll_events_for_swipe_tracking_on_axis(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, wantsForwardedScrollEventsForAxis)
{
	zval *handle_param = NULL, *axis_param = NULL, _0, _1;
	zend_long handle, axis, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(axis)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &axis_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, axis);
	r = ns_nsresponder_wants_forwarded_scroll_events_for_axis(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, supplementalTargetForActionSender)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval action;
	zval *handle_param = NULL, *action_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&action);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(action)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &action_param, &sender_param);
	zephir_get_strval(&action, action_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	RETURN_MM_LONG(ns_nsresponder_supplemental_target_for_action_sender(&_0, &action, &_1));
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, undoManager)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsresponder_undo_manager(&_0));
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, validateProposedFirstResponderForEvent)
{
	zval *handle_param = NULL, *responder_param = NULL, *event_param = NULL, _0, _1, _2;
	zend_long handle, responder, event, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(responder)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &responder_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, responder);
	ZVAL_LONG(&_2, event);
	r = ns_nsresponder_validate_proposed_first_responder_for_event(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, presentErrorModalForWindowDelegateDidPresentSelectorContextInfo)
{
	zval *handle_param = NULL, *error_param = NULL, *window_param = NULL, *delegate_param = NULL, *didPresentSelector = NULL, didPresentSelector_sub, *contextInfo_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, error, window, delegate, contextInfo;

	ZVAL_UNDEF(&didPresentSelector_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(error)
		Z_PARAM_LONG(window)
		Z_PARAM_LONG(delegate)
		Z_PARAM_ZVAL(didPresentSelector)
		Z_PARAM_LONG(contextInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &error_param, &window_param, &delegate_param, &didPresentSelector, &contextInfo_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, error);
	ZVAL_LONG(&_2, window);
	ZVAL_LONG(&_3, delegate);
	ZVAL_LONG(&_4, contextInfo);
	ns_nsresponder_present_error_modal_for_window_delegate_did_present_selector_context_info(&_0, &_1, &_2, &_3, didPresentSelector, &_4);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, presentError)
{
	zval *handle_param = NULL, *error_param = NULL, _0, _1;
	zend_long handle, error, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(error)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &error_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, error);
	r = ns_nsresponder_present_error(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, willPresentError)
{
	zval *handle_param = NULL, *error_param = NULL, _0, _1;
	zend_long handle, error;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(error)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &error_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, error);
	RETURN_LONG(ns_nsresponder_will_present_error(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, performTextFinderAction)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nsresponder_perform_text_finder_action(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, newWindowForTab)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nsresponder_new_window_for_tab(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, showWritingTools)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nsresponder_show_writing_tools(&_0, &_1);
}

