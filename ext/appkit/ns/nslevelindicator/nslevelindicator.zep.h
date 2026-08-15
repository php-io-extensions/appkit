
extern zend_class_entry *appkit_ns_nslevelindicator_nslevelindicator_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSLevelIndicator_NSLevelIndicator);

PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, create);
PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, destroy);
PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setLevelIndicatorStyle);
PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getLevelIndicatorStyle);
PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setEditable);
PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, isEditable);
PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setMinValue);
PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getMinValue);
PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setMaxValue);
PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getMaxValue);
PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setWarningValue);
PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getWarningValue);
PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setCriticalValue);
PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getCriticalValue);
PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setDoubleValue);
PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getDoubleValue);
PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setNumberOfTickMarks);
PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getNumberOfTickMarks);
PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setNumberOfMajorTickMarks);
PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getNumberOfMajorTickMarks);
PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setDrawsTieredCapacityLevels);
PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, drawsTieredCapacityLevels);
PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setPlaceholderVisibility);
PHP_METHOD(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getPlaceholderVisibility);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, indicator, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_setlevelindicatorstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, indicator, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_getlevelindicatorstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indicator, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_seteditable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, indicator, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_iseditable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, indicator, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_setminvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, indicator, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_getminvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, indicator, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_setmaxvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, indicator, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_getmaxvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, indicator, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_setwarningvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, indicator, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_getwarningvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, indicator, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_setcriticalvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, indicator, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_getcriticalvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, indicator, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_setdoublevalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, indicator, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_getdoublevalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, indicator, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_setnumberoftickmarks, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, indicator, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_getnumberoftickmarks, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indicator, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_setnumberofmajortickmarks, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, indicator, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_getnumberofmajortickmarks, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indicator, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_setdrawstieredcapacitylevels, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, indicator, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_drawstieredcapacitylevels, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, indicator, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_setplaceholdervisibility, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, indicator, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visibility, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslevelindicator_nslevelindicator_getplaceholdervisibility, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indicator, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nslevelindicator_nslevelindicator_method_entry) {
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, create, arginfo_appkit_ns_nslevelindicator_nslevelindicator_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, destroy, arginfo_appkit_ns_nslevelindicator_nslevelindicator_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setLevelIndicatorStyle, arginfo_appkit_ns_nslevelindicator_nslevelindicator_setlevelindicatorstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getLevelIndicatorStyle, arginfo_appkit_ns_nslevelindicator_nslevelindicator_getlevelindicatorstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setEditable, arginfo_appkit_ns_nslevelindicator_nslevelindicator_seteditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, isEditable, arginfo_appkit_ns_nslevelindicator_nslevelindicator_iseditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setMinValue, arginfo_appkit_ns_nslevelindicator_nslevelindicator_setminvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getMinValue, arginfo_appkit_ns_nslevelindicator_nslevelindicator_getminvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setMaxValue, arginfo_appkit_ns_nslevelindicator_nslevelindicator_setmaxvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getMaxValue, arginfo_appkit_ns_nslevelindicator_nslevelindicator_getmaxvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setWarningValue, arginfo_appkit_ns_nslevelindicator_nslevelindicator_setwarningvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getWarningValue, arginfo_appkit_ns_nslevelindicator_nslevelindicator_getwarningvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setCriticalValue, arginfo_appkit_ns_nslevelindicator_nslevelindicator_setcriticalvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getCriticalValue, arginfo_appkit_ns_nslevelindicator_nslevelindicator_getcriticalvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setDoubleValue, arginfo_appkit_ns_nslevelindicator_nslevelindicator_setdoublevalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getDoubleValue, arginfo_appkit_ns_nslevelindicator_nslevelindicator_getdoublevalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setNumberOfTickMarks, arginfo_appkit_ns_nslevelindicator_nslevelindicator_setnumberoftickmarks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getNumberOfTickMarks, arginfo_appkit_ns_nslevelindicator_nslevelindicator_getnumberoftickmarks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setNumberOfMajorTickMarks, arginfo_appkit_ns_nslevelindicator_nslevelindicator_setnumberofmajortickmarks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getNumberOfMajorTickMarks, arginfo_appkit_ns_nslevelindicator_nslevelindicator_getnumberofmajortickmarks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setDrawsTieredCapacityLevels, arginfo_appkit_ns_nslevelindicator_nslevelindicator_setdrawstieredcapacitylevels, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, drawsTieredCapacityLevels, arginfo_appkit_ns_nslevelindicator_nslevelindicator_drawstieredcapacitylevels, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, setPlaceholderVisibility, arginfo_appkit_ns_nslevelindicator_nslevelindicator_setplaceholdervisibility, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLevelIndicator_NSLevelIndicator, getPlaceholderVisibility, arginfo_appkit_ns_nslevelindicator_nslevelindicator_getplaceholdervisibility, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
