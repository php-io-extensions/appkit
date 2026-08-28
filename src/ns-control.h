#ifndef PHP_APPKIT_NS_CONTROL_H
#define PHP_APPKIT_NS_CONTROL_H

/*
 * Faithful 1:1 binding of AppKit NSControl.h. Every member of the
 * class (base interface + same-file NSControlEditableTextMethods and
 * NSDeprecated categories) is either bound or reserved. NSCoder,
 * NSAttributedString, Class, and API_DEPRECATED members are reserved;
 * nothing is omitted. The NSControlTextEditingDelegate protocol and
 * the NSObject(NSControlSubclassNotifications) category live on Bridge
 * delegates / NSObject, not here. Notification name constants are not
 * class members. initWithFrame is alloc+init construction glue.
 * mouseDown: is redeclared on this class and binds here.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSControl ---- */

/*@zep NS\NSControl initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nscontrol_init_with_frame(zval *x, zval *y, zval *width, zval *height);
/*@reserved NS\NSControl - (nullable instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER; */

/*@zep NS\NSControl target(int handle) -> int */
zend_long ns_nscontrol_target(zval *handle);
/*@zep NS\NSControl setTarget(int handle, int target) -> void */
void ns_nscontrol_set_target(zval *handle, zval *target);

/*@zep NS\NSControl action(int handle) -> var */
void ns_nscontrol_action(zval *return_value, zval *handle);
/*@zep NS\NSControl setAction(int handle, var action) -> void */
void ns_nscontrol_set_action(zval *handle, zval *action);

/*@zep NS\NSControl tag(int handle) -> int */
zend_long ns_nscontrol_tag(zval *handle);
/*@zep NS\NSControl setTag(int handle, int tag) -> void */
void ns_nscontrol_set_tag(zval *handle, zval *tag);

/*@zep NS\NSControl ignoresMultiClick(int handle) -> bool */
zend_long ns_nscontrol_ignores_multi_click(zval *handle);
/*@zep NS\NSControl setIgnoresMultiClick(int handle, bool ignoresMultiClick) -> void */
void ns_nscontrol_set_ignores_multi_click(zval *handle, zval *ignoresMultiClick);

/*@zep NS\NSControl isContinuous(int handle) -> bool */
zend_long ns_nscontrol_is_continuous(zval *handle);
/*@zep NS\NSControl setContinuous(int handle, bool continuous) -> void */
void ns_nscontrol_set_continuous(zval *handle, zval *continuous);

/*@zep NS\NSControl isEnabled(int handle) -> bool */
zend_long ns_nscontrol_is_enabled(zval *handle);
/*@zep NS\NSControl setEnabled(int handle, bool enabled) -> void */
void ns_nscontrol_set_enabled(zval *handle, zval *enabled);

/*@zep NS\NSControl refusesFirstResponder(int handle) -> bool */
zend_long ns_nscontrol_refuses_first_responder(zval *handle);
/*@zep NS\NSControl setRefusesFirstResponder(int handle, bool refusesFirstResponder) -> void */
void ns_nscontrol_set_refuses_first_responder(zval *handle, zval *refusesFirstResponder);

/*@zep NS\NSControl isHighlighted(int handle) -> bool */
zend_long ns_nscontrol_is_highlighted(zval *handle);
/*@zep NS\NSControl setHighlighted(int handle, bool highlighted) -> void */
void ns_nscontrol_set_highlighted(zval *handle, zval *highlighted);

/*@zep NS\NSControl controlSize(int handle) -> int */
zend_long ns_nscontrol_control_size(zval *handle);
/*@zep NS\NSControl setControlSize(int handle, int controlSize) -> void */
void ns_nscontrol_set_control_size(zval *handle, zval *controlSize);

/*@zep NS\NSControl formatter(int handle) -> int */
zend_long ns_nscontrol_formatter(zval *handle);
/*@zep NS\NSControl setFormatter(int handle, int formatter) -> void */
void ns_nscontrol_set_formatter(zval *handle, zval *formatter);

/*@zep NS\NSControl objectValue(int handle) -> int */
zend_long ns_nscontrol_object_value(zval *handle);
/*@zep NS\NSControl setObjectValue(int handle, int objectValue) -> void */
void ns_nscontrol_set_object_value(zval *handle, zval *objectValue);

/*@zep NS\NSControl stringValue(int handle) -> string */
void ns_nscontrol_string_value(zval *return_value, zval *handle);
/*@zep NS\NSControl setStringValue(int handle, string stringValue) -> void */
void ns_nscontrol_set_string_value(zval *handle, zval *stringValue);

