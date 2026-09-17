
extern zend_class_entry *appkit_gc_gcmicrogamepad_gcmicrogamepad_ce;

ZEPHIR_INIT_CLASS(AppKit_GC_GCMicroGamepad_GCMicroGamepad);

PHP_METHOD(AppKit_GC_GCMicroGamepad_GCMicroGamepad, dpad);
PHP_METHOD(AppKit_GC_GCMicroGamepad_GCMicroGamepad, buttonA);
PHP_METHOD(AppKit_GC_GCMicroGamepad_GCMicroGamepad, buttonX);
PHP_METHOD(AppKit_GC_GCMicroGamepad_GCMicroGamepad, buttonMenu);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_gc_gcmicrogamepad_gcmicrogamepad_dpad, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_gc_gcmicrogamepad_gcmicrogamepad_buttona, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_gc_gcmicrogamepad_gcmicrogamepad_buttonx, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_gc_gcmicrogamepad_gcmicrogamepad_buttonmenu, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_gc_gcmicrogamepad_gcmicrogamepad_method_entry) {
	PHP_ME(AppKit_GC_GCMicroGamepad_GCMicroGamepad, dpad, arginfo_appkit_gc_gcmicrogamepad_gcmicrogamepad_dpad, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_GC_GCMicroGamepad_GCMicroGamepad, buttonA, arginfo_appkit_gc_gcmicrogamepad_gcmicrogamepad_buttona, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_GC_GCMicroGamepad_GCMicroGamepad, buttonX, arginfo_appkit_gc_gcmicrogamepad_gcmicrogamepad_buttonx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_GC_GCMicroGamepad_GCMicroGamepad, buttonMenu, arginfo_appkit_gc_gcmicrogamepad_gcmicrogamepad_buttonmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
