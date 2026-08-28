#include "ns-notificationcenter.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSNotificationCenter                                                   */
/* ====================================================================== */

zend_long ns_nsnotificationcenter_default_center(void)
{
    @autoreleasepool {
        return ns_handle_for([NSNotificationCenter defaultCenter]);
    }
}

void ns_nsnotificationcenter_post_notification(zval *handle, zval *notification)
{
    @autoreleasepool {
        NSNotificationCenter *c = NS_ARG_AS(NSNotificationCenter, handle);
        if (c == nil) return;
        [c postNotification:NS_ARG_AS(NSNotification, notification)];
    }
}

void ns_nsnotificationcenter_post_notification_name_object(zval *handle, zval *name, zval *object_)
{
    @autoreleasepool {
        NSNotificationCenter *c = NS_ARG_AS(NSNotificationCenter, handle);
        if (c == nil) return;
        [c postNotificationName:ns_arg_string(name) object:ns_arg_object(object_)];
    }
}

void ns_nsnotificationcenter_post_notification_name_object_user_info(zval *handle, zval *name, zval *object_, zval *userInfo)
{
    @autoreleasepool {
        NSNotificationCenter *c = NS_ARG_AS(NSNotificationCenter, handle);
        if (c == nil) return;
        [c postNotificationName:ns_arg_string(name) object:ns_arg_object(object_) userInfo:NS_ARG_AS(NSDictionary, userInfo)];
    }
}

void ns_nsnotificationcenter_remove_observer(zval *handle, zval *observer)
{
    @autoreleasepool {
        NSNotificationCenter *c = NS_ARG_AS(NSNotificationCenter, handle);
        if (c == nil) return;
        [c removeObserver:ns_arg_object(observer)];
    }
}

void ns_nsnotificationcenter_remove_observer_name_object(zval *handle, zval *observer, zval *name, zval *object_)
{
    @autoreleasepool {
        NSNotificationCenter *c = NS_ARG_AS(NSNotificationCenter, handle);
        if (c == nil) return;
        [c removeObserver:ns_arg_object(observer) name:ns_arg_string(name) object:ns_arg_object(object_)];
    }
}
