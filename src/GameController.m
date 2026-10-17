#include "runtime.h"
#include "controls.h"
#include "zend_closures.h"

#import <GameController/GameController.h>

#include "../stubs/GameController_arginfo.h"

void appkit_register_GameController(int module_number)
{
	register_GameController_symbols(module_number);

	appkit_ce_GCControllerPlayerIndex = register_class_GCControllerPlayerIndex();
	APPKIT_MAP(GCController, appkit_ce_NSObject);
	APPKIT_MAP(GCPhysicalInputProfile, appkit_ce_NSObject);
	APPKIT_MAP(GCExtendedGamepad, appkit_ce_GCPhysicalInputProfile);
	APPKIT_MAP(GCMicroGamepad, appkit_ce_GCPhysicalInputProfile);
	APPKIT_MAP(GCControllerElement, appkit_ce_NSObject);
	APPKIT_MAP(GCControllerButtonInput, appkit_ce_GCControllerElement);
	APPKIT_MAP(GCControllerAxisInput, appkit_ce_GCControllerElement);
	APPKIT_MAP(GCControllerDirectionPad, appkit_ce_GCControllerElement);
}

ZEND_METHOD(GCController, controllers)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		array_init(return_value);
		for (GCController *controller in [GCController controllers]) {
			zval boxed;
			appkit_box_objc(&boxed, controller);
			add_next_index_zval(return_value, &boxed);
		}
	APPKIT_END
}

/* The completion handler is a callout, as NSNotificationCenter's blocks are: the holder owns it for the block's lifetime. */
ZEND_METHOD(GCController, startWirelessControllerDiscoveryWithCompletionHandler)
{
	zend_object *handler = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(handler, zend_ce_closure)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		if (handler == NULL) {
			[GCController startWirelessControllerDiscoveryWithCompletionHandler:nil];
		} else {
			zval callable;
			ZVAL_OBJ(&callable, handler);
			PHPAppKitBlockCallout *holder = [[[PHPAppKitBlockCallout alloc] init] autorelease];
			holder->callout = appkit_callout_new(&callable, NULL);
			appkit_callout_retain(holder->callout);

			[GCController startWirelessControllerDiscoveryWithCompletionHandler:^{
				if (appkit_callout_can_enter(holder->callout)) {
					appkit_callout_invoke(holder->callout, 0, NULL);
				}
			}];
		}
	APPKIT_END
}

ANY_METHOD(GCController, stopWirelessControllerDiscovery, PARSE_NONE, [GCController stopWirelessControllerDiscovery];)
ANY_METHOD(GCController, shouldMonitorBackgroundEvents, PARSE_NONE,
	RETURN_BOOL(GCController.shouldMonitorBackgroundEvents);)
ANY_METHOD(GCController, setShouldMonitorBackgroundEvents, PARSE_BOOL,
	GCController.shouldMonitorBackgroundEvents = v;)
ANY_STR_GET_OR_NULL(GCController, GCController, vendorName, vendorName)
ANY_OBJ_GET(GCController, GCController, extendedGamepad, extendedGamepad)
ANY_OBJ_GET(GCController, GCController, microGamepad, microGamepad)
ANY_METHOD(GCController, playerIndex, PARSE_NONE,
	appkit_return_enum(return_value, appkit_ce_GCControllerPlayerIndex, (zend_long) [SELF(GCController) playerIndex], false);)
ANY_METHOD(GCController, setPlayerIndex, PARSE_OBJ(appkit_ce_GCControllerPlayerIndex),
	[SELF(GCController) setPlayerIndex:(GCControllerPlayerIndex) appkit_enum_value(v, GCControllerPlayerIndexUnset)];)

ANY_OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, dpad, dpad)
ANY_OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, buttonA, buttonA)
ANY_OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, buttonB, buttonB)
ANY_OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, buttonX, buttonX)
ANY_OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, buttonY, buttonY)
ANY_OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, leftThumbstick, leftThumbstick)
ANY_OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, rightThumbstick, rightThumbstick)
ANY_OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, leftShoulder, leftShoulder)
ANY_OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, rightShoulder, rightShoulder)
ANY_OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, leftTrigger, leftTrigger)
ANY_OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, rightTrigger, rightTrigger)
ANY_OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, buttonMenu, buttonMenu)
ANY_OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, buttonOptions, buttonOptions)
ANY_OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, buttonHome, buttonHome)
ANY_OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, leftThumbstickButton, leftThumbstickButton)
ANY_OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, rightThumbstickButton, rightThumbstickButton)

ANY_OBJ_GET(GCMicroGamepad, GCMicroGamepad, dpad, dpad)
ANY_OBJ_GET(GCMicroGamepad, GCMicroGamepad, buttonA, buttonA)
ANY_OBJ_GET(GCMicroGamepad, GCMicroGamepad, buttonX, buttonX)
ANY_OBJ_GET(GCMicroGamepad, GCMicroGamepad, buttonMenu, buttonMenu)

ANY_BOOL_GET(GCControllerButtonInput, GCControllerButtonInput, isPressed, isPressed)
ANY_DOUBLE_GET(GCControllerButtonInput, GCControllerButtonInput, value, value)
ANY_DOUBLE_GET(GCControllerAxisInput, GCControllerAxisInput, value, value)

ANY_OBJ_GET(GCControllerDirectionPad, GCControllerDirectionPad, xAxis, xAxis)
ANY_OBJ_GET(GCControllerDirectionPad, GCControllerDirectionPad, yAxis, yAxis)
ANY_OBJ_GET(GCControllerDirectionPad, GCControllerDirectionPad, up, up)
ANY_OBJ_GET(GCControllerDirectionPad, GCControllerDirectionPad, down, down)
ANY_OBJ_GET(GCControllerDirectionPad, GCControllerDirectionPad, left, left)
ANY_OBJ_GET(GCControllerDirectionPad, GCControllerDirectionPad, right, right)
