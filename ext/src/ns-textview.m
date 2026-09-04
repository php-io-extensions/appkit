#include "ns-textview.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSTextView                                                              */
/* ====================================================================== */

zend_long ns_nstextview_init_with_frame_text_container(zval *x, zval *y, zval *width, zval *height, zval *container)
{
    @autoreleasepool {
        return ns_handle_for([[NSTextView alloc] initWithFrame:ns_arg_rect(x, y, width, height) textContainer:NS_ARG_AS(NSTextContainer, container)]);
    }
}

zend_long ns_nstextview_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSTextView alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

zend_long ns_nstextview_init_using_text_layout_manager(zval *usingTextLayoutManager)
{
    @autoreleasepool {
        return ns_handle_for([[NSTextView alloc] initUsingTextLayoutManager:ns_arg_bool(usingTextLayoutManager)]);
    }
}

zend_long ns_nstextview_text_view_using_text_layout_manager(zval *usingTextLayoutManager)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSTextView textViewUsingTextLayoutManager:ns_arg_bool(usingTextLayoutManager)]);
    }
    return h;
}

zend_long ns_nstextview_text_container(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        h = ns_handle_for(v != nil ? [v textContainer] : nil);
    }
    return h;
}

void ns_nstextview_set_text_container(zval *handle, zval *textContainer)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setTextContainer:NS_ARG_AS(NSTextContainer, textContainer)];
    }
}

void ns_nstextview_replace_text_container(zval *handle, zval *newContainer)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v replaceTextContainer:NS_ARG_AS(NSTextContainer, newContainer)];
    }
}

void ns_nstextview_text_container_inset(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        ns_ret_size(return_value, v != nil ? [v textContainerInset] : NSZeroSize);
    }
}

void ns_nstextview_set_text_container_inset(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setTextContainerInset:ns_arg_size(width, height)];
    }
}

void ns_nstextview_text_container_origin(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        ns_ret_point(return_value, v != nil ? [v textContainerOrigin] : NSZeroPoint);
    }
}

void ns_nstextview_invalidate_text_container_origin(zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v invalidateTextContainerOrigin];
    }
}

zend_long ns_nstextview_layout_manager(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        h = ns_handle_for(v != nil ? [v layoutManager] : nil);
    }
    return h;
}

zend_long ns_nstextview_text_storage(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        h = ns_handle_for(v != nil ? [v textStorage] : nil);
    }
    return h;
}

zend_long ns_nstextview_text_layout_manager(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        h = ns_handle_for(v != nil ? [v textLayoutManager] : nil);
    }
    return h;
}

zend_long ns_nstextview_text_content_storage(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        h = ns_handle_for(v != nil ? [v textContentStorage] : nil);
    }
    return h;
}

void ns_nstextview_set_constrained_frame_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setConstrainedFrameSize:ns_arg_size(width, height)];
    }
}

void ns_nstextview_set_alignment_range(zval *handle, zval *alignment, zval *location, zval *length)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setAlignment:(NSTextAlignment) ns_arg_long(alignment) range:ns_arg_range(location, length)];
    }
}

void ns_nstextview_set_base_writing_direction_range(zval *handle, zval *writingDirection, zval *location, zval *length)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setBaseWritingDirection:(NSWritingDirection) ns_arg_long(writingDirection) range:ns_arg_range(location, length)];
    }
}

void ns_nstextview_turn_off_kerning(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v turnOffKerning:ns_arg_object(sender)];
    }
}

void ns_nstextview_tighten_kerning(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v tightenKerning:ns_arg_object(sender)];
    }
}

void ns_nstextview_loosen_kerning(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v loosenKerning:ns_arg_object(sender)];
    }
}

void ns_nstextview_use_standard_kerning(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v useStandardKerning:ns_arg_object(sender)];
    }
}

void ns_nstextview_turn_off_ligatures(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v turnOffLigatures:ns_arg_object(sender)];
    }
}

void ns_nstextview_use_standard_ligatures(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v useStandardLigatures:ns_arg_object(sender)];
    }
}

void ns_nstextview_use_all_ligatures(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v useAllLigatures:ns_arg_object(sender)];
    }
}

void ns_nstextview_raise_baseline(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v raiseBaseline:ns_arg_object(sender)];
    }
}

void ns_nstextview_lower_baseline(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v lowerBaseline:ns_arg_object(sender)];
    }
}

void ns_nstextview_outline(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v outline:ns_arg_object(sender)];
    }
}

void ns_nstextview_perform_find_panel_action(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v performFindPanelAction:ns_arg_object(sender)];
    }
}

void ns_nstextview_align_justified(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v alignJustified:ns_arg_object(sender)];
    }
}

void ns_nstextview_change_color(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v changeColor:ns_arg_object(sender)];
    }
}

void ns_nstextview_change_attributes(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v changeAttributes:ns_arg_object(sender)];
    }
}

void ns_nstextview_change_document_background_color(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v changeDocumentBackgroundColor:ns_arg_object(sender)];
    }
}

void ns_nstextview_order_front_spacing_panel(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v orderFrontSpacingPanel:ns_arg_object(sender)];
    }
}

