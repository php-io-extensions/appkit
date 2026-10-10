/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 966e3ef4ce2368d6b911e771d2c8ed8ad28f1968 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GCController_controllers, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GCController_startWirelessControllerDiscoveryWithCompletionHandler, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, completionHandler, Closure, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GCController_stopWirelessControllerDiscovery, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GCController_shouldMonitorBackgroundEvents, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GCController_setShouldMonitorBackgroundEvents, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, shouldMonitorBackgroundEvents, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GCController_vendorName, 0, 0, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_GCController_extendedGamepad, 0, 0, GCExtendedGamepad, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_GCController_microGamepad, 0, 0, GCMicroGamepad, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_GCController_playerIndex, 0, 0, GCControllerPlayerIndex, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GCController_setPlayerIndex, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, playerIndex, GCControllerPlayerIndex, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_GCExtendedGamepad_dpad, 0, 0, GCControllerDirectionPad, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_GCExtendedGamepad_buttonA, 0, 0, GCControllerButtonInput, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GCExtendedGamepad_buttonB arginfo_class_GCExtendedGamepad_buttonA

#define arginfo_class_GCExtendedGamepad_buttonX arginfo_class_GCExtendedGamepad_buttonA

#define arginfo_class_GCExtendedGamepad_buttonY arginfo_class_GCExtendedGamepad_buttonA

#define arginfo_class_GCExtendedGamepad_leftThumbstick arginfo_class_GCExtendedGamepad_dpad

#define arginfo_class_GCExtendedGamepad_rightThumbstick arginfo_class_GCExtendedGamepad_dpad

#define arginfo_class_GCExtendedGamepad_leftShoulder arginfo_class_GCExtendedGamepad_buttonA

#define arginfo_class_GCExtendedGamepad_rightShoulder arginfo_class_GCExtendedGamepad_buttonA

#define arginfo_class_GCExtendedGamepad_leftTrigger arginfo_class_GCExtendedGamepad_buttonA

#define arginfo_class_GCExtendedGamepad_rightTrigger arginfo_class_GCExtendedGamepad_buttonA

#define arginfo_class_GCExtendedGamepad_buttonMenu arginfo_class_GCExtendedGamepad_buttonA

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_GCExtendedGamepad_buttonOptions, 0, 0, GCControllerButtonInput, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_GCExtendedGamepad_buttonHome arginfo_class_GCExtendedGamepad_buttonOptions

#define arginfo_class_GCExtendedGamepad_leftThumbstickButton arginfo_class_GCExtendedGamepad_buttonOptions

#define arginfo_class_GCExtendedGamepad_rightThumbstickButton arginfo_class_GCExtendedGamepad_buttonOptions

#define arginfo_class_GCMicroGamepad_dpad arginfo_class_GCExtendedGamepad_dpad

#define arginfo_class_GCMicroGamepad_buttonA arginfo_class_GCExtendedGamepad_buttonA

#define arginfo_class_GCMicroGamepad_buttonX arginfo_class_GCExtendedGamepad_buttonA

#define arginfo_class_GCMicroGamepad_buttonMenu arginfo_class_GCExtendedGamepad_buttonA

#define arginfo_class_GCControllerButtonInput_isPressed arginfo_class_GCController_shouldMonitorBackgroundEvents

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GCControllerButtonInput_value, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GCControllerAxisInput_value arginfo_class_GCControllerButtonInput_value

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_GCControllerDirectionPad_xAxis, 0, 0, GCControllerAxisInput, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GCControllerDirectionPad_yAxis arginfo_class_GCControllerDirectionPad_xAxis

#define arginfo_class_GCControllerDirectionPad_up arginfo_class_GCExtendedGamepad_buttonA

#define arginfo_class_GCControllerDirectionPad_down arginfo_class_GCExtendedGamepad_buttonA

#define arginfo_class_GCControllerDirectionPad_left arginfo_class_GCExtendedGamepad_buttonA

