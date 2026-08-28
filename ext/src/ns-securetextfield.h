#ifndef PHP_APPKIT_NS_SECURETEXTFIELD_H
#define PHP_APPKIT_NS_SECURETEXTFIELD_H

/*
 * Faithful 1:1 binding of AppKit NSSecureTextField.h. That header
 * declares two classes. NSSecureTextField is an empty subclass of
 * NSTextField — no methods, no properties — so there is nothing to
 * bind or reserve on the header itself; inherited NSTextField /
 * NSControl / NSView members stay on those classes. Construction is
 * synthesized initWithFrame (allocs NSSecureTextField).
 * NSSecureTextFieldCell is the same-file companion class and binds
 * here (it has no header of its own). echosBullets is a BOOL with
 * the default getter name (not isX). Construction for the cell is
 * synthesized initTextCell (allocs NSSecureTextFieldCell).
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSSecureTextField ---- */
/* Empty @interface. No members to bind or reserve. */

/*@zep-construct NS\NSSecureTextField initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nssecuretextfield_init_with_frame(zval *x, zval *y, zval *width, zval *height);

/* ---- NSSecureTextFieldCell ---- */

/*@zep-construct NS\NSSecureTextFieldCell initTextCell(string string_) -> int */
zend_long ns_nssecuretextfieldcell_init_text_cell(zval *string_);

/*@zep NS\NSSecureTextFieldCell echosBullets(int handle) -> bool */
zend_long ns_nssecuretextfieldcell_echos_bullets(zval *handle);
/*@zep NS\NSSecureTextFieldCell setEchosBullets(int handle, bool echosBullets) -> void */
void ns_nssecuretextfieldcell_set_echos_bullets(zval *handle, zval *echosBullets);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SECURETEXTFIELD_H */
