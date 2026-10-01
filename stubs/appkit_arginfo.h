/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: de2ad20487dd066db8f0740c64ea14483ac3232c */

static void register_appkit_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("kCFFileDescriptorReadCallBack", kCFFileDescriptorReadCallBack, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("kCFFileDescriptorWriteCallBack", kCFFileDescriptorWriteCallBack, CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("kCFRunLoopDefaultMode", appkit_cfstring_constant(kCFRunLoopDefaultMode), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("kCFRunLoopCommonModes", appkit_cfstring_constant(kCFRunLoopCommonModes), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("NSDefaultRunLoopMode", appkit_cfstring_constant((CFStringRef) NSDefaultRunLoopMode), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("NSRunLoopCommonModes", appkit_cfstring_constant((CFStringRef) NSRunLoopCommonModes), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("NSEventTrackingRunLoopMode", appkit_cfstring_constant((CFStringRef) NSEventTrackingRunLoopMode), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("NSModalPanelRunLoopMode", appkit_cfstring_constant((CFStringRef) NSModalPanelRunLoopMode), CONST_PERSISTENT);
}

static zend_class_entry *register_class_AppKitException(zend_class_entry *class_entry_RuntimeException)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "AppKitException", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_RuntimeException, 0);

	return class_entry;
}
