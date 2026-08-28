#ifndef PHP_APPKIT_NS_PATHCONTROLITEM_H
#define PHP_APPKIT_NS_PATHCONTROLITEM_H

/*
 * Faithful 1:1 binding of AppKit NSPathControlItem.h. Every member
 * of the class (the single base interface; no same-file categories)
 * is either bound or reserved. attributedTitle is reserved
 * (NSAttributedString). Inherited NSObject members stay on that
 * class. No designated initializer is declared here —
 * construction is synthesized init (allocs NSPathControlItem).
 * title is a non-null NSString and crosses as string. Nullable
 * NSImage *image and readonly NSURL *URL cross as int handles
 * (0 = nil). Do not subclass NSPathControlItem — Apple's header
 * forbids it; the binding still exposes the concrete class.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSPathControlItem ---- */

/*@zep-construct NS\NSPathControlItem init() -> int */
zend_long ns_nspathcontrolitem_init(void);

/*@zep NS\NSPathControlItem title(int handle) -> string */
void ns_nspathcontrolitem_title(zval *return_value, zval *handle);
/*@zep NS\NSPathControlItem setTitle(int handle, string title) -> void */
void ns_nspathcontrolitem_set_title(zval *handle, zval *title);

/*@reserved NS\NSPathControlItem @property (copy) NSAttributedString *attributedTitle — getter */
/*@reserved NS\NSPathControlItem @property (copy) NSAttributedString *attributedTitle — setter */

/*@zep NS\NSPathControlItem image(int handle) -> int */
zend_long ns_nspathcontrolitem_image(zval *handle);
/*@zep NS\NSPathControlItem setImage(int handle, int image) -> void */
void ns_nspathcontrolitem_set_image(zval *handle, zval *image);

/*@zep NS\NSPathControlItem URL(int handle) -> int */
zend_long ns_nspathcontrolitem_url(zval *handle);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PATHCONTROLITEM_H */
