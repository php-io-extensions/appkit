#ifndef PHP_APPKIT_NS_TABLECELLVIEW_H
#define PHP_APPKIT_NS_TABLECELLVIEW_H

/*
 * Faithful 1:1 binding of AppKit NSTableCellView.h. Every member of
 * the single base interface is either bound or reserved. Nothing is
 * reserved — the header has no blocks, NSCoder, NSAttributedString,
 * NSData, Class, or API_DEPRECATED members. There are no same-file
 * categories. Inherited NSView / NSResponder members stay on those
 * classes. This header declares no initializer — construction is
 * synthesized initWithFrame (allocs NSTableCellView). objectValue
 * is id and crosses as an int handle (0 = nil). textField and
 * imageView are nullable outlets and cross as handles.
 * backgroundStyle (NSBackgroundStyle) and rowSizeStyle
 * (NSTableViewRowSizeStyle) cross as int. draggingImageComponents
 * is NSArray<NSDraggingImageComponent *> and crosses as an array
 * of handles.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- construction glue ---- */

/*@zep-construct NS\NSTableCellView initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nstablecellview_init_with_frame(zval *x, zval *y, zval *width, zval *height);

/* ---- NSTableCellView ---- */

/*@zep NS\NSTableCellView objectValue(int handle) -> int */
zend_long ns_nstablecellview_object_value(zval *handle);
/*@zep NS\NSTableCellView setObjectValue(int handle, int objectValue) -> void */
void ns_nstablecellview_set_object_value(zval *handle, zval *objectValue);

/*@zep NS\NSTableCellView textField(int handle) -> int */
zend_long ns_nstablecellview_text_field(zval *handle);
/*@zep NS\NSTableCellView setTextField(int handle, int textField) -> void */
void ns_nstablecellview_set_text_field(zval *handle, zval *textField);

/*@zep NS\NSTableCellView imageView(int handle) -> int */
zend_long ns_nstablecellview_image_view(zval *handle);
/*@zep NS\NSTableCellView setImageView(int handle, int imageView) -> void */
void ns_nstablecellview_set_image_view(zval *handle, zval *imageView);

/*@zep NS\NSTableCellView backgroundStyle(int handle) -> int */
zend_long ns_nstablecellview_background_style(zval *handle);
/*@zep NS\NSTableCellView setBackgroundStyle(int handle, int backgroundStyle) -> void */
void ns_nstablecellview_set_background_style(zval *handle, zval *backgroundStyle);

/*@zep NS\NSTableCellView rowSizeStyle(int handle) -> int */
zend_long ns_nstablecellview_row_size_style(zval *handle);
/*@zep NS\NSTableCellView setRowSizeStyle(int handle, int rowSizeStyle) -> void */
void ns_nstablecellview_set_row_size_style(zval *handle, zval *rowSizeStyle);

/*@zep NS\NSTableCellView draggingImageComponents(int handle) -> array */
void ns_nstablecellview_dragging_image_components(zval *return_value, zval *handle);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TABLECELLVIEW_H */
