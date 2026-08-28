#ifndef PHP_APPKIT_NS_TEXT_H
#define PHP_APPKIT_NS_TEXT_H

/*
 * Faithful 1:1 binding of AppKit NSText.h. Every member of the
 * class (the single base interface; no same-file categories) is
 * either bound or reserved. NSCoder and NSData members are reserved;
 * nothing is omitted. The NSTextDelegate protocol and the adopted
 * NSChangeSpelling / NSIgnoreMisspelledWords protocols live on
 * Bridge delegates, not here. Notification names, NSTextAlignment /
 * NSWritingDirection / NSTextMovement enums, and the deprecated
 * alignment aliases are not class members. Inherited NSView /
 * NSResponder members bind on those classes. initWithFrame is
 * alloc+init construction glue. string and copy are emitted as
 * string_ / copy_ (Zephir reserved words). NSRange crosses as
 * location/length ints in and an assoc array out; NSSize follows
 * the struct convention (component doubles in, assoc array out).
 * Nullable NSColor / NSFont / delegate cross as int handles
 * (0 = nil). IBAction senders are nullable id handles.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSText ---- */

/*@zep NS\NSText initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nstext_init_with_frame(zval *x, zval *y, zval *width, zval *height);
/*@reserved NS\NSText - (nullable instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER; */

/*@zep NS\NSText string_(int handle) -> string */
void ns_nstext_string_(zval *return_value, zval *handle);
/*@zep NS\NSText setString(int handle, string string_) -> void */
void ns_nstext_set_string(zval *handle, zval *string_);

/*@zep NS\NSText replaceCharactersInRangeWithString(int handle, int location, int length, string string_) -> void */
void ns_nstext_replace_characters_in_range_with_string(zval *handle, zval *location, zval *length, zval *string_);
/*@reserved NS\NSText - (void)replaceCharactersInRange:(NSRange)range withRTF:(NSData *)rtfData; */
/*@reserved NS\NSText - (void)replaceCharactersInRange:(NSRange)range withRTFD:(NSData *)rtfdData; */

/*@reserved NS\NSText - (nullable NSData *)RTFFromRange:(NSRange)range; */
/*@reserved NS\NSText - (nullable NSData *)RTFDFromRange:(NSRange)range; */

/*@zep NS\NSText writeRTFDToFileAtomically(int handle, string path, bool flag) -> bool */
zend_long ns_nstext_write_rtfd_to_file_atomically(zval *handle, zval *path, zval *flag);
/*@zep NS\NSText readRTFDFromFile(int handle, string path) -> bool */
zend_long ns_nstext_read_rtfd_from_file(zval *handle, zval *path);

/*@zep NS\NSText delegate(int handle) -> int */
zend_long ns_nstext_delegate(zval *handle);
/*@zep NS\NSText setDelegate(int handle, int delegate) -> void */
void ns_nstext_set_delegate(zval *handle, zval *delegate);

/*@zep NS\NSText isEditable(int handle) -> bool */
zend_long ns_nstext_is_editable(zval *handle);
/*@zep NS\NSText setEditable(int handle, bool editable) -> void */
void ns_nstext_set_editable(zval *handle, zval *editable);

/*@zep NS\NSText isSelectable(int handle) -> bool */
zend_long ns_nstext_is_selectable(zval *handle);
/*@zep NS\NSText setSelectable(int handle, bool selectable) -> void */
void ns_nstext_set_selectable(zval *handle, zval *selectable);

/*@zep NS\NSText isRichText(int handle) -> bool */
zend_long ns_nstext_is_rich_text(zval *handle);
/*@zep NS\NSText setRichText(int handle, bool richText) -> void */
void ns_nstext_set_rich_text(zval *handle, zval *richText);

/*@zep NS\NSText importsGraphics(int handle) -> bool */
zend_long ns_nstext_imports_graphics(zval *handle);
/*@zep NS\NSText setImportsGraphics(int handle, bool importsGraphics) -> void */
void ns_nstext_set_imports_graphics(zval *handle, zval *importsGraphics);

/*@zep NS\NSText isFieldEditor(int handle) -> bool */
zend_long ns_nstext_is_field_editor(zval *handle);
/*@zep NS\NSText setFieldEditor(int handle, bool fieldEditor) -> void */
void ns_nstext_set_field_editor(zval *handle, zval *fieldEditor);

/*@zep NS\NSText usesFontPanel(int handle) -> bool */
zend_long ns_nstext_uses_font_panel(zval *handle);
/*@zep NS\NSText setUsesFontPanel(int handle, bool usesFontPanel) -> void */
void ns_nstext_set_uses_font_panel(zval *handle, zval *usesFontPanel);

/*@zep NS\NSText drawsBackground(int handle) -> bool */
zend_long ns_nstext_draws_background(zval *handle);
/*@zep NS\NSText setDrawsBackground(int handle, bool drawsBackground) -> void */
void ns_nstext_set_draws_background(zval *handle, zval *drawsBackground);

/*@zep NS\NSText backgroundColor(int handle) -> int */
zend_long ns_nstext_background_color(zval *handle);
/*@zep NS\NSText setBackgroundColor(int handle, int backgroundColor) -> void */
void ns_nstext_set_background_color(zval *handle, zval *backgroundColor);

/*@zep NS\NSText isRulerVisible(int handle) -> bool */
zend_long ns_nstext_is_ruler_visible(zval *handle);

/*@zep NS\NSText selectedRange(int handle) -> array */
void ns_nstext_selected_range(zval *return_value, zval *handle);
/*@zep NS\NSText setSelectedRange(int handle, int location, int length) -> void */
void ns_nstext_set_selected_range(zval *handle, zval *location, zval *length);

