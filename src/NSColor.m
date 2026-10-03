#include "runtime.h"
#include "../stubs/NSColor_arginfo.h"

void appkit_register_NSColor(void)
{
	appkit_ce_NSColor = register_class_NSColor(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_NSColor);
	appkit_map_objc_class("NSColor", appkit_ce_NSColor);
}

#define THIS_COLOR ((NSColor *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(NSColor, colorWithRedGreenBlueAlpha)
{
	double red, green, blue, alpha;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_DOUBLE(red)
		Z_PARAM_DOUBLE(green)
		Z_PARAM_DOUBLE(blue)
		Z_PARAM_DOUBLE(alpha)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [NSColor colorWithRed:red green:green blue:blue alpha:alpha]);
	APPKIT_END
}

/* Components are read in sRGB so a catalog or pattern colour answers too. */
#define APPKIT_COLOR_COMPONENT(name, sel) \
ZEND_METHOD(NSColor, name) \
{ \
	ZEND_PARSE_PARAMETERS_NONE(); \
	APPKIT_BEGIN \
		NSColor *srgb = [THIS_COLOR colorUsingColorSpace:[NSColorSpace sRGBColorSpace]]; \
		if (srgb == nil) { \
			zend_throw_exception_ex(appkit_ce_AppKitException, 0, "NSColor::%s(): the colour has no sRGB components", #name); \
			RETURN_THROWS(); \
		} \
		RETURN_DOUBLE([srgb sel]); \
	APPKIT_END \
}

APPKIT_COLOR_COMPONENT(redComponent, redComponent)
APPKIT_COLOR_COMPONENT(greenComponent, greenComponent)
APPKIT_COLOR_COMPONENT(blueComponent, blueComponent)
APPKIT_COLOR_COMPONENT(alphaComponent, alphaComponent)
