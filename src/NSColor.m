#include "runtime.h"
#include "../stubs/NSColor_arginfo.h"

void appkit_register_NSColor(void)
{
	appkit_ce_NSColor = register_class_NSColor(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_NSColor);
	appkit_map_objc_class("NSColor", appkit_ce_NSColor);
	appkit_ce_NSColorSpace = register_class_NSColorSpace(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_NSColorSpace);
	appkit_map_objc_class("NSColorSpace", appkit_ce_NSColorSpace);
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

/* The component of the colour as it is: AppKit raises for a colour without RGB components (translated). */
#define APPKIT_COLOR_COMPONENT(name, sel) \
ZEND_METHOD(NSColor, name) \
{ \
	ZEND_PARSE_PARAMETERS_NONE(); \
	APPKIT_BEGIN \
		RETURN_DOUBLE([THIS_COLOR sel]); \
	APPKIT_END \
}

APPKIT_COLOR_COMPONENT(redComponent, redComponent)
APPKIT_COLOR_COMPONENT(greenComponent, greenComponent)
APPKIT_COLOR_COMPONENT(blueComponent, blueComponent)
APPKIT_COLOR_COMPONENT(alphaComponent, alphaComponent)

ZEND_METHOD(NSColor, CGColor)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		appkit_box_cf(return_value, [THIS_COLOR CGColor]);
	APPKIT_END
}

ZEND_METHOD(NSColor, colorWithCGColor)
{
	zend_object *color;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(color, appkit_ce_CGColor)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [NSColor colorWithCGColor:(CGColorRef) APPKIT_CF(color)]);
	APPKIT_END
}

ZEND_METHOD(NSColor, colorUsingColorSpace)
{
	zend_object *space;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(space, appkit_ce_NSColorSpace)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_COLOR colorUsingColorSpace:(NSColorSpace *) APPKIT_ID(space)]);
	APPKIT_END
}

#define THIS_COLOR_SPACE ((NSColorSpace *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(NSColorSpace, initWithCGColorSpace)
{
	zend_object *space;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(space, appkit_ce_CGColorSpace)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		NSColorSpace *made = [[NSColorSpace alloc] initWithCGColorSpace:(CGColorSpaceRef) APPKIT_CF(space)];
		if (made == nil) {
			RETVAL_NULL();
		} else {
			appkit_box_objc(return_value, made);
			[made release];
		}
	APPKIT_END
}

ZEND_METHOD(NSColorSpace, sRGBColorSpace)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [NSColorSpace sRGBColorSpace]);
	APPKIT_END
}

ZEND_METHOD(NSColorSpace, displayP3ColorSpace)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [NSColorSpace displayP3ColorSpace]);
	APPKIT_END
}

ZEND_METHOD(NSColorSpace, localizedName)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		NSString *name = [THIS_COLOR_SPACE localizedName];
		if (name == nil) {
			RETVAL_NULL();
		} else {
			RETVAL_STRING([name UTF8String]);
		}
	APPKIT_END
}
