#ifndef PHP_APPKIT_NS_PATHCOMPONENTCELL_H
#define PHP_APPKIT_NS_PATHCOMPONENTCELL_H

/*
 * Faithful 1:1 binding of AppKit NSPathComponentCell.h. Every
 * member of the class (the single base interface; no same-file
 * categories) is either bound or reserved. Nothing is reserved —
 * the header has no blocks, NSCoder, NSAttributedString, NSData,
 * Class, or API_DEPRECATED members. Inherited NSTextFieldCell /
 * NSActionCell / NSCell members stay on those classes (display
 * title is stringValue / attributedStringValue on those
 * ancestors). No designated initializer is declared here —
 * construction is synthesized initTextCell (allocs
 * NSPathComponentCell; nearest bound ancestor is NSTextFieldCell,
 * whose initImageCell is unavailable). The redeclared image
 * property binds here. Nullable NSImage *image and NSURL *URL
 * cross as int handles (0 = nil).
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSPathComponentCell ---- */

/*@zep-construct NS\NSPathComponentCell initTextCell(string string_) -> int */
zend_long ns_nspathcomponentcell_init_text_cell(zval *string_);

/*@zep NS\NSPathComponentCell image(int handle) -> int */
zend_long ns_nspathcomponentcell_image(zval *handle);
/*@zep NS\NSPathComponentCell setImage(int handle, int image) -> void */
void ns_nspathcomponentcell_set_image(zval *handle, zval *image);

/*@zep NS\NSPathComponentCell URL(int handle) -> int */
zend_long ns_nspathcomponentcell_url(zval *handle);
/*@zep NS\NSPathComponentCell setURL(int handle, int URL) -> void */
void ns_nspathcomponentcell_set_url(zval *handle, zval *URL);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PATHCOMPONENTCELL_H */
