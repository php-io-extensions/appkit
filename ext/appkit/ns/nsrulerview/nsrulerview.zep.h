
extern zend_class_entry *appkit_ns_nsrulerview_nsrulerview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSRulerView_NSRulerView);

PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, create);
PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, wrap);
PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, destroy);
PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, nsRulerView);
PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, setOrientation);
PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, getOrientation);
PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, setRuleThickness);
PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, getRuleThickness);
PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, setMeasurementUnits);
PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, getMeasurementUnits);
PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, setOriginOffset);
PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, getOriginOffset);
PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, setClientView);
PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, clientView);
PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, setAccessoryView);
PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, accessoryView);
PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, addMarker);
PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, removeMarker);
PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, invalidateHashMarks);
PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, baselineLocation);
PHP_METHOD(AppKit_NS_NSRulerView_NSRulerView, requiredThickness);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulerview_nsrulerview_create, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulerview_nsrulerview_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsRulerViewPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulerview_nsrulerview_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulerview_nsrulerview_nsrulerview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulerview_nsrulerview_setorientation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulerview_nsrulerview_getorientation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulerview_nsrulerview_setrulethickness, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, thickness, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulerview_nsrulerview_getrulethickness, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulerview_nsrulerview_setmeasurementunits, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, units, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulerview_nsrulerview_getmeasurementunits, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulerview_nsrulerview_setoriginoffset, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulerview_nsrulerview_getoriginoffset, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulerview_nsrulerview_setclientview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulerview_nsrulerview_clientview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulerview_nsrulerview_setaccessoryview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulerview_nsrulerview_accessoryview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulerview_nsrulerview_addmarker, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulerview_nsrulerview_removemarker, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulerview_nsrulerview_invalidatehashmarks, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulerview_nsrulerview_baselinelocation, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulerview_nsrulerview_requiredthickness, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsrulerview_nsrulerview_method_entry) {
	PHP_ME(AppKit_NS_NSRulerView_NSRulerView, create, arginfo_appkit_ns_nsrulerview_nsrulerview_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerView_NSRulerView, wrap, arginfo_appkit_ns_nsrulerview_nsrulerview_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerView_NSRulerView, destroy, arginfo_appkit_ns_nsrulerview_nsrulerview_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerView_NSRulerView, nsRulerView, arginfo_appkit_ns_nsrulerview_nsrulerview_nsrulerview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerView_NSRulerView, setOrientation, arginfo_appkit_ns_nsrulerview_nsrulerview_setorientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerView_NSRulerView, getOrientation, arginfo_appkit_ns_nsrulerview_nsrulerview_getorientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerView_NSRulerView, setRuleThickness, arginfo_appkit_ns_nsrulerview_nsrulerview_setrulethickness, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerView_NSRulerView, getRuleThickness, arginfo_appkit_ns_nsrulerview_nsrulerview_getrulethickness, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerView_NSRulerView, setMeasurementUnits, arginfo_appkit_ns_nsrulerview_nsrulerview_setmeasurementunits, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerView_NSRulerView, getMeasurementUnits, arginfo_appkit_ns_nsrulerview_nsrulerview_getmeasurementunits, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerView_NSRulerView, setOriginOffset, arginfo_appkit_ns_nsrulerview_nsrulerview_setoriginoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerView_NSRulerView, getOriginOffset, arginfo_appkit_ns_nsrulerview_nsrulerview_getoriginoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerView_NSRulerView, setClientView, arginfo_appkit_ns_nsrulerview_nsrulerview_setclientview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerView_NSRulerView, clientView, arginfo_appkit_ns_nsrulerview_nsrulerview_clientview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerView_NSRulerView, setAccessoryView, arginfo_appkit_ns_nsrulerview_nsrulerview_setaccessoryview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerView_NSRulerView, accessoryView, arginfo_appkit_ns_nsrulerview_nsrulerview_accessoryview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerView_NSRulerView, addMarker, arginfo_appkit_ns_nsrulerview_nsrulerview_addmarker, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerView_NSRulerView, removeMarker, arginfo_appkit_ns_nsrulerview_nsrulerview_removemarker, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerView_NSRulerView, invalidateHashMarks, arginfo_appkit_ns_nsrulerview_nsrulerview_invalidatehashmarks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerView_NSRulerView, baselineLocation, arginfo_appkit_ns_nsrulerview_nsrulerview_baselinelocation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerView_NSRulerView, requiredThickness, arginfo_appkit_ns_nsrulerview_nsrulerview_requiredthickness, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
