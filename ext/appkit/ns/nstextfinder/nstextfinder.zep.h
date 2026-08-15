
extern zend_class_entry *appkit_ns_nstextfinder_nstextfinder_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTextFinder_NSTextFinder);

PHP_METHOD(AppKit_NS_NSTextFinder_NSTextFinder, create);
PHP_METHOD(AppKit_NS_NSTextFinder_NSTextFinder, wrap);
PHP_METHOD(AppKit_NS_NSTextFinder_NSTextFinder, destroy);
PHP_METHOD(AppKit_NS_NSTextFinder_NSTextFinder, performAction);
PHP_METHOD(AppKit_NS_NSTextFinder_NSTextFinder, validateAction);
PHP_METHOD(AppKit_NS_NSTextFinder_NSTextFinder, setIncrementalSearchingEnabled);
PHP_METHOD(AppKit_NS_NSTextFinder_NSTextFinder, incrementalSearchingEnabled);
PHP_METHOD(AppKit_NS_NSTextFinder_NSTextFinder, setFindIndicatorNeedsUpdate);
PHP_METHOD(AppKit_NS_NSTextFinder_NSTextFinder, findIndicatorNeedsUpdate);
PHP_METHOD(AppKit_NS_NSTextFinder_NSTextFinder, cancelFindIndicator);
PHP_METHOD(AppKit_NS_NSTextFinder_NSTextFinder, noteClientStringWillChange);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfinder_nstextfinder_create, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfinder_nstextfinder_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsTextFinderPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfinder_nstextfinder_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, finder, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfinder_nstextfinder_performaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, finder, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfinder_nstextfinder_validateaction, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, finder, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfinder_nstextfinder_setincrementalsearchingenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, finder, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfinder_nstextfinder_incrementalsearchingenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, finder, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfinder_nstextfinder_setfindindicatorneedsupdate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, finder, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfinder_nstextfinder_findindicatorneedsupdate, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, finder, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfinder_nstextfinder_cancelfindindicator, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, finder, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfinder_nstextfinder_noteclientstringwillchange, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, finder, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstextfinder_nstextfinder_method_entry) {
	PHP_ME(AppKit_NS_NSTextFinder_NSTextFinder, create, arginfo_appkit_ns_nstextfinder_nstextfinder_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFinder_NSTextFinder, wrap, arginfo_appkit_ns_nstextfinder_nstextfinder_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFinder_NSTextFinder, destroy, arginfo_appkit_ns_nstextfinder_nstextfinder_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFinder_NSTextFinder, performAction, arginfo_appkit_ns_nstextfinder_nstextfinder_performaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFinder_NSTextFinder, validateAction, arginfo_appkit_ns_nstextfinder_nstextfinder_validateaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFinder_NSTextFinder, setIncrementalSearchingEnabled, arginfo_appkit_ns_nstextfinder_nstextfinder_setincrementalsearchingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFinder_NSTextFinder, incrementalSearchingEnabled, arginfo_appkit_ns_nstextfinder_nstextfinder_incrementalsearchingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFinder_NSTextFinder, setFindIndicatorNeedsUpdate, arginfo_appkit_ns_nstextfinder_nstextfinder_setfindindicatorneedsupdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFinder_NSTextFinder, findIndicatorNeedsUpdate, arginfo_appkit_ns_nstextfinder_nstextfinder_findindicatorneedsupdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFinder_NSTextFinder, cancelFindIndicator, arginfo_appkit_ns_nstextfinder_nstextfinder_cancelfindindicator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextFinder_NSTextFinder, noteClientStringWillChange, arginfo_appkit_ns_nstextfinder_nstextfinder_noteclientstringwillchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
