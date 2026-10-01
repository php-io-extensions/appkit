#include "runtime.h"
#include "../stubs/NSView_arginfo.h"

void appkit_register_NSView(void)
{
	appkit_ce_NSView = register_class_NSView(appkit_ce_NSResponder);
	appkit_object_setup(appkit_ce_NSView);
	appkit_map_objc_class("NSView", appkit_ce_NSView);
}

#define THIS_VIEW ((NSView *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(NSView, frame)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_return_rect(return_value, [THIS_VIEW frame]);
	APPKIT_END
}

ZEND_METHOD(NSView, window)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_VIEW window]);
	APPKIT_END
}
