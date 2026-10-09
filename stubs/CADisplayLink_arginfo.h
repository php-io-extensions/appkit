/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 6aac89a37e0cc8b6caa42fc7a815511e85135e5c */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_CAFrameRateRange___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, minimum, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, maximum, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, preferred, IS_DOUBLE, 0, "0.0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CADisplayLink_timestamp, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_CADisplayLink_targetTimestamp arginfo_class_CADisplayLink_timestamp

#define arginfo_class_CADisplayLink_duration arginfo_class_CADisplayLink_timestamp

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_CADisplayLink_preferredFrameRateRange, 0, 0, CAFrameRateRange, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CADisplayLink_setPreferredFrameRateRange, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, range, CAFrameRateRange, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CADisplayLink_addToRunLoopForMode, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, runLoop, NSRunLoop, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_CADisplayLink_removeFromRunLoopForMode arginfo_class_CADisplayLink_addToRunLoopForMode

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CADisplayLink_isPaused, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CADisplayLink_setPaused, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, paused, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_CADisplayLink_invalidate, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(CAFrameRateRange, __construct);
ZEND_METHOD(CADisplayLink, timestamp);
ZEND_METHOD(CADisplayLink, targetTimestamp);
ZEND_METHOD(CADisplayLink, duration);
ZEND_METHOD(CADisplayLink, preferredFrameRateRange);
ZEND_METHOD(CADisplayLink, setPreferredFrameRateRange);
ZEND_METHOD(CADisplayLink, addToRunLoopForMode);
ZEND_METHOD(CADisplayLink, removeFromRunLoopForMode);
ZEND_METHOD(CADisplayLink, isPaused);
ZEND_METHOD(CADisplayLink, setPaused);
ZEND_METHOD(CADisplayLink, invalidate);

static const zend_function_entry class_CAFrameRateRange_methods[] = {
	ZEND_ME(CAFrameRateRange, __construct, arginfo_class_CAFrameRateRange___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_CADisplayLink_methods[] = {
	ZEND_ME(CADisplayLink, timestamp, arginfo_class_CADisplayLink_timestamp, ZEND_ACC_PUBLIC)
	ZEND_ME(CADisplayLink, targetTimestamp, arginfo_class_CADisplayLink_targetTimestamp, ZEND_ACC_PUBLIC)
	ZEND_ME(CADisplayLink, duration, arginfo_class_CADisplayLink_duration, ZEND_ACC_PUBLIC)
	ZEND_ME(CADisplayLink, preferredFrameRateRange, arginfo_class_CADisplayLink_preferredFrameRateRange, ZEND_ACC_PUBLIC)
	ZEND_ME(CADisplayLink, setPreferredFrameRateRange, arginfo_class_CADisplayLink_setPreferredFrameRateRange, ZEND_ACC_PUBLIC)
	ZEND_ME(CADisplayLink, addToRunLoopForMode, arginfo_class_CADisplayLink_addToRunLoopForMode, ZEND_ACC_PUBLIC)
	ZEND_ME(CADisplayLink, removeFromRunLoopForMode, arginfo_class_CADisplayLink_removeFromRunLoopForMode, ZEND_ACC_PUBLIC)
	ZEND_ME(CADisplayLink, isPaused, arginfo_class_CADisplayLink_isPaused, ZEND_ACC_PUBLIC)
	ZEND_ME(CADisplayLink, setPaused, arginfo_class_CADisplayLink_setPaused, ZEND_ACC_PUBLIC)
	ZEND_ME(CADisplayLink, invalidate, arginfo_class_CADisplayLink_invalidate, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_CAFrameRateRange(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "CAFrameRateRange", class_CAFrameRateRange_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval property_minimum_default_value;
	ZVAL_DOUBLE(&property_minimum_default_value, 0.0);
	zend_string *property_minimum_name = zend_string_init("minimum", sizeof("minimum") - 1, 1);
	zend_declare_typed_property(class_entry, property_minimum_name, &property_minimum_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_minimum_name);

	zval property_maximum_default_value;
	ZVAL_DOUBLE(&property_maximum_default_value, 0.0);
	zend_string *property_maximum_name = zend_string_init("maximum", sizeof("maximum") - 1, 1);
	zend_declare_typed_property(class_entry, property_maximum_name, &property_maximum_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_maximum_name);

	zval property_preferred_default_value;
	ZVAL_DOUBLE(&property_preferred_default_value, 0.0);
	zend_string *property_preferred_name = zend_string_init("preferred", sizeof("preferred") - 1, 1);
	zend_declare_typed_property(class_entry, property_preferred_name, &property_preferred_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(property_preferred_name);

	return class_entry;
}

static zend_class_entry *register_class_CADisplayLink(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "CADisplayLink", class_CADisplayLink_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
