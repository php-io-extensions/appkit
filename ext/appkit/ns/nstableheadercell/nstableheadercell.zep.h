
extern zend_class_entry *appkit_ns_nstableheadercell_nstableheadercell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell);

PHP_METHOD(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, createText);
PHP_METHOD(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, wrap);
PHP_METHOD(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, destroy);
PHP_METHOD(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, nsTableHeaderCell);
PHP_METHOD(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, setTitle);
PHP_METHOD(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, getTitle);
PHP_METHOD(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, setState);
PHP_METHOD(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, getState);
PHP_METHOD(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, setEnabled);
PHP_METHOD(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, isEnabled);
PHP_METHOD(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, setTag);
PHP_METHOD(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, getTag);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheadercell_nstableheadercell_createtext, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheadercell_nstableheadercell_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsTableHeaderCellPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheadercell_nstableheadercell_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheadercell_nstableheadercell_nstableheadercell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheadercell_nstableheadercell_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheadercell_nstableheadercell_gettitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheadercell_nstableheadercell_setstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheadercell_nstableheadercell_getstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheadercell_nstableheadercell_setenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheadercell_nstableheadercell_isenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheadercell_nstableheadercell_settag, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstableheadercell_nstableheadercell_gettag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstableheadercell_nstableheadercell_method_entry) {
	PHP_ME(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, createText, arginfo_appkit_ns_nstableheadercell_nstableheadercell_createtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, wrap, arginfo_appkit_ns_nstableheadercell_nstableheadercell_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, destroy, arginfo_appkit_ns_nstableheadercell_nstableheadercell_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, nsTableHeaderCell, arginfo_appkit_ns_nstableheadercell_nstableheadercell_nstableheadercell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, setTitle, arginfo_appkit_ns_nstableheadercell_nstableheadercell_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, getTitle, arginfo_appkit_ns_nstableheadercell_nstableheadercell_gettitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, setState, arginfo_appkit_ns_nstableheadercell_nstableheadercell_setstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, getState, arginfo_appkit_ns_nstableheadercell_nstableheadercell_getstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, setEnabled, arginfo_appkit_ns_nstableheadercell_nstableheadercell_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, isEnabled, arginfo_appkit_ns_nstableheadercell_nstableheadercell_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, setTag, arginfo_appkit_ns_nstableheadercell_nstableheadercell_settag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableHeaderCell_NSTableHeaderCell, getTag, arginfo_appkit_ns_nstableheadercell_nstableheadercell_gettag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
