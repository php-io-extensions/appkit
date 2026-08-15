
extern zend_class_entry *appkit_ns_nsscrubber_nsscrubber_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSScrubber_NSScrubber);

PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, create);
PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, wrap);
PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, destroy);
PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, nsScrubber);
PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, clear);
PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, addItem);
PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, numberOfItems);
PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, setMode);
PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, getMode);
PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, setItemAlignment);
PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, getItemAlignment);
PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, setContinuous);
PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, isContinuous);
PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, setSelectedIndex);
PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, getSelectedIndex);
PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, highlightedIndex);
PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, setShowsArrowButtons);
PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, showsArrowButtons);
PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, setShowsAdditionalContentIndicators);
PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, showsAdditionalContentIndicators);
PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, reloadData);
PHP_METHOD(AppKit_NS_NSScrubber_NSScrubber, pollSelection);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubber_nsscrubber_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubber_nsscrubber_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsScrubberPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubber_nsscrubber_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, scrubber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubber_nsscrubber_nsscrubber, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scrubber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubber_nsscrubber_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, scrubber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubber_nsscrubber_additem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, scrubber, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubber_nsscrubber_numberofitems, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scrubber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubber_nsscrubber_setmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, scrubber, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubber_nsscrubber_getmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scrubber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubber_nsscrubber_setitemalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, scrubber, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubber_nsscrubber_getitemalignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scrubber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubber_nsscrubber_setcontinuous, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, scrubber, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubber_nsscrubber_iscontinuous, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, scrubber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubber_nsscrubber_setselectedindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, scrubber, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubber_nsscrubber_getselectedindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scrubber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubber_nsscrubber_highlightedindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scrubber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubber_nsscrubber_setshowsarrowbuttons, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, scrubber, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubber_nsscrubber_showsarrowbuttons, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, scrubber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubber_nsscrubber_setshowsadditionalcontentindicators, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, scrubber, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubber_nsscrubber_showsadditionalcontentindicators, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, scrubber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubber_nsscrubber_reloaddata, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, scrubber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrubber_nsscrubber_pollselection, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, scrubber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsscrubber_nsscrubber_method_entry) {
	PHP_ME(AppKit_NS_NSScrubber_NSScrubber, create, arginfo_appkit_ns_nsscrubber_nsscrubber_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubber_NSScrubber, wrap, arginfo_appkit_ns_nsscrubber_nsscrubber_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubber_NSScrubber, destroy, arginfo_appkit_ns_nsscrubber_nsscrubber_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubber_NSScrubber, nsScrubber, arginfo_appkit_ns_nsscrubber_nsscrubber_nsscrubber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubber_NSScrubber, clear, arginfo_appkit_ns_nsscrubber_nsscrubber_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubber_NSScrubber, addItem, arginfo_appkit_ns_nsscrubber_nsscrubber_additem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubber_NSScrubber, numberOfItems, arginfo_appkit_ns_nsscrubber_nsscrubber_numberofitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubber_NSScrubber, setMode, arginfo_appkit_ns_nsscrubber_nsscrubber_setmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubber_NSScrubber, getMode, arginfo_appkit_ns_nsscrubber_nsscrubber_getmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubber_NSScrubber, setItemAlignment, arginfo_appkit_ns_nsscrubber_nsscrubber_setitemalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubber_NSScrubber, getItemAlignment, arginfo_appkit_ns_nsscrubber_nsscrubber_getitemalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubber_NSScrubber, setContinuous, arginfo_appkit_ns_nsscrubber_nsscrubber_setcontinuous, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubber_NSScrubber, isContinuous, arginfo_appkit_ns_nsscrubber_nsscrubber_iscontinuous, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubber_NSScrubber, setSelectedIndex, arginfo_appkit_ns_nsscrubber_nsscrubber_setselectedindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubber_NSScrubber, getSelectedIndex, arginfo_appkit_ns_nsscrubber_nsscrubber_getselectedindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubber_NSScrubber, highlightedIndex, arginfo_appkit_ns_nsscrubber_nsscrubber_highlightedindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubber_NSScrubber, setShowsArrowButtons, arginfo_appkit_ns_nsscrubber_nsscrubber_setshowsarrowbuttons, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubber_NSScrubber, showsArrowButtons, arginfo_appkit_ns_nsscrubber_nsscrubber_showsarrowbuttons, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubber_NSScrubber, setShowsAdditionalContentIndicators, arginfo_appkit_ns_nsscrubber_nsscrubber_setshowsadditionalcontentindicators, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubber_NSScrubber, showsAdditionalContentIndicators, arginfo_appkit_ns_nsscrubber_nsscrubber_showsadditionalcontentindicators, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubber_NSScrubber, reloadData, arginfo_appkit_ns_nsscrubber_nsscrubber_reloaddata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrubber_NSScrubber, pollSelection, arginfo_appkit_ns_nsscrubber_nsscrubber_pollselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