#define arginfo_class_GCControllerDirectionPad_right arginfo_class_GCExtendedGamepad_buttonA

ZEND_METHOD(GCController, controllers);
ZEND_METHOD(GCController, startWirelessControllerDiscoveryWithCompletionHandler);
ZEND_METHOD(GCController, stopWirelessControllerDiscovery);
ZEND_METHOD(GCController, shouldMonitorBackgroundEvents);
ZEND_METHOD(GCController, setShouldMonitorBackgroundEvents);
ZEND_METHOD(GCController, vendorName);
ZEND_METHOD(GCController, extendedGamepad);
ZEND_METHOD(GCController, microGamepad);
ZEND_METHOD(GCController, playerIndex);
ZEND_METHOD(GCController, setPlayerIndex);
ZEND_METHOD(GCExtendedGamepad, dpad);
ZEND_METHOD(GCExtendedGamepad, buttonA);
ZEND_METHOD(GCExtendedGamepad, buttonB);
ZEND_METHOD(GCExtendedGamepad, buttonX);
ZEND_METHOD(GCExtendedGamepad, buttonY);
ZEND_METHOD(GCExtendedGamepad, leftThumbstick);
ZEND_METHOD(GCExtendedGamepad, rightThumbstick);
ZEND_METHOD(GCExtendedGamepad, leftShoulder);
ZEND_METHOD(GCExtendedGamepad, rightShoulder);
ZEND_METHOD(GCExtendedGamepad, leftTrigger);
ZEND_METHOD(GCExtendedGamepad, rightTrigger);
ZEND_METHOD(GCExtendedGamepad, buttonMenu);
ZEND_METHOD(GCExtendedGamepad, buttonOptions);
ZEND_METHOD(GCExtendedGamepad, buttonHome);
ZEND_METHOD(GCExtendedGamepad, leftThumbstickButton);
ZEND_METHOD(GCExtendedGamepad, rightThumbstickButton);
ZEND_METHOD(GCMicroGamepad, dpad);
ZEND_METHOD(GCMicroGamepad, buttonA);
ZEND_METHOD(GCMicroGamepad, buttonX);
ZEND_METHOD(GCMicroGamepad, buttonMenu);
ZEND_METHOD(GCControllerButtonInput, isPressed);
ZEND_METHOD(GCControllerButtonInput, value);
ZEND_METHOD(GCControllerAxisInput, value);
ZEND_METHOD(GCControllerDirectionPad, xAxis);
ZEND_METHOD(GCControllerDirectionPad, yAxis);
ZEND_METHOD(GCControllerDirectionPad, up);
ZEND_METHOD(GCControllerDirectionPad, down);
ZEND_METHOD(GCControllerDirectionPad, left);
ZEND_METHOD(GCControllerDirectionPad, right);