/*@reserved NS\NSControl @property (copy) NSAttributedString *attributedStringValue — getter */
/*@reserved NS\NSControl @property (copy) NSAttributedString *attributedStringValue — setter */

/*@zep NS\NSControl intValue(int handle) -> int */
zend_long ns_nscontrol_int_value(zval *handle);
/*@zep NS\NSControl setIntValue(int handle, int intValue) -> void */
void ns_nscontrol_set_int_value(zval *handle, zval *intValue);

/*@zep NS\NSControl integerValue(int handle) -> int */
zend_long ns_nscontrol_integer_value(zval *handle);
/*@zep NS\NSControl setIntegerValue(int handle, int integerValue) -> void */
void ns_nscontrol_set_integer_value(zval *handle, zval *integerValue);

/*@zep NS\NSControl floatValue(int handle) -> double */
double ns_nscontrol_float_value(zval *handle);
/*@zep NS\NSControl setFloatValue(int handle, double floatValue) -> void */
void ns_nscontrol_set_float_value(zval *handle, zval *floatValue);

/*@zep NS\NSControl doubleValue(int handle) -> double */
double ns_nscontrol_double_value(zval *handle);
/*@zep NS\NSControl setDoubleValue(int handle, double doubleValue) -> void */
void ns_nscontrol_set_double_value(zval *handle, zval *doubleValue);

/*@zep NS\NSControl sizeThatFits(int handle, double width, double height) -> array */
void ns_nscontrol_size_that_fits(zval *return_value, zval *handle, zval *width, zval *height);
/*@zep NS\NSControl sizeToFit(int handle) -> void */
void ns_nscontrol_size_to_fit(zval *handle);

/*@zep NS\NSControl sendActionOn(int handle, int mask) -> int */
zend_long ns_nscontrol_send_action_on(zval *handle, zval *mask);

/*@zep NS\NSControl sendActionTo(int handle, var action, int target) -> bool */
zend_long ns_nscontrol_send_action_to(zval *handle, zval *action, zval *target);

/*@zep NS\NSControl takeIntValueFrom(int handle, int sender) -> void */
void ns_nscontrol_take_int_value_from(zval *handle, zval *sender);
/*@zep NS\NSControl takeFloatValueFrom(int handle, int sender) -> void */
void ns_nscontrol_take_float_value_from(zval *handle, zval *sender);
/*@zep NS\NSControl takeDoubleValueFrom(int handle, int sender) -> void */
void ns_nscontrol_take_double_value_from(zval *handle, zval *sender);
/*@zep NS\NSControl takeStringValueFrom(int handle, int sender) -> void */
void ns_nscontrol_take_string_value_from(zval *handle, zval *sender);
/*@zep NS\NSControl takeObjectValueFrom(int handle, int sender) -> void */
void ns_nscontrol_take_object_value_from(zval *handle, zval *sender);
/*@zep NS\NSControl takeIntegerValueFrom(int handle, int sender) -> void */
void ns_nscontrol_take_integer_value_from(zval *handle, zval *sender);

/*@zep NS\NSControl mouseDown(int handle, int event) -> void */
void ns_nscontrol_mouse_down(zval *handle, zval *event);
/*@zep NS\NSControl performClick(int handle, int sender) -> void */
void ns_nscontrol_perform_click(zval *handle, zval *sender);

/*@zep NS\NSControl font(int handle) -> int */
zend_long ns_nscontrol_font(zval *handle);
/*@zep NS\NSControl setFont(int handle, int font) -> void */
void ns_nscontrol_set_font(zval *handle, zval *font);

/*@zep NS\NSControl usesSingleLineMode(int handle) -> bool */
zend_long ns_nscontrol_uses_single_line_mode(zval *handle);
/*@zep NS\NSControl setUsesSingleLineMode(int handle, bool usesSingleLineMode) -> void */
void ns_nscontrol_set_uses_single_line_mode(zval *handle, zval *usesSingleLineMode);

/*@zep NS\NSControl lineBreakMode(int handle) -> int */
zend_long ns_nscontrol_line_break_mode(zval *handle);
/*@zep NS\NSControl setLineBreakMode(int handle, int lineBreakMode) -> void */
void ns_nscontrol_set_line_break_mode(zval *handle, zval *lineBreakMode);

/*@zep NS\NSControl alignment(int handle) -> int */
zend_long ns_nscontrol_alignment(zval *handle);
/*@zep NS\NSControl setAlignment(int handle, int alignment) -> void */
void ns_nscontrol_set_alignment(zval *handle, zval *alignment);

