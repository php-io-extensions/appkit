
extern zend_class_entry *appkit_ns_nssegmentedcontrol_nssegmentedcontrol_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSSegmentedControl_NSSegmentedControl);

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, create);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, destroy);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setLabel);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSelected);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, getSelected);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, pollChange);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_create, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setlabel, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_getselected, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_pollchange, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nssegmentedcontrol_nssegmentedcontrol_method_entry) {
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, create, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, destroy, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setLabel, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setlabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSelected, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, getSelected, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_getselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, pollChange, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_pollchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
