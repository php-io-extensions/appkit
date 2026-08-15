
extern zend_class_entry *appkit_ns_nsactioncell_nsactioncell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSActionCell_NSActionCell);

PHP_METHOD(AppKit_NS_NSActionCell_NSActionCell, createText);
PHP_METHOD(AppKit_NS_NSActionCell_NSActionCell, wrap);
PHP_METHOD(AppKit_NS_NSActionCell_NSActionCell, destroy);
PHP_METHOD(AppKit_NS_NSActionCell_NSActionCell, nsActionCell);
PHP_METHOD(AppKit_NS_NSActionCell_NSActionCell, setTitle);
PHP_METHOD(AppKit_NS_NSActionCell_NSActionCell, getTitle);
PHP_METHOD(AppKit_NS_NSActionCell_NSActionCell, setState);
PHP_METHOD(AppKit_NS_NSActionCell_NSActionCell, getState);
PHP_METHOD(AppKit_NS_NSActionCell_NSActionCell, setEnabled);
PHP_METHOD(AppKit_NS_NSActionCell_NSActionCell, isEnabled);
PHP_METHOD(AppKit_NS_NSActionCell_NSActionCell, setTag);
PHP_METHOD(AppKit_NS_NSActionCell_NSActionCell, getTag);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsactioncell_nsactioncell_createtext, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsactioncell_nsactioncell_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsActionCellPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsactioncell_nsactioncell_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsactioncell_nsactioncell_nsactioncell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsactioncell_nsactioncell_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsactioncell_nsactioncell_gettitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsactioncell_nsactioncell_setstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsactioncell_nsactioncell_getstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsactioncell_nsactioncell_setenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsactioncell_nsactioncell_isenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsactioncell_nsactioncell_settag, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsactioncell_nsactioncell_gettag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsactioncell_nsactioncell_method_entry) {
	PHP_ME(AppKit_NS_NSActionCell_NSActionCell, createText, arginfo_appkit_ns_nsactioncell_nsactioncell_createtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSActionCell_NSActionCell, wrap, arginfo_appkit_ns_nsactioncell_nsactioncell_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSActionCell_NSActionCell, destroy, arginfo_appkit_ns_nsactioncell_nsactioncell_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSActionCell_NSActionCell, nsActionCell, arginfo_appkit_ns_nsactioncell_nsactioncell_nsactioncell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSActionCell_NSActionCell, setTitle, arginfo_appkit_ns_nsactioncell_nsactioncell_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSActionCell_NSActionCell, getTitle, arginfo_appkit_ns_nsactioncell_nsactioncell_gettitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSActionCell_NSActionCell, setState, arginfo_appkit_ns_nsactioncell_nsactioncell_setstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSActionCell_NSActionCell, getState, arginfo_appkit_ns_nsactioncell_nsactioncell_getstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSActionCell_NSActionCell, setEnabled, arginfo_appkit_ns_nsactioncell_nsactioncell_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSActionCell_NSActionCell, isEnabled, arginfo_appkit_ns_nsactioncell_nsactioncell_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSActionCell_NSActionCell, setTag, arginfo_appkit_ns_nsactioncell_nsactioncell_settag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSActionCell_NSActionCell, getTag, arginfo_appkit_ns_nsactioncell_nsactioncell_gettag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