/*@zep NS\NSText scrollRangeToVisible(int handle, int location, int length) -> void */
void ns_nstext_scroll_range_to_visible(zval *handle, zval *location, zval *length);

/*@zep NS\NSText font(int handle) -> int */
zend_long ns_nstext_font(zval *handle);
/*@zep NS\NSText setFont(int handle, int font) -> void */
void ns_nstext_set_font(zval *handle, zval *font);

/*@zep NS\NSText textColor(int handle) -> int */
zend_long ns_nstext_text_color(zval *handle);
/*@zep NS\NSText setTextColor(int handle, int textColor) -> void */
void ns_nstext_set_text_color(zval *handle, zval *textColor);

/*@zep NS\NSText alignment(int handle) -> int */
zend_long ns_nstext_alignment(zval *handle);
/*@zep NS\NSText setAlignment(int handle, int alignment) -> void */
void ns_nstext_set_alignment(zval *handle, zval *alignment);

/*@zep NS\NSText baseWritingDirection(int handle) -> int */
zend_long ns_nstext_base_writing_direction(zval *handle);
/*@zep NS\NSText setBaseWritingDirection(int handle, int baseWritingDirection) -> void */
void ns_nstext_set_base_writing_direction(zval *handle, zval *baseWritingDirection);

/*@zep NS\NSText setTextColorRange(int handle, int color, int location, int length) -> void */
void ns_nstext_set_text_color_range(zval *handle, zval *color, zval *location, zval *length);
/*@zep NS\NSText setFontRange(int handle, int font, int location, int length) -> void */
void ns_nstext_set_font_range(zval *handle, zval *font, zval *location, zval *length);

/*@zep NS\NSText maxSize(int handle) -> array */
void ns_nstext_max_size(zval *return_value, zval *handle);
/*@zep NS\NSText setMaxSize(int handle, double width, double height) -> void */
void ns_nstext_set_max_size(zval *handle, zval *width, zval *height);

/*@zep NS\NSText minSize(int handle) -> array */
void ns_nstext_min_size(zval *return_value, zval *handle);
/*@zep NS\NSText setMinSize(int handle, double width, double height) -> void */
void ns_nstext_set_min_size(zval *handle, zval *width, zval *height);

/*@zep NS\NSText isHorizontallyResizable(int handle) -> bool */
zend_long ns_nstext_is_horizontally_resizable(zval *handle);
/*@zep NS\NSText setHorizontallyResizable(int handle, bool horizontallyResizable) -> void */
void ns_nstext_set_horizontally_resizable(zval *handle, zval *horizontallyResizable);

/*@zep NS\NSText isVerticallyResizable(int handle) -> bool */
zend_long ns_nstext_is_vertically_resizable(zval *handle);
/*@zep NS\NSText setVerticallyResizable(int handle, bool verticallyResizable) -> void */
void ns_nstext_set_vertically_resizable(zval *handle, zval *verticallyResizable);

/*@zep NS\NSText sizeToFit(int handle) -> void */
void ns_nstext_size_to_fit(zval *handle);

/*@zep NS\NSText copy_(int handle, int sender) -> void */
void ns_nstext_copy_(zval *handle, zval *sender);
/*@zep NS\NSText copyFont(int handle, int sender) -> void */
void ns_nstext_copy_font(zval *handle, zval *sender);
/*@zep NS\NSText copyRuler(int handle, int sender) -> void */
void ns_nstext_copy_ruler(zval *handle, zval *sender);
/*@zep NS\NSText cut(int handle, int sender) -> void */
void ns_nstext_cut(zval *handle, zval *sender);
/*@zep NS\NSText delete(int handle, int sender) -> void */
void ns_nstext_delete(zval *handle, zval *sender);
/*@zep NS\NSText paste(int handle, int sender) -> void */
void ns_nstext_paste(zval *handle, zval *sender);
/*@zep NS\NSText pasteFont(int handle, int sender) -> void */
void ns_nstext_paste_font(zval *handle, zval *sender);
/*@zep NS\NSText pasteRuler(int handle, int sender) -> void */
void ns_nstext_paste_ruler(zval *handle, zval *sender);
/*@zep NS\NSText selectAll(int handle, int sender) -> void */
void ns_nstext_select_all(zval *handle, zval *sender);
/*@zep NS\NSText changeFont(int handle, int sender) -> void */
void ns_nstext_change_font(zval *handle, zval *sender);
/*@zep NS\NSText alignLeft(int handle, int sender) -> void */
void ns_nstext_align_left(zval *handle, zval *sender);
/*@zep NS\NSText alignRight(int handle, int sender) -> void */
void ns_nstext_align_right(zval *handle, zval *sender);
/*@zep NS\NSText alignCenter(int handle, int sender) -> void */
void ns_nstext_align_center(zval *handle, zval *sender);
/*@zep NS\NSText subscript(int handle, int sender) -> void */
void ns_nstext_subscript(zval *handle, zval *sender);
/*@zep NS\NSText superscript(int handle, int sender) -> void */
void ns_nstext_superscript(zval *handle, zval *sender);
/*@zep NS\NSText underline(int handle, int sender) -> void */
void ns_nstext_underline(zval *handle, zval *sender);
/*@zep NS\NSText unscript(int handle, int sender) -> void */
void ns_nstext_unscript(zval *handle, zval *sender);
/*@zep NS\NSText showGuessPanel(int handle, int sender) -> void */
void ns_nstext_show_guess_panel(zval *handle, zval *sender);
/*@zep NS\NSText checkSpelling(int handle, int sender) -> void */
void ns_nstext_check_spelling(zval *handle, zval *sender);
/*@zep NS\NSText toggleRuler(int handle, int sender) -> void */
void ns_nstext_toggle_ruler(zval *handle, zval *sender);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXT_H */
