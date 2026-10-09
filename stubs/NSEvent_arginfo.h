/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 0e1c61c4e995ff886f6aebb3cd4f50773a6a3ac7 */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSEvent_otherEventWithTypeLocationModifierFlagsTimestampWindowNumberContextSubtypeData1Data2, 0, 9, NSEvent, 1)
	ZEND_ARG_OBJ_INFO(0, type, NSEventType, 0)
	ZEND_ARG_OBJ_INFO(0, location, NSPoint, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, flags, NSEventModifierFlags, MAY_BE_LONG, NULL)
	ZEND_ARG_TYPE_INFO(0, time, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, wNum, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, unusedPassNil, NSObject, 1)
	ZEND_ARG_TYPE_INFO(0, subtype, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, d1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, d2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSEvent_mouseEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberClickCountPressure, 0, 9, NSEvent, 1)
	ZEND_ARG_OBJ_INFO(0, type, NSEventType, 0)
	ZEND_ARG_OBJ_INFO(0, location, NSPoint, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, flags, NSEventModifierFlags, MAY_BE_LONG, NULL)
	ZEND_ARG_TYPE_INFO(0, time, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, wNum, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, unusedPassNil, NSObject, 1)
	ZEND_ARG_TYPE_INFO(0, eNum, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cNum, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pressure, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_class_NSEvent_type, 0, 0, NSEventType, MAY_BE_LONG)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSEvent_buttonNumber, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSEvent_subtype arginfo_class_NSEvent_buttonNumber

#define arginfo_class_NSEvent_modifierFlags arginfo_class_NSEvent_buttonNumber

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSEvent_timestamp, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSEvent_windowNumber arginfo_class_NSEvent_buttonNumber

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSEvent_locationInWindow, 0, 0, NSPoint, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSEvent_data1 arginfo_class_NSEvent_buttonNumber

#define arginfo_class_NSEvent_data2 arginfo_class_NSEvent_buttonNumber

ZEND_METHOD(NSEvent, otherEventWithTypeLocationModifierFlagsTimestampWindowNumberContextSubtypeData1Data2);
ZEND_METHOD(NSEvent, mouseEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberClickCountPressure);
ZEND_METHOD(NSEvent, type);
ZEND_METHOD(NSEvent, buttonNumber);
ZEND_METHOD(NSEvent, subtype);
ZEND_METHOD(NSEvent, modifierFlags);
ZEND_METHOD(NSEvent, timestamp);
ZEND_METHOD(NSEvent, windowNumber);
ZEND_METHOD(NSEvent, locationInWindow);
ZEND_METHOD(NSEvent, data1);
ZEND_METHOD(NSEvent, data2);