/*@zep NS\NSControl baseWritingDirection(int handle) -> int */
zend_long ns_nscontrol_base_writing_direction(zval *handle);
/*@zep NS\NSControl setBaseWritingDirection(int handle, int baseWritingDirection) -> void */
void ns_nscontrol_set_base_writing_direction(zval *handle, zval *baseWritingDirection);

/*@zep NS\NSControl allowsExpansionToolTips(int handle) -> bool */
zend_long ns_nscontrol_allows_expansion_tool_tips(zval *handle);
/*@zep NS\NSControl setAllowsExpansionToolTips(int handle, bool allowsExpansionToolTips) -> void */
void ns_nscontrol_set_allows_expansion_tool_tips(zval *handle, zval *allowsExpansionToolTips);

/*@zep NS\NSControl expansionFrameWithFrame(int handle, double x, double y, double width, double height) -> array */
void ns_nscontrol_expansion_frame_with_frame(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSControl drawWithExpansionFrameInView(int handle, double x, double y, double width, double height, int view) -> void */
void ns_nscontrol_draw_with_expansion_frame_in_view(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *view);

/* ---- NSControlEditableTextMethods ---- */

/*@zep NS\NSControl currentEditor(int handle) -> int */
zend_long ns_nscontrol_current_editor(zval *handle);
/*@zep NS\NSControl abortEditing(int handle) -> bool */
zend_long ns_nscontrol_abort_editing(zval *handle);
/*@zep NS\NSControl validateEditing(int handle) -> void */
void ns_nscontrol_validate_editing(zval *handle);

/*@zep NS\NSControl editWithFrameEditorDelegateEvent(int handle, double x, double y, double width, double height, int textObj, int delegate, int event) -> void */
void ns_nscontrol_edit_with_frame_editor_delegate_event(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *textObj, zval *delegate, zval *event);
/*@zep NS\NSControl selectWithFrameEditorDelegateStartLength(int handle, double x, double y, double width, double height, int textObj, int delegate, int start, int length) -> void */
void ns_nscontrol_select_with_frame_editor_delegate_start_length(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *textObj, zval *delegate, zval *start, zval *length);
/*@zep NS\NSControl endEditing(int handle, int textObj) -> void */
void ns_nscontrol_end_editing(zval *handle, zval *textObj);

/* ---- NSDeprecated ---- */

/*@reserved NS\NSControl - (void)setFloatingPointFormat:(BOOL)autoRange left:(NSUInteger)leftDigits right:(NSUInteger)rightDigits API_DEPRECATED("", macos(10.0,10.0)); */

/*@reserved NS\NSControl @property (class, nullable) Class cellClass — getter */
/*@reserved NS\NSControl @property (class, nullable) Class cellClass — setter */

/*@zep NS\NSControl cell(int handle) -> int */
zend_long ns_nscontrol_cell(zval *handle);
/*@zep NS\NSControl setCell(int handle, int cell) -> void */
void ns_nscontrol_set_cell(zval *handle, zval *cell);

/*@zep NS\NSControl selectedCell(int handle) -> int */
zend_long ns_nscontrol_selected_cell(zval *handle);
/*@zep NS\NSControl selectedTag(int handle) -> int */
zend_long ns_nscontrol_selected_tag(zval *handle);

/*@reserved NS\NSControl - (void)setNeedsDisplay API_DEPRECATED("Set the needsDisplay property to YES instead", macos(10.0,10.14)); */
/*@reserved NS\NSControl - (void)calcSize API_DEPRECATED("Override -layout instead. This method should never be called", macos(10.0,10.14)); */

/*@zep NS\NSControl updateCell(int handle, int cell) -> void */
void ns_nscontrol_update_cell(zval *handle, zval *cell);
/*@zep NS\NSControl updateCellInside(int handle, int cell) -> void */
void ns_nscontrol_update_cell_inside(zval *handle, zval *cell);
/*@zep NS\NSControl drawCellInside(int handle, int cell) -> void */
void ns_nscontrol_draw_cell_inside(zval *handle, zval *cell);
/*@zep NS\NSControl drawCell(int handle, int cell) -> void */
void ns_nscontrol_draw_cell(zval *handle, zval *cell);
/*@zep NS\NSControl selectCell(int handle, int cell) -> void */
void ns_nscontrol_select_cell(zval *handle, zval *cell);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_CONTROL_H */