void ns_nstextview_order_front_link_panel(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v orderFrontLinkPanel:ns_arg_object(sender)];
    }
}

void ns_nstextview_order_front_list_panel(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v orderFrontListPanel:ns_arg_object(sender)];
    }
}

void ns_nstextview_order_front_table_panel(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v orderFrontTablePanel:ns_arg_object(sender)];
    }
}

void ns_nstextview_ruler_view_did_move_marker(zval *handle, zval *ruler, zval *marker)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v rulerView:NS_ARG_AS(NSRulerView, ruler) didMoveMarker:NS_ARG_AS(NSRulerMarker, marker)];
    }
}

void ns_nstextview_ruler_view_did_remove_marker(zval *handle, zval *ruler, zval *marker)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v rulerView:NS_ARG_AS(NSRulerView, ruler) didRemoveMarker:NS_ARG_AS(NSRulerMarker, marker)];
    }
}

void ns_nstextview_ruler_view_did_add_marker(zval *handle, zval *ruler, zval *marker)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v rulerView:NS_ARG_AS(NSRulerView, ruler) didAddMarker:NS_ARG_AS(NSRulerMarker, marker)];
    }
}

zend_long ns_nstextview_ruler_view_should_move_marker(zval *handle, zval *ruler, zval *marker)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v rulerView:NS_ARG_AS(NSRulerView, ruler) shouldMoveMarker:NS_ARG_AS(NSRulerMarker, marker)]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nstextview_ruler_view_should_add_marker(zval *handle, zval *ruler, zval *marker)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v rulerView:NS_ARG_AS(NSRulerView, ruler) shouldAddMarker:NS_ARG_AS(NSRulerMarker, marker)]) ? 1 : 0;
    }
    return r;
}

double ns_nstextview_ruler_view_will_move_marker_to_location(zval *handle, zval *ruler, zval *marker, zval *location)
{
    double r = 0.0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = v != nil ? (double) [v rulerView:NS_ARG_AS(NSRulerView, ruler) willMoveMarker:NS_ARG_AS(NSRulerMarker, marker) toLocation:ns_arg_double(location)] : 0.0;
    }
    return r;
}

zend_long ns_nstextview_ruler_view_should_remove_marker(zval *handle, zval *ruler, zval *marker)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v rulerView:NS_ARG_AS(NSRulerView, ruler) shouldRemoveMarker:NS_ARG_AS(NSRulerMarker, marker)]) ? 1 : 0;
    }
    return r;
}

double ns_nstextview_ruler_view_will_add_marker_at_location(zval *handle, zval *ruler, zval *marker, zval *location)
{
    double r = 0.0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = v != nil ? (double) [v rulerView:NS_ARG_AS(NSRulerView, ruler) willAddMarker:NS_ARG_AS(NSRulerMarker, marker) atLocation:ns_arg_double(location)] : 0.0;
    }
    return r;
}

void ns_nstextview_ruler_view_handle_mouse_down(zval *handle, zval *ruler, zval *event)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v rulerView:NS_ARG_AS(NSRulerView, ruler) handleMouseDown:NS_ARG_AS(NSEvent, event)];
    }
}

void ns_nstextview_set_needs_display_in_rect_avoid_additional_layout(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *flag)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setNeedsDisplayInRect:ns_arg_rect(x, y, width, height) avoidAdditionalLayout:ns_arg_bool(flag)];
    }
}

zend_long ns_nstextview_should_draw_insertion_point(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v shouldDrawInsertionPoint]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_draw_insertion_point_in_rect_color_turned_on(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *color, zval *flag)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v drawInsertionPointInRect:ns_arg_rect(x, y, width, height) color:NS_ARG_AS(NSColor, color) turnedOn:ns_arg_bool(flag)];
    }
}

void ns_nstextview_draw_view_background_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v drawViewBackgroundInRect:ns_arg_rect(x, y, width, height)];
    }
}

void ns_nstextview_update_ruler(zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v updateRuler];
    }
}

void ns_nstextview_update_font_panel(zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v updateFontPanel];
    }
}

void ns_nstextview_update_drag_type_registration(zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v updateDragTypeRegistration];
    }
}

void ns_nstextview_selection_range_for_proposed_range_granularity(zval *return_value, zval *handle, zval *location, zval *length, zval *granularity)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        ns_ret_range(return_value, v != nil ? [v selectionRangeForProposedRange:ns_arg_range(location, length) granularity:(NSSelectionGranularity) ns_arg_long(granularity)] : NSMakeRange(0, 0));
    }
}

void ns_nstextview_clicked_on_link_at_index(zval *handle, zval *link, zval *charIndex)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v clickedOnLink:ns_arg_object(link) atIndex:(NSUInteger) ns_arg_long(charIndex)];
    }
}

void ns_nstextview_start_speaking(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v startSpeaking:ns_arg_object(sender)];
    }
}

void ns_nstextview_stop_speaking(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v stopSpeaking:ns_arg_object(sender)];
    }
}

void ns_nstextview_set_layout_orientation(zval *handle, zval *orientation)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setLayoutOrientation:(NSTextLayoutOrientation) ns_arg_long(orientation)];
    }
}

