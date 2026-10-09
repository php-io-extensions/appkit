/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 7623fdfbaeb65b189399d6f04780ebb484255174 */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSColor_colorWithRedGreenBlueAlpha, 0, 4, NSColor, 0)
	ZEND_ARG_TYPE_INFO(0, red, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, green, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, blue, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, alpha, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSColor_redComponent, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSColor_greenComponent arginfo_class_NSColor_redComponent

#define arginfo_class_NSColor_blueComponent arginfo_class_NSColor_redComponent

#define arginfo_class_NSColor_alphaComponent arginfo_class_NSColor_redComponent

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSColorSpace_initWithCGColorSpace, 0, 1, NSColorSpace, 1)
	ZEND_ARG_OBJ_INFO(0, space, CGColorSpace, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSColorSpace_sRGBColorSpace, 0, 0, NSColorSpace, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSColorSpace_displayP3ColorSpace arginfo_class_NSColorSpace_sRGBColorSpace

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSColorSpace_localizedName, 0, 0, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSColor, colorWithRedGreenBlueAlpha);
ZEND_METHOD(NSColor, redComponent);
ZEND_METHOD(NSColor, greenComponent);
ZEND_METHOD(NSColor, blueComponent);
ZEND_METHOD(NSColor, alphaComponent);
ZEND_METHOD(NSColorSpace, initWithCGColorSpace);
ZEND_METHOD(NSColorSpace, sRGBColorSpace);
ZEND_METHOD(NSColorSpace, displayP3ColorSpace);
ZEND_METHOD(NSColorSpace, localizedName);

static const zend_function_entry class_NSColor_methods[] = {
	ZEND_ME(NSColor, colorWithRedGreenBlueAlpha, arginfo_class_NSColor_colorWithRedGreenBlueAlpha, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSColor, redComponent, arginfo_class_NSColor_redComponent, ZEND_ACC_PUBLIC)
	ZEND_ME(NSColor, greenComponent, arginfo_class_NSColor_greenComponent, ZEND_ACC_PUBLIC)
	ZEND_ME(NSColor, blueComponent, arginfo_class_NSColor_blueComponent, ZEND_ACC_PUBLIC)
	ZEND_ME(NSColor, alphaComponent, arginfo_class_NSColor_alphaComponent, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSColorSpace_methods[] = {
	ZEND_ME(NSColorSpace, initWithCGColorSpace, arginfo_class_NSColorSpace_initWithCGColorSpace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSColorSpace, sRGBColorSpace, arginfo_class_NSColorSpace_sRGBColorSpace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSColorSpace, displayP3ColorSpace, arginfo_class_NSColorSpace_displayP3ColorSpace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSColorSpace, localizedName, arginfo_class_NSColorSpace_localizedName, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSColor(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSColor", class_NSColor_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSColorSpace(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSColorSpace", class_NSColorSpace_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
