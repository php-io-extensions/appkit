/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 1717a59844d2d03278b040b3781dd5dd96bfd035 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CGEventSource_keyState, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, stateID, CGEventSourceStateID, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_CGEvent_createMouseEvent, 0, 4, CGEvent, 1)
	ZEND_ARG_OBJ_INFO(0, source, CFType, 1)
	ZEND_ARG_OBJ_INFO(0, mouseType, CGEventType, 0)
	ZEND_ARG_OBJ_INFO(0, mouseCursorPosition, NSPoint, 0)
	ZEND_ARG_OBJ_INFO(0, mouseButton, CGMouseButton, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_CGEvent_createScrollWheelEvent2, 0, 6, CGEvent, 1)
	ZEND_ARG_OBJ_INFO(0, source, CFType, 1)
	ZEND_ARG_OBJ_INFO(0, units, CGScrollEventUnit, 0)
	ZEND_ARG_TYPE_INFO(0, wheelCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, wheel1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, wheel2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, wheel3, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CGEvent_getIntegerValueField, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CGEvent_setIntegerValueField, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_CGEvent_getLocation, 0, 0, NSPoint, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CGEvent_setLocation, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, location, NSPoint, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(CGEventSource, keyState);
ZEND_METHOD(CGEvent, createMouseEvent);
ZEND_METHOD(CGEvent, createScrollWheelEvent2);
ZEND_METHOD(CGEvent, getIntegerValueField);
ZEND_METHOD(CGEvent, setIntegerValueField);
ZEND_METHOD(CGEvent, getLocation);
ZEND_METHOD(CGEvent, setLocation);

static const zend_function_entry class_CGEventSource_methods[] = {
	ZEND_ME(CGEventSource, keyState, arginfo_class_CGEventSource_keyState, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static const zend_function_entry class_CGEvent_methods[] = {
	ZEND_ME(CGEvent, createMouseEvent, arginfo_class_CGEvent_createMouseEvent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(CGEvent, createScrollWheelEvent2, arginfo_class_CGEvent_createScrollWheelEvent2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(CGEvent, getIntegerValueField, arginfo_class_CGEvent_getIntegerValueField, ZEND_ACC_PUBLIC)
	ZEND_ME(CGEvent, setIntegerValueField, arginfo_class_CGEvent_setIntegerValueField, ZEND_ACC_PUBLIC)
	ZEND_ME(CGEvent, getLocation, arginfo_class_CGEvent_getLocation, ZEND_ACC_PUBLIC)
	ZEND_ME(CGEvent, setLocation, arginfo_class_CGEvent_setLocation, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_CGEvent_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("kCGMouseEventNumber", kCGMouseEventNumber, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kCGMouseEventClickState", kCGMouseEventClickState, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kCGMouseEventPressure", kCGMouseEventPressure, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kCGMouseEventButtonNumber", kCGMouseEventButtonNumber, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kCGMouseEventDeltaX", kCGMouseEventDeltaX, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kCGMouseEventDeltaY", kCGMouseEventDeltaY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kCGMouseEventInstantMouser", kCGMouseEventInstantMouser, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kCGMouseEventSubtype", kCGMouseEventSubtype, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kCGMouseEventWindowUnderMousePointer", kCGMouseEventWindowUnderMousePointer, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kCGMouseEventWindowUnderMousePointerThatCanHandleThisEvent", kCGMouseEventWindowUnderMousePointerThatCanHandleThisEvent, CONST_PERSISTENT);
}

static zend_class_entry *register_class_CGEventType(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("CGEventType", IS_LONG, NULL);

	zval enum_case_NULL_value;
	ZVAL_LONG(&enum_case_NULL_value, 0);
	zend_enum_add_case_cstr(class_entry, "NULL", &enum_case_NULL_value);

	zval enum_case_LEFT_MOUSE_DOWN_value;
	ZVAL_LONG(&enum_case_LEFT_MOUSE_DOWN_value, 1);
	zend_enum_add_case_cstr(class_entry, "LEFT_MOUSE_DOWN", &enum_case_LEFT_MOUSE_DOWN_value);

	zval enum_case_LEFT_MOUSE_UP_value;
	ZVAL_LONG(&enum_case_LEFT_MOUSE_UP_value, 2);
	zend_enum_add_case_cstr(class_entry, "LEFT_MOUSE_UP", &enum_case_LEFT_MOUSE_UP_value);

	zval enum_case_RIGHT_MOUSE_DOWN_value;
	ZVAL_LONG(&enum_case_RIGHT_MOUSE_DOWN_value, 3);
	zend_enum_add_case_cstr(class_entry, "RIGHT_MOUSE_DOWN", &enum_case_RIGHT_MOUSE_DOWN_value);

	zval enum_case_RIGHT_MOUSE_UP_value;
	ZVAL_LONG(&enum_case_RIGHT_MOUSE_UP_value, 4);
	zend_enum_add_case_cstr(class_entry, "RIGHT_MOUSE_UP", &enum_case_RIGHT_MOUSE_UP_value);

	zval enum_case_MOUSE_MOVED_value;
	ZVAL_LONG(&enum_case_MOUSE_MOVED_value, 5);
	zend_enum_add_case_cstr(class_entry, "MOUSE_MOVED", &enum_case_MOUSE_MOVED_value);

	zval enum_case_LEFT_MOUSE_DRAGGED_value;
	ZVAL_LONG(&enum_case_LEFT_MOUSE_DRAGGED_value, 6);
	zend_enum_add_case_cstr(class_entry, "LEFT_MOUSE_DRAGGED", &enum_case_LEFT_MOUSE_DRAGGED_value);

	zval enum_case_RIGHT_MOUSE_DRAGGED_value;
	ZVAL_LONG(&enum_case_RIGHT_MOUSE_DRAGGED_value, 7);
	zend_enum_add_case_cstr(class_entry, "RIGHT_MOUSE_DRAGGED", &enum_case_RIGHT_MOUSE_DRAGGED_value);

	zval enum_case_KEY_DOWN_value;
	ZVAL_LONG(&enum_case_KEY_DOWN_value, 10);
	zend_enum_add_case_cstr(class_entry, "KEY_DOWN", &enum_case_KEY_DOWN_value);

	zval enum_case_KEY_UP_value;
	ZVAL_LONG(&enum_case_KEY_UP_value, 11);
	zend_enum_add_case_cstr(class_entry, "KEY_UP", &enum_case_KEY_UP_value);

	zval enum_case_FLAGS_CHANGED_value;
	ZVAL_LONG(&enum_case_FLAGS_CHANGED_value, 12);
	zend_enum_add_case_cstr(class_entry, "FLAGS_CHANGED", &enum_case_FLAGS_CHANGED_value);

	zval enum_case_SCROLL_WHEEL_value;
	ZVAL_LONG(&enum_case_SCROLL_WHEEL_value, 22);
	zend_enum_add_case_cstr(class_entry, "SCROLL_WHEEL", &enum_case_SCROLL_WHEEL_value);

	zval enum_case_TABLET_POINTER_value;
	ZVAL_LONG(&enum_case_TABLET_POINTER_value, 23);
	zend_enum_add_case_cstr(class_entry, "TABLET_POINTER", &enum_case_TABLET_POINTER_value);

	zval enum_case_TABLET_PROXIMITY_value;
	ZVAL_LONG(&enum_case_TABLET_PROXIMITY_value, 24);
	zend_enum_add_case_cstr(class_entry, "TABLET_PROXIMITY", &enum_case_TABLET_PROXIMITY_value);

	zval enum_case_OTHER_MOUSE_DOWN_value;
	ZVAL_LONG(&enum_case_OTHER_MOUSE_DOWN_value, 25);
	zend_enum_add_case_cstr(class_entry, "OTHER_MOUSE_DOWN", &enum_case_OTHER_MOUSE_DOWN_value);

	zval enum_case_OTHER_MOUSE_UP_value;
	ZVAL_LONG(&enum_case_OTHER_MOUSE_UP_value, 26);
	zend_enum_add_case_cstr(class_entry, "OTHER_MOUSE_UP", &enum_case_OTHER_MOUSE_UP_value);

	zval enum_case_OTHER_MOUSE_DRAGGED_value;
	ZVAL_LONG(&enum_case_OTHER_MOUSE_DRAGGED_value, 27);
	zend_enum_add_case_cstr(class_entry, "OTHER_MOUSE_DRAGGED", &enum_case_OTHER_MOUSE_DRAGGED_value);

	zval enum_case_TAP_DISABLED_BY_TIMEOUT_value;
	ZVAL_LONG(&enum_case_TAP_DISABLED_BY_TIMEOUT_value, 4294967294);
	zend_enum_add_case_cstr(class_entry, "TAP_DISABLED_BY_TIMEOUT", &enum_case_TAP_DISABLED_BY_TIMEOUT_value);

	zval enum_case_TAP_DISABLED_BY_USER_INPUT_value;
	ZVAL_LONG(&enum_case_TAP_DISABLED_BY_USER_INPUT_value, 4294967295);
	zend_enum_add_case_cstr(class_entry, "TAP_DISABLED_BY_USER_INPUT", &enum_case_TAP_DISABLED_BY_USER_INPUT_value);

	return class_entry;
}

static zend_class_entry *register_class_CGMouseButton(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("CGMouseButton", IS_LONG, NULL);

	zval enum_case_LEFT_value;
	ZVAL_LONG(&enum_case_LEFT_value, 0);
	zend_enum_add_case_cstr(class_entry, "LEFT", &enum_case_LEFT_value);

	zval enum_case_RIGHT_value;
	ZVAL_LONG(&enum_case_RIGHT_value, 1);
	zend_enum_add_case_cstr(class_entry, "RIGHT", &enum_case_RIGHT_value);

	zval enum_case_CENTER_value;
	ZVAL_LONG(&enum_case_CENTER_value, 2);
	zend_enum_add_case_cstr(class_entry, "CENTER", &enum_case_CENTER_value);

	return class_entry;
}

static zend_class_entry *register_class_CGScrollEventUnit(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("CGScrollEventUnit", IS_LONG, NULL);

	zval enum_case_PIXEL_value;
	ZVAL_LONG(&enum_case_PIXEL_value, 0);
	zend_enum_add_case_cstr(class_entry, "PIXEL", &enum_case_PIXEL_value);

	zval enum_case_LINE_value;
	ZVAL_LONG(&enum_case_LINE_value, 1);
	zend_enum_add_case_cstr(class_entry, "LINE", &enum_case_LINE_value);

	return class_entry;
}

static zend_class_entry *register_class_CGEventSourceStateID(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("CGEventSourceStateID", IS_LONG, NULL);

	zval enum_case_PRIVATE_value;
	ZVAL_LONG(&enum_case_PRIVATE_value, -1);
	zend_enum_add_case_cstr(class_entry, "PRIVATE", &enum_case_PRIVATE_value);

	zval enum_case_COMBINED_SESSION_STATE_value;
	ZVAL_LONG(&enum_case_COMBINED_SESSION_STATE_value, 0);
	zend_enum_add_case_cstr(class_entry, "COMBINED_SESSION_STATE", &enum_case_COMBINED_SESSION_STATE_value);

	zval enum_case_HID_SYSTEM_STATE_value;
	ZVAL_LONG(&enum_case_HID_SYSTEM_STATE_value, 1);
	zend_enum_add_case_cstr(class_entry, "HID_SYSTEM_STATE", &enum_case_HID_SYSTEM_STATE_value);

	return class_entry;
}

static zend_class_entry *register_class_CGEventSource(zend_class_entry *class_entry_CFType)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "CGEventSource", class_CGEventSource_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_CFType, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_CGEvent(zend_class_entry *class_entry_CFType)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "CGEvent", class_CGEvent_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_CFType, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
