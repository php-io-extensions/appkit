#ifndef PHP_APPKIT_NS_BOX_H
#define PHP_APPKIT_NS_BOX_H

/*
 * Faithful 1:1 binding of AppKit NSBox.h. Every member of the
 * class (base interface + same-file NSDeprecated category) is
 * either bound or reserved. Nothing is omitted. The
 * NSTitlePosition / NSBoxType typedefs and the deprecated
 * NSBoxSecondary / NSBoxOldStyle static consts are not class
 * members. This header declares no initializer — construction
 * is synthesized initWithFrame (allocs NSBox). Inherited NSView /
 * NSResponder members stay on those classes. borderType and
 * setTitleWithMnemonic: are API_DEPRECATED and reserved.
 * getter=isTransparent emits isTransparent / setTransparent.
 * titleFont / titleCell / contentView / borderColor / fillColor
 * cross as int handles (0 = nil). title is a non-null NSString
 * and crosses as string. NSBoxType / NSTitlePosition cross as
 * int. CGFloat borderWidth / cornerRadius cross as double.
 * contentViewMargins follows the NSSize convention (component
 * doubles in, assoc array out). borderRect / titleRect and
 * setFrameFromContentFrame: follow the NSRect convention.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- construction glue ---- */

/*@zep-construct NS\NSBox initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nsbox_init_with_frame(zval *x, zval *y, zval *width, zval *height);

/* ---- Box type, title, and geometry ---- */

/*@zep NS\NSBox boxType(int handle) -> int */
zend_long ns_nsbox_box_type(zval *handle);
/*@zep NS\NSBox setBoxType(int handle, int boxType) -> void */
void ns_nsbox_set_box_type(zval *handle, zval *boxType);

/*@zep NS\NSBox titlePosition(int handle) -> int */
zend_long ns_nsbox_title_position(zval *handle);
/*@zep NS\NSBox setTitlePosition(int handle, int titlePosition) -> void */
void ns_nsbox_set_title_position(zval *handle, zval *titlePosition);

/*@zep NS\NSBox title(int handle) -> string */
void ns_nsbox_title(zval *return_value, zval *handle);
/*@zep NS\NSBox setTitle(int handle, string title) -> void */
void ns_nsbox_set_title(zval *handle, zval *title);

/*@zep NS\NSBox titleFont(int handle) -> int */
zend_long ns_nsbox_title_font(zval *handle);
/*@zep NS\NSBox setTitleFont(int handle, int titleFont) -> void */
void ns_nsbox_set_title_font(zval *handle, zval *titleFont);

/*@zep NS\NSBox borderRect(int handle) -> array */
void ns_nsbox_border_rect(zval *return_value, zval *handle);

/*@zep NS\NSBox titleRect(int handle) -> array */
void ns_nsbox_title_rect(zval *return_value, zval *handle);

/*@zep NS\NSBox titleCell(int handle) -> int */
zend_long ns_nsbox_title_cell(zval *handle);

/*@zep NS\NSBox contentViewMargins(int handle) -> array */
void ns_nsbox_content_view_margins(zval *return_value, zval *handle);
/*@zep NS\NSBox setContentViewMargins(int handle, double width, double height) -> void */
void ns_nsbox_set_content_view_margins(zval *handle, zval *width, zval *height);

/*@zep NS\NSBox sizeToFit(int handle) -> void */
void ns_nsbox_size_to_fit(zval *handle);

/*@zep NS\NSBox setFrameFromContentFrame(int handle, double x, double y, double width, double height) -> void */
void ns_nsbox_set_frame_from_content_frame(zval *handle, zval *x, zval *y, zval *width, zval *height);

/* ---- Content view and custom chrome ---- */

/*@zep NS\NSBox contentView(int handle) -> int */
zend_long ns_nsbox_content_view(zval *handle);
/*@zep NS\NSBox setContentView(int handle, int contentView) -> void */
void ns_nsbox_set_content_view(zval *handle, zval *contentView);

/*@zep NS\NSBox isTransparent(int handle) -> bool */
zend_long ns_nsbox_is_transparent(zval *handle);
/*@zep NS\NSBox setTransparent(int handle, bool transparent) -> void */
void ns_nsbox_set_transparent(zval *handle, zval *transparent);

/*@zep NS\NSBox borderWidth(int handle) -> double */
double ns_nsbox_border_width(zval *handle);
/*@zep NS\NSBox setBorderWidth(int handle, double borderWidth) -> void */
void ns_nsbox_set_border_width(zval *handle, zval *borderWidth);

/*@zep NS\NSBox cornerRadius(int handle) -> double */
double ns_nsbox_corner_radius(zval *handle);
/*@zep NS\NSBox setCornerRadius(int handle, double cornerRadius) -> void */
void ns_nsbox_set_corner_radius(zval *handle, zval *cornerRadius);

/*@zep NS\NSBox borderColor(int handle) -> int */
zend_long ns_nsbox_border_color(zval *handle);
/*@zep NS\NSBox setBorderColor(int handle, int borderColor) -> void */
void ns_nsbox_set_border_color(zval *handle, zval *borderColor);

/*@zep NS\NSBox fillColor(int handle) -> int */
zend_long ns_nsbox_fill_color(zval *handle);
/*@zep NS\NSBox setFillColor(int handle, int fillColor) -> void */
void ns_nsbox_set_fill_color(zval *handle, zval *fillColor);

/* ---- NSDeprecated ---- */

/*@reserved NS\NSBox @property NSBorderType borderType API_DEPRECATED — getter */
/*@reserved NS\NSBox @property NSBorderType borderType API_DEPRECATED — setter */
/*@reserved NS\NSBox - (void)setTitleWithMnemonic:(null_unspecified NSString *)stringWithAmpersand API_DEPRECATED */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_BOX_H */
