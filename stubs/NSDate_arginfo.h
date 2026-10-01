/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: f4f47ba0aa3b4bd4e5196a899d36d7928731a4f7 */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSDate_date, 0, 0, NSDate, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSDate_dateWithTimeIntervalSinceNow, 0, 1, NSDate, 0)
	ZEND_ARG_TYPE_INFO(0, secs, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSDate_distantPast arginfo_class_NSDate_date

#define arginfo_class_NSDate_distantFuture arginfo_class_NSDate_date

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSDate_timeIntervalSinceNow, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSDate_timeIntervalSince1970 arginfo_class_NSDate_timeIntervalSinceNow

ZEND_METHOD(NSDate, date);
ZEND_METHOD(NSDate, dateWithTimeIntervalSinceNow);
ZEND_METHOD(NSDate, distantPast);
ZEND_METHOD(NSDate, distantFuture);
ZEND_METHOD(NSDate, timeIntervalSinceNow);
ZEND_METHOD(NSDate, timeIntervalSince1970);

static const zend_function_entry class_NSDate_methods[] = {
	ZEND_ME(NSDate, date, arginfo_class_NSDate_date, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSDate, dateWithTimeIntervalSinceNow, arginfo_class_NSDate_dateWithTimeIntervalSinceNow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSDate, distantPast, arginfo_class_NSDate_distantPast, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSDate, distantFuture, arginfo_class_NSDate_distantFuture, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSDate, timeIntervalSinceNow, arginfo_class_NSDate_timeIntervalSinceNow, ZEND_ACC_PUBLIC)
	ZEND_ME(NSDate, timeIntervalSince1970, arginfo_class_NSDate_timeIntervalSince1970, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSDate(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSDate", class_NSDate_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