static const zend_function_entry class_GCController_methods[] = {
	ZEND_ME(GCController, controllers, arginfo_class_GCController_controllers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(GCController, startWirelessControllerDiscoveryWithCompletionHandler, arginfo_class_GCController_startWirelessControllerDiscoveryWithCompletionHandler, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(GCController, stopWirelessControllerDiscovery, arginfo_class_GCController_stopWirelessControllerDiscovery, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(GCController, shouldMonitorBackgroundEvents, arginfo_class_GCController_shouldMonitorBackgroundEvents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(GCController, setShouldMonitorBackgroundEvents, arginfo_class_GCController_setShouldMonitorBackgroundEvents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(GCController, vendorName, arginfo_class_GCController_vendorName, ZEND_ACC_PUBLIC)
	ZEND_ME(GCController, extendedGamepad, arginfo_class_GCController_extendedGamepad, ZEND_ACC_PUBLIC)
	ZEND_ME(GCController, microGamepad, arginfo_class_GCController_microGamepad, ZEND_ACC_PUBLIC)
	ZEND_ME(GCController, playerIndex, arginfo_class_GCController_playerIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(GCController, setPlayerIndex, arginfo_class_GCController_setPlayerIndex, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_GCExtendedGamepad_methods[] = {
	ZEND_ME(GCExtendedGamepad, dpad, arginfo_class_GCExtendedGamepad_dpad, ZEND_ACC_PUBLIC)
	ZEND_ME(GCExtendedGamepad, buttonA, arginfo_class_GCExtendedGamepad_buttonA, ZEND_ACC_PUBLIC)
	ZEND_ME(GCExtendedGamepad, buttonB, arginfo_class_GCExtendedGamepad_buttonB, ZEND_ACC_PUBLIC)
	ZEND_ME(GCExtendedGamepad, buttonX, arginfo_class_GCExtendedGamepad_buttonX, ZEND_ACC_PUBLIC)
	ZEND_ME(GCExtendedGamepad, buttonY, arginfo_class_GCExtendedGamepad_buttonY, ZEND_ACC_PUBLIC)
	ZEND_ME(GCExtendedGamepad, leftThumbstick, arginfo_class_GCExtendedGamepad_leftThumbstick, ZEND_ACC_PUBLIC)
	ZEND_ME(GCExtendedGamepad, rightThumbstick, arginfo_class_GCExtendedGamepad_rightThumbstick, ZEND_ACC_PUBLIC)
	ZEND_ME(GCExtendedGamepad, leftShoulder, arginfo_class_GCExtendedGamepad_leftShoulder, ZEND_ACC_PUBLIC)
	ZEND_ME(GCExtendedGamepad, rightShoulder, arginfo_class_GCExtendedGamepad_rightShoulder, ZEND_ACC_PUBLIC)
	ZEND_ME(GCExtendedGamepad, leftTrigger, arginfo_class_GCExtendedGamepad_leftTrigger, ZEND_ACC_PUBLIC)
	ZEND_ME(GCExtendedGamepad, rightTrigger, arginfo_class_GCExtendedGamepad_rightTrigger, ZEND_ACC_PUBLIC)
	ZEND_ME(GCExtendedGamepad, buttonMenu, arginfo_class_GCExtendedGamepad_buttonMenu, ZEND_ACC_PUBLIC)
	ZEND_ME(GCExtendedGamepad, buttonOptions, arginfo_class_GCExtendedGamepad_buttonOptions, ZEND_ACC_PUBLIC)
	ZEND_ME(GCExtendedGamepad, buttonHome, arginfo_class_GCExtendedGamepad_buttonHome, ZEND_ACC_PUBLIC)
	ZEND_ME(GCExtendedGamepad, leftThumbstickButton, arginfo_class_GCExtendedGamepad_leftThumbstickButton, ZEND_ACC_PUBLIC)
	ZEND_ME(GCExtendedGamepad, rightThumbstickButton, arginfo_class_GCExtendedGamepad_rightThumbstickButton, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_GCMicroGamepad_methods[] = {
	ZEND_ME(GCMicroGamepad, dpad, arginfo_class_GCMicroGamepad_dpad, ZEND_ACC_PUBLIC)
	ZEND_ME(GCMicroGamepad, buttonA, arginfo_class_GCMicroGamepad_buttonA, ZEND_ACC_PUBLIC)
	ZEND_ME(GCMicroGamepad, buttonX, arginfo_class_GCMicroGamepad_buttonX, ZEND_ACC_PUBLIC)
	ZEND_ME(GCMicroGamepad, buttonMenu, arginfo_class_GCMicroGamepad_buttonMenu, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_GCControllerButtonInput_methods[] = {
	ZEND_ME(GCControllerButtonInput, isPressed, arginfo_class_GCControllerButtonInput_isPressed, ZEND_ACC_PUBLIC)
	ZEND_ME(GCControllerButtonInput, value, arginfo_class_GCControllerButtonInput_value, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_GCControllerAxisInput_methods[] = {
	ZEND_ME(GCControllerAxisInput, value, arginfo_class_GCControllerAxisInput_value, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_GCControllerDirectionPad_methods[] = {
	ZEND_ME(GCControllerDirectionPad, xAxis, arginfo_class_GCControllerDirectionPad_xAxis, ZEND_ACC_PUBLIC)
	ZEND_ME(GCControllerDirectionPad, yAxis, arginfo_class_GCControllerDirectionPad_yAxis, ZEND_ACC_PUBLIC)
	ZEND_ME(GCControllerDirectionPad, up, arginfo_class_GCControllerDirectionPad_up, ZEND_ACC_PUBLIC)
	ZEND_ME(GCControllerDirectionPad, down, arginfo_class_GCControllerDirectionPad_down, ZEND_ACC_PUBLIC)
	ZEND_ME(GCControllerDirectionPad, left, arginfo_class_GCControllerDirectionPad_left, ZEND_ACC_PUBLIC)
	ZEND_ME(GCControllerDirectionPad, right, arginfo_class_GCControllerDirectionPad_right, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_GameController_symbols(int module_number)
{
	REGISTER_STRING_CONSTANT("GCControllerDidConnectNotification", appkit_cfstring_constant((CFStringRef) GCControllerDidConnectNotification), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("GCControllerDidDisconnectNotification", appkit_cfstring_constant((CFStringRef) GCControllerDidDisconnectNotification), CONST_PERSISTENT);
}

static zend_class_entry *register_class_GCControllerPlayerIndex(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("GCControllerPlayerIndex", IS_LONG, NULL);

	zval enum_case_UNSET_value;
	ZVAL_LONG(&enum_case_UNSET_value, -1);
	zend_enum_add_case_cstr(class_entry, "UNSET", &enum_case_UNSET_value);

	zval enum_case_INDEX_1_value;
	ZVAL_LONG(&enum_case_INDEX_1_value, 0);
	zend_enum_add_case_cstr(class_entry, "INDEX_1", &enum_case_INDEX_1_value);

	zval enum_case_INDEX_2_value;
	ZVAL_LONG(&enum_case_INDEX_2_value, 1);
	zend_enum_add_case_cstr(class_entry, "INDEX_2", &enum_case_INDEX_2_value);

	zval enum_case_INDEX_3_value;
	ZVAL_LONG(&enum_case_INDEX_3_value, 2);
	zend_enum_add_case_cstr(class_entry, "INDEX_3", &enum_case_INDEX_3_value);

	zval enum_case_INDEX_4_value;
	ZVAL_LONG(&enum_case_INDEX_4_value, 3);
	zend_enum_add_case_cstr(class_entry, "INDEX_4", &enum_case_INDEX_4_value);

	return class_entry;
}

static zend_class_entry *register_class_GCController(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "GCController", class_GCController_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_GCPhysicalInputProfile(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "GCPhysicalInputProfile", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_GCExtendedGamepad(zend_class_entry *class_entry_GCPhysicalInputProfile)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "GCExtendedGamepad", class_GCExtendedGamepad_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_GCPhysicalInputProfile, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_GCMicroGamepad(zend_class_entry *class_entry_GCPhysicalInputProfile)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "GCMicroGamepad", class_GCMicroGamepad_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_GCPhysicalInputProfile, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_GCControllerElement(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "GCControllerElement", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_GCControllerButtonInput(zend_class_entry *class_entry_GCControllerElement)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "GCControllerButtonInput", class_GCControllerButtonInput_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_GCControllerElement, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_GCControllerAxisInput(zend_class_entry *class_entry_GCControllerElement)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "GCControllerAxisInput", class_GCControllerAxisInput_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_GCControllerElement, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_GCControllerDirectionPad(zend_class_entry *class_entry_GCControllerElement)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "GCControllerDirectionPad", class_GCControllerDirectionPad_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_GCControllerElement, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
