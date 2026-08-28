#ifndef PHP_APPKIT_NS_CELL_H
#define PHP_APPKIT_NS_CELL_H

/*
 * Faithful 1:1 binding of AppKit NSCell.h. Every member of the class
 * (base interface + same-file NSKeyboardUI, NSCellAttributedStringMethods,
 * NSCellMixedState, NSCellHitTest, NSCellExpansion, NSCellBackgroundStyle,
 * and NSDeprecated categories) is either bound or reserved. NSCoder,
 * NSAttributedString, and API_DEPRECATED members are reserved; nothing
 * is omitted. Protocol blocks (NSCopying, NSCoding,
 * NSUserInterfaceItemIdentification, NSAccessibilityElement,
 * NSAccessibility) are not class members. The C helpers
 * NSDrawThreePartImage / NSDrawNinePartImage are not class members.
 * init / initTextCell / initImageCell are alloc+init construction glue.
 * Nullable SEL action crosses as var.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSCell ---- */

/*@zep NS\NSCell init() -> int */
zend_long ns_nscell_init(void);
/*@zep NS\NSCell initTextCell(string string_) -> int */
zend_long ns_nscell_init_text_cell(zval *string_);
/*@zep NS\NSCell initImageCell(int image) -> int */
zend_long ns_nscell_init_image_cell(zval *image);
/*@reserved NS\NSCell - (instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER; */

/*@zep NS\NSCell prefersTrackingUntilMouseUp() -> bool */
zend_long ns_nscell_prefers_tracking_until_mouse_up(void);

/*@zep NS\NSCell controlView(int handle) -> int */
zend_long ns_nscell_control_view(zval *handle);
/*@zep NS\NSCell setControlView(int handle, int controlView) -> void */
void ns_nscell_set_control_view(zval *handle, zval *controlView);

/*@zep NS\NSCell type(int handle) -> int */
zend_long ns_nscell_type(zval *handle);
/*@zep NS\NSCell setType(int handle, int type) -> void */
void ns_nscell_set_type(zval *handle, zval *type);

/*@zep NS\NSCell state(int handle) -> int */
zend_long ns_nscell_state(zval *handle);
/*@zep NS\NSCell setState(int handle, int state) -> void */
void ns_nscell_set_state(zval *handle, zval *state);

/*@zep NS\NSCell target(int handle) -> int */
zend_long ns_nscell_target(zval *handle);
/*@zep NS\NSCell setTarget(int handle, int target) -> void */
void ns_nscell_set_target(zval *handle, zval *target);

/*@zep NS\NSCell action(int handle) -> var */
void ns_nscell_action(zval *return_value, zval *handle);
/*@zep NS\NSCell setAction(int handle, var action) -> void */
void ns_nscell_set_action(zval *handle, zval *action);

/*@zep NS\NSCell tag(int handle) -> int */
zend_long ns_nscell_tag(zval *handle);
/*@zep NS\NSCell setTag(int handle, int tag) -> void */
void ns_nscell_set_tag(zval *handle, zval *tag);

/*@zep NS\NSCell title(int handle) -> string */
void ns_nscell_title(zval *return_value, zval *handle);
/*@zep NS\NSCell setTitle(int handle, string title) -> void */
void ns_nscell_set_title(zval *handle, zval *title);

/*@zep NS\NSCell isOpaque(int handle) -> bool */
zend_long ns_nscell_is_opaque(zval *handle);

/*@zep NS\NSCell isEnabled(int handle) -> bool */
zend_long ns_nscell_is_enabled(zval *handle);
/*@zep NS\NSCell setEnabled(int handle, bool enabled) -> void */
void ns_nscell_set_enabled(zval *handle, zval *enabled);

/*@zep NS\NSCell sendActionOn(int handle, int mask) -> int */
zend_long ns_nscell_send_action_on(zval *handle, zval *mask);

/*@zep NS\NSCell isContinuous(int handle) -> bool */
zend_long ns_nscell_is_continuous(zval *handle);
/*@zep NS\NSCell setContinuous(int handle, bool continuous) -> void */
void ns_nscell_set_continuous(zval *handle, zval *continuous);

/*@zep NS\NSCell isEditable(int handle) -> bool */
zend_long ns_nscell_is_editable(zval *handle);
/*@zep NS\NSCell setEditable(int handle, bool editable) -> void */
void ns_nscell_set_editable(zval *handle, zval *editable);

