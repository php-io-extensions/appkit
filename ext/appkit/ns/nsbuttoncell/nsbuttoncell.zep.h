
extern zend_class_entry *appkit_ns_nsbuttoncell_nsbuttoncell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSButtonCell_NSButtonCell);

PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, createText);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, createImage);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, wrap);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, destroy);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, nsButtonCell);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, setTitle);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, getTitle);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, setState);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, getState);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, setEnabled);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, isEnabled);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, setTag);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, getTag);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, setBezelStyle);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, getBezelStyle);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, setButtonType);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, setAlternateTitle);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, getAlternateTitle);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, setKeyEquivalent);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, getKeyEquivalent);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, setTransparent);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, isTransparent);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, setImageDimsWhenDisabled);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, imageDimsWhenDisabled);
PHP_METHOD(AppKit_NS_NSButtonCell_NSButtonCell, performClick);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_createtext, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_createimage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsButtonCellPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_nsbuttoncell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_gettitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_setstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_getstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_setenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_isenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_settag, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_gettag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_setbezelstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_getbezelstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_setbuttontype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_setalternatetitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_getalternatetitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_setkeyequivalent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_getkeyequivalent, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_settransparent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_istransparent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_setimagedimswhendisabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_imagedimswhendisabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_performclick, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsbuttoncell_nsbuttoncell_method_entry) {
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, createText, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_createtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, createImage, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_createimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, wrap, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, destroy, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, nsButtonCell, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_nsbuttoncell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, setTitle, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, getTitle, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_gettitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, setState, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_setstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, getState, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_getstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, setEnabled, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, isEnabled, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, setTag, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_settag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, getTag, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_gettag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, setBezelStyle, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_setbezelstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, getBezelStyle, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_getbezelstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, setButtonType, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_setbuttontype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, setAlternateTitle, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_setalternatetitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, getAlternateTitle, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_getalternatetitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, setKeyEquivalent, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_setkeyequivalent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, getKeyEquivalent, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_getkeyequivalent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, setTransparent, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_settransparent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, isTransparent, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_istransparent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, setImageDimsWhenDisabled, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_setimagedimswhendisabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, imageDimsWhenDisabled, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_imagedimswhendisabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButtonCell_NSButtonCell, performClick, arginfo_appkit_ns_nsbuttoncell_nsbuttoncell_performclick, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