void ns_nstextview_change_layout_orientation(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v changeLayoutOrientation:ns_arg_object(sender)];
    }
}

zend_long ns_nstextview_character_index_for_insertion_at_point(zval *handle, zval *x, zval *y)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = v != nil ? (zend_long) [v characterIndexForInsertionAtPoint:ns_arg_point(x, y)] : 0;
    }
    return r;
}

zend_long ns_nstextview_strongly_references_text_storage(void)
{
    zend_long r = 0;
    @autoreleasepool {
        r = [NSTextView stronglyReferencesTextStorage] ? 1 : 0;
    }
    return r;
}

zend_long ns_nstextview_uses_adaptive_color_mapping_for_dark_appearance(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v usesAdaptiveColorMappingForDarkAppearance]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_uses_adaptive_color_mapping_for_dark_appearance(zval *handle, zval *usesAdaptiveColorMappingForDarkAppearance)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setUsesAdaptiveColorMappingForDarkAppearance:ns_arg_bool(usesAdaptiveColorMappingForDarkAppearance)];
    }
}

void ns_nstextview_complete(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v complete:ns_arg_object(sender)];
    }
}

void ns_nstextview_range_for_user_completion(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        ns_ret_range(return_value, v != nil ? [v rangeForUserCompletion] : NSMakeRange(0, 0));
    }
}

void ns_nstextview_completions_for_partial_word_range_index_of_selected_item(zval *return_value, zval *handle, zval *location, zval *length)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        NSInteger index = 0;
        if (v == nil) { array_init(return_value); return; }
        NSArray *result = [v completionsForPartialWordRange:ns_arg_range(location, length) indexOfSelectedItem:&index];
        array_init_size(return_value, 2);
        { zval tmp; ns_ret_string_array(&tmp, result); add_assoc_zval(return_value, "result", &tmp); }
        add_assoc_long(return_value, "index", (zend_long) index);
    }
}

void ns_nstextview_insert_completion_for_partial_word_range_movement_is_final(zval *handle, zval *word, zval *location, zval *length, zval *movement, zval *flag)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v insertCompletion:ns_arg_string(word) forPartialWordRange:ns_arg_range(location, length) movement:(NSInteger) ns_arg_long(movement) isFinal:ns_arg_bool(flag)];
    }
}

void ns_nstextview_writable_pasteboard_types(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        ns_ret_string_array(return_value, v != nil ? [v writablePasteboardTypes] : nil);
    }
}

zend_long ns_nstextview_write_selection_to_pasteboard_type(zval *handle, zval *pboard, zval *type)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v writeSelectionToPasteboard:NS_ARG_AS(NSPasteboard, pboard) type:ns_arg_string(type)]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nstextview_write_selection_to_pasteboard_types(zval *handle, zval *pboard, zval *types)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v writeSelectionToPasteboard:NS_ARG_AS(NSPasteboard, pboard) types:ns_arg_string_array(types)]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_readable_pasteboard_types(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        ns_ret_string_array(return_value, v != nil ? [v readablePasteboardTypes] : nil);
    }
}

void ns_nstextview_preferred_pasteboard_type_from_array_restricted_to_types_from_array(zval *return_value, zval *handle, zval *availableTypes, zval *allowedTypes)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        ns_ret_string(return_value, v != nil ? [v preferredPasteboardTypeFromArray:ns_arg_string_array(availableTypes) restrictedToTypesFromArray:ns_arg_string_array(allowedTypes)] : nil);
    }
}

zend_long ns_nstextview_read_selection_from_pasteboard_type(zval *handle, zval *pboard, zval *type)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v readSelectionFromPasteboard:NS_ARG_AS(NSPasteboard, pboard) type:ns_arg_string(type)]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nstextview_read_selection_from_pasteboard(zval *handle, zval *pboard)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v readSelectionFromPasteboard:NS_ARG_AS(NSPasteboard, pboard)]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_register_for_services(void)
{
    @autoreleasepool {
        [NSTextView registerForServices];
    }
}

zend_long ns_nstextview_valid_requestor_for_send_type_return_type(zval *handle, zval *sendType, zval *returnType)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        h = ns_handle_for(v != nil ? [v validRequestorForSendType:ns_arg_string(sendType) returnType:ns_arg_string(returnType)] : nil);
    }
    return h;
}

void ns_nstextview_paste_as_plain_text(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v pasteAsPlainText:ns_arg_object(sender)];
    }
}

void ns_nstextview_paste_as_rich_text(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v pasteAsRichText:ns_arg_object(sender)];
    }
}

zend_long ns_nstextview_drag_selection_with_event_offset_slide_back(zval *handle, zval *event, zval *width, zval *height, zval *slideBack)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v dragSelectionWithEvent:NS_ARG_AS(NSEvent, event) offset:ns_arg_size(width, height) slideBack:ns_arg_bool(slideBack)]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_drag_image_for_selection_with_event_origin(zval *return_value, zval *handle, zval *event)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        NSPoint origin = NSZeroPoint;
        if (v == nil) { array_init(return_value); return; }
        id result = [v dragImageForSelectionWithEvent:NS_ARG_AS(NSEvent, event) origin:&origin];
        array_init_size(return_value, 3);
        add_assoc_long(return_value, "result", ns_handle_for(result));
        add_assoc_double(return_value, "x", origin.x);
        add_assoc_double(return_value, "y", origin.y);
    }
}

