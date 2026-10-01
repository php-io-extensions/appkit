/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: fb082f34b5653e2dfb3e9bdb449d9c672d0efd51 */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSView_frame, 0, 0, NSRect, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSView_window, 0, 0, NSWindow, 1)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSView, frame);
ZEND_METHOD(NSView, window);

static const zend_function_entry class_NSView_methods[] = {
	ZEND_ME(NSView, frame, arginfo_class_NSView_frame, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, window, arginfo_class_NSView_window, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSView(zend_class_entry *class_entry_NSResponder)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSView", class_NSView_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSResponder, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
