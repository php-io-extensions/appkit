/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 78c2d6bcb54a24a0aec26dc968219dc19b8b33d3 */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_IOSurface_initWithProperties, 0, 1, IOSurface, 1)
	ZEND_ARG_TYPE_INFO(0, properties, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_IOSurface_lockWithOptionsSeed, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seed, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_IOSurface_unlockWithOptionsSeed arginfo_class_IOSurface_lockWithOptionsSeed

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_IOSurface_baseAddress, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_IOSurface_bytesPerRow arginfo_class_IOSurface_baseAddress

#define arginfo_class_IOSurface_width arginfo_class_IOSurface_baseAddress

#define arginfo_class_IOSurface_height arginfo_class_IOSurface_baseAddress

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_IOSurface_isInUse, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_IOSurface_setAttachmentForKey, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, anObject, CFType, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_class_IOSurface_attachmentForKey, 0, 1, NSObject|CFType, MAY_BE_NULL)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(IOSurface, initWithProperties);
ZEND_METHOD(IOSurface, lockWithOptionsSeed);
ZEND_METHOD(IOSurface, unlockWithOptionsSeed);
ZEND_METHOD(IOSurface, baseAddress);
ZEND_METHOD(IOSurface, bytesPerRow);
ZEND_METHOD(IOSurface, width);
ZEND_METHOD(IOSurface, height);
ZEND_METHOD(IOSurface, isInUse);
ZEND_METHOD(IOSurface, setAttachmentForKey);
ZEND_METHOD(IOSurface, attachmentForKey);

static const zend_function_entry class_IOSurface_methods[] = {
	ZEND_ME(IOSurface, initWithProperties, arginfo_class_IOSurface_initWithProperties, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(IOSurface, lockWithOptionsSeed, arginfo_class_IOSurface_lockWithOptionsSeed, ZEND_ACC_PUBLIC)
	ZEND_ME(IOSurface, unlockWithOptionsSeed, arginfo_class_IOSurface_unlockWithOptionsSeed, ZEND_ACC_PUBLIC)
	ZEND_ME(IOSurface, baseAddress, arginfo_class_IOSurface_baseAddress, ZEND_ACC_PUBLIC)
	ZEND_ME(IOSurface, bytesPerRow, arginfo_class_IOSurface_bytesPerRow, ZEND_ACC_PUBLIC)
	ZEND_ME(IOSurface, width, arginfo_class_IOSurface_width, ZEND_ACC_PUBLIC)
	ZEND_ME(IOSurface, height, arginfo_class_IOSurface_height, ZEND_ACC_PUBLIC)
	ZEND_ME(IOSurface, isInUse, arginfo_class_IOSurface_isInUse, ZEND_ACC_PUBLIC)
	ZEND_ME(IOSurface, setAttachmentForKey, arginfo_class_IOSurface_setAttachmentForKey, ZEND_ACC_PUBLIC)
	ZEND_ME(IOSurface, attachmentForKey, arginfo_class_IOSurface_attachmentForKey, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_IOSurface_symbols(int module_number)
{
	REGISTER_STRING_CONSTANT("IOSurfacePropertyKeyWidth", appkit_cfstring_constant((CFStringRef) IOSurfacePropertyKeyWidth), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("IOSurfacePropertyKeyHeight", appkit_cfstring_constant((CFStringRef) IOSurfacePropertyKeyHeight), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("IOSurfacePropertyKeyBytesPerRow", appkit_cfstring_constant((CFStringRef) IOSurfacePropertyKeyBytesPerRow), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("IOSurfacePropertyKeyBytesPerElement", appkit_cfstring_constant((CFStringRef) IOSurfacePropertyKeyBytesPerElement), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("IOSurfacePropertyKeyPixelFormat", appkit_cfstring_constant((CFStringRef) IOSurfacePropertyKeyPixelFormat), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("kIOSurfaceColorSpace", appkit_cfstring_constant(kIOSurfaceColorSpace), CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kIOSurfaceLockReadOnly", kIOSurfaceLockReadOnly, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kIOSurfaceLockAvoidSync", kIOSurfaceLockAvoidSync, CONST_PERSISTENT);
}

static zend_class_entry *register_class_IOSurface(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "IOSurface", class_IOSurface_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
