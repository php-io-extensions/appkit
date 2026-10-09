#include "runtime.h"
#include "controls.h"
#include "../stubs/NSScreen_arginfo.h"

void appkit_register_NSScreen(void)
{
	APPKIT_MAP(NSScreen, appkit_ce_NSObject);
}

#define THIS_SCREEN SELF(NSScreen)

METHOD(NSScreen, mainScreen, PARSE_NONE, appkit_box_objc(return_value, [NSScreen mainScreen]);)

ZEND_METHOD(NSScreen, screens)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		array_init(return_value);
		for (NSScreen *screen in [NSScreen screens]) {
			zval boxed;
			appkit_box_objc(&boxed, screen);
			add_next_index_zval(return_value, &boxed);
		}
	APPKIT_END
}

METHOD(NSScreen, frame, PARSE_NONE, appkit_return_rect(return_value, [THIS_SCREEN frame]);)
METHOD(NSScreen, visibleFrame, PARSE_NONE, appkit_return_rect(return_value, [THIS_SCREEN visibleFrame]);)
DOUBLE_GET(NSScreen, NSScreen, backingScaleFactor, backingScaleFactor)
LONG_GET(NSScreen, NSScreen, maximumFramesPerSecond, maximumFramesPerSecond)
STR_GET(NSScreen, NSScreen, localizedName, localizedName)
DOUBLE_GET(NSScreen, NSScreen, maximumExtendedDynamicRangeColorComponentValue, maximumExtendedDynamicRangeColorComponentValue)
DOUBLE_GET(NSScreen, NSScreen, maximumPotentialExtendedDynamicRangeColorComponentValue, maximumPotentialExtendedDynamicRangeColorComponentValue)

ZEND_METHOD(NSScreen, deviceDescription)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		NSDictionary<NSDeviceDescriptionKey, id> *description = [THIS_SCREEN deviceDescription];

		array_init(return_value);
		for (NSString *key in description) {
			zval value;
			appkit_zval_from_id(&value, description[key]);
			add_assoc_zval_ex(return_value, [key UTF8String], strlen([key UTF8String]), &value);
		}
	APPKIT_END
}
