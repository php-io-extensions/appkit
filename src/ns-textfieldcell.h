#ifndef PHP_APPKIT_NS_TEXTFIELDCELL_H
#define PHP_APPKIT_NS_TEXTFIELDCELL_H

/*
 * Faithful 1:1 binding of AppKit NSTextFieldCell.h. Every member of
 * the class (the single base interface; no same-file categories) is
 * either bound or reserved. NSCoder, NSAttributedString, and
 * NS_UNAVAILABLE members are reserved; nothing is omitted. Inherited
 * NSActionCell / NSCell members bind on those classes. initTextCell
 * is alloc+init construction glue. initImageCell is unavailable on
 * this class. Nullable placeholderString crosses as var;
 * allowedInputSourceLocales is NSArray<NSString *> and crosses as
 * array of strings.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSTextFieldCell ---- */

/*@zep NS\NSTextFieldCell initTextCell(string string_) -> int */
zend_long ns_nstextfieldcell_init_text_cell(zval *string_);
/*@reserved NS\NSTextFieldCell - (instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER; */
/*@reserved NS\NSTextFieldCell - (instancetype)initImageCell:(nullable NSImage *)image NS_UNAVAILABLE; */

/*@zep NS\NSTextFieldCell backgroundColor(int handle) -> int */
zend_long ns_nstextfieldcell_background_color(zval *handle);
/*@zep NS\NSTextFieldCell setBackgroundColor(int handle, int backgroundColor) -> void */
void ns_nstextfieldcell_set_background_color(zval *handle, zval *backgroundColor);

/*@zep NS\NSTextFieldCell drawsBackground(int handle) -> bool */
zend_long ns_nstextfieldcell_draws_background(zval *handle);
/*@zep NS\NSTextFieldCell setDrawsBackground(int handle, bool drawsBackground) -> void */
void ns_nstextfieldcell_set_draws_background(zval *handle, zval *drawsBackground);

/*@zep NS\NSTextFieldCell textColor(int handle) -> int */
zend_long ns_nstextfieldcell_text_color(zval *handle);
/*@zep NS\NSTextFieldCell setTextColor(int handle, int textColor) -> void */
void ns_nstextfieldcell_set_text_color(zval *handle, zval *textColor);

/*@zep NS\NSTextFieldCell setUpFieldEditorAttributes(int handle, int textObj) -> int */
zend_long ns_nstextfieldcell_set_up_field_editor_attributes(zval *handle, zval *textObj);

/*@zep NS\NSTextFieldCell bezelStyle(int handle) -> int */
zend_long ns_nstextfieldcell_bezel_style(zval *handle);
/*@zep NS\NSTextFieldCell setBezelStyle(int handle, int bezelStyle) -> void */
void ns_nstextfieldcell_set_bezel_style(zval *handle, zval *bezelStyle);

/*@zep NS\NSTextFieldCell placeholderString(int handle) -> var */
void ns_nstextfieldcell_placeholder_string(zval *return_value, zval *handle);
/*@zep NS\NSTextFieldCell setPlaceholderString(int handle, var placeholderString) -> void */
void ns_nstextfieldcell_set_placeholder_string(zval *handle, zval *placeholderString);

/*@reserved NS\NSTextFieldCell @property (nullable, copy) NSAttributedString *placeholderAttributedString — getter */
/*@reserved NS\NSTextFieldCell @property (nullable, copy) NSAttributedString *placeholderAttributedString — setter */

/*@zep NS\NSTextFieldCell setWantsNotificationForMarkedText(int handle, bool flag) -> void */
void ns_nstextfieldcell_set_wants_notification_for_marked_text(zval *handle, zval *flag);

/*@zep NS\NSTextFieldCell allowedInputSourceLocales(int handle) -> array */
void ns_nstextfieldcell_allowed_input_source_locales(zval *return_value, zval *handle);
/*@zep NS\NSTextFieldCell setAllowedInputSourceLocales(int handle, array allowedInputSourceLocales) -> void */
void ns_nstextfieldcell_set_allowed_input_source_locales(zval *handle, zval *allowedInputSourceLocales);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTFIELDCELL_H */