void ns_nstextview_acceptable_drag_types(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        ns_ret_string_array(return_value, v != nil ? [v acceptableDragTypes] : nil);
    }
}

zend_long ns_nstextview_drag_operation_for_dragging_info_type(zval *handle, zval *dragInfo, zval *type)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = v != nil ? (zend_long) [v dragOperationForDraggingInfo:ns_arg_object(dragInfo) type:ns_arg_string(type)] : 0;
    }
    return r;
}

void ns_nstextview_clean_up_after_drag_operation(zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v cleanUpAfterDragOperation];
    }
}

void ns_nstextview_selected_ranges(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        ns_ret_object_array(return_value, v != nil ? [v selectedRanges] : nil);
    }
}

void ns_nstextview_set_selected_ranges(zval *handle, zval *selectedRanges)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setSelectedRanges:ns_arg_object_array(selectedRanges)];
    }
}

void ns_nstextview_set_selected_ranges_affinity_still_selecting(zval *handle, zval *ranges, zval *affinity, zval *stillSelectingFlag)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setSelectedRanges:ns_arg_object_array(ranges) affinity:(NSSelectionAffinity) ns_arg_long(affinity) stillSelecting:ns_arg_bool(stillSelectingFlag)];
    }
}

void ns_nstextview_set_selected_range_affinity_still_selecting(zval *handle, zval *location, zval *length, zval *affinity, zval *stillSelectingFlag)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setSelectedRange:ns_arg_range(location, length) affinity:(NSSelectionAffinity) ns_arg_long(affinity) stillSelecting:ns_arg_bool(stillSelectingFlag)];
    }
}

zend_long ns_nstextview_selection_affinity(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = v != nil ? (zend_long) [v selectionAffinity] : 0;
    }
    return r;
}

zend_long ns_nstextview_selection_granularity(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = v != nil ? (zend_long) [v selectionGranularity] : 0;
    }
    return r;
}

void ns_nstextview_set_selection_granularity(zval *handle, zval *selectionGranularity)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setSelectionGranularity:(NSSelectionGranularity) ns_arg_long(selectionGranularity)];
    }
}

zend_long ns_nstextview_selected_text_attributes(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        h = ns_handle_for(v != nil ? [v selectedTextAttributes] : nil);
    }
    return h;
}

void ns_nstextview_set_selected_text_attributes(zval *handle, zval *selectedTextAttributes)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setSelectedTextAttributes:ns_arg_dictionary(selectedTextAttributes)];
    }
}

zend_long ns_nstextview_insertion_point_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        h = ns_handle_for(v != nil ? [v insertionPointColor] : nil);
    }
    return h;
}

void ns_nstextview_set_insertion_point_color(zval *handle, zval *insertionPointColor)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setInsertionPointColor:NS_ARG_AS(NSColor, insertionPointColor)];
    }
}

void ns_nstextview_update_insertion_point_state_and_restart_timer(zval *handle, zval *restartFlag)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v updateInsertionPointStateAndRestartTimer:ns_arg_bool(restartFlag)];
    }
}

zend_long ns_nstextview_marked_text_attributes(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        h = ns_handle_for(v != nil ? [v markedTextAttributes] : nil);
    }
    return h;
}

void ns_nstextview_set_marked_text_attributes(zval *handle, zval *markedTextAttributes)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setMarkedTextAttributes:ns_arg_dictionary(markedTextAttributes)];
    }
}

zend_long ns_nstextview_link_text_attributes(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        h = ns_handle_for(v != nil ? [v linkTextAttributes] : nil);
    }
    return h;
}

void ns_nstextview_set_link_text_attributes(zval *handle, zval *linkTextAttributes)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setLinkTextAttributes:ns_arg_dictionary(linkTextAttributes)];
    }
}

zend_long ns_nstextview_displays_link_tool_tips(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v displaysLinkToolTips]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_displays_link_tool_tips(zval *handle, zval *displaysLinkToolTips)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setDisplaysLinkToolTips:ns_arg_bool(displaysLinkToolTips)];
    }
}

zend_long ns_nstextview_accepts_glyph_info(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v acceptsGlyphInfo]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_accepts_glyph_info(zval *handle, zval *acceptsGlyphInfo)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setAcceptsGlyphInfo:ns_arg_bool(acceptsGlyphInfo)];
    }
}

zend_long ns_nstextview_uses_ruler(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v usesRuler]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_uses_ruler(zval *handle, zval *usesRuler)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setUsesRuler:ns_arg_bool(usesRuler)];
    }
}

zend_long ns_nstextview_uses_inspector_bar(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v usesInspectorBar]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_uses_inspector_bar(zval *handle, zval *usesInspectorBar)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setUsesInspectorBar:ns_arg_bool(usesInspectorBar)];
    }
}