/*@zep NS\NSCell isSelectable(int handle) -> bool */
zend_long ns_nscell_is_selectable(zval *handle);
/*@zep NS\NSCell setSelectable(int handle, bool selectable) -> void */
void ns_nscell_set_selectable(zval *handle, zval *selectable);

/*@zep NS\NSCell isBordered(int handle) -> bool */
zend_long ns_nscell_is_bordered(zval *handle);
/*@zep NS\NSCell setBordered(int handle, bool bordered) -> void */
void ns_nscell_set_bordered(zval *handle, zval *bordered);

/*@zep NS\NSCell isBezeled(int handle) -> bool */
zend_long ns_nscell_is_bezeled(zval *handle);
/*@zep NS\NSCell setBezeled(int handle, bool bezeled) -> void */
void ns_nscell_set_bezeled(zval *handle, zval *bezeled);

/*@zep NS\NSCell isScrollable(int handle) -> bool */
zend_long ns_nscell_is_scrollable(zval *handle);
/*@zep NS\NSCell setScrollable(int handle, bool scrollable) -> void */
void ns_nscell_set_scrollable(zval *handle, zval *scrollable);

/*@zep NS\NSCell isHighlighted(int handle) -> bool */
zend_long ns_nscell_is_highlighted(zval *handle);
/*@zep NS\NSCell setHighlighted(int handle, bool highlighted) -> void */
void ns_nscell_set_highlighted(zval *handle, zval *highlighted);

/*@zep NS\NSCell alignment(int handle) -> int */
zend_long ns_nscell_alignment(zval *handle);
/*@zep NS\NSCell setAlignment(int handle, int alignment) -> void */
void ns_nscell_set_alignment(zval *handle, zval *alignment);

/*@zep NS\NSCell wraps(int handle) -> bool */
zend_long ns_nscell_wraps(zval *handle);
/*@zep NS\NSCell setWraps(int handle, bool wraps) -> void */
void ns_nscell_set_wraps(zval *handle, zval *wraps);

/*@zep NS\NSCell font(int handle) -> int */
zend_long ns_nscell_font(zval *handle);
/*@zep NS\NSCell setFont(int handle, int font) -> void */
void ns_nscell_set_font(zval *handle, zval *font);

/*@zep NS\NSCell keyEquivalent(int handle) -> string */
void ns_nscell_key_equivalent(zval *return_value, zval *handle);

/*@zep NS\NSCell formatter(int handle) -> int */
zend_long ns_nscell_formatter(zval *handle);
/*@zep NS\NSCell setFormatter(int handle, int formatter) -> void */
void ns_nscell_set_formatter(zval *handle, zval *formatter);

/*@zep NS\NSCell objectValue(int handle) -> int */
zend_long ns_nscell_object_value(zval *handle);
/*@zep NS\NSCell setObjectValue(int handle, int objectValue) -> void */
void ns_nscell_set_object_value(zval *handle, zval *objectValue);

/*@zep NS\NSCell hasValidObjectValue(int handle) -> bool */
zend_long ns_nscell_has_valid_object_value(zval *handle);

/*@zep NS\NSCell stringValue(int handle) -> string */
void ns_nscell_string_value(zval *return_value, zval *handle);
/*@zep NS\NSCell setStringValue(int handle, string stringValue) -> void */
void ns_nscell_set_string_value(zval *handle, zval *stringValue);

/*@zep NS\NSCell compare(int handle, int otherCell) -> int */
zend_long ns_nscell_compare(zval *handle, zval *otherCell);

/*@zep NS\NSCell intValue(int handle) -> int */
zend_long ns_nscell_int_value(zval *handle);
/*@zep NS\NSCell setIntValue(int handle, int intValue) -> void */
void ns_nscell_set_int_value(zval *handle, zval *intValue);

/*@zep NS\NSCell floatValue(int handle) -> double */
double ns_nscell_float_value(zval *handle);
/*@zep NS\NSCell setFloatValue(int handle, double floatValue) -> void */
void ns_nscell_set_float_value(zval *handle, zval *floatValue);

/*@zep NS\NSCell doubleValue(int handle) -> double */
double ns_nscell_double_value(zval *handle);
/*@zep NS\NSCell setDoubleValue(int handle, double doubleValue) -> void */
void ns_nscell_set_double_value(zval *handle, zval *doubleValue);

