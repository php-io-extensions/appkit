
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "src/ns-notificationcenter.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSNotificationCenter_NSNotificationCenter)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSNotificationCenter, NSNotificationCenter, appkit, ns_nsnotificationcenter_nsnotificationcenter, appkit_ns_nsnotificationcenter_nsnotificationcenter_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSNotificationCenter_NSNotificationCenter, defaultCenter)
{

	RETURN_LONG(ns_nsnotificationcenter_default_center());
}

PHP_METHOD(AppKit_NS_NSNotificationCenter_NSNotificationCenter, postNotification)
{
	zval *handle_param = NULL, *notification_param = NULL, _0, _1;
	zend_long handle, notification;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(notification)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &notification_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, notification);
	ns_nsnotificationcenter_post_notification(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSNotificationCenter_NSNotificationCenter, postNotificationNameObject)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, *object__param = NULL, _0, _1;
	zend_long handle, object_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(object_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &name_param, &object__param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, object_);
	ns_nsnotificationcenter_post_notification_name_object(&_0, &name, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSNotificationCenter_NSNotificationCenter, postNotificationNameObjectUserInfo)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, *object__param = NULL, *userInfo = NULL, userInfo_sub, _0, _1;
	zend_long handle, object_;

	ZVAL_UNDEF(&userInfo_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(object_)
		Z_PARAM_ZVAL(userInfo)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &name_param, &object__param, &userInfo);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, object_);
	ns_nsnotificationcenter_post_notification_name_object_user_info(&_0, &name, &_1, userInfo);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSNotificationCenter_NSNotificationCenter, removeObserver)
{
	zval *handle_param = NULL, *observer_param = NULL, _0, _1;
	zend_long handle, observer;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(observer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &observer_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, observer);
	ns_nsnotificationcenter_remove_observer(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSNotificationCenter_NSNotificationCenter, removeObserverNameObject)
{
	zval *handle_param = NULL, *observer_param = NULL, *name = NULL, name_sub, *object__param = NULL, _0, _1, _2;
	zend_long handle, observer, object_;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(observer)
		Z_PARAM_ZVAL(name)
		Z_PARAM_LONG(object_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &observer_param, &name, &object__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, observer);
	ZVAL_LONG(&_2, object_);
	ns_nsnotificationcenter_remove_observer_name_object(&_0, &_1, name, &_2);
}

