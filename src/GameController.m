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
	APPKIT_REQUIRE_MAIN_THREAD();

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
	APPKIT_REQUIRE_MAIN_THREAD();

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

METHOD(GCController, stopWirelessControllerDiscovery, PARSE_NONE, [GCController stopWirelessControllerDiscovery];)
METHOD(GCController, shouldMonitorBackgroundEvents, PARSE_NONE,
	if (@available(macOS 11.3, *)) { RETURN_BOOL(GCController.shouldMonitorBackgroundEvents); }
	RETURN_FALSE;)
METHOD(GCController, setShouldMonitorBackgroundEvents, PARSE_BOOL,
	if (@available(macOS 11.3, *)) { GCController.shouldMonitorBackgroundEvents = v; })
STR_GET_OR_NULL(GCController, GCController, vendorName, vendorName)
OBJ_GET(GCController, GCController, extendedGamepad, extendedGamepad)
OBJ_GET(GCController, GCController, microGamepad, microGamepad)
METHOD(GCController, playerIndex, PARSE_NONE,
	appkit_return_enum(return_value, appkit_ce_GCControllerPlayerIndex, (zend_long) [SELF(GCController) playerIndex], false);)
METHOD(GCController, setPlayerIndex, PARSE_OBJ(appkit_ce_GCControllerPlayerIndex),
	[SELF(GCController) setPlayerIndex:(GCControllerPlayerIndex) appkit_enum_value(v, GCControllerPlayerIndexUnset)];)

OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, dpad, dpad)
OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, buttonA, buttonA)
OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, buttonB, buttonB)
OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, buttonX, buttonX)
OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, buttonY, buttonY)
OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, leftThumbstick, leftThumbstick)
OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, rightThumbstick, rightThumbstick)
OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, leftShoulder, leftShoulder)
OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, rightShoulder, rightShoulder)
OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, leftTrigger, leftTrigger)
OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, rightTrigger, rightTrigger)
OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, buttonMenu, buttonMenu)
OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, buttonOptions, buttonOptions)
OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, buttonHome, buttonHome)
OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, leftThumbstickButton, leftThumbstickButton)
OBJ_GET(GCExtendedGamepad, GCExtendedGamepad, rightThumbstickButton, rightThumbstickButton)

OBJ_GET(GCMicroGamepad, GCMicroGamepad, dpad, dpad)
OBJ_GET(GCMicroGamepad, GCMicroGamepad, buttonA, buttonA)
OBJ_GET(GCMicroGamepad, GCMicroGamepad, buttonX, buttonX)
OBJ_GET(GCMicroGamepad, GCMicroGamepad, buttonMenu, buttonMenu)

BOOL_GET(GCControllerButtonInput, GCControllerButtonInput, isPressed, isPressed)
DOUBLE_GET(GCControllerButtonInput, GCControllerButtonInput, value, value)
DOUBLE_GET(GCControllerAxisInput, GCControllerAxisInput, value, value)

OBJ_GET(GCControllerDirectionPad, GCControllerDirectionPad, xAxis, xAxis)
OBJ_GET(GCControllerDirectionPad, GCControllerDirectionPad, yAxis, yAxis)
OBJ_GET(GCControllerDirectionPad, GCControllerDirectionPad, up, up)
OBJ_GET(GCControllerDirectionPad, GCControllerDirectionPad, down, down)
OBJ_GET(GCControllerDirectionPad, GCControllerDirectionPad, left, left)
OBJ_GET(GCControllerDirectionPad, GCControllerDirectionPad, right, right)
