#include "runtime.h"
#include "../stubs/NSFont_arginfo.h"

void appkit_register_NSFont(int module_number)
{
	register_NSFont_symbols(module_number);

	appkit_ce_NSFont = register_class_NSFont(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_NSFont);
	appkit_map_objc_class("NSFont", appkit_ce_NSFont);

	appkit_ce_NSFontManager = register_class_NSFontManager(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_NSFontManager);
	appkit_map_objc_class("NSFontManager", appkit_ce_NSFontManager);
}

#define THIS_FONT ((NSFont *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(NSFont, systemFontOfSizeWeight)
{
	double size, weight;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_DOUBLE(size)
		Z_PARAM_DOUBLE(weight)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [NSFont systemFontOfSize:size weight:weight]);
	APPKIT_END
}

ZEND_METHOD(NSFont, monospacedSystemFontOfSizeWeight)
{
	double size, weight;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_DOUBLE(size)
		Z_PARAM_DOUBLE(weight)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [NSFont monospacedSystemFontOfSize:size weight:weight]);
	APPKIT_END
}

ZEND_METHOD(NSFont, fontWithNameSize)
{
	zend_string *name;
	double size;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(name)
		Z_PARAM_DOUBLE(size)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [NSFont fontWithName:appkit_nsstring(name) size:size]);
	APPKIT_END
}

ZEND_METHOD(NSFont, pointSize)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_DOUBLE([THIS_FONT pointSize]);
	APPKIT_END
}

ZEND_METHOD(NSFont, familyName)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		NSString *family = [THIS_FONT familyName];
		if (family == nil) {
			RETURN_NULL();
		}
		RETURN_STR(appkit_zend_string((CFStringRef) family));
	APPKIT_END
}

ZEND_METHOD(NSFont, ascender)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_DOUBLE([THIS_FONT ascender]);
	APPKIT_END
}

ZEND_METHOD(NSFont, descender)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_DOUBLE([THIS_FONT descender]);
	APPKIT_END
}

ZEND_METHOD(NSFont, leading)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_DOUBLE([THIS_FONT leading]);
	APPKIT_END
}

ZEND_METHOD(NSFont, isFixedPitch)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_BOOL([THIS_FONT isFixedPitch]);
	APPKIT_END
}

#define THIS_FONT_MANAGER ((NSFontManager *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(NSFontManager, sharedFontManager)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [NSFontManager sharedFontManager]);
	APPKIT_END
}

ZEND_METHOD(NSFontManager, fontWithFamilyTraitsWeightSize)
{
	zend_string *family;
	zend_long traits, weight;
	double size;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_STR(family)
		Z_PARAM_LONG(traits)
		Z_PARAM_LONG(weight)
		Z_PARAM_DOUBLE(size)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_FONT_MANAGER fontWithFamily:appkit_nsstring(family) traits:(NSFontTraitMask) traits weight:(NSInteger) weight size:size]);
	APPKIT_END
}

ZEND_METHOD(NSFontManager, weightOfFont)
{
	zend_object *font;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(font, appkit_ce_NSFont)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		RETURN_LONG((zend_long) [THIS_FONT_MANAGER weightOfFont:(NSFont *) APPKIT_ID(font)]);
	APPKIT_END
}

ZEND_METHOD(NSFontManager, convertFontToHaveTrait)
{
	zend_object *font;
	zend_long trait;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(font, appkit_ce_NSFont)
		Z_PARAM_LONG(trait)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [THIS_FONT_MANAGER convertFont:(NSFont *) APPKIT_ID(font) toHaveTrait:(NSFontTraitMask) trait]);
	APPKIT_END
}

ZEND_METHOD(NSFontManager, traitsOfFont)
{
	zend_object *font;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(font, appkit_ce_NSFont)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		RETURN_LONG((zend_long) [THIS_FONT_MANAGER traitsOfFont:(NSFont *) APPKIT_ID(font)]);
	APPKIT_END
}