zend_long ns_nstextview_is_continuous_spell_checking_enabled(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v isContinuousSpellCheckingEnabled]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_continuous_spell_checking_enabled(zval *handle, zval *continuousSpellCheckingEnabled)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setContinuousSpellCheckingEnabled:ns_arg_bool(continuousSpellCheckingEnabled)];
    }
}

void ns_nstextview_toggle_continuous_spell_checking(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v toggleContinuousSpellChecking:ns_arg_object(sender)];
    }
}

zend_long ns_nstextview_spell_checker_document_tag(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = v != nil ? (zend_long) [v spellCheckerDocumentTag] : 0;
    }
    return r;
}

zend_long ns_nstextview_is_grammar_checking_enabled(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v isGrammarCheckingEnabled]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_grammar_checking_enabled(zval *handle, zval *grammarCheckingEnabled)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setGrammarCheckingEnabled:ns_arg_bool(grammarCheckingEnabled)];
    }
}

void ns_nstextview_toggle_grammar_checking(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v toggleGrammarChecking:ns_arg_object(sender)];
    }
}

void ns_nstextview_set_spelling_state_range(zval *handle, zval *value, zval *location, zval *length)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setSpellingState:(NSInteger) ns_arg_long(value) range:ns_arg_range(location, length)];
    }
}

zend_long ns_nstextview_typing_attributes(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        h = ns_handle_for(v != nil ? [v typingAttributes] : nil);
    }
    return h;
}

void ns_nstextview_set_typing_attributes(zval *handle, zval *typingAttributes)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setTypingAttributes:ns_arg_dictionary(typingAttributes)];
    }
}

zend_long ns_nstextview_should_change_text_in_ranges_replacement_strings(zval *handle, zval *affectedRanges, zval *replacementStrings)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v shouldChangeTextInRanges:ns_arg_object_array(affectedRanges) replacementStrings:ns_arg_string_array(replacementStrings)]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_ranges_for_user_text_change(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        ns_ret_object_array(return_value, v != nil ? [v rangesForUserTextChange] : nil);
    }
}

void ns_nstextview_ranges_for_user_character_attribute_change(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        ns_ret_object_array(return_value, v != nil ? [v rangesForUserCharacterAttributeChange] : nil);
    }
}

void ns_nstextview_ranges_for_user_paragraph_attribute_change(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        ns_ret_object_array(return_value, v != nil ? [v rangesForUserParagraphAttributeChange] : nil);
    }
}

zend_long ns_nstextview_should_change_text_in_range_replacement_string(zval *handle, zval *location, zval *length, zval *replacementString)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v shouldChangeTextInRange:ns_arg_range(location, length) replacementString:ns_arg_string(replacementString)]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_did_change_text(zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v didChangeText];
    }
}

void ns_nstextview_range_for_user_text_change(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        ns_ret_range(return_value, v != nil ? [v rangeForUserTextChange] : NSMakeRange(0, 0));
    }
}

void ns_nstextview_range_for_user_character_attribute_change(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        ns_ret_range(return_value, v != nil ? [v rangeForUserCharacterAttributeChange] : NSMakeRange(0, 0));
    }
}

void ns_nstextview_range_for_user_paragraph_attribute_change(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        ns_ret_range(return_value, v != nil ? [v rangeForUserParagraphAttributeChange] : NSMakeRange(0, 0));
    }
}

zend_long ns_nstextview_allows_document_background_color_change(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v allowsDocumentBackgroundColorChange]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_allows_document_background_color_change(zval *handle, zval *allowsDocumentBackgroundColorChange)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setAllowsDocumentBackgroundColorChange:ns_arg_bool(allowsDocumentBackgroundColorChange)];
    }
}

zend_long ns_nstextview_default_paragraph_style(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        h = ns_handle_for(v != nil ? [v defaultParagraphStyle] : nil);
    }
    return h;
}

void ns_nstextview_set_default_paragraph_style(zval *handle, zval *defaultParagraphStyle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setDefaultParagraphStyle:NS_ARG_AS(NSParagraphStyle, defaultParagraphStyle)];
    }
}

zend_long ns_nstextview_allows_undo(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v allowsUndo]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_allows_undo(zval *handle, zval *allowsUndo)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setAllowsUndo:ns_arg_bool(allowsUndo)];
    }
}

void ns_nstextview_break_undo_coalescing(zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v breakUndoCoalescing];
    }
}

zend_long ns_nstextview_is_coalescing_undo(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v isCoalescingUndo]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nstextview_allows_image_editing(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v allowsImageEditing]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_allows_image_editing(zval *handle, zval *allowsImageEditing)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setAllowsImageEditing:ns_arg_bool(allowsImageEditing)];
    }
}

void ns_nstextview_show_find_indicator_for_range(zval *handle, zval *location, zval *length)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v showFindIndicatorForRange:ns_arg_range(location, length)];
    }
}

zend_long ns_nstextview_uses_rollover_button_for_selection(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v usesRolloverButtonForSelection]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_uses_rollover_button_for_selection(zval *handle, zval *usesRolloverButtonForSelection)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setUsesRolloverButtonForSelection:ns_arg_bool(usesRolloverButtonForSelection)];
    }
}

zend_long ns_nstextview_delegate(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        h = ns_handle_for(v != nil ? [v delegate] : nil);
    }
    return h;
}

