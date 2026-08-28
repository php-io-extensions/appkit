#ifndef PHP_APPKIT_NS_TEXTFIELD_H
#define PHP_APPKIT_NS_TEXTFIELD_H

/*
 * Faithful 1:1 binding of AppKit NSTextField.h. Every member of the
 * class (base interface + same-file NSTouchBar, NSTextFieldConvenience,
 * NSTextFieldAttributedStringMethods, and NSDeprecated categories) is
 * either bound or reserved. NSAttributedString and API_DEPRECATED
 * members are reserved; nothing is omitted. The NSTextFieldDelegate
 * protocol and the adopted NSTextContent / NSUserInterfaceValidations /
 * NSAccessibilityNavigableStaticText protocols live on Bridge delegates
 * or their own headers, not here. Inherited NSControl / NSView members
 * bind on those classes. placeholderString is nullable and crosses as
 * var. No designated initializer is declared here — construction is
 * NSControl::initWithFrame or the convenience factories.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSTextField ---- */

/*@zep NS\NSTextField placeholderString(int handle) -> var */
void ns_nstextfield_placeholder_string(zval *return_value, zval *handle);
/*@zep NS\NSTextField setPlaceholderString(int handle, var placeholderString) -> void */
void ns_nstextfield_set_placeholder_string(zval *handle, zval *placeholderString);

/*@reserved NS\NSTextField @property (nullable, copy) NSAttributedString *placeholderAttributedString — getter */
/*@reserved NS\NSTextField @property (nullable, copy) NSAttributedString *placeholderAttributedString — setter */

/*@zep NS\NSTextField backgroundColor(int handle) -> int */
zend_long ns_nstextfield_background_color(zval *handle);
/*@zep NS\NSTextField setBackgroundColor(int handle, int backgroundColor) -> void */
void ns_nstextfield_set_background_color(zval *handle, zval *backgroundColor);

/*@zep NS\NSTextField drawsBackground(int handle) -> bool */
zend_long ns_nstextfield_draws_background(zval *handle);
/*@zep NS\NSTextField setDrawsBackground(int handle, bool drawsBackground) -> void */
void ns_nstextfield_set_draws_background(zval *handle, zval *drawsBackground);

/*@zep NS\NSTextField textColor(int handle) -> int */
zend_long ns_nstextfield_text_color(zval *handle);
/*@zep NS\NSTextField setTextColor(int handle, int textColor) -> void */
void ns_nstextfield_set_text_color(zval *handle, zval *textColor);

/*@zep NS\NSTextField isBordered(int handle) -> bool */
zend_long ns_nstextfield_is_bordered(zval *handle);
/*@zep NS\NSTextField setBordered(int handle, bool bordered) -> void */
void ns_nstextfield_set_bordered(zval *handle, zval *bordered);

/*@zep NS\NSTextField isBezeled(int handle) -> bool */
zend_long ns_nstextfield_is_bezeled(zval *handle);
/*@zep NS\NSTextField setBezeled(int handle, bool bezeled) -> void */
void ns_nstextfield_set_bezeled(zval *handle, zval *bezeled);

/*@zep NS\NSTextField isEditable(int handle) -> bool */
zend_long ns_nstextfield_is_editable(zval *handle);
/*@zep NS\NSTextField setEditable(int handle, bool editable) -> void */
void ns_nstextfield_set_editable(zval *handle, zval *editable);

/*@zep NS\NSTextField isSelectable(int handle) -> bool */
zend_long ns_nstextfield_is_selectable(zval *handle);
/*@zep NS\NSTextField setSelectable(int handle, bool selectable) -> void */
void ns_nstextfield_set_selectable(zval *handle, zval *selectable);

/*@zep NS\NSTextField selectText(int handle, int sender) -> void */
void ns_nstextfield_select_text(zval *handle, zval *sender);

/*@zep NS\NSTextField delegate(int handle) -> int */
zend_long ns_nstextfield_delegate(zval *handle);
/*@zep NS\NSTextField setDelegate(int handle, int delegate) -> void */
void ns_nstextfield_set_delegate(zval *handle, zval *delegate);

/*@zep NS\NSTextField textShouldBeginEditing(int handle, int textObject) -> bool */
zend_long ns_nstextfield_text_should_begin_editing(zval *handle, zval *textObject);
/*@zep NS\NSTextField textShouldEndEditing(int handle, int textObject) -> bool */
zend_long ns_nstextfield_text_should_end_editing(zval *handle, zval *textObject);
/*@zep NS\NSTextField textDidBeginEditing(int handle, int notification) -> void */
void ns_nstextfield_text_did_begin_editing(zval *handle, zval *notification);
/*@zep NS\NSTextField textDidEndEditing(int handle, int notification) -> void */
void ns_nstextfield_text_did_end_editing(zval *handle, zval *notification);
/*@zep NS\NSTextField textDidChange(int handle, int notification) -> void */
void ns_nstextfield_text_did_change(zval *handle, zval *notification);

/*@zep NS\NSTextField acceptsFirstResponder(int handle) -> bool */
zend_long ns_nstextfield_accepts_first_responder(zval *handle);

