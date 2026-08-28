#ifndef PHP_APPKIT_NS_NOTIFICATIONCENTER_H
#define PHP_APPKIT_NS_NOTIFICATIONCENTER_H

/*
 * Faithful 1:1 binding of Foundation NSNotification.h's
 * NSNotificationCenter (the type has no AppKit header).
 * Every member of the single base interface is either
 * bound or reserved. Nothing is omitted. There are no
 * same-file categories on NSNotificationCenter. The
 * same-file companion NSNotification /
 * NSNotificationCreation is a different class and is
 * not bound here. Adopted NSObject members stay on that
 * class. This header declares no initializer — the
 * shared center is the class property defaultCenter,
 * not alloc+init. The NSNotificationName typedef is
 * not a class member.
 *
 * Observe stays in Bridge: addObserver:selector:name:object:
 * is reserved (PHP cannot be an Objective-C observer;
 * Bridge::observeNotification / removeObserver own that),
 * and addObserverForName:object:queue:usingBlock: is
 * reserved (block, and the same observe rule). Post and
 * remove are bound, plus defaultCenter so a center handle
 * exists to send them on.
 *
 * Flattened collisions: postNotificationName:object:
 * stays postNotificationNameObject; the userInfo form
 * emits postNotificationNameObjectUserInfo.
 * removeObserver: stays removeObserver; the name/object
 * form emits removeObserverNameObject. object parameters
 * become object_. Nullable NSNotificationName
 * (removeObserver:name:object:) crosses as var. userInfo
 * (NSDictionary) and notification / observer / object
 * arguments cross as int handles (0 = nil).
 * NSNotificationName on the post-by-name methods is a
 * non-null string.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Shared center ---- */

/*@zep NS\NSNotificationCenter defaultCenter() -> int */
zend_long ns_nsnotificationcenter_default_center(void);

/* ---- Post ---- */

/*@zep NS\NSNotificationCenter postNotification(int handle, int notification) -> void */
void ns_nsnotificationcenter_post_notification(zval *handle, zval *notification);

/*@zep NS\NSNotificationCenter postNotificationNameObject(int handle, string name, int object_) -> void */
void ns_nsnotificationcenter_post_notification_name_object(zval *handle, zval *name, zval *object_);

/*@zep NS\NSNotificationCenter postNotificationNameObjectUserInfo(int handle, string name, int object_, int userInfo) -> void */
void ns_nsnotificationcenter_post_notification_name_object_user_info(zval *handle, zval *name, zval *object_, zval *userInfo);

/* ---- Remove ---- */

/*@zep NS\NSNotificationCenter removeObserver(int handle, int observer) -> void */
void ns_nsnotificationcenter_remove_observer(zval *handle, zval *observer);

/*@zep NS\NSNotificationCenter removeObserverNameObject(int handle, int observer, var name, int object_) -> void */
void ns_nsnotificationcenter_remove_observer_name_object(zval *handle, zval *observer, zval *name, zval *object_);

/* ---- Observe (Bridge) ---- */

/*@reserved NS\NSNotificationCenter - (void)addObserver:(id)observer selector:(SEL)aSelector name:(nullable NSNotificationName)aName object:(nullable id)anObject — observe lives in Bridge */
/*@reserved NS\NSNotificationCenter - (id <NSObject>)addObserverForName:(nullable NSNotificationName)name object:(nullable id)obj queue:(nullable NSOperationQueue *)queue usingBlock:(void (^)(NSNotification *notification))block — block; observe lives in Bridge */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_NOTIFICATIONCENTER_H */
