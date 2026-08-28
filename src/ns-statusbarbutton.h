#ifndef PHP_APPKIT_NS_STATUSBARBUTTON_H
#define PHP_APPKIT_NS_STATUSBARBUTTON_H

/*
 * Faithful 1:1 binding of AppKit NSStatusBarButton.h. Every
 * member of the class (the single base interface; no same-file
 * categories) is either bound or reserved. Nothing is omitted.
 * Inherited NSButton / NSControl / NSView members stay on those
 * classes. The button is obtained from NSStatusItem.button; this
 * header declares no initializer — construction is synthesized
 * initWithFrame (allocs NSStatusBarButton). appearsDisabled is a
 * BOOL without getter=isX and emits as appearsDisabled.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- construction glue ---- */

/*@zep-construct NS\NSStatusBarButton initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nsstatusbarbutton_init_with_frame(zval *x, zval *y, zval *width, zval *height);

/* ---- NSStatusBarButton ---- */

/*@zep NS\NSStatusBarButton appearsDisabled(int handle) -> bool */
zend_long ns_nsstatusbarbutton_appears_disabled(zval *handle);
/*@zep NS\NSStatusBarButton setAppearsDisabled(int handle, bool appearsDisabled) -> void */
void ns_nsstatusbarbutton_set_appears_disabled(zval *handle, zval *appearsDisabled);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_STATUSBARBUTTON_H */