/*@zep NS\NSCell integerValue(int handle) -> int */
zend_long ns_nscell_integer_value(zval *handle);
/*@zep NS\NSCell setIntegerValue(int handle, int integerValue) -> void */
void ns_nscell_set_integer_value(zval *handle, zval *integerValue);

/*@zep NS\NSCell takeIntValueFrom(int handle, int sender) -> void */
void ns_nscell_take_int_value_from(zval *handle, zval *sender);
/*@zep NS\NSCell takeFloatValueFrom(int handle, int sender) -> void */
void ns_nscell_take_float_value_from(zval *handle, zval *sender);
/*@zep NS\NSCell takeDoubleValueFrom(int handle, int sender) -> void */
void ns_nscell_take_double_value_from(zval *handle, zval *sender);
/*@zep NS\NSCell takeStringValueFrom(int handle, int sender) -> void */
void ns_nscell_take_string_value_from(zval *handle, zval *sender);
/*@zep NS\NSCell takeObjectValueFrom(int handle, int sender) -> void */
void ns_nscell_take_object_value_from(zval *handle, zval *sender);
/*@zep NS\NSCell takeIntegerValueFrom(int handle, int sender) -> void */
void ns_nscell_take_integer_value_from(zval *handle, zval *sender);

/*@zep NS\NSCell image(int handle) -> int */
zend_long ns_nscell_image(zval *handle);
/*@zep NS\NSCell setImage(int handle, int image) -> void */
void ns_nscell_set_image(zval *handle, zval *image);

/*@zep NS\NSCell controlSize(int handle) -> int */
zend_long ns_nscell_control_size(zval *handle);
/*@zep NS\NSCell setControlSize(int handle, int controlSize) -> void */
void ns_nscell_set_control_size(zval *handle, zval *controlSize);

/*@zep NS\NSCell representedObject(int handle) -> int */
zend_long ns_nscell_represented_object(zval *handle);
/*@zep NS\NSCell setRepresentedObject(int handle, int representedObject) -> void */
void ns_nscell_set_represented_object(zval *handle, zval *representedObject);

/*@zep NS\NSCell cellAttribute(int handle, int parameter) -> int */
zend_long ns_nscell_cell_attribute(zval *handle, zval *parameter);
/*@zep NS\NSCell setCellAttributeTo(int handle, int parameter, int value) -> void */
void ns_nscell_set_cell_attribute_to(zval *handle, zval *parameter, zval *value);