static const zend_function_entry class_NSEvent_methods[] = {
	ZEND_ME(NSEvent, otherEventWithTypeLocationModifierFlagsTimestampWindowNumberContextSubtypeData1Data2, arginfo_class_NSEvent_otherEventWithTypeLocationModifierFlagsTimestampWindowNumberContextSubtypeData1Data2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSEvent, mouseEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberClickCountPressure, arginfo_class_NSEvent_mouseEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberClickCountPressure, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSEvent, type, arginfo_class_NSEvent_type, ZEND_ACC_PUBLIC)
	ZEND_ME(NSEvent, buttonNumber, arginfo_class_NSEvent_buttonNumber, ZEND_ACC_PUBLIC)
	ZEND_ME(NSEvent, subtype, arginfo_class_NSEvent_subtype, ZEND_ACC_PUBLIC)
	ZEND_ME(NSEvent, modifierFlags, arginfo_class_NSEvent_modifierFlags, ZEND_ACC_PUBLIC)
	ZEND_ME(NSEvent, timestamp, arginfo_class_NSEvent_timestamp, ZEND_ACC_PUBLIC)
	ZEND_ME(NSEvent, windowNumber, arginfo_class_NSEvent_windowNumber, ZEND_ACC_PUBLIC)
	ZEND_ME(NSEvent, locationInWindow, arginfo_class_NSEvent_locationInWindow, ZEND_ACC_PUBLIC)
	ZEND_ME(NSEvent, data1, arginfo_class_NSEvent_data1, ZEND_ACC_PUBLIC)
	ZEND_ME(NSEvent, data2, arginfo_class_NSEvent_data2, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSEventType(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("NSEventType", IS_LONG, NULL);

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

	zval enum_case_MOUSE_ENTERED_value;
	ZVAL_LONG(&enum_case_MOUSE_ENTERED_value, 8);
	zend_enum_add_case_cstr(class_entry, "MOUSE_ENTERED", &enum_case_MOUSE_ENTERED_value);

	zval enum_case_MOUSE_EXITED_value;
	ZVAL_LONG(&enum_case_MOUSE_EXITED_value, 9);
	zend_enum_add_case_cstr(class_entry, "MOUSE_EXITED", &enum_case_MOUSE_EXITED_value);

	zval enum_case_KEY_DOWN_value;
	ZVAL_LONG(&enum_case_KEY_DOWN_value, 10);
	zend_enum_add_case_cstr(class_entry, "KEY_DOWN", &enum_case_KEY_DOWN_value);

	zval enum_case_KEY_UP_value;
	ZVAL_LONG(&enum_case_KEY_UP_value, 11);
	zend_enum_add_case_cstr(class_entry, "KEY_UP", &enum_case_KEY_UP_value);

	zval enum_case_FLAGS_CHANGED_value;
	ZVAL_LONG(&enum_case_FLAGS_CHANGED_value, 12);
	zend_enum_add_case_cstr(class_entry, "FLAGS_CHANGED", &enum_case_FLAGS_CHANGED_value);

	zval enum_case_APP_KIT_DEFINED_value;
	ZVAL_LONG(&enum_case_APP_KIT_DEFINED_value, 13);
	zend_enum_add_case_cstr(class_entry, "APP_KIT_DEFINED", &enum_case_APP_KIT_DEFINED_value);

	zval enum_case_SYSTEM_DEFINED_value;
	ZVAL_LONG(&enum_case_SYSTEM_DEFINED_value, 14);
	zend_enum_add_case_cstr(class_entry, "SYSTEM_DEFINED", &enum_case_SYSTEM_DEFINED_value);

	zval enum_case_APPLICATION_DEFINED_value;
	ZVAL_LONG(&enum_case_APPLICATION_DEFINED_value, 15);
	zend_enum_add_case_cstr(class_entry, "APPLICATION_DEFINED", &enum_case_APPLICATION_DEFINED_value);

	zval enum_case_PERIODIC_value;
	ZVAL_LONG(&enum_case_PERIODIC_value, 16);
	zend_enum_add_case_cstr(class_entry, "PERIODIC", &enum_case_PERIODIC_value);

	zval enum_case_CURSOR_UPDATE_value;
	ZVAL_LONG(&enum_case_CURSOR_UPDATE_value, 17);
	zend_enum_add_case_cstr(class_entry, "CURSOR_UPDATE", &enum_case_CURSOR_UPDATE_value);

	zval enum_case_SCROLL_WHEEL_value;
	ZVAL_LONG(&enum_case_SCROLL_WHEEL_value, 22);
	zend_enum_add_case_cstr(class_entry, "SCROLL_WHEEL", &enum_case_SCROLL_WHEEL_value);

	zval enum_case_TABLET_POINT_value;
	ZVAL_LONG(&enum_case_TABLET_POINT_value, 23);
	zend_enum_add_case_cstr(class_entry, "TABLET_POINT", &enum_case_TABLET_POINT_value);

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

	zval enum_case_GESTURE_value;
	ZVAL_LONG(&enum_case_GESTURE_value, 29);
	zend_enum_add_case_cstr(class_entry, "GESTURE", &enum_case_GESTURE_value);

	zval enum_case_MAGNIFY_value;
	ZVAL_LONG(&enum_case_MAGNIFY_value, 30);
	zend_enum_add_case_cstr(class_entry, "MAGNIFY", &enum_case_MAGNIFY_value);

	zval enum_case_SWIPE_value;
	ZVAL_LONG(&enum_case_SWIPE_value, 31);
	zend_enum_add_case_cstr(class_entry, "SWIPE", &enum_case_SWIPE_value);

	zval enum_case_ROTATE_value;
	ZVAL_LONG(&enum_case_ROTATE_value, 18);
	zend_enum_add_case_cstr(class_entry, "ROTATE", &enum_case_ROTATE_value);

	zval enum_case_BEGIN_GESTURE_value;
	ZVAL_LONG(&enum_case_BEGIN_GESTURE_value, 19);
	zend_enum_add_case_cstr(class_entry, "BEGIN_GESTURE", &enum_case_BEGIN_GESTURE_value);

	zval enum_case_END_GESTURE_value;
	ZVAL_LONG(&enum_case_END_GESTURE_value, 20);
	zend_enum_add_case_cstr(class_entry, "END_GESTURE", &enum_case_END_GESTURE_value);

	zval enum_case_SMART_MAGNIFY_value;
	ZVAL_LONG(&enum_case_SMART_MAGNIFY_value, 32);
	zend_enum_add_case_cstr(class_entry, "SMART_MAGNIFY", &enum_case_SMART_MAGNIFY_value);

	zval enum_case_QUICK_LOOK_value;
	ZVAL_LONG(&enum_case_QUICK_LOOK_value, 33);
	zend_enum_add_case_cstr(class_entry, "QUICK_LOOK", &enum_case_QUICK_LOOK_value);

	zval enum_case_PRESSURE_value;
	ZVAL_LONG(&enum_case_PRESSURE_value, 34);
	zend_enum_add_case_cstr(class_entry, "PRESSURE", &enum_case_PRESSURE_value);

	zval enum_case_DIRECT_TOUCH_value;
	ZVAL_LONG(&enum_case_DIRECT_TOUCH_value, 37);
	zend_enum_add_case_cstr(class_entry, "DIRECT_TOUCH", &enum_case_DIRECT_TOUCH_value);

	zval enum_case_CHANGE_MODE_value;
	ZVAL_LONG(&enum_case_CHANGE_MODE_value, 38);
	zend_enum_add_case_cstr(class_entry, "CHANGE_MODE", &enum_case_CHANGE_MODE_value);

	return class_entry;
}

static zend_class_entry *register_class_NSEventMask(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("NSEventMask", IS_LONG, NULL);

	zval enum_case_LEFT_MOUSE_DOWN_value;
	ZVAL_LONG(&enum_case_LEFT_MOUSE_DOWN_value, 2);
	zend_enum_add_case_cstr(class_entry, "LEFT_MOUSE_DOWN", &enum_case_LEFT_MOUSE_DOWN_value);

	zval enum_case_LEFT_MOUSE_UP_value;
	ZVAL_LONG(&enum_case_LEFT_MOUSE_UP_value, 4);
	zend_enum_add_case_cstr(class_entry, "LEFT_MOUSE_UP", &enum_case_LEFT_MOUSE_UP_value);

	zval enum_case_RIGHT_MOUSE_DOWN_value;
	ZVAL_LONG(&enum_case_RIGHT_MOUSE_DOWN_value, 8);
	zend_enum_add_case_cstr(class_entry, "RIGHT_MOUSE_DOWN", &enum_case_RIGHT_MOUSE_DOWN_value);

	zval enum_case_RIGHT_MOUSE_UP_value;
	ZVAL_LONG(&enum_case_RIGHT_MOUSE_UP_value, 16);
	zend_enum_add_case_cstr(class_entry, "RIGHT_MOUSE_UP", &enum_case_RIGHT_MOUSE_UP_value);

	zval enum_case_MOUSE_MOVED_value;
	ZVAL_LONG(&enum_case_MOUSE_MOVED_value, 32);
	zend_enum_add_case_cstr(class_entry, "MOUSE_MOVED", &enum_case_MOUSE_MOVED_value);

	zval enum_case_LEFT_MOUSE_DRAGGED_value;
	ZVAL_LONG(&enum_case_LEFT_MOUSE_DRAGGED_value, 64);
	zend_enum_add_case_cstr(class_entry, "LEFT_MOUSE_DRAGGED", &enum_case_LEFT_MOUSE_DRAGGED_value);

	zval enum_case_RIGHT_MOUSE_DRAGGED_value;
	ZVAL_LONG(&enum_case_RIGHT_MOUSE_DRAGGED_value, 128);
	zend_enum_add_case_cstr(class_entry, "RIGHT_MOUSE_DRAGGED", &enum_case_RIGHT_MOUSE_DRAGGED_value);

	zval enum_case_MOUSE_ENTERED_value;
	ZVAL_LONG(&enum_case_MOUSE_ENTERED_value, 256);
	zend_enum_add_case_cstr(class_entry, "MOUSE_ENTERED", &enum_case_MOUSE_ENTERED_value);

	zval enum_case_MOUSE_EXITED_value;
	ZVAL_LONG(&enum_case_MOUSE_EXITED_value, 512);
	zend_enum_add_case_cstr(class_entry, "MOUSE_EXITED", &enum_case_MOUSE_EXITED_value);

	zval enum_case_KEY_DOWN_value;
	ZVAL_LONG(&enum_case_KEY_DOWN_value, 1024);
	zend_enum_add_case_cstr(class_entry, "KEY_DOWN", &enum_case_KEY_DOWN_value);

	zval enum_case_KEY_UP_value;
	ZVAL_LONG(&enum_case_KEY_UP_value, 2048);
	zend_enum_add_case_cstr(class_entry, "KEY_UP", &enum_case_KEY_UP_value);

	zval enum_case_FLAGS_CHANGED_value;
	ZVAL_LONG(&enum_case_FLAGS_CHANGED_value, 4096);
	zend_enum_add_case_cstr(class_entry, "FLAGS_CHANGED", &enum_case_FLAGS_CHANGED_value);

	zval enum_case_APP_KIT_DEFINED_value;
	ZVAL_LONG(&enum_case_APP_KIT_DEFINED_value, 8192);
	zend_enum_add_case_cstr(class_entry, "APP_KIT_DEFINED", &enum_case_APP_KIT_DEFINED_value);

	zval enum_case_SYSTEM_DEFINED_value;
	ZVAL_LONG(&enum_case_SYSTEM_DEFINED_value, 16384);
	zend_enum_add_case_cstr(class_entry, "SYSTEM_DEFINED", &enum_case_SYSTEM_DEFINED_value);

	zval enum_case_APPLICATION_DEFINED_value;
	ZVAL_LONG(&enum_case_APPLICATION_DEFINED_value, 32768);
	zend_enum_add_case_cstr(class_entry, "APPLICATION_DEFINED", &enum_case_APPLICATION_DEFINED_value);

	zval enum_case_PERIODIC_value;
	ZVAL_LONG(&enum_case_PERIODIC_value, 65536);
	zend_enum_add_case_cstr(class_entry, "PERIODIC", &enum_case_PERIODIC_value);

	zval enum_case_CURSOR_UPDATE_value;
	ZVAL_LONG(&enum_case_CURSOR_UPDATE_value, 131072);
	zend_enum_add_case_cstr(class_entry, "CURSOR_UPDATE", &enum_case_CURSOR_UPDATE_value);

	zval enum_case_SCROLL_WHEEL_value;
	ZVAL_LONG(&enum_case_SCROLL_WHEEL_value, 4194304);
	zend_enum_add_case_cstr(class_entry, "SCROLL_WHEEL", &enum_case_SCROLL_WHEEL_value);

	zval enum_case_TABLET_POINT_value;
	ZVAL_LONG(&enum_case_TABLET_POINT_value, 8388608);
	zend_enum_add_case_cstr(class_entry, "TABLET_POINT", &enum_case_TABLET_POINT_value);

	zval enum_case_TABLET_PROXIMITY_value;
	ZVAL_LONG(&enum_case_TABLET_PROXIMITY_value, 16777216);
	zend_enum_add_case_cstr(class_entry, "TABLET_PROXIMITY", &enum_case_TABLET_PROXIMITY_value);

	zval enum_case_OTHER_MOUSE_DOWN_value;
	ZVAL_LONG(&enum_case_OTHER_MOUSE_DOWN_value, 33554432);
	zend_enum_add_case_cstr(class_entry, "OTHER_MOUSE_DOWN", &enum_case_OTHER_MOUSE_DOWN_value);

	zval enum_case_OTHER_MOUSE_UP_value;
	ZVAL_LONG(&enum_case_OTHER_MOUSE_UP_value, 67108864);
	zend_enum_add_case_cstr(class_entry, "OTHER_MOUSE_UP", &enum_case_OTHER_MOUSE_UP_value);

	zval enum_case_OTHER_MOUSE_DRAGGED_value;
	ZVAL_LONG(&enum_case_OTHER_MOUSE_DRAGGED_value, 134217728);
	zend_enum_add_case_cstr(class_entry, "OTHER_MOUSE_DRAGGED", &enum_case_OTHER_MOUSE_DRAGGED_value);

	zval enum_case_GESTURE_value;
	ZVAL_LONG(&enum_case_GESTURE_value, 536870912);
	zend_enum_add_case_cstr(class_entry, "GESTURE", &enum_case_GESTURE_value);

	zval enum_case_MAGNIFY_value;
	ZVAL_LONG(&enum_case_MAGNIFY_value, 1073741824);
	zend_enum_add_case_cstr(class_entry, "MAGNIFY", &enum_case_MAGNIFY_value);

	zval enum_case_SWIPE_value;
	ZVAL_LONG(&enum_case_SWIPE_value, 2147483648);
	zend_enum_add_case_cstr(class_entry, "SWIPE", &enum_case_SWIPE_value);

	zval enum_case_ROTATE_value;
	ZVAL_LONG(&enum_case_ROTATE_value, 262144);
	zend_enum_add_case_cstr(class_entry, "ROTATE", &enum_case_ROTATE_value);

	zval enum_case_BEGIN_GESTURE_value;
	ZVAL_LONG(&enum_case_BEGIN_GESTURE_value, 524288);
	zend_enum_add_case_cstr(class_entry, "BEGIN_GESTURE", &enum_case_BEGIN_GESTURE_value);

	zval enum_case_END_GESTURE_value;
	ZVAL_LONG(&enum_case_END_GESTURE_value, 1048576);
	zend_enum_add_case_cstr(class_entry, "END_GESTURE", &enum_case_END_GESTURE_value);

	zval enum_case_SMART_MAGNIFY_value;
	ZVAL_LONG(&enum_case_SMART_MAGNIFY_value, 4294967296);
	zend_enum_add_case_cstr(class_entry, "SMART_MAGNIFY", &enum_case_SMART_MAGNIFY_value);

	zval enum_case_PRESSURE_value;
	ZVAL_LONG(&enum_case_PRESSURE_value, 17179869184);
	zend_enum_add_case_cstr(class_entry, "PRESSURE", &enum_case_PRESSURE_value);

	zval enum_case_DIRECT_TOUCH_value;
	ZVAL_LONG(&enum_case_DIRECT_TOUCH_value, 137438953472);
	zend_enum_add_case_cstr(class_entry, "DIRECT_TOUCH", &enum_case_DIRECT_TOUCH_value);

	zval enum_case_CHANGE_MODE_value;
	ZVAL_LONG(&enum_case_CHANGE_MODE_value, 274877906944);
	zend_enum_add_case_cstr(class_entry, "CHANGE_MODE", &enum_case_CHANGE_MODE_value);

	zval enum_case_ANY_value;
	ZVAL_LONG(&enum_case_ANY_value, -1);
	zend_enum_add_case_cstr(class_entry, "ANY", &enum_case_ANY_value);

	return class_entry;
}

static zend_class_entry *register_class_NSEventModifierFlags(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("NSEventModifierFlags", IS_LONG, NULL);

	zval enum_case_CAPS_LOCK_value;
	ZVAL_LONG(&enum_case_CAPS_LOCK_value, 65536);
	zend_enum_add_case_cstr(class_entry, "CAPS_LOCK", &enum_case_CAPS_LOCK_value);

	zval enum_case_SHIFT_value;
	ZVAL_LONG(&enum_case_SHIFT_value, 131072);
	zend_enum_add_case_cstr(class_entry, "SHIFT", &enum_case_SHIFT_value);

	zval enum_case_CONTROL_value;
	ZVAL_LONG(&enum_case_CONTROL_value, 262144);
	zend_enum_add_case_cstr(class_entry, "CONTROL", &enum_case_CONTROL_value);

	zval enum_case_OPTION_value;
	ZVAL_LONG(&enum_case_OPTION_value, 524288);
	zend_enum_add_case_cstr(class_entry, "OPTION", &enum_case_OPTION_value);

	zval enum_case_COMMAND_value;
	ZVAL_LONG(&enum_case_COMMAND_value, 1048576);
	zend_enum_add_case_cstr(class_entry, "COMMAND", &enum_case_COMMAND_value);

	zval enum_case_NUMERIC_PAD_value;
	ZVAL_LONG(&enum_case_NUMERIC_PAD_value, 2097152);
	zend_enum_add_case_cstr(class_entry, "NUMERIC_PAD", &enum_case_NUMERIC_PAD_value);

	zval enum_case_HELP_value;
	ZVAL_LONG(&enum_case_HELP_value, 4194304);
	zend_enum_add_case_cstr(class_entry, "HELP", &enum_case_HELP_value);

	zval enum_case_FUNCTION_value;
	ZVAL_LONG(&enum_case_FUNCTION_value, 8388608);
	zend_enum_add_case_cstr(class_entry, "FUNCTION", &enum_case_FUNCTION_value);

	zval enum_case_DEVICE_INDEPENDENT_FLAGS_MASK_value;
	ZVAL_LONG(&enum_case_DEVICE_INDEPENDENT_FLAGS_MASK_value, 4294901760);
	zend_enum_add_case_cstr(class_entry, "DEVICE_INDEPENDENT_FLAGS_MASK", &enum_case_DEVICE_INDEPENDENT_FLAGS_MASK_value);

	return class_entry;
}

static zend_class_entry *register_class_NSEvent(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSEvent", class_NSEvent_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
