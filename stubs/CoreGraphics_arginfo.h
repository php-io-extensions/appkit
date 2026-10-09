/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 6b81969153aef291e15b0b14d16707ba2be29cbc */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_CFData_create, 0, 1, CFData, 0)
	ZEND_ARG_TYPE_MASK(0, bytes, MAY_BE_STRING|MAY_BE_LONG, NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, length, IS_LONG, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CFData_getLength, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_CGDataProvider_createWithCFData, 0, 1, CGDataProvider, 1)
	ZEND_ARG_OBJ_INFO(0, data, CFData, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_CGDataProvider_createDirect, 0, 2, CGDataProvider, 0)
	ZEND_ARG_TYPE_INFO(0, address, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
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

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_CGImage_createWithImageInRect, 0, 2, CGImage, 1)
	ZEND_ARG_OBJ_INFO(0, image, CGImage, 0)
	ZEND_ARG_OBJ_INFO(0, rect, NSRect, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CGContext_saveGState, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_CGContext_restoreGState arginfo_class_CGContext_saveGState

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CGContext_clipToRect, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, rect, NSRect, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CGContext_translateCTM, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ty, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CGContext_scaleCTM, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, sx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sy, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CGContext_setInterpolationQuality, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, quality, CGInterpolationQuality, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_CGContext_getInterpolationQuality, 0, 0, CGInterpolationQuality, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CGContext_drawImage, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, rect, NSRect, 0)
	ZEND_ARG_OBJ_INFO(0, image, CGImage, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(CFData, create);
ZEND_METHOD(CFData, getLength);
ZEND_METHOD(CGDataProvider, createWithCFData);
ZEND_METHOD(CGDataProvider, createDirect);
ZEND_METHOD(CGColorSpace, createWithName);
ZEND_METHOD(CGImage, create);
ZEND_METHOD(CGImage, getWidth);
ZEND_METHOD(CGImage, getHeight);
ZEND_METHOD(CGImage, createWithImageInRect);
ZEND_METHOD(CGContext, saveGState);
ZEND_METHOD(CGContext, restoreGState);
ZEND_METHOD(CGContext, clipToRect);
ZEND_METHOD(CGContext, translateCTM);
ZEND_METHOD(CGContext, scaleCTM);
ZEND_METHOD(CGContext, setInterpolationQuality);
ZEND_METHOD(CGContext, getInterpolationQuality);
ZEND_METHOD(CGContext, drawImage);

static const zend_function_entry class_CFData_methods[] = {
	ZEND_ME(CFData, create, arginfo_class_CFData_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(CFData, getLength, arginfo_class_CFData_getLength, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_CGDataProvider_methods[] = {
	ZEND_ME(CGDataProvider, createWithCFData, arginfo_class_CGDataProvider_createWithCFData, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(CGDataProvider, createDirect, arginfo_class_CGDataProvider_createDirect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
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
	ZEND_ME(CGImage, createWithImageInRect, arginfo_class_CGImage_createWithImageInRect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static const zend_function_entry class_CGContext_methods[] = {
	ZEND_ME(CGContext, saveGState, arginfo_class_CGContext_saveGState, ZEND_ACC_PUBLIC)
	ZEND_ME(CGContext, restoreGState, arginfo_class_CGContext_restoreGState, ZEND_ACC_PUBLIC)
	ZEND_ME(CGContext, clipToRect, arginfo_class_CGContext_clipToRect, ZEND_ACC_PUBLIC)
	ZEND_ME(CGContext, translateCTM, arginfo_class_CGContext_translateCTM, ZEND_ACC_PUBLIC)
	ZEND_ME(CGContext, scaleCTM, arginfo_class_CGContext_scaleCTM, ZEND_ACC_PUBLIC)
	ZEND_ME(CGContext, setInterpolationQuality, arginfo_class_CGContext_setInterpolationQuality, ZEND_ACC_PUBLIC)
	ZEND_ME(CGContext, getInterpolationQuality, arginfo_class_CGContext_getInterpolationQuality, ZEND_ACC_PUBLIC)
	ZEND_ME(CGContext, drawImage, arginfo_class_CGContext_drawImage, ZEND_ACC_PUBLIC)
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

static zend_class_entry *register_class_CGInterpolationQuality(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("CGInterpolationQuality", IS_LONG, NULL);

	zval enum_case_DEFAULT_value;
	ZVAL_LONG(&enum_case_DEFAULT_value, 0);
	zend_enum_add_case_cstr(class_entry, "DEFAULT", &enum_case_DEFAULT_value);

	zval enum_case_NONE_value;
	ZVAL_LONG(&enum_case_NONE_value, 1);
	zend_enum_add_case_cstr(class_entry, "NONE", &enum_case_NONE_value);

	zval enum_case_LOW_value;
	ZVAL_LONG(&enum_case_LOW_value, 2);
	zend_enum_add_case_cstr(class_entry, "LOW", &enum_case_LOW_value);

	zval enum_case_HIGH_value;
	ZVAL_LONG(&enum_case_HIGH_value, 3);
	zend_enum_add_case_cstr(class_entry, "HIGH", &enum_case_HIGH_value);

	zval enum_case_MEDIUM_value;
	ZVAL_LONG(&enum_case_MEDIUM_value, 4);
	zend_enum_add_case_cstr(class_entry, "MEDIUM", &enum_case_MEDIUM_value);

	return class_entry;
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

static zend_class_entry *register_class_CGContext(zend_class_entry *class_entry_CFType)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "CGContext", class_CGContext_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_CFType, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