void ns_nstextview_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setDelegate:ns_arg_object(delegate)];
    }
}

zend_long ns_nstextview_is_editable(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v isEditable]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_editable(zval *handle, zval *editable)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setEditable:ns_arg_bool(editable)];
    }
}

zend_long ns_nstextview_is_selectable(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v isSelectable]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_selectable(zval *handle, zval *selectable)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setSelectable:ns_arg_bool(selectable)];
    }
}

zend_long ns_nstextview_is_rich_text(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v isRichText]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_rich_text(zval *handle, zval *richText)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setRichText:ns_arg_bool(richText)];
    }
}

zend_long ns_nstextview_imports_graphics(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v importsGraphics]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_imports_graphics(zval *handle, zval *importsGraphics)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setImportsGraphics:ns_arg_bool(importsGraphics)];
    }
}

zend_long ns_nstextview_draws_background(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v drawsBackground]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_draws_background(zval *handle, zval *drawsBackground)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setDrawsBackground:ns_arg_bool(drawsBackground)];
    }
}

zend_long ns_nstextview_background_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        h = ns_handle_for(v != nil ? [v backgroundColor] : nil);
    }
    return h;
}

void ns_nstextview_set_background_color(zval *handle, zval *backgroundColor)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setBackgroundColor:NS_ARG_AS(NSColor, backgroundColor)];
    }
}

zend_long ns_nstextview_is_field_editor(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v isFieldEditor]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_field_editor(zval *handle, zval *fieldEditor)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setFieldEditor:ns_arg_bool(fieldEditor)];
    }
}

zend_long ns_nstextview_uses_font_panel(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v usesFontPanel]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_uses_font_panel(zval *handle, zval *usesFontPanel)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setUsesFontPanel:ns_arg_bool(usesFontPanel)];
    }
}

zend_long ns_nstextview_is_ruler_visible(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v isRulerVisible]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_ruler_visible(zval *handle, zval *rulerVisible)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setRulerVisible:ns_arg_bool(rulerVisible)];
    }
}

void ns_nstextview_set_selected_range(zval *handle, zval *location, zval *length)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setSelectedRange:ns_arg_range(location, length)];
    }
}

void ns_nstextview_allowed_input_source_locales(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        ns_ret_string_array(return_value, v != nil ? [v allowedInputSourceLocales] : nil);
    }
}

void ns_nstextview_set_allowed_input_source_locales(zval *handle, zval *allowedInputSourceLocales)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setAllowedInputSourceLocales:ns_arg_string_array(allowedInputSourceLocales)];
    }
}

zend_long ns_nstextview_is_writing_tools_active(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v isWritingToolsActive]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nstextview_writing_tools_behavior(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = v != nil ? (zend_long) [v writingToolsBehavior] : 0;
    }
    return r;
}

void ns_nstextview_set_writing_tools_behavior(zval *handle, zval *writingToolsBehavior)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setWritingToolsBehavior:(NSWritingToolsBehavior) ns_arg_long(writingToolsBehavior)];
    }
}

zend_long ns_nstextview_allowed_writing_tools_result_options(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = v != nil ? (zend_long) [v allowedWritingToolsResultOptions] : 0;
    }
    return r;
}

void ns_nstextview_set_allowed_writing_tools_result_options(zval *handle, zval *allowedWritingToolsResultOptions)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setAllowedWritingToolsResultOptions:(NSWritingToolsResultOptions) ns_arg_long(allowedWritingToolsResultOptions)];
    }
}

zend_long ns_nstextview_smart_insert_delete_enabled(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v smartInsertDeleteEnabled]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_smart_insert_delete_enabled(zval *handle, zval *smartInsertDeleteEnabled)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setSmartInsertDeleteEnabled:ns_arg_bool(smartInsertDeleteEnabled)];
    }
}

void ns_nstextview_smart_delete_range_for_proposed_range(zval *return_value, zval *handle, zval *location, zval *length)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        ns_ret_range(return_value, v != nil ? [v smartDeleteRangeForProposedRange:ns_arg_range(location, length)] : NSMakeRange(0, 0));
    }
}

void ns_nstextview_toggle_smart_insert_delete(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v toggleSmartInsertDelete:ns_arg_object(sender)];
    }
}

void ns_nstextview_smart_insert_for_string_replacing_range_before_string_after_string(zval *return_value, zval *handle, zval *pasteString, zval *location, zval *length)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        NSString *beforeString = nil;
        NSString *afterString = nil;
        if (v == nil) { array_init(return_value); return; }
        [v smartInsertForString:ns_arg_string(pasteString) replacingRange:ns_arg_range(location, length) beforeString:&beforeString afterString:&afterString];
        array_init_size(return_value, 2);
        { zval tmp; ns_ret_string(&tmp, beforeString); add_assoc_zval(return_value, "beforeString", &tmp); }
        { zval tmp; ns_ret_string(&tmp, afterString); add_assoc_zval(return_value, "afterString", &tmp); }
    }
}