/*@zep NS\NSCell imageRectForBounds(int handle, double x, double y, double width, double height) -> array */
void ns_nscell_image_rect_for_bounds(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSCell titleRectForBounds(int handle, double x, double y, double width, double height) -> array */
void ns_nscell_title_rect_for_bounds(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSCell drawingRectForBounds(int handle, double x, double y, double width, double height) -> array */
void ns_nscell_drawing_rect_for_bounds(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSCell cellSize(int handle) -> array */
void ns_nscell_cell_size(zval *return_value, zval *handle);
/*@zep NS\NSCell cellSizeForBounds(int handle, double x, double y, double width, double height) -> array */
void ns_nscell_cell_size_for_bounds(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSCell highlightColorWithFrameInView(int handle, double x, double y, double width, double height, int controlView) -> int */
zend_long ns_nscell_highlight_color_with_frame_in_view(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *controlView);

/*@zep NS\NSCell calcDrawInfo(int handle, double x, double y, double width, double height) -> void */
void ns_nscell_calc_draw_info(zval *handle, zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSCell setUpFieldEditorAttributes(int handle, int textObj) -> int */
zend_long ns_nscell_set_up_field_editor_attributes(zval *handle, zval *textObj);

/*@zep NS\NSCell drawInteriorWithFrameInView(int handle, double x, double y, double width, double height, int controlView) -> void */
void ns_nscell_draw_interior_with_frame_in_view(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *controlView);
/*@zep NS\NSCell drawWithFrameInView(int handle, double x, double y, double width, double height, int controlView) -> void */
void ns_nscell_draw_with_frame_in_view(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *controlView);
/*@zep NS\NSCell highlightWithFrameInView(int handle, bool flag, double x, double y, double width, double height, int controlView) -> void */
void ns_nscell_highlight_with_frame_in_view(zval *handle, zval *flag, zval *x, zval *y, zval *width, zval *height, zval *controlView);

/*@zep NS\NSCell mouseDownFlags(int handle) -> int */
zend_long ns_nscell_mouse_down_flags(zval *handle);

/*@zep NS\NSCell getPeriodicDelayInterval(int handle) -> array */
void ns_nscell_get_periodic_delay_interval(zval *return_value, zval *handle);

/*@zep NS\NSCell startTrackingAtInView(int handle, double startX, double startY, int controlView) -> bool */
zend_long ns_nscell_start_tracking_at_in_view(zval *handle, zval *startX, zval *startY, zval *controlView);
/*@zep NS\NSCell continueTrackingAtInView(int handle, double lastX, double lastY, double currentX, double currentY, int controlView) -> bool */
zend_long ns_nscell_continue_tracking_at_in_view(zval *handle, zval *lastX, zval *lastY, zval *currentX, zval *currentY, zval *controlView);
/*@zep NS\NSCell stopTrackingAtInViewMouseIsUp(int handle, double lastX, double lastY, double stopX, double stopY, int controlView, bool flag) -> void */
void ns_nscell_stop_tracking_at_in_view_mouse_is_up(zval *handle, zval *lastX, zval *lastY, zval *stopX, zval *stopY, zval *controlView, zval *flag);
/*@zep NS\NSCell trackMouseInRectOfViewUntilMouseUp(int handle, int event, double x, double y, double width, double height, int controlView, bool flag) -> bool */
zend_long ns_nscell_track_mouse_in_rect_of_view_until_mouse_up(zval *handle, zval *event, zval *x, zval *y, zval *width, zval *height, zval *controlView, zval *flag);

/*@zep NS\NSCell editWithFrameInViewEditorDelegateEvent(int handle, double x, double y, double width, double height, int controlView, int textObj, int delegate, int event) -> void */
void ns_nscell_edit_with_frame_in_view_editor_delegate_event(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *controlView, zval *textObj, zval *delegate, zval *event);
/*@zep NS\NSCell selectWithFrameInViewEditorDelegateStartLength(int handle, double x, double y, double width, double height, int controlView, int textObj, int delegate, int start, int length) -> void */
void ns_nscell_select_with_frame_in_view_editor_delegate_start_length(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *controlView, zval *textObj, zval *delegate, zval *start, zval *length);
/*@zep NS\NSCell endEditing(int handle, int textObj) -> void */
void ns_nscell_end_editing(zval *handle, zval *textObj);

/*@zep NS\NSCell resetCursorRectInView(int handle, double x, double y, double width, double height, int controlView) -> void */
void ns_nscell_reset_cursor_rect_in_view(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *controlView);

/*@zep NS\NSCell menu(int handle) -> int */
zend_long ns_nscell_menu(zval *handle);
/*@zep NS\NSCell setMenu(int handle, int menu) -> void */
void ns_nscell_set_menu(zval *handle, zval *menu);

/*@zep NS\NSCell menuForEventInRectOfView(int handle, int event, double x, double y, double width, double height, int view) -> int */
zend_long ns_nscell_menu_for_event_in_rect_of_view(zval *handle, zval *event, zval *x, zval *y, zval *width, zval *height, zval *view);

/*@zep NS\NSCell defaultMenu() -> int */
zend_long ns_nscell_default_menu(void);

/*@zep NS\NSCell sendsActionOnEndEditing(int handle) -> bool */
zend_long ns_nscell_sends_action_on_end_editing(zval *handle);
/*@zep NS\NSCell setSendsActionOnEndEditing(int handle, bool sendsActionOnEndEditing) -> void */
void ns_nscell_set_sends_action_on_end_editing(zval *handle, zval *sendsActionOnEndEditing);

/*@zep NS\NSCell baseWritingDirection(int handle) -> int */
zend_long ns_nscell_base_writing_direction(zval *handle);
/*@zep NS\NSCell setBaseWritingDirection(int handle, int baseWritingDirection) -> void */
void ns_nscell_set_base_writing_direction(zval *handle, zval *baseWritingDirection);

/*@zep NS\NSCell lineBreakMode(int handle) -> int */
zend_long ns_nscell_line_break_mode(zval *handle);
/*@zep NS\NSCell setLineBreakMode(int handle, int lineBreakMode) -> void */
void ns_nscell_set_line_break_mode(zval *handle, zval *lineBreakMode);

/*@zep NS\NSCell allowsUndo(int handle) -> bool */
zend_long ns_nscell_allows_undo(zval *handle);
/*@zep NS\NSCell setAllowsUndo(int handle, bool allowsUndo) -> void */
void ns_nscell_set_allows_undo(zval *handle, zval *allowsUndo);

/*@zep NS\NSCell truncatesLastVisibleLine(int handle) -> bool */
zend_long ns_nscell_truncates_last_visible_line(zval *handle);
/*@zep NS\NSCell setTruncatesLastVisibleLine(int handle, bool truncatesLastVisibleLine) -> void */
void ns_nscell_set_truncates_last_visible_line(zval *handle, zval *truncatesLastVisibleLine);

/*@zep NS\NSCell userInterfaceLayoutDirection(int handle) -> int */
zend_long ns_nscell_user_interface_layout_direction(zval *handle);
/*@zep NS\NSCell setUserInterfaceLayoutDirection(int handle, int userInterfaceLayoutDirection) -> void */
void ns_nscell_set_user_interface_layout_direction(zval *handle, zval *userInterfaceLayoutDirection);

/*@zep NS\NSCell fieldEditorForView(int handle, int controlView) -> int */
zend_long ns_nscell_field_editor_for_view(zval *handle, zval *controlView);

/*@zep NS\NSCell usesSingleLineMode(int handle) -> bool */
zend_long ns_nscell_uses_single_line_mode(zval *handle);
/*@zep NS\NSCell setUsesSingleLineMode(int handle, bool usesSingleLineMode) -> void */
void ns_nscell_set_uses_single_line_mode(zval *handle, zval *usesSingleLineMode);

/*@zep NS\NSCell draggingImageComponentsWithFrameInView(int handle, double x, double y, double width, double height, int view) -> array */
void ns_nscell_dragging_image_components_with_frame_in_view(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *view);

/* ---- NSKeyboardUI ---- */

/*@zep NS\NSCell refusesFirstResponder(int handle) -> bool */
zend_long ns_nscell_refuses_first_responder(zval *handle);
/*@zep NS\NSCell setRefusesFirstResponder(int handle, bool refusesFirstResponder) -> void */
void ns_nscell_set_refuses_first_responder(zval *handle, zval *refusesFirstResponder);

/*@zep NS\NSCell acceptsFirstResponder(int handle) -> bool */
zend_long ns_nscell_accepts_first_responder(zval *handle);

/*@zep NS\NSCell showsFirstResponder(int handle) -> bool */
zend_long ns_nscell_shows_first_responder(zval *handle);
/*@zep NS\NSCell setShowsFirstResponder(int handle, bool showsFirstResponder) -> void */
void ns_nscell_set_shows_first_responder(zval *handle, zval *showsFirstResponder);

/*@zep NS\NSCell performClick(int handle, int sender) -> void */
void ns_nscell_perform_click(zval *handle, zval *sender);

/*@zep NS\NSCell focusRingType(int handle) -> int */
zend_long ns_nscell_focus_ring_type(zval *handle);
/*@zep NS\NSCell setFocusRingType(int handle, int focusRingType) -> void */
void ns_nscell_set_focus_ring_type(zval *handle, zval *focusRingType);

/*@zep NS\NSCell defaultFocusRingType() -> int */
zend_long ns_nscell_default_focus_ring_type(void);

/*@zep NS\NSCell drawFocusRingMaskWithFrameInView(int handle, double x, double y, double width, double height, int controlView) -> void */
void ns_nscell_draw_focus_ring_mask_with_frame_in_view(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *controlView);
/*@zep NS\NSCell focusRingMaskBoundsForFrameInView(int handle, double x, double y, double width, double height, int controlView) -> array */
void ns_nscell_focus_ring_mask_bounds_for_frame_in_view(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *controlView);

/*@zep NS\NSCell wantsNotificationForMarkedText(int handle) -> bool */
zend_long ns_nscell_wants_notification_for_marked_text(zval *handle);

/* ---- NSCellAttributedStringMethods ---- */

/*@reserved NS\NSCell @property (copy) NSAttributedString *attributedStringValue — getter */
/*@reserved NS\NSCell @property (copy) NSAttributedString *attributedStringValue — setter */

/*@zep NS\NSCell allowsEditingTextAttributes(int handle) -> bool */
zend_long ns_nscell_allows_editing_text_attributes(zval *handle);
/*@zep NS\NSCell setAllowsEditingTextAttributes(int handle, bool allowsEditingTextAttributes) -> void */
void ns_nscell_set_allows_editing_text_attributes(zval *handle, zval *allowsEditingTextAttributes);

/*@zep NS\NSCell importsGraphics(int handle) -> bool */
zend_long ns_nscell_imports_graphics(zval *handle);
/*@zep NS\NSCell setImportsGraphics(int handle, bool importsGraphics) -> void */
void ns_nscell_set_imports_graphics(zval *handle, zval *importsGraphics);

/* ---- NSCellMixedState ---- */

/*@zep NS\NSCell allowsMixedState(int handle) -> bool */
zend_long ns_nscell_allows_mixed_state(zval *handle);
/*@zep NS\NSCell setAllowsMixedState(int handle, bool allowsMixedState) -> void */
void ns_nscell_set_allows_mixed_state(zval *handle, zval *allowsMixedState);

/*@zep NS\NSCell nextState(int handle) -> int */
zend_long ns_nscell_next_state(zval *handle);
/*@zep NS\NSCell setNextState(int handle) -> void */
void ns_nscell_set_next_state(zval *handle);

/* ---- NSCellHitTest ---- */

/*@zep NS\NSCell hitTestForEventInRectOfView(int handle, int event, double x, double y, double width, double height, int controlView) -> int */
zend_long ns_nscell_hit_test_for_event_in_rect_of_view(zval *handle, zval *event, zval *x, zval *y, zval *width, zval *height, zval *controlView);

/* ---- NSCellExpansion ---- */

/*@zep NS\NSCell expansionFrameWithFrameInView(int handle, double x, double y, double width, double height, int view) -> array */
void ns_nscell_expansion_frame_with_frame_in_view(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *view);
/*@zep NS\NSCell drawWithExpansionFrameInView(int handle, double x, double y, double width, double height, int view) -> void */
void ns_nscell_draw_with_expansion_frame_in_view(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *view);

/* ---- NSCellBackgroundStyle ---- */

/*@zep NS\NSCell backgroundStyle(int handle) -> int */
zend_long ns_nscell_background_style(zval *handle);
/*@zep NS\NSCell setBackgroundStyle(int handle, int backgroundStyle) -> void */
void ns_nscell_set_background_style(zval *handle, zval *backgroundStyle);

/*@zep NS\NSCell interiorBackgroundStyle(int handle) -> int */
zend_long ns_nscell_interior_background_style(zval *handle);

/* ---- NSDeprecated ---- */

/*@reserved NS\NSCell @property NSControlTint controlTint API_DEPRECATED — getter */
/*@reserved NS\NSCell @property NSControlTint controlTint API_DEPRECATED — setter */
/*@reserved NS\NSCell - (NSInteger)entryType API_DEPRECATED("", macos(10.0,10.0)); */
/*@reserved NS\NSCell - (void)setEntryType:(NSInteger)type API_DEPRECATED("", macos(10.0,10.0)); */
/*@reserved NS\NSCell - (BOOL)isEntryAcceptable:(NSString *)string API_DEPRECATED("", macos(10.0,10.0)); */
/*@reserved NS\NSCell - (void)setFloatingPointFormat:(BOOL)autoRange left:(NSUInteger)leftDigits right:(NSUInteger)rightDigits API_DEPRECATED("", macos(10.0,10.0)); */
/*@reserved NS\NSCell - (void)setMnemonicLocation:(NSUInteger)location API_DEPRECATED("", macos(10.0,10.8)); */
/*@reserved NS\NSCell - (NSUInteger)mnemonicLocation API_DEPRECATED("", macos(10.0,10.8)); */
/*@reserved NS\NSCell - (NSString *)mnemonic API_DEPRECATED("", macos(10.0,10.8)); */
/*@reserved NS\NSCell - (void)setTitleWithMnemonic:(NSString *)stringWithAmpersand API_DEPRECATED("", macos(10.0,10.8)); */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_CELL_H */