/*@zep NS\NSTextField bezelStyle(int handle) -> int */
zend_long ns_nstextfield_bezel_style(zval *handle);
/*@zep NS\NSTextField setBezelStyle(int handle, int bezelStyle) -> void */
void ns_nstextfield_set_bezel_style(zval *handle, zval *bezelStyle);

/*@zep NS\NSTextField preferredMaxLayoutWidth(int handle) -> double */
double ns_nstextfield_preferred_max_layout_width(zval *handle);
/*@zep NS\NSTextField setPreferredMaxLayoutWidth(int handle, double preferredMaxLayoutWidth) -> void */
void ns_nstextfield_set_preferred_max_layout_width(zval *handle, zval *preferredMaxLayoutWidth);

/*@zep NS\NSTextField maximumNumberOfLines(int handle) -> int */
zend_long ns_nstextfield_maximum_number_of_lines(zval *handle);
/*@zep NS\NSTextField setMaximumNumberOfLines(int handle, int maximumNumberOfLines) -> void */
void ns_nstextfield_set_maximum_number_of_lines(zval *handle, zval *maximumNumberOfLines);

/*@zep NS\NSTextField allowsDefaultTighteningForTruncation(int handle) -> bool */
zend_long ns_nstextfield_allows_default_tightening_for_truncation(zval *handle);
/*@zep NS\NSTextField setAllowsDefaultTighteningForTruncation(int handle, bool allowsDefaultTighteningForTruncation) -> void */
void ns_nstextfield_set_allows_default_tightening_for_truncation(zval *handle, zval *allowsDefaultTighteningForTruncation);

/*@zep NS\NSTextField lineBreakStrategy(int handle) -> int */
zend_long ns_nstextfield_line_break_strategy(zval *handle);
/*@zep NS\NSTextField setLineBreakStrategy(int handle, int lineBreakStrategy) -> void */
void ns_nstextfield_set_line_break_strategy(zval *handle, zval *lineBreakStrategy);

/*@zep NS\NSTextField allowsWritingTools(int handle) -> bool */
zend_long ns_nstextfield_allows_writing_tools(zval *handle);
/*@zep NS\NSTextField setAllowsWritingTools(int handle, bool allowsWritingTools) -> void */
void ns_nstextfield_set_allows_writing_tools(zval *handle, zval *allowsWritingTools);

/*@zep NS\NSTextField allowsWritingToolsAffordance(int handle) -> bool */
zend_long ns_nstextfield_allows_writing_tools_affordance(zval *handle);
/*@zep NS\NSTextField setAllowsWritingToolsAffordance(int handle, bool allowsWritingToolsAffordance) -> void */
void ns_nstextfield_set_allows_writing_tools_affordance(zval *handle, zval *allowsWritingToolsAffordance);

/* ---- NSTouchBar ---- */

/*@zep NS\NSTextField isAutomaticTextCompletionEnabled(int handle) -> bool */
zend_long ns_nstextfield_is_automatic_text_completion_enabled(zval *handle);
/*@zep NS\NSTextField setAutomaticTextCompletionEnabled(int handle, bool automaticTextCompletionEnabled) -> void */
void ns_nstextfield_set_automatic_text_completion_enabled(zval *handle, zval *automaticTextCompletionEnabled);

/*@zep NS\NSTextField allowsCharacterPickerTouchBarItem(int handle) -> bool */
zend_long ns_nstextfield_allows_character_picker_touch_bar_item(zval *handle);
/*@zep NS\NSTextField setAllowsCharacterPickerTouchBarItem(int handle, bool allowsCharacterPickerTouchBarItem) -> void */
void ns_nstextfield_set_allows_character_picker_touch_bar_item(zval *handle, zval *allowsCharacterPickerTouchBarItem);

/* ---- NSTextFieldConvenience ---- */

/*@zep NS\NSTextField labelWithString(string stringValue) -> int */
zend_long ns_nstextfield_label_with_string(zval *stringValue);
/*@zep NS\NSTextField wrappingLabelWithString(string stringValue) -> int */
zend_long ns_nstextfield_wrapping_label_with_string(zval *stringValue);
/*@reserved NS\NSTextField + (instancetype)labelWithAttributedString:(NSAttributedString *)attributedStringValue */
/*@zep NS\NSTextField textFieldWithString(string stringValue) -> int */
zend_long ns_nstextfield_text_field_with_string(zval *stringValue);

/* ---- NSTextFieldAttributedStringMethods ---- */

/*@zep NS\NSTextField allowsEditingTextAttributes(int handle) -> bool */
zend_long ns_nstextfield_allows_editing_text_attributes(zval *handle);
/*@zep NS\NSTextField setAllowsEditingTextAttributes(int handle, bool allowsEditingTextAttributes) -> void */
void ns_nstextfield_set_allows_editing_text_attributes(zval *handle, zval *allowsEditingTextAttributes);

/*@zep NS\NSTextField importsGraphics(int handle) -> bool */
zend_long ns_nstextfield_imports_graphics(zval *handle);
/*@zep NS\NSTextField setImportsGraphics(int handle, bool importsGraphics) -> void */
void ns_nstextfield_set_imports_graphics(zval *handle, zval *importsGraphics);

/* ---- NSDeprecated ---- */

/*@reserved NS\NSTextField - (void)setTitleWithMnemonic:(null_unspecified NSString *)stringWithAmpersand API_DEPRECATED */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTFIELD_H */
