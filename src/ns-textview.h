#ifndef PHP_APPKIT_NS_TEXTVIEW_H
#define PHP_APPKIT_NS_TEXTVIEW_H

/*
 * Faithful 1:1 binding of AppKit NSTextView.h. Every member of the
 * class (base interface + same-file categories) is either bound or
 * reserved. Nothing is omitted. NSCoder, NSAttributedString, and
 * API_DEPRECATED members are reserved. The NSTextViewDelegate
 * protocol and adopted protocols live on Bridge delegates, not
 * here. Notification names, enums, and pasteboard/touch-bar
 * constants are not class members. Inherited NSText / NSView /
 * NSResponder members bind on those classes; NSSharing redeclares
 * several NSText properties and those redeclarations bind here.
 * initWithFrame / initWithFrameTextContainer /
 * initUsingTextLayoutManager are alloc+init construction glue.
 * NSRange crosses as location/length ints in and an assoc array
 * out; NSRect / NSPoint / NSSize follow the struct convention.
 * Nullable NSString / NSPasteboardType cross as var. NSDictionary
 * attribute bags and object graphs cross as handles;
 * NSArray<NSString*> / NSPasteboardType arrays cross as strings.
 * Scalar and NSString** out-params fold into an assoc array.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSTextView ---- */

/*@zep NS\NSTextView initWithFrameTextContainer(double x, double y, double width, double height, int container) -> int */
zend_long ns_nstextview_init_with_frame_text_container(zval *x, zval *y, zval *width, zval *height, zval *container);
/*@reserved NS\NSTextView - (nullable instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER; */
/*@zep NS\NSTextView initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nstextview_init_with_frame(zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSTextView initUsingTextLayoutManager(bool usingTextLayoutManager) -> int */
zend_long ns_nstextview_init_using_text_layout_manager(zval *usingTextLayoutManager);
/*@zep NS\NSTextView textViewUsingTextLayoutManager(bool usingTextLayoutManager) -> int */
zend_long ns_nstextview_text_view_using_text_layout_manager(zval *usingTextLayoutManager);
/*@zep NS\NSTextView textContainer(int handle) -> int */
zend_long ns_nstextview_text_container(zval *handle);
/*@zep NS\NSTextView setTextContainer(int handle, int textContainer) -> void */
void ns_nstextview_set_text_container(zval *handle, zval *textContainer);
/*@zep NS\NSTextView replaceTextContainer(int handle, int newContainer) -> void */
void ns_nstextview_replace_text_container(zval *handle, zval *newContainer);
/*@zep NS\NSTextView textContainerInset(int handle) -> array */
void ns_nstextview_text_container_inset(zval *return_value, zval *handle);
/*@zep NS\NSTextView setTextContainerInset(int handle, double width, double height) -> void */
void ns_nstextview_set_text_container_inset(zval *handle, zval *width, zval *height);
/*@zep NS\NSTextView textContainerOrigin(int handle) -> array */
void ns_nstextview_text_container_origin(zval *return_value, zval *handle);
/*@zep NS\NSTextView invalidateTextContainerOrigin(int handle) -> void */
void ns_nstextview_invalidate_text_container_origin(zval *handle);
/*@zep NS\NSTextView layoutManager(int handle) -> int */
zend_long ns_nstextview_layout_manager(zval *handle);
/*@zep NS\NSTextView textStorage(int handle) -> int */
zend_long ns_nstextview_text_storage(zval *handle);
/*@zep NS\NSTextView textLayoutManager(int handle) -> int */
zend_long ns_nstextview_text_layout_manager(zval *handle);
/*@zep NS\NSTextView textContentStorage(int handle) -> int */
zend_long ns_nstextview_text_content_storage(zval *handle);
/*@reserved NS\NSTextView - (void)insertText:(id)insertString API_DEPRECATED; */
/*@zep NS\NSTextView setConstrainedFrameSize(int handle, double width, double height) -> void */
void ns_nstextview_set_constrained_frame_size(zval *handle, zval *width, zval *height);
/*@zep NS\NSTextView setAlignmentRange(int handle, int alignment, int location, int length) -> void */
void ns_nstextview_set_alignment_range(zval *handle, zval *alignment, zval *location, zval *length);
/*@zep NS\NSTextView setBaseWritingDirectionRange(int handle, int writingDirection, int location, int length) -> void */
void ns_nstextview_set_base_writing_direction_range(zval *handle, zval *writingDirection, zval *location, zval *length);
/*@zep NS\NSTextView turnOffKerning(int handle, int sender) -> void */
void ns_nstextview_turn_off_kerning(zval *handle, zval *sender);
/*@zep NS\NSTextView tightenKerning(int handle, int sender) -> void */
void ns_nstextview_tighten_kerning(zval *handle, zval *sender);
/*@zep NS\NSTextView loosenKerning(int handle, int sender) -> void */
void ns_nstextview_loosen_kerning(zval *handle, zval *sender);
/*@zep NS\NSTextView useStandardKerning(int handle, int sender) -> void */
void ns_nstextview_use_standard_kerning(zval *handle, zval *sender);
/*@zep NS\NSTextView turnOffLigatures(int handle, int sender) -> void */
void ns_nstextview_turn_off_ligatures(zval *handle, zval *sender);
/*@zep NS\NSTextView useStandardLigatures(int handle, int sender) -> void */
void ns_nstextview_use_standard_ligatures(zval *handle, zval *sender);
/*@zep NS\NSTextView useAllLigatures(int handle, int sender) -> void */
void ns_nstextview_use_all_ligatures(zval *handle, zval *sender);
/*@zep NS\NSTextView raiseBaseline(int handle, int sender) -> void */
void ns_nstextview_raise_baseline(zval *handle, zval *sender);
/*@zep NS\NSTextView lowerBaseline(int handle, int sender) -> void */
void ns_nstextview_lower_baseline(zval *handle, zval *sender);
/*@reserved NS\NSTextView - (void)toggleTraditionalCharacterShape:(nullable id)sender API_DEPRECATED; */
/*@zep NS\NSTextView outline(int handle, int sender) -> void */
void ns_nstextview_outline(zval *handle, zval *sender);
/*@zep NS\NSTextView performFindPanelAction(int handle, int sender) -> void */
void ns_nstextview_perform_find_panel_action(zval *handle, zval *sender);
/*@zep NS\NSTextView alignJustified(int handle, int sender) -> void */
void ns_nstextview_align_justified(zval *handle, zval *sender);
/*@zep NS\NSTextView changeColor(int handle, int sender) -> void */
void ns_nstextview_change_color(zval *handle, zval *sender);
/*@zep NS\NSTextView changeAttributes(int handle, int sender) -> void */
void ns_nstextview_change_attributes(zval *handle, zval *sender);
/*@zep NS\NSTextView changeDocumentBackgroundColor(int handle, int sender) -> void */
void ns_nstextview_change_document_background_color(zval *handle, zval *sender);
/*@zep NS\NSTextView orderFrontSpacingPanel(int handle, int sender) -> void */
void ns_nstextview_order_front_spacing_panel(zval *handle, zval *sender);
/*@zep NS\NSTextView orderFrontLinkPanel(int handle, int sender) -> void */
void ns_nstextview_order_front_link_panel(zval *handle, zval *sender);
/*@zep NS\NSTextView orderFrontListPanel(int handle, int sender) -> void */
void ns_nstextview_order_front_list_panel(zval *handle, zval *sender);
/*@zep NS\NSTextView orderFrontTablePanel(int handle, int sender) -> void */
void ns_nstextview_order_front_table_panel(zval *handle, zval *sender);
/*@zep NS\NSTextView rulerViewDidMoveMarker(int handle, int ruler, int marker) -> void */
void ns_nstextview_ruler_view_did_move_marker(zval *handle, zval *ruler, zval *marker);
/*@zep NS\NSTextView rulerViewDidRemoveMarker(int handle, int ruler, int marker) -> void */
void ns_nstextview_ruler_view_did_remove_marker(zval *handle, zval *ruler, zval *marker);
/*@zep NS\NSTextView rulerViewDidAddMarker(int handle, int ruler, int marker) -> void */
void ns_nstextview_ruler_view_did_add_marker(zval *handle, zval *ruler, zval *marker);
/*@zep NS\NSTextView rulerViewShouldMoveMarker(int handle, int ruler, int marker) -> bool */
zend_long ns_nstextview_ruler_view_should_move_marker(zval *handle, zval *ruler, zval *marker);
/*@zep NS\NSTextView rulerViewShouldAddMarker(int handle, int ruler, int marker) -> bool */
zend_long ns_nstextview_ruler_view_should_add_marker(zval *handle, zval *ruler, zval *marker);
/*@zep NS\NSTextView rulerViewWillMoveMarkerToLocation(int handle, int ruler, int marker, double location) -> double */
double ns_nstextview_ruler_view_will_move_marker_to_location(zval *handle, zval *ruler, zval *marker, zval *location);
/*@zep NS\NSTextView rulerViewShouldRemoveMarker(int handle, int ruler, int marker) -> bool */
zend_long ns_nstextview_ruler_view_should_remove_marker(zval *handle, zval *ruler, zval *marker);
/*@zep NS\NSTextView rulerViewWillAddMarkerAtLocation(int handle, int ruler, int marker, double location) -> double */
double ns_nstextview_ruler_view_will_add_marker_at_location(zval *handle, zval *ruler, zval *marker, zval *location);
/*@zep NS\NSTextView rulerViewHandleMouseDown(int handle, int ruler, int event) -> void */
void ns_nstextview_ruler_view_handle_mouse_down(zval *handle, zval *ruler, zval *event);
/*@zep NS\NSTextView setNeedsDisplayInRectAvoidAdditionalLayout(int handle, double x, double y, double width, double height, bool flag) -> void */
void ns_nstextview_set_needs_display_in_rect_avoid_additional_layout(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *flag);
/*@zep NS\NSTextView shouldDrawInsertionPoint(int handle) -> bool */
zend_long ns_nstextview_should_draw_insertion_point(zval *handle);
/*@zep NS\NSTextView drawInsertionPointInRectColorTurnedOn(int handle, double x, double y, double width, double height, int color, bool flag) -> void */
void ns_nstextview_draw_insertion_point_in_rect_color_turned_on(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *color, zval *flag);
/*@zep NS\NSTextView drawViewBackgroundInRect(int handle, double x, double y, double width, double height) -> void */
void ns_nstextview_draw_view_background_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSTextView updateRuler(int handle) -> void */
void ns_nstextview_update_ruler(zval *handle);
/*@zep NS\NSTextView updateFontPanel(int handle) -> void */
void ns_nstextview_update_font_panel(zval *handle);
/*@zep NS\NSTextView updateDragTypeRegistration(int handle) -> void */
void ns_nstextview_update_drag_type_registration(zval *handle);
/*@zep NS\NSTextView selectionRangeForProposedRangeGranularity(int handle, int location, int length, int granularity) -> array */
void ns_nstextview_selection_range_for_proposed_range_granularity(zval *return_value, zval *handle, zval *location, zval *length, zval *granularity);
/*@zep NS\NSTextView clickedOnLinkAtIndex(int handle, int link, int charIndex) -> void */
void ns_nstextview_clicked_on_link_at_index(zval *handle, zval *link, zval *charIndex);
/*@zep NS\NSTextView startSpeaking(int handle, int sender) -> void */
void ns_nstextview_start_speaking(zval *handle, zval *sender);
/*@zep NS\NSTextView stopSpeaking(int handle, int sender) -> void */
void ns_nstextview_stop_speaking(zval *handle, zval *sender);
/*@zep NS\NSTextView setLayoutOrientation(int handle, int orientation) -> void */
void ns_nstextview_set_layout_orientation(zval *handle, zval *orientation);
/*@zep NS\NSTextView changeLayoutOrientation(int handle, int sender) -> void */
void ns_nstextview_change_layout_orientation(zval *handle, zval *sender);
/*@zep NS\NSTextView characterIndexForInsertionAtPoint(int handle, double x, double y) -> int */
zend_long ns_nstextview_character_index_for_insertion_at_point(zval *handle, zval *x, zval *y);
/*@zep NS\NSTextView stronglyReferencesTextStorage() -> bool */
zend_long ns_nstextview_strongly_references_text_storage(void);
/*@reserved NS\NSTextView - (BOOL)performValidatedReplacementInRange:(NSRange)range withAttributedString:(NSAttributedString *)attributedString; */
/*@zep NS\NSTextView usesAdaptiveColorMappingForDarkAppearance(int handle) -> bool */
zend_long ns_nstextview_uses_adaptive_color_mapping_for_dark_appearance(zval *handle);
/*@zep NS\NSTextView setUsesAdaptiveColorMappingForDarkAppearance(int handle, bool usesAdaptiveColorMappingForDarkAppearance) -> void */
void ns_nstextview_set_uses_adaptive_color_mapping_for_dark_appearance(zval *handle, zval *usesAdaptiveColorMappingForDarkAppearance);
/*@zep NS\NSTextView complete(int handle, int sender) -> void */
void ns_nstextview_complete(zval *handle, zval *sender);
/*@zep NS\NSTextView rangeForUserCompletion(int handle) -> array */
void ns_nstextview_range_for_user_completion(zval *return_value, zval *handle);
/*@zep NS\NSTextView completionsForPartialWordRangeIndexOfSelectedItem(int handle, int location, int length) -> array */
void ns_nstextview_completions_for_partial_word_range_index_of_selected_item(zval *return_value, zval *handle, zval *location, zval *length);
/*@zep NS\NSTextView insertCompletionForPartialWordRangeMovementIsFinal(int handle, string word, int location, int length, int movement, bool flag) -> void */
void ns_nstextview_insert_completion_for_partial_word_range_movement_is_final(zval *handle, zval *word, zval *location, zval *length, zval *movement, zval *flag);
/*@zep NS\NSTextView writablePasteboardTypes(int handle) -> array */
void ns_nstextview_writable_pasteboard_types(zval *return_value, zval *handle);
/*@zep NS\NSTextView writeSelectionToPasteboardType(int handle, int pboard, string type) -> bool */
zend_long ns_nstextview_write_selection_to_pasteboard_type(zval *handle, zval *pboard, zval *type);
/*@zep NS\NSTextView writeSelectionToPasteboardTypes(int handle, int pboard, array types) -> bool */
zend_long ns_nstextview_write_selection_to_pasteboard_types(zval *handle, zval *pboard, zval *types);
/*@zep NS\NSTextView readablePasteboardTypes(int handle) -> array */
void ns_nstextview_readable_pasteboard_types(zval *return_value, zval *handle);
/*@zep NS\NSTextView preferredPasteboardTypeFromArrayRestrictedToTypesFromArray(int handle, array availableTypes, array allowedTypes) -> var */
void ns_nstextview_preferred_pasteboard_type_from_array_restricted_to_types_from_array(zval *return_value, zval *handle, zval *availableTypes, zval *allowedTypes);
/*@zep NS\NSTextView readSelectionFromPasteboardType(int handle, int pboard, string type) -> bool */
zend_long ns_nstextview_read_selection_from_pasteboard_type(zval *handle, zval *pboard, zval *type);
/*@zep NS\NSTextView readSelectionFromPasteboard(int handle, int pboard) -> bool */
zend_long ns_nstextview_read_selection_from_pasteboard(zval *handle, zval *pboard);
/*@zep NS\NSTextView registerForServices() -> void */
void ns_nstextview_register_for_services(void);
/*@zep NS\NSTextView validRequestorForSendTypeReturnType(int handle, var sendType, var returnType) -> int */
zend_long ns_nstextview_valid_requestor_for_send_type_return_type(zval *handle, zval *sendType, zval *returnType);
/*@zep NS\NSTextView pasteAsPlainText(int handle, int sender) -> void */
void ns_nstextview_paste_as_plain_text(zval *handle, zval *sender);
/*@zep NS\NSTextView pasteAsRichText(int handle, int sender) -> void */
void ns_nstextview_paste_as_rich_text(zval *handle, zval *sender);
/*@zep NS\NSTextView dragSelectionWithEventOffsetSlideBack(int handle, int event, double width, double height, bool slideBack) -> bool */
zend_long ns_nstextview_drag_selection_with_event_offset_slide_back(zval *handle, zval *event, zval *width, zval *height, zval *slideBack);
/*@zep NS\NSTextView dragImageForSelectionWithEventOrigin(int handle, int event) -> array */
void ns_nstextview_drag_image_for_selection_with_event_origin(zval *return_value, zval *handle, zval *event);
/*@zep NS\NSTextView acceptableDragTypes(int handle) -> array */
void ns_nstextview_acceptable_drag_types(zval *return_value, zval *handle);
/*@zep NS\NSTextView dragOperationForDraggingInfoType(int handle, int dragInfo, string type) -> int */
zend_long ns_nstextview_drag_operation_for_dragging_info_type(zval *handle, zval *dragInfo, zval *type);
/*@zep NS\NSTextView cleanUpAfterDragOperation(int handle) -> void */
void ns_nstextview_clean_up_after_drag_operation(zval *handle);
/*@zep NS\NSTextView selectedRanges(int handle) -> array */
void ns_nstextview_selected_ranges(zval *return_value, zval *handle);
/*@zep NS\NSTextView setSelectedRanges(int handle, array selectedRanges) -> void */
void ns_nstextview_set_selected_ranges(zval *handle, zval *selectedRanges);
/*@zep NS\NSTextView setSelectedRangesAffinityStillSelecting(int handle, array ranges, int affinity, bool stillSelectingFlag) -> void */
void ns_nstextview_set_selected_ranges_affinity_still_selecting(zval *handle, zval *ranges, zval *affinity, zval *stillSelectingFlag);
/*@zep NS\NSTextView setSelectedRangeAffinityStillSelecting(int handle, int location, int length, int affinity, bool stillSelectingFlag) -> void */
void ns_nstextview_set_selected_range_affinity_still_selecting(zval *handle, zval *location, zval *length, zval *affinity, zval *stillSelectingFlag);
/*@zep NS\NSTextView selectionAffinity(int handle) -> int */
zend_long ns_nstextview_selection_affinity(zval *handle);
/*@zep NS\NSTextView selectionGranularity(int handle) -> int */
zend_long ns_nstextview_selection_granularity(zval *handle);
/*@zep NS\NSTextView setSelectionGranularity(int handle, int selectionGranularity) -> void */
void ns_nstextview_set_selection_granularity(zval *handle, zval *selectionGranularity);
/*@zep NS\NSTextView selectedTextAttributes(int handle) -> int */
zend_long ns_nstextview_selected_text_attributes(zval *handle);
/*@zep NS\NSTextView setSelectedTextAttributes(int handle, var selectedTextAttributes) -> void */
void ns_nstextview_set_selected_text_attributes(zval *handle, zval *selectedTextAttributes);
/*@zep NS\NSTextView insertionPointColor(int handle) -> int */
zend_long ns_nstextview_insertion_point_color(zval *handle);
/*@zep NS\NSTextView setInsertionPointColor(int handle, int insertionPointColor) -> void */
void ns_nstextview_set_insertion_point_color(zval *handle, zval *insertionPointColor);
/*@zep NS\NSTextView updateInsertionPointStateAndRestartTimer(int handle, bool restartFlag) -> void */
void ns_nstextview_update_insertion_point_state_and_restart_timer(zval *handle, zval *restartFlag);
/*@zep NS\NSTextView markedTextAttributes(int handle) -> int */
zend_long ns_nstextview_marked_text_attributes(zval *handle);
/*@zep NS\NSTextView setMarkedTextAttributes(int handle, var markedTextAttributes) -> void */
void ns_nstextview_set_marked_text_attributes(zval *handle, zval *markedTextAttributes);
/*@zep NS\NSTextView linkTextAttributes(int handle) -> int */
zend_long ns_nstextview_link_text_attributes(zval *handle);
/*@zep NS\NSTextView setLinkTextAttributes(int handle, var linkTextAttributes) -> void */
void ns_nstextview_set_link_text_attributes(zval *handle, zval *linkTextAttributes);
/*@zep NS\NSTextView displaysLinkToolTips(int handle) -> bool */
zend_long ns_nstextview_displays_link_tool_tips(zval *handle);
/*@zep NS\NSTextView setDisplaysLinkToolTips(int handle, bool displaysLinkToolTips) -> void */
void ns_nstextview_set_displays_link_tool_tips(zval *handle, zval *displaysLinkToolTips);
/*@zep NS\NSTextView acceptsGlyphInfo(int handle) -> bool */
zend_long ns_nstextview_accepts_glyph_info(zval *handle);
/*@zep NS\NSTextView setAcceptsGlyphInfo(int handle, bool acceptsGlyphInfo) -> void */
void ns_nstextview_set_accepts_glyph_info(zval *handle, zval *acceptsGlyphInfo);
/*@zep NS\NSTextView usesRuler(int handle) -> bool */
zend_long ns_nstextview_uses_ruler(zval *handle);
/*@zep NS\NSTextView setUsesRuler(int handle, bool usesRuler) -> void */
void ns_nstextview_set_uses_ruler(zval *handle, zval *usesRuler);
/*@zep NS\NSTextView usesInspectorBar(int handle) -> bool */
zend_long ns_nstextview_uses_inspector_bar(zval *handle);
/*@zep NS\NSTextView setUsesInspectorBar(int handle, bool usesInspectorBar) -> void */
void ns_nstextview_set_uses_inspector_bar(zval *handle, zval *usesInspectorBar);
/*@zep NS\NSTextView isContinuousSpellCheckingEnabled(int handle) -> bool */
zend_long ns_nstextview_is_continuous_spell_checking_enabled(zval *handle);
/*@zep NS\NSTextView setContinuousSpellCheckingEnabled(int handle, bool continuousSpellCheckingEnabled) -> void */
void ns_nstextview_set_continuous_spell_checking_enabled(zval *handle, zval *continuousSpellCheckingEnabled);
/*@zep NS\NSTextView toggleContinuousSpellChecking(int handle, int sender) -> void */
void ns_nstextview_toggle_continuous_spell_checking(zval *handle, zval *sender);
/*@zep NS\NSTextView spellCheckerDocumentTag(int handle) -> int */
zend_long ns_nstextview_spell_checker_document_tag(zval *handle);
/*@zep NS\NSTextView isGrammarCheckingEnabled(int handle) -> bool */
zend_long ns_nstextview_is_grammar_checking_enabled(zval *handle);
/*@zep NS\NSTextView setGrammarCheckingEnabled(int handle, bool grammarCheckingEnabled) -> void */
void ns_nstextview_set_grammar_checking_enabled(zval *handle, zval *grammarCheckingEnabled);
/*@zep NS\NSTextView toggleGrammarChecking(int handle, int sender) -> void */
void ns_nstextview_toggle_grammar_checking(zval *handle, zval *sender);
/*@zep NS\NSTextView setSpellingStateRange(int handle, int value, int location, int length) -> void */
void ns_nstextview_set_spelling_state_range(zval *handle, zval *value, zval *location, zval *length);
/*@zep NS\NSTextView typingAttributes(int handle) -> int */
zend_long ns_nstextview_typing_attributes(zval *handle);
/*@zep NS\NSTextView setTypingAttributes(int handle, var typingAttributes) -> void */
void ns_nstextview_set_typing_attributes(zval *handle, zval *typingAttributes);
/*@zep NS\NSTextView shouldChangeTextInRangesReplacementStrings(int handle, array affectedRanges, array replacementStrings) -> bool */
zend_long ns_nstextview_should_change_text_in_ranges_replacement_strings(zval *handle, zval *affectedRanges, zval *replacementStrings);
/*@zep NS\NSTextView rangesForUserTextChange(int handle) -> array */
void ns_nstextview_ranges_for_user_text_change(zval *return_value, zval *handle);
/*@zep NS\NSTextView rangesForUserCharacterAttributeChange(int handle) -> array */
void ns_nstextview_ranges_for_user_character_attribute_change(zval *return_value, zval *handle);
/*@zep NS\NSTextView rangesForUserParagraphAttributeChange(int handle) -> array */
void ns_nstextview_ranges_for_user_paragraph_attribute_change(zval *return_value, zval *handle);
/*@zep NS\NSTextView shouldChangeTextInRangeReplacementString(int handle, int location, int length, var replacementString) -> bool */
zend_long ns_nstextview_should_change_text_in_range_replacement_string(zval *handle, zval *location, zval *length, zval *replacementString);
/*@zep NS\NSTextView didChangeText(int handle) -> void */
void ns_nstextview_did_change_text(zval *handle);
/*@zep NS\NSTextView rangeForUserTextChange(int handle) -> array */
void ns_nstextview_range_for_user_text_change(zval *return_value, zval *handle);
/*@zep NS\NSTextView rangeForUserCharacterAttributeChange(int handle) -> array */
void ns_nstextview_range_for_user_character_attribute_change(zval *return_value, zval *handle);
/*@zep NS\NSTextView rangeForUserParagraphAttributeChange(int handle) -> array */
void ns_nstextview_range_for_user_paragraph_attribute_change(zval *return_value, zval *handle);
/*@zep NS\NSTextView allowsDocumentBackgroundColorChange(int handle) -> bool */
zend_long ns_nstextview_allows_document_background_color_change(zval *handle);
/*@zep NS\NSTextView setAllowsDocumentBackgroundColorChange(int handle, bool allowsDocumentBackgroundColorChange) -> void */
void ns_nstextview_set_allows_document_background_color_change(zval *handle, zval *allowsDocumentBackgroundColorChange);
/*@zep NS\NSTextView defaultParagraphStyle(int handle) -> int */
zend_long ns_nstextview_default_paragraph_style(zval *handle);
/*@zep NS\NSTextView setDefaultParagraphStyle(int handle, int defaultParagraphStyle) -> void */
void ns_nstextview_set_default_paragraph_style(zval *handle, zval *defaultParagraphStyle);
/*@zep NS\NSTextView allowsUndo(int handle) -> bool */
zend_long ns_nstextview_allows_undo(zval *handle);
/*@zep NS\NSTextView setAllowsUndo(int handle, bool allowsUndo) -> void */
void ns_nstextview_set_allows_undo(zval *handle, zval *allowsUndo);
/*@zep NS\NSTextView breakUndoCoalescing(int handle) -> void */
void ns_nstextview_break_undo_coalescing(zval *handle);
/*@zep NS\NSTextView isCoalescingUndo(int handle) -> bool */
zend_long ns_nstextview_is_coalescing_undo(zval *handle);
/*@zep NS\NSTextView allowsImageEditing(int handle) -> bool */
zend_long ns_nstextview_allows_image_editing(zval *handle);
/*@zep NS\NSTextView setAllowsImageEditing(int handle, bool allowsImageEditing) -> void */
void ns_nstextview_set_allows_image_editing(zval *handle, zval *allowsImageEditing);
/*@zep NS\NSTextView showFindIndicatorForRange(int handle, int location, int length) -> void */
void ns_nstextview_show_find_indicator_for_range(zval *handle, zval *location, zval *length);
/*@zep NS\NSTextView usesRolloverButtonForSelection(int handle) -> bool */
zend_long ns_nstextview_uses_rollover_button_for_selection(zval *handle);
/*@zep NS\NSTextView setUsesRolloverButtonForSelection(int handle, bool usesRolloverButtonForSelection) -> void */
void ns_nstextview_set_uses_rollover_button_for_selection(zval *handle, zval *usesRolloverButtonForSelection);
/*@zep NS\NSTextView delegate(int handle) -> int */
zend_long ns_nstextview_delegate(zval *handle);
/*@zep NS\NSTextView setDelegate(int handle, int delegate) -> void */
void ns_nstextview_set_delegate(zval *handle, zval *delegate);
/*@zep NS\NSTextView isEditable(int handle) -> bool */
zend_long ns_nstextview_is_editable(zval *handle);
/*@zep NS\NSTextView setEditable(int handle, bool editable) -> void */
void ns_nstextview_set_editable(zval *handle, zval *editable);
/*@zep NS\NSTextView isSelectable(int handle) -> bool */
zend_long ns_nstextview_is_selectable(zval *handle);
/*@zep NS\NSTextView setSelectable(int handle, bool selectable) -> void */
void ns_nstextview_set_selectable(zval *handle, zval *selectable);
/*@zep NS\NSTextView isRichText(int handle) -> bool */
zend_long ns_nstextview_is_rich_text(zval *handle);
/*@zep NS\NSTextView setRichText(int handle, bool richText) -> void */
void ns_nstextview_set_rich_text(zval *handle, zval *richText);
/*@zep NS\NSTextView importsGraphics(int handle) -> bool */
zend_long ns_nstextview_imports_graphics(zval *handle);
/*@zep NS\NSTextView setImportsGraphics(int handle, bool importsGraphics) -> void */
void ns_nstextview_set_imports_graphics(zval *handle, zval *importsGraphics);
/*@zep NS\NSTextView drawsBackground(int handle) -> bool */
zend_long ns_nstextview_draws_background(zval *handle);
/*@zep NS\NSTextView setDrawsBackground(int handle, bool drawsBackground) -> void */
void ns_nstextview_set_draws_background(zval *handle, zval *drawsBackground);
/*@zep NS\NSTextView backgroundColor(int handle) -> int */
zend_long ns_nstextview_background_color(zval *handle);
/*@zep NS\NSTextView setBackgroundColor(int handle, int backgroundColor) -> void */
void ns_nstextview_set_background_color(zval *handle, zval *backgroundColor);
/*@zep NS\NSTextView isFieldEditor(int handle) -> bool */
zend_long ns_nstextview_is_field_editor(zval *handle);
/*@zep NS\NSTextView setFieldEditor(int handle, bool fieldEditor) -> void */
void ns_nstextview_set_field_editor(zval *handle, zval *fieldEditor);
/*@zep NS\NSTextView usesFontPanel(int handle) -> bool */
zend_long ns_nstextview_uses_font_panel(zval *handle);
/*@zep NS\NSTextView setUsesFontPanel(int handle, bool usesFontPanel) -> void */
void ns_nstextview_set_uses_font_panel(zval *handle, zval *usesFontPanel);
/*@zep NS\NSTextView isRulerVisible(int handle) -> bool */
zend_long ns_nstextview_is_ruler_visible(zval *handle);
/*@zep NS\NSTextView setRulerVisible(int handle, bool rulerVisible) -> void */
void ns_nstextview_set_ruler_visible(zval *handle, zval *rulerVisible);
/*@zep NS\NSTextView setSelectedRange(int handle, int location, int length) -> void */
void ns_nstextview_set_selected_range(zval *handle, zval *location, zval *length);
/*@zep NS\NSTextView allowedInputSourceLocales(int handle) -> array */
void ns_nstextview_allowed_input_source_locales(zval *return_value, zval *handle);
/*@zep NS\NSTextView setAllowedInputSourceLocales(int handle, array allowedInputSourceLocales) -> void */
void ns_nstextview_set_allowed_input_source_locales(zval *handle, zval *allowedInputSourceLocales);
/*@zep NS\NSTextView isWritingToolsActive(int handle) -> bool */
zend_long ns_nstextview_is_writing_tools_active(zval *handle);
/*@zep NS\NSTextView writingToolsBehavior(int handle) -> int */
zend_long ns_nstextview_writing_tools_behavior(zval *handle);
/*@zep NS\NSTextView setWritingToolsBehavior(int handle, int writingToolsBehavior) -> void */
void ns_nstextview_set_writing_tools_behavior(zval *handle, zval *writingToolsBehavior);
/*@zep NS\NSTextView allowedWritingToolsResultOptions(int handle) -> int */
zend_long ns_nstextview_allowed_writing_tools_result_options(zval *handle);
/*@zep NS\NSTextView setAllowedWritingToolsResultOptions(int handle, int allowedWritingToolsResultOptions) -> void */
void ns_nstextview_set_allowed_writing_tools_result_options(zval *handle, zval *allowedWritingToolsResultOptions);
/*@zep NS\NSTextView smartInsertDeleteEnabled(int handle) -> bool */
zend_long ns_nstextview_smart_insert_delete_enabled(zval *handle);
/*@zep NS\NSTextView setSmartInsertDeleteEnabled(int handle, bool smartInsertDeleteEnabled) -> void */
void ns_nstextview_set_smart_insert_delete_enabled(zval *handle, zval *smartInsertDeleteEnabled);
/*@zep NS\NSTextView smartDeleteRangeForProposedRange(int handle, int location, int length) -> array */
void ns_nstextview_smart_delete_range_for_proposed_range(zval *return_value, zval *handle, zval *location, zval *length);
/*@zep NS\NSTextView toggleSmartInsertDelete(int handle, int sender) -> void */
void ns_nstextview_toggle_smart_insert_delete(zval *handle, zval *sender);
/*@zep NS\NSTextView smartInsertForStringReplacingRangeBeforeStringAfterString(int handle, string pasteString, int location, int length) -> array */
void ns_nstextview_smart_insert_for_string_replacing_range_before_string_after_string(zval *return_value, zval *handle, zval *pasteString, zval *location, zval *length);
/*@zep NS\NSTextView smartInsertBeforeStringForStringReplacingRange(int handle, string pasteString, int location, int length) -> var */
void ns_nstextview_smart_insert_before_string_for_string_replacing_range(zval *return_value, zval *handle, zval *pasteString, zval *location, zval *length);
/*@zep NS\NSTextView smartInsertAfterStringForStringReplacingRange(int handle, string pasteString, int location, int length) -> var */
void ns_nstextview_smart_insert_after_string_for_string_replacing_range(zval *return_value, zval *handle, zval *pasteString, zval *location, zval *length);
/*@zep NS\NSTextView isAutomaticQuoteSubstitutionEnabled(int handle) -> bool */
zend_long ns_nstextview_is_automatic_quote_substitution_enabled(zval *handle);
/*@zep NS\NSTextView setAutomaticQuoteSubstitutionEnabled(int handle, bool automaticQuoteSubstitutionEnabled) -> void */
void ns_nstextview_set_automatic_quote_substitution_enabled(zval *handle, zval *automaticQuoteSubstitutionEnabled);
/*@zep NS\NSTextView toggleAutomaticQuoteSubstitution(int handle, int sender) -> void */
void ns_nstextview_toggle_automatic_quote_substitution(zval *handle, zval *sender);
/*@zep NS\NSTextView isAutomaticLinkDetectionEnabled(int handle) -> bool */
zend_long ns_nstextview_is_automatic_link_detection_enabled(zval *handle);
/*@zep NS\NSTextView setAutomaticLinkDetectionEnabled(int handle, bool automaticLinkDetectionEnabled) -> void */
void ns_nstextview_set_automatic_link_detection_enabled(zval *handle, zval *automaticLinkDetectionEnabled);
/*@zep NS\NSTextView toggleAutomaticLinkDetection(int handle, int sender) -> void */
void ns_nstextview_toggle_automatic_link_detection(zval *handle, zval *sender);
/*@zep NS\NSTextView isAutomaticDataDetectionEnabled(int handle) -> bool */
zend_long ns_nstextview_is_automatic_data_detection_enabled(zval *handle);
/*@zep NS\NSTextView setAutomaticDataDetectionEnabled(int handle, bool automaticDataDetectionEnabled) -> void */
void ns_nstextview_set_automatic_data_detection_enabled(zval *handle, zval *automaticDataDetectionEnabled);
/*@zep NS\NSTextView toggleAutomaticDataDetection(int handle, int sender) -> void */
void ns_nstextview_toggle_automatic_data_detection(zval *handle, zval *sender);
/*@zep NS\NSTextView isAutomaticDashSubstitutionEnabled(int handle) -> bool */
zend_long ns_nstextview_is_automatic_dash_substitution_enabled(zval *handle);
/*@zep NS\NSTextView setAutomaticDashSubstitutionEnabled(int handle, bool automaticDashSubstitutionEnabled) -> void */
void ns_nstextview_set_automatic_dash_substitution_enabled(zval *handle, zval *automaticDashSubstitutionEnabled);
/*@zep NS\NSTextView toggleAutomaticDashSubstitution(int handle, int sender) -> void */
void ns_nstextview_toggle_automatic_dash_substitution(zval *handle, zval *sender);
/*@zep NS\NSTextView isAutomaticTextReplacementEnabled(int handle) -> bool */
zend_long ns_nstextview_is_automatic_text_replacement_enabled(zval *handle);
/*@zep NS\NSTextView setAutomaticTextReplacementEnabled(int handle, bool automaticTextReplacementEnabled) -> void */
void ns_nstextview_set_automatic_text_replacement_enabled(zval *handle, zval *automaticTextReplacementEnabled);
/*@zep NS\NSTextView toggleAutomaticTextReplacement(int handle, int sender) -> void */
void ns_nstextview_toggle_automatic_text_replacement(zval *handle, zval *sender);
/*@zep NS\NSTextView isAutomaticSpellingCorrectionEnabled(int handle) -> bool */
zend_long ns_nstextview_is_automatic_spelling_correction_enabled(zval *handle);
/*@zep NS\NSTextView setAutomaticSpellingCorrectionEnabled(int handle, bool automaticSpellingCorrectionEnabled) -> void */
void ns_nstextview_set_automatic_spelling_correction_enabled(zval *handle, zval *automaticSpellingCorrectionEnabled);
/*@zep NS\NSTextView toggleAutomaticSpellingCorrection(int handle, int sender) -> void */
void ns_nstextview_toggle_automatic_spelling_correction(zval *handle, zval *sender);
/*@zep NS\NSTextView enabledTextCheckingTypes(int handle) -> int */
zend_long ns_nstextview_enabled_text_checking_types(zval *handle);
/*@zep NS\NSTextView setEnabledTextCheckingTypes(int handle, int enabledTextCheckingTypes) -> void */
void ns_nstextview_set_enabled_text_checking_types(zval *handle, zval *enabledTextCheckingTypes);
/*@zep NS\NSTextView checkTextInRangeTypesOptions(int handle, int location, int length, int checkingTypes, var options) -> void */
void ns_nstextview_check_text_in_range_types_options(zval *handle, zval *location, zval *length, zval *checkingTypes, zval *options);
/*@zep NS\NSTextView handleTextCheckingResultsForRangeTypesOptionsOrthographyWordCount(int handle, array results, int location, int length, int checkingTypes, var options, int orthography, int wordCount) -> void */
void ns_nstextview_handle_text_checking_results_for_range_types_options_orthography_word_count(zval *handle, zval *results, zval *location, zval *length, zval *checkingTypes, zval *options, zval *orthography, zval *wordCount);
/*@zep NS\NSTextView orderFrontSubstitutionsPanel(int handle, int sender) -> void */
void ns_nstextview_order_front_substitutions_panel(zval *handle, zval *sender);
/*@zep NS\NSTextView checkTextInSelection(int handle, int sender) -> void */
void ns_nstextview_check_text_in_selection(zval *handle, zval *sender);
/*@zep NS\NSTextView checkTextInDocument(int handle, int sender) -> void */
void ns_nstextview_check_text_in_document(zval *handle, zval *sender);
/*@zep NS\NSTextView usesFindPanel(int handle) -> bool */
zend_long ns_nstextview_uses_find_panel(zval *handle);
/*@zep NS\NSTextView setUsesFindPanel(int handle, bool usesFindPanel) -> void */
void ns_nstextview_set_uses_find_panel(zval *handle, zval *usesFindPanel);
/*@zep NS\NSTextView usesFindBar(int handle) -> bool */
zend_long ns_nstextview_uses_find_bar(zval *handle);
/*@zep NS\NSTextView setUsesFindBar(int handle, bool usesFindBar) -> void */
void ns_nstextview_set_uses_find_bar(zval *handle, zval *usesFindBar);
/*@zep NS\NSTextView isIncrementalSearchingEnabled(int handle) -> bool */
zend_long ns_nstextview_is_incremental_searching_enabled(zval *handle);
/*@zep NS\NSTextView setIncrementalSearchingEnabled(int handle, bool incrementalSearchingEnabled) -> void */
void ns_nstextview_set_incremental_searching_enabled(zval *handle, zval *incrementalSearchingEnabled);
/*@zep NS\NSTextView inlinePredictionType(int handle) -> int */
zend_long ns_nstextview_inline_prediction_type(zval *handle);
/*@zep NS\NSTextView setInlinePredictionType(int handle, int inlinePredictionType) -> void */
void ns_nstextview_set_inline_prediction_type(zval *handle, zval *inlinePredictionType);
/*@zep NS\NSTextView mathExpressionCompletionType(int handle) -> int */
zend_long ns_nstextview_math_expression_completion_type(zval *handle);
/*@zep NS\NSTextView setMathExpressionCompletionType(int handle, int mathExpressionCompletionType) -> void */
void ns_nstextview_set_math_expression_completion_type(zval *handle, zval *mathExpressionCompletionType);
/*@zep NS\NSTextView toggleQuickLookPreviewPanel(int handle, int sender) -> void */
void ns_nstextview_toggle_quick_look_preview_panel(zval *handle, zval *sender);
/*@zep NS\NSTextView quickLookPreviewableItemsInRanges(int handle, array ranges) -> array */
void ns_nstextview_quick_look_previewable_items_in_ranges(zval *return_value, zval *handle, zval *ranges);
/*@zep NS\NSTextView updateQuickLookPreviewPanel(int handle) -> void */
void ns_nstextview_update_quick_look_preview_panel(zval *handle);
/*@zep NS\NSTextView orderFrontSharingServicePicker(int handle, int sender) -> void */
void ns_nstextview_order_front_sharing_service_picker(zval *handle, zval *sender);
/*@zep NS\NSTextView isAutomaticTextCompletionEnabled(int handle) -> bool */
zend_long ns_nstextview_is_automatic_text_completion_enabled(zval *handle);
/*@zep NS\NSTextView setAutomaticTextCompletionEnabled(int handle, bool automaticTextCompletionEnabled) -> void */
void ns_nstextview_set_automatic_text_completion_enabled(zval *handle, zval *automaticTextCompletionEnabled);
/*@zep NS\NSTextView toggleAutomaticTextCompletion(int handle, int sender) -> void */
void ns_nstextview_toggle_automatic_text_completion(zval *handle, zval *sender);
/*@zep NS\NSTextView allowsCharacterPickerTouchBarItem(int handle) -> bool */
zend_long ns_nstextview_allows_character_picker_touch_bar_item(zval *handle);
/*@zep NS\NSTextView setAllowsCharacterPickerTouchBarItem(int handle, bool allowsCharacterPickerTouchBarItem) -> void */
void ns_nstextview_set_allows_character_picker_touch_bar_item(zval *handle, zval *allowsCharacterPickerTouchBarItem);
/*@zep NS\NSTextView updateTouchBarItemIdentifiers(int handle) -> void */
void ns_nstextview_update_touch_bar_item_identifiers(zval *handle);
/*@zep NS\NSTextView updateTextTouchBarItems(int handle) -> void */
void ns_nstextview_update_text_touch_bar_items(zval *handle);
/*@zep NS\NSTextView updateCandidates(int handle) -> void */
void ns_nstextview_update_candidates(zval *handle);
/*@zep NS\NSTextView candidateListTouchBarItem(int handle) -> int */
zend_long ns_nstextview_candidate_list_touch_bar_item(zval *handle);
/*@zep NS\NSTextView scrollableTextView() -> int */
zend_long ns_nstextview_scrollable_text_view(void);
/*@zep NS\NSTextView fieldEditor() -> int */
zend_long ns_nstextview_field_editor(void);
/*@zep NS\NSTextView scrollableDocumentContentTextView() -> int */
zend_long ns_nstextview_scrollable_document_content_text_view(void);
/*@zep NS\NSTextView scrollablePlainDocumentContentTextView() -> int */
zend_long ns_nstextview_scrollable_plain_document_content_text_view(void);
/*@zep NS\NSTextView textHighlightAttributes(int handle) -> int */
zend_long ns_nstextview_text_highlight_attributes(zval *handle);
/*@zep NS\NSTextView setTextHighlightAttributes(int handle, var textHighlightAttributes) -> void */
void ns_nstextview_set_text_highlight_attributes(zval *handle, zval *textHighlightAttributes);
/*@zep NS\NSTextView drawTextHighlightBackgroundForTextRangeOrigin(int handle, int textRange, double x, double y) -> void */
void ns_nstextview_draw_text_highlight_background_for_text_range_origin(zval *handle, zval *textRange, zval *x, zval *y);
/*@zep NS\NSTextView highlight(int handle, int sender) -> void */
void ns_nstextview_highlight(zval *handle, zval *sender);
/*@reserved NS\NSTextView - (void)toggleBaseWritingDirection:(nullable id)sender API_DEPRECATED; */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTVIEW_H */