void ns_nstextview_smart_insert_before_string_for_string_replacing_range(zval *return_value, zval *handle, zval *pasteString, zval *location, zval *length)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        ns_ret_string(return_value, v != nil ? [v smartInsertBeforeStringForString:ns_arg_string(pasteString) replacingRange:ns_arg_range(location, length)] : nil);
    }
}

void ns_nstextview_smart_insert_after_string_for_string_replacing_range(zval *return_value, zval *handle, zval *pasteString, zval *location, zval *length)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        ns_ret_string(return_value, v != nil ? [v smartInsertAfterStringForString:ns_arg_string(pasteString) replacingRange:ns_arg_range(location, length)] : nil);
    }
}

zend_long ns_nstextview_is_automatic_quote_substitution_enabled(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v isAutomaticQuoteSubstitutionEnabled]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_automatic_quote_substitution_enabled(zval *handle, zval *automaticQuoteSubstitutionEnabled)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setAutomaticQuoteSubstitutionEnabled:ns_arg_bool(automaticQuoteSubstitutionEnabled)];
    }
}

void ns_nstextview_toggle_automatic_quote_substitution(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v toggleAutomaticQuoteSubstitution:ns_arg_object(sender)];
    }
}

zend_long ns_nstextview_is_automatic_link_detection_enabled(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v isAutomaticLinkDetectionEnabled]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_automatic_link_detection_enabled(zval *handle, zval *automaticLinkDetectionEnabled)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setAutomaticLinkDetectionEnabled:ns_arg_bool(automaticLinkDetectionEnabled)];
    }
}

void ns_nstextview_toggle_automatic_link_detection(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v toggleAutomaticLinkDetection:ns_arg_object(sender)];
    }
}

zend_long ns_nstextview_is_automatic_data_detection_enabled(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v isAutomaticDataDetectionEnabled]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_automatic_data_detection_enabled(zval *handle, zval *automaticDataDetectionEnabled)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setAutomaticDataDetectionEnabled:ns_arg_bool(automaticDataDetectionEnabled)];
    }
}

void ns_nstextview_toggle_automatic_data_detection(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v toggleAutomaticDataDetection:ns_arg_object(sender)];
    }
}

zend_long ns_nstextview_is_automatic_dash_substitution_enabled(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v isAutomaticDashSubstitutionEnabled]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_automatic_dash_substitution_enabled(zval *handle, zval *automaticDashSubstitutionEnabled)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setAutomaticDashSubstitutionEnabled:ns_arg_bool(automaticDashSubstitutionEnabled)];
    }
}

void ns_nstextview_toggle_automatic_dash_substitution(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v toggleAutomaticDashSubstitution:ns_arg_object(sender)];
    }
}

zend_long ns_nstextview_is_automatic_text_replacement_enabled(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v isAutomaticTextReplacementEnabled]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_automatic_text_replacement_enabled(zval *handle, zval *automaticTextReplacementEnabled)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setAutomaticTextReplacementEnabled:ns_arg_bool(automaticTextReplacementEnabled)];
    }
}

void ns_nstextview_toggle_automatic_text_replacement(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v toggleAutomaticTextReplacement:ns_arg_object(sender)];
    }
}

zend_long ns_nstextview_is_automatic_spelling_correction_enabled(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v isAutomaticSpellingCorrectionEnabled]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_automatic_spelling_correction_enabled(zval *handle, zval *automaticSpellingCorrectionEnabled)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setAutomaticSpellingCorrectionEnabled:ns_arg_bool(automaticSpellingCorrectionEnabled)];
    }
}

void ns_nstextview_toggle_automatic_spelling_correction(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v toggleAutomaticSpellingCorrection:ns_arg_object(sender)];
    }
}

zend_long ns_nstextview_enabled_text_checking_types(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = v != nil ? (zend_long) [v enabledTextCheckingTypes] : 0;
    }
    return r;
}

void ns_nstextview_set_enabled_text_checking_types(zval *handle, zval *enabledTextCheckingTypes)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setEnabledTextCheckingTypes:(NSTextCheckingTypes) ns_arg_long(enabledTextCheckingTypes)];
    }
}

void ns_nstextview_check_text_in_range_types_options(zval *handle, zval *location, zval *length, zval *checkingTypes, zval *options)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v checkTextInRange:ns_arg_range(location, length) types:(NSTextCheckingTypes) ns_arg_long(checkingTypes) options:ns_arg_dictionary(options)];
    }
}

void ns_nstextview_handle_text_checking_results_for_range_types_options_orthography_word_count(zval *handle, zval *results, zval *location, zval *length, zval *checkingTypes, zval *options, zval *orthography, zval *wordCount)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v handleTextCheckingResults:ns_arg_object_array(results) forRange:ns_arg_range(location, length) types:(NSTextCheckingTypes) ns_arg_long(checkingTypes) options:ns_arg_dictionary(options) orthography:NS_ARG_AS(NSOrthography, orthography) wordCount:(NSInteger) ns_arg_long(wordCount)];
    }
}

void ns_nstextview_order_front_substitutions_panel(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v orderFrontSubstitutionsPanel:ns_arg_object(sender)];
    }
}

void ns_nstextview_check_text_in_selection(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v checkTextInSelection:ns_arg_object(sender)];
    }
}

