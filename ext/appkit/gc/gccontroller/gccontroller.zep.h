
extern zend_class_entry *appkit_gc_gccontroller_gccontroller_ce;

ZEPHIR_INIT_CLASS(AppKit_GC_GCController_GCController);

PHP_METHOD(AppKit_GC_GCController_GCController, controllers);
PHP_METHOD(AppKit_GC_GCController_GCController, current);
PHP_METHOD(AppKit_GC_GCController_GCController, shouldMonitorBackgroundEvents);
PHP_METHOD(AppKit_GC_GCController_GCController, setShouldMonitorBackgroundEvents);
PHP_METHOD(AppKit_GC_GCController_GCController, isAttachedToDevice);
PHP_METHOD(AppKit_GC_GCController_GCController, playerIndex);
PHP_METHOD(AppKit_GC_GCController_GCController, setPlayerIndex);
PHP_METHOD(AppKit_GC_GCController_GCController, microGamepad);
PHP_METHOD(AppKit_GC_GCController_GCController, extendedGamepad);
PHP_METHOD(AppKit_GC_GCController_GCController, isSnapshot);
PHP_METHOD(AppKit_GC_GCController_GCController, vendorName);
PHP_METHOD(AppKit_GC_GCController_GCController, productCategory);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_gc_gccontroller_gccontroller_controllers, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_gc_gccontroller_gccontroller_current, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_gc_gccontroller_gccontroller_shouldmonitorbackgroundevents, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_gc_gccontroller_gccontroller_setshouldmonitorbackgroundevents, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_gc_gccontroller_gccontroller_isattachedtodevice, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_gc_gccontroller_gccontroller_playerindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_gc_gccontroller_gccontroller_setplayerindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, playerIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_gc_gccontroller_gccontroller_microgamepad, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_gc_gccontroller_gccontroller_extendedgamepad, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_gc_gccontroller_gccontroller_issnapshot, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_gc_gccontroller_gccontroller_vendorname, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_gc_gccontroller_gccontroller_productcategory, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_gc_gccontroller_gccontroller_method_entry) {
	PHP_ME(AppKit_GC_GCController_GCController, controllers, arginfo_appkit_gc_gccontroller_gccontroller_controllers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_GC_GCController_GCController, current, arginfo_appkit_gc_gccontroller_gccontroller_current, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_GC_GCController_GCController, shouldMonitorBackgroundEvents, arginfo_appkit_gc_gccontroller_gccontroller_shouldmonitorbackgroundevents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_GC_GCController_GCController, setShouldMonitorBackgroundEvents, arginfo_appkit_gc_gccontroller_gccontroller_setshouldmonitorbackgroundevents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_GC_GCController_GCController, isAttachedToDevice, arginfo_appkit_gc_gccontroller_gccontroller_isattachedtodevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_GC_GCController_GCController, playerIndex, arginfo_appkit_gc_gccontroller_gccontroller_playerindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_GC_GCController_GCController, setPlayerIndex, arginfo_appkit_gc_gccontroller_gccontroller_setplayerindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_GC_GCController_GCController, microGamepad, arginfo_appkit_gc_gccontroller_gccontroller_microgamepad, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_GC_GCController_GCController, extendedGamepad, arginfo_appkit_gc_gccontroller_gccontroller_extendedgamepad, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_GC_GCController_GCController, isSnapshot, arginfo_appkit_gc_gccontroller_gccontroller_issnapshot, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_GC_GCController_GCController, vendorName, arginfo_appkit_gc_gccontroller_gccontroller_vendorname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_GC_GCController_GCController, productCategory, arginfo_appkit_gc_gccontroller_gccontroller_productcategory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
