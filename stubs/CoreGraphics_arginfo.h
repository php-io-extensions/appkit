/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 4144391a693f1aceb5cc8b5eef6d6a8ebe5e52af */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_CFData_create, 0, 1, CFData, 0)
	ZEND_ARG_TYPE_INFO(0, bytes, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CFData_getLength, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_CGDataProvider_createWithCFData, 0, 1, CGDataProvider, 1)
	ZEND_ARG_OBJ_INFO(0, data, CFData, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_CGColorSpace_createWithName, 0, 1, CGColorSpace, 1)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_CGImage_create, 0, 10, CGImage, 1)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bitsPerComponent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bitsPerPixel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bytesPerRow, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, space, CGColorSpace, 0)
	ZEND_ARG_TYPE_INFO(0, bitmapInfo, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, provider, CGDataProvider, 0)
	ZEND_ARG_TYPE_INFO(0, shouldInterpolate, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, intent, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_CGImage_getWidth arginfo_class_CFData_getLength

#define arginfo_class_CGImage_getHeight arginfo_class_CFData_getLength

ZEND_METHOD(CFData, create);
ZEND_METHOD(CFData, getLength);
ZEND_METHOD(CGDataProvider, createWithCFData);
ZEND_METHOD(CGColorSpace, createWithName);
ZEND_METHOD(CGImage, create);
ZEND_METHOD(CGImage, getWidth);
ZEND_METHOD(CGImage, getHeight);

static const zend_function_entry class_CFData_methods[] = {
	ZEND_ME(CFData, create, arginfo_class_CFData_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(CFData, getLength, arginfo_class_CFData_getLength, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_CGDataProvider_methods[] = {
	ZEND_ME(CGDataProvider, createWithCFData, arginfo_class_CGDataProvider_createWithCFData, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static const zend_function_entry class_CGColorSpace_methods[] = {
	ZEND_ME(CGColorSpace, createWithName, arginfo_class_CGColorSpace_createWithName, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static const zend_function_entry class_CGImage_methods[] = {
	ZEND_ME(CGImage, create, arginfo_class_CGImage_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(CGImage, getWidth, arginfo_class_CGImage_getWidth, ZEND_ACC_PUBLIC)
	ZEND_ME(CGImage, getHeight, arginfo_class_CGImage_getHeight, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_CoreGraphics_symbols(int module_number)
{
	REGISTER_STRING_CONSTANT("kCGColorSpaceSRGB", appkit_cfstring_constant(kCGColorSpaceSRGB), CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kCGImageAlphaNone", kCGImageAlphaNone, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kCGImageAlphaPremultipliedLast", kCGImageAlphaPremultipliedLast, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kCGImageAlphaPremultipliedFirst", kCGImageAlphaPremultipliedFirst, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kCGImageAlphaLast", kCGImageAlphaLast, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kCGImageAlphaFirst", kCGImageAlphaFirst, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kCGImageAlphaNoneSkipLast", kCGImageAlphaNoneSkipLast, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kCGImageAlphaNoneSkipFirst", kCGImageAlphaNoneSkipFirst, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kCGBitmapByteOrderDefault", kCGBitmapByteOrderDefault, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kCGBitmapByteOrder32Little", kCGBitmapByteOrder32Little, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kCGBitmapByteOrder32Big", kCGBitmapByteOrder32Big, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kCGRenderingIntentDefault", kCGRenderingIntentDefault, CONST_PERSISTENT);
}

static zend_class_entry *register_class_CFData(zend_class_entry *class_entry_CFType)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "CFData", class_CFData_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_CFType, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_CGDataProvider(zend_class_entry *class_entry_CFType)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "CGDataProvider", class_CGDataProvider_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_CFType, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_CGColorSpace(zend_class_entry *class_entry_CFType)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "CGColorSpace", class_CGColorSpace_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_CFType, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_CGImage(zend_class_entry *class_entry_CFType)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "CGImage", class_CGImage_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_CFType, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