void ns_nstextview_check_text_in_document(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v checkTextInDocument:ns_arg_object(sender)];
    }
}

zend_long ns_nstextview_uses_find_panel(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v usesFindPanel]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_uses_find_panel(zval *handle, zval *usesFindPanel)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setUsesFindPanel:ns_arg_bool(usesFindPanel)];
    }
}

zend_long ns_nstextview_uses_find_bar(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v usesFindBar]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_uses_find_bar(zval *handle, zval *usesFindBar)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setUsesFindBar:ns_arg_bool(usesFindBar)];
    }
}

zend_long ns_nstextview_is_incremental_searching_enabled(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v isIncrementalSearchingEnabled]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_incremental_searching_enabled(zval *handle, zval *incrementalSearchingEnabled)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setIncrementalSearchingEnabled:ns_arg_bool(incrementalSearchingEnabled)];
    }
}

zend_long ns_nstextview_inline_prediction_type(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = v != nil ? (zend_long) [v inlinePredictionType] : 0;
    }
    return r;
}

void ns_nstextview_set_inline_prediction_type(zval *handle, zval *inlinePredictionType)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setInlinePredictionType:(NSTextInputTraitType) ns_arg_long(inlinePredictionType)];
    }
}

zend_long ns_nstextview_math_expression_completion_type(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = v != nil ? (zend_long) [v mathExpressionCompletionType] : 0;
    }
    return r;
}

void ns_nstextview_set_math_expression_completion_type(zval *handle, zval *mathExpressionCompletionType)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setMathExpressionCompletionType:(NSTextInputTraitType) ns_arg_long(mathExpressionCompletionType)];
    }
}

void ns_nstextview_toggle_quick_look_preview_panel(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v toggleQuickLookPreviewPanel:ns_arg_object(sender)];
    }
}

void ns_nstextview_quick_look_previewable_items_in_ranges(zval *return_value, zval *handle, zval *ranges)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        ns_ret_object_array(return_value, v != nil ? [v quickLookPreviewableItemsInRanges:ns_arg_object_array(ranges)] : nil);
    }
}

void ns_nstextview_update_quick_look_preview_panel(zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v updateQuickLookPreviewPanel];
    }
}

void ns_nstextview_order_front_sharing_service_picker(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v orderFrontSharingServicePicker:ns_arg_object(sender)];
    }
}

zend_long ns_nstextview_is_automatic_text_completion_enabled(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v isAutomaticTextCompletionEnabled]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_automatic_text_completion_enabled(zval *handle, zval *automaticTextCompletionEnabled)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setAutomaticTextCompletionEnabled:ns_arg_bool(automaticTextCompletionEnabled)];
    }
}

void ns_nstextview_toggle_automatic_text_completion(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v toggleAutomaticTextCompletion:ns_arg_object(sender)];
    }
}

zend_long ns_nstextview_allows_character_picker_touch_bar_item(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        r = (v != nil && [v allowsCharacterPickerTouchBarItem]) ? 1 : 0;
    }
    return r;
}

void ns_nstextview_set_allows_character_picker_touch_bar_item(zval *handle, zval *allowsCharacterPickerTouchBarItem)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setAllowsCharacterPickerTouchBarItem:ns_arg_bool(allowsCharacterPickerTouchBarItem)];
    }
}

void ns_nstextview_update_touch_bar_item_identifiers(zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v updateTouchBarItemIdentifiers];
    }
}

void ns_nstextview_update_text_touch_bar_items(zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v updateTextTouchBarItems];
    }
}

void ns_nstextview_update_candidates(zval *handle)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v updateCandidates];
    }
}

zend_long ns_nstextview_candidate_list_touch_bar_item(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        h = ns_handle_for(v != nil ? [v candidateListTouchBarItem] : nil);
    }
    return h;
}

zend_long ns_nstextview_scrollable_text_view(void)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSTextView scrollableTextView]);
    }
    return h;
}

zend_long ns_nstextview_field_editor(void)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSTextView fieldEditor]);
    }
    return h;
}

zend_long ns_nstextview_scrollable_document_content_text_view(void)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSTextView scrollableDocumentContentTextView]);
    }
    return h;
}

zend_long ns_nstextview_scrollable_plain_document_content_text_view(void)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSTextView scrollablePlainDocumentContentTextView]);
    }
    return h;
}

zend_long ns_nstextview_text_highlight_attributes(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        h = ns_handle_for(v != nil ? [v textHighlightAttributes] : nil);
    }
    return h;
}

void ns_nstextview_set_text_highlight_attributes(zval *handle, zval *textHighlightAttributes)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v setTextHighlightAttributes:ns_arg_dictionary(textHighlightAttributes)];
    }
}

void ns_nstextview_draw_text_highlight_background_for_text_range_origin(zval *handle, zval *textRange, zval *x, zval *y)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v drawTextHighlightBackgroundForTextRange:NS_ARG_AS(NSTextRange, textRange) origin:ns_arg_point(x, y)];
    }
}

void ns_nstextview_highlight(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSTextView *v = NS_ARG_AS(NSTextView, handle);
        if (v == nil) return;
        [v highlight:ns_arg_object(sender)];
    }
}

