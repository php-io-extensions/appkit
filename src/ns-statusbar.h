#ifndef PHP_APPKIT_NS_STATUSBAR_H
#define PHP_APPKIT_NS_STATUSBAR_H

/*
 * Faithful 1:1 binding of AppKit NSStatusBar.h. Every member of
 * the class (the single base interface; no same-file categories)
 * is either bound or reserved. Nothing is omitted. The file-level
 * static consts NSVariableStatusItemLength and
 * NSSquareStatusItemLength are not class members (they belong in
 * jovian/appkit). Inherited NSObject members stay on that class.
 * This header declares no initializer — construction is the
 * systemStatusBar class property (no-handle factory, returns int).
 * statusItemWithLength: returns an NSStatusItem handle.
 * removeStatusItem: takes an NSStatusItem handle. getter=isVertical
 * emits isVertical. thickness / length are CGFloat and cross as
 * double. NSStatusBar / NSStatusItem cross as int handles
 * (0 = nil).
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Class status bar ---- */

/*@zep NS\NSStatusBar systemStatusBar() -> int */
zend_long ns_nsstatusbar_system_status_bar(void);

/* ---- Items ---- */

/*@zep NS\NSStatusBar statusItemWithLength(int handle, double length) -> int */
zend_long ns_nsstatusbar_status_item_with_length(zval *handle, zval *length);

/*@zep NS\NSStatusBar removeStatusItem(int handle, int item) -> void */
void ns_nsstatusbar_remove_status_item(zval *handle, zval *item);

/* ---- Geometry ---- */

/*@zep NS\NSStatusBar isVertical(int handle) -> bool */
zend_long ns_nsstatusbar_is_vertical(zval *handle);

/*@zep NS\NSStatusBar thickness(int handle) -> double */
double ns_nsstatusbar_thickness(zval *handle);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_STATUSBAR_H */
