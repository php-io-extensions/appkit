
extern zend_class_entry *appkit_ns_nstokenfieldcell_nstokenfieldcell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell);

PHP_METHOD(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, createText);
PHP_METHOD(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, wrap);
PHP_METHOD(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, destroy);
PHP_METHOD(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, nsTokenFieldCell);
PHP_METHOD(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, setStringValue);
PHP_METHOD(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, getStringValue);
PHP_METHOD(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, setTokenStyle);
PHP_METHOD(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, getTokenStyle);
PHP_METHOD(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, setCompletionDelay);
PHP_METHOD(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, getCompletionDelay);
PHP_METHOD(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, defaultCompletionDelay);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstokenfieldcell_nstokenfieldcell_createtext, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstokenfieldcell_nstokenfieldcell_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsTokenFieldCellPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstokenfieldcell_nstokenfieldcell_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstokenfieldcell_nstokenfieldcell_nstokenfieldcell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstokenfieldcell_nstokenfieldcell_setstringvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstokenfieldcell_nstokenfieldcell_getstringvalue, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstokenfieldcell_nstokenfieldcell_settokenstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstokenfieldcell_nstokenfieldcell_gettokenstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstokenfieldcell_nstokenfieldcell_setcompletiondelay, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delay, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstokenfieldcell_nstokenfieldcell_getcompletiondelay, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstokenfieldcell_nstokenfieldcell_defaultcompletiondelay, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstokenfieldcell_nstokenfieldcell_method_entry) {
	PHP_ME(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, createText, arginfo_appkit_ns_nstokenfieldcell_nstokenfieldcell_createtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, wrap, arginfo_appkit_ns_nstokenfieldcell_nstokenfieldcell_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, destroy, arginfo_appkit_ns_nstokenfieldcell_nstokenfieldcell_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, nsTokenFieldCell, arginfo_appkit_ns_nstokenfieldcell_nstokenfieldcell_nstokenfieldcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, setStringValue, arginfo_appkit_ns_nstokenfieldcell_nstokenfieldcell_setstringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, getStringValue, arginfo_appkit_ns_nstokenfieldcell_nstokenfieldcell_getstringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, setTokenStyle, arginfo_appkit_ns_nstokenfieldcell_nstokenfieldcell_settokenstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, getTokenStyle, arginfo_appkit_ns_nstokenfieldcell_nstokenfieldcell_gettokenstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, setCompletionDelay, arginfo_appkit_ns_nstokenfieldcell_nstokenfieldcell_setcompletiondelay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, getCompletionDelay, arginfo_appkit_ns_nstokenfieldcell_nstokenfieldcell_getcompletiondelay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTokenFieldCell_NSTokenFieldCell, defaultCompletionDelay, arginfo_appkit_ns_nstokenfieldcell_nstokenfieldcell_defaultcompletiondelay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
