#ifndef PHP_APPKIT_NS_VIEW_H
#define PHP_APPKIT_NS_VIEW_H

/*
 * Faithful 1:1 binding of AppKit NSView.h. Every member of the
 * class (base interface + same-file categories) is either bound or
 * reserved. API_DEPRECATED members, NSCoder, NSData, NSAttributedString,
 * blocks, and C function-pointer comparators are reserved; nothing is
 * omitted. Protocol methods live on Bridge delegates, not here.
 * Auto Layout categories that live in other headers bind on those
 * classes. initWithFrame is alloc+init construction glue.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSView ---- */
/*@zep NS\NSView initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nsview_init_with_frame(zval *x, zval *y, zval *width, zval *height);
/*@reserved NS\NSView - (nullable instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER; */
/*@zep NS\NSView window(int handle) -> int */
zend_long ns_nsview_window(zval *handle);
/*@zep NS\NSView superview(int handle) -> int */
zend_long ns_nsview_superview(zval *handle);
/*@zep NS\NSView subviews(int handle) -> array */
void ns_nsview_subviews(zval *return_value, zval *handle);
/*@zep NS\NSView setSubviews(int handle, array subviews) -> void */
void ns_nsview_set_subviews(zval *handle, zval *subviews);
/*@zep NS\NSView isDescendantOf(int handle, int view) -> bool */
zend_long ns_nsview_is_descendant_of(zval *handle, zval *view);
/*@zep NS\NSView ancestorSharedWithView(int handle, int view) -> int */
zend_long ns_nsview_ancestor_shared_with_view(zval *handle, zval *view);
/*@zep NS\NSView opaqueAncestor(int handle) -> int */
zend_long ns_nsview_opaque_ancestor(zval *handle);
/*@zep NS\NSView isHidden(int handle) -> bool */
zend_long ns_nsview_is_hidden(zval *handle);
/*@zep NS\NSView setHidden(int handle, bool hidden) -> void */
void ns_nsview_set_hidden(zval *handle, zval *hidden);
/*@zep NS\NSView isHiddenOrHasHiddenAncestor(int handle) -> bool */
zend_long ns_nsview_is_hidden_or_has_hidden_ancestor(zval *handle);
/*@zep NS\NSView getRectsBeingDrawnCount(int handle) -> array */
void ns_nsview_get_rects_being_drawn_count(zval *return_value, zval *handle);
/*@zep NS\NSView needsToDrawRect(int handle, double x, double y, double width, double height) -> bool */
zend_long ns_nsview_needs_to_draw_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSView wantsDefaultClipping(int handle) -> bool */
zend_long ns_nsview_wants_default_clipping(zval *handle);
/*@zep NS\NSView viewDidHide(int handle) -> void */
void ns_nsview_view_did_hide(zval *handle);
/*@zep NS\NSView viewDidUnhide(int handle) -> void */
void ns_nsview_view_did_unhide(zval *handle);
/*@zep NS\NSView addSubview(int handle, int view) -> void */
void ns_nsview_add_subview(zval *handle, zval *view);
/*@zep NS\NSView addSubviewPositionedRelativeTo(int handle, int view, int place, int otherView) -> void */
void ns_nsview_add_subview_positioned_relative_to(zval *handle, zval *view, zval *place, zval *otherView);
/*@reserved NS\NSView - (void)sortSubviewsUsingFunction:(NSComparisonResult (NS_NOESCAPE *)(__kindof NSView *, __kindof NSView *, void * _Nullable))compare context:(nullable void *)context; */
/*@zep NS\NSView viewWillMoveToWindow(int handle, int newWindow) -> void */
void ns_nsview_view_will_move_to_window(zval *handle, zval *newWindow);
/*@zep NS\NSView viewDidMoveToWindow(int handle) -> void */
void ns_nsview_view_did_move_to_window(zval *handle);
/*@zep NS\NSView viewWillMoveToSuperview(int handle, int newSuperview) -> void */
void ns_nsview_view_will_move_to_superview(zval *handle, zval *newSuperview);
/*@zep NS\NSView viewDidMoveToSuperview(int handle) -> void */
void ns_nsview_view_did_move_to_superview(zval *handle);
/*@zep NS\NSView didAddSubview(int handle, int subview) -> void */
void ns_nsview_did_add_subview(zval *handle, zval *subview);
/*@zep NS\NSView willRemoveSubview(int handle, int subview) -> void */
void ns_nsview_will_remove_subview(zval *handle, zval *subview);
/*@zep NS\NSView removeFromSuperview(int handle) -> void */
void ns_nsview_remove_from_superview(zval *handle);
/*@zep NS\NSView replaceSubviewWith(int handle, int oldView, int newView) -> void */
void ns_nsview_replace_subview_with(zval *handle, zval *oldView, zval *newView);
/*@zep NS\NSView removeFromSuperviewWithoutNeedingDisplay(int handle) -> void */
void ns_nsview_remove_from_superview_without_needing_display(zval *handle);
/*@zep NS\NSView viewDidChangeBackingProperties(int handle) -> void */
void ns_nsview_view_did_change_backing_properties(zval *handle);
/*@zep NS\NSView postsFrameChangedNotifications(int handle) -> bool */
zend_long ns_nsview_posts_frame_changed_notifications(zval *handle);
/*@zep NS\NSView setPostsFrameChangedNotifications(int handle, bool postsFrameChangedNotifications) -> void */
void ns_nsview_set_posts_frame_changed_notifications(zval *handle, zval *postsFrameChangedNotifications);
/*@zep NS\NSView resizeSubviewsWithOldSize(int handle, double width, double height) -> void */
void ns_nsview_resize_subviews_with_old_size(zval *handle, zval *width, zval *height);
/*@zep NS\NSView resizeWithOldSuperviewSize(int handle, double width, double height) -> void */
void ns_nsview_resize_with_old_superview_size(zval *handle, zval *width, zval *height);
/*@zep NS\NSView autoresizesSubviews(int handle) -> bool */
zend_long ns_nsview_autoresizes_subviews(zval *handle);
/*@zep NS\NSView setAutoresizesSubviews(int handle, bool autoresizesSubviews) -> void */
void ns_nsview_set_autoresizes_subviews(zval *handle, zval *autoresizesSubviews);
/*@zep NS\NSView autoresizingMask(int handle) -> int */
zend_long ns_nsview_autoresizing_mask(zval *handle);
/*@zep NS\NSView setAutoresizingMask(int handle, int autoresizingMask) -> void */
void ns_nsview_set_autoresizing_mask(zval *handle, zval *autoresizingMask);
/*@zep NS\NSView setFrameOrigin(int handle, double x, double y) -> void */
void ns_nsview_set_frame_origin(zval *handle, zval *x, zval *y);
/*@zep NS\NSView setFrameSize(int handle, double width, double height) -> void */
void ns_nsview_set_frame_size(zval *handle, zval *width, zval *height);
/*@zep NS\NSView frame(int handle) -> array */
void ns_nsview_frame(zval *return_value, zval *handle);
/*@zep NS\NSView setFrame(int handle, double x, double y, double width, double height) -> void */
void ns_nsview_set_frame(zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSView frameRotation(int handle) -> double */
double ns_nsview_frame_rotation(zval *handle);
/*@zep NS\NSView setFrameRotation(int handle, double frameRotation) -> void */
void ns_nsview_set_frame_rotation(zval *handle, zval *frameRotation);
/*@zep NS\NSView frameCenterRotation(int handle) -> double */
double ns_nsview_frame_center_rotation(zval *handle);
/*@zep NS\NSView setFrameCenterRotation(int handle, double frameCenterRotation) -> void */
void ns_nsview_set_frame_center_rotation(zval *handle, zval *frameCenterRotation);
/*@zep NS\NSView setBoundsOrigin(int handle, double x, double y) -> void */
void ns_nsview_set_bounds_origin(zval *handle, zval *x, zval *y);
/*@zep NS\NSView setBoundsSize(int handle, double width, double height) -> void */
void ns_nsview_set_bounds_size(zval *handle, zval *width, zval *height);
/*@zep NS\NSView boundsRotation(int handle) -> double */
double ns_nsview_bounds_rotation(zval *handle);
/*@zep NS\NSView setBoundsRotation(int handle, double boundsRotation) -> void */
void ns_nsview_set_bounds_rotation(zval *handle, zval *boundsRotation);
/*@zep NS\NSView translateOriginToPoint(int handle, double x, double y) -> void */
void ns_nsview_translate_origin_to_point(zval *handle, zval *x, zval *y);
/*@zep NS\NSView scaleUnitSquareToSize(int handle, double width, double height) -> void */
void ns_nsview_scale_unit_square_to_size(zval *handle, zval *width, zval *height);
/*@zep NS\NSView rotateByAngle(int handle, double angle) -> void */
void ns_nsview_rotate_by_angle(zval *handle, zval *angle);
/*@zep NS\NSView bounds(int handle) -> array */
void ns_nsview_bounds(zval *return_value, zval *handle);
/*@zep NS\NSView setBounds(int handle, double x, double y, double width, double height) -> void */
void ns_nsview_set_bounds(zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSView isFlipped(int handle) -> bool */
zend_long ns_nsview_is_flipped(zval *handle);
/*@zep NS\NSView isRotatedFromBase(int handle) -> bool */
zend_long ns_nsview_is_rotated_from_base(zval *handle);
/*@zep NS\NSView isRotatedOrScaledFromBase(int handle) -> bool */
zend_long ns_nsview_is_rotated_or_scaled_from_base(zval *handle);
/*@zep NS\NSView isOpaque(int handle) -> bool */
zend_long ns_nsview_is_opaque(zval *handle);
/*@zep NS\NSView convertPointFromView(int handle, double x, double y, int view) -> array */
void ns_nsview_convert_point_from_view(zval *return_value, zval *handle, zval *x, zval *y, zval *view);
/*@zep NS\NSView convertPointToView(int handle, double x, double y, int view) -> array */
void ns_nsview_convert_point_to_view(zval *return_value, zval *handle, zval *x, zval *y, zval *view);
/*@zep NS\NSView convertSizeFromView(int handle, double width, double height, int view) -> array */
void ns_nsview_convert_size_from_view(zval *return_value, zval *handle, zval *width, zval *height, zval *view);
/*@zep NS\NSView convertSizeToView(int handle, double width, double height, int view) -> array */
void ns_nsview_convert_size_to_view(zval *return_value, zval *handle, zval *width, zval *height, zval *view);
/*@zep NS\NSView convertRectFromView(int handle, double x, double y, double width, double height, int view) -> array */
void ns_nsview_convert_rect_from_view(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *view);
/*@zep NS\NSView convertRectToView(int handle, double x, double y, double width, double height, int view) -> array */
void ns_nsview_convert_rect_to_view(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *view);
/*@zep NS\NSView backingAlignedRectOptions(int handle, double x, double y, double width, double height, int options) -> array */
void ns_nsview_backing_aligned_rect_options(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *options);
/*@zep NS\NSView centerScanRect(int handle, double x, double y, double width, double height) -> array */
void ns_nsview_center_scan_rect(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSView convertPointToBacking(int handle, double x, double y) -> array */
void ns_nsview_convert_point_to_backing(zval *return_value, zval *handle, zval *x, zval *y);
/*@zep NS\NSView convertPointFromBacking(int handle, double x, double y) -> array */
void ns_nsview_convert_point_from_backing(zval *return_value, zval *handle, zval *x, zval *y);
/*@zep NS\NSView convertSizeToBacking(int handle, double width, double height) -> array */
void ns_nsview_convert_size_to_backing(zval *return_value, zval *handle, zval *width, zval *height);
/*@zep NS\NSView convertSizeFromBacking(int handle, double width, double height) -> array */
void ns_nsview_convert_size_from_backing(zval *return_value, zval *handle, zval *width, zval *height);
/*@zep NS\NSView convertRectToBacking(int handle, double x, double y, double width, double height) -> array */
void ns_nsview_convert_rect_to_backing(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSView convertRectFromBacking(int handle, double x, double y, double width, double height) -> array */
void ns_nsview_convert_rect_from_backing(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSView convertPointToLayer(int handle, double x, double y) -> array */
void ns_nsview_convert_point_to_layer(zval *return_value, zval *handle, zval *x, zval *y);
/*@zep NS\NSView convertPointFromLayer(int handle, double x, double y) -> array */
void ns_nsview_convert_point_from_layer(zval *return_value, zval *handle, zval *x, zval *y);
/*@zep NS\NSView convertSizeToLayer(int handle, double width, double height) -> array */
void ns_nsview_convert_size_to_layer(zval *return_value, zval *handle, zval *width, zval *height);
/*@zep NS\NSView convertSizeFromLayer(int handle, double width, double height) -> array */
void ns_nsview_convert_size_from_layer(zval *return_value, zval *handle, zval *width, zval *height);
/*@zep NS\NSView convertRectToLayer(int handle, double x, double y, double width, double height) -> array */
void ns_nsview_convert_rect_to_layer(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSView convertRectFromLayer(int handle, double x, double y, double width, double height) -> array */
void ns_nsview_convert_rect_from_layer(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSView canDrawConcurrently(int handle) -> bool */
zend_long ns_nsview_can_draw_concurrently(zval *handle);
/*@zep NS\NSView setCanDrawConcurrently(int handle, bool canDrawConcurrently) -> void */
void ns_nsview_set_can_draw_concurrently(zval *handle, zval *canDrawConcurrently);
/*@reserved NS\NSView @property (readonly) BOOL canDraw API_DEPRECATED("If a view needs display, -drawRect: or -updateLayer will be called automatically when the view is able to draw. To check whether a view is in a window, call -window. To check whether a view is hidden, call -isHiddenOrHasHiddenAncestor.", macos(10.0,10.14)); */
/*@zep NS\NSView setNeedsDisplayInRect(int handle, double x, double y, double width, double height) -> void */
void ns_nsview_set_needs_display_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSView needsDisplay(int handle) -> bool */
zend_long ns_nsview_needs_display(zval *handle);
/*@zep NS\NSView setNeedsDisplay(int handle, bool needsDisplay) -> void */
void ns_nsview_set_needs_display(zval *handle, zval *needsDisplay);
/*@reserved NS\NSView - (void)lockFocus API_DEPRECATED("To draw, subclass NSView and implement -drawRect:; AppKit's automatic deferred display mechanism will call -drawRect: as necessary to display the view.", macos(10.0,10.14)); */
/*@reserved NS\NSView - (void)unlockFocus API_DEPRECATED("To draw, subclass NSView and implement -drawRect:; AppKit's automatic deferred display mechanism will call -drawRect: as necessary to display the view.", macos(10.0,10.14)); */
/*@reserved NS\NSView - (BOOL)lockFocusIfCanDraw API_DEPRECATED("To draw, subclass NSView and implement -drawRect:; AppKit's automatic deferred display mechanism will call -drawRect: as necessary to display the view.", macos(10.0,10.14)); */
/*@reserved NS\NSView - (BOOL)lockFocusIfCanDrawInContext:(NSGraphicsContext *)context API_DEPRECATED("Use -[NSView displayRectIgnoringOpacity:inContext:] to draw a view subtree into a graphics context.", macos(10.4,10.13)); */
/*@zep NS\NSView focusView() -> int */
zend_long ns_nsview_focus_view(void);
/*@zep NS\NSView visibleRect(int handle) -> array */
void ns_nsview_visible_rect(zval *return_value, zval *handle);
/*@zep NS\NSView display(int handle) -> void */
void ns_nsview_display(zval *handle);
/*@zep NS\NSView displayIfNeeded(int handle) -> void */
void ns_nsview_display_if_needed(zval *handle);
/*@zep NS\NSView displayIfNeededIgnoringOpacity(int handle) -> void */
void ns_nsview_display_if_needed_ignoring_opacity(zval *handle);
/*@zep NS\NSView displayRect(int handle, double x, double y, double width, double height) -> void */
void ns_nsview_display_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSView displayIfNeededInRect(int handle, double x, double y, double width, double height) -> void */
void ns_nsview_display_if_needed_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSView displayRectIgnoringOpacity(int handle, double x, double y, double width, double height) -> void */
void ns_nsview_display_rect_ignoring_opacity(zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSView displayIfNeededInRectIgnoringOpacity(int handle, double x, double y, double width, double height) -> void */
void ns_nsview_display_if_needed_in_rect_ignoring_opacity(zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSView drawRect(int handle, double x, double y, double width, double height) -> void */
void ns_nsview_draw_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSView displayRectIgnoringOpacityInContext(int handle, double x, double y, double width, double height, int context) -> void */
void ns_nsview_display_rect_ignoring_opacity_in_context(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *context);
/*@zep NS\NSView bitmapImageRepForCachingDisplayInRect(int handle, double x, double y, double width, double height) -> int */
zend_long ns_nsview_bitmap_image_rep_for_caching_display_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSView cacheDisplayInRectToBitmapImageRep(int handle, double x, double y, double width, double height, int bitmapImageRep) -> void */
void ns_nsview_cache_display_in_rect_to_bitmap_image_rep(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *bitmapImageRep);
/*@zep NS\NSView viewWillDraw(int handle) -> void */
void ns_nsview_view_will_draw(zval *handle);
/*@zep NS\NSView scrollPoint(int handle, double x, double y) -> void */
void ns_nsview_scroll_point(zval *handle, zval *x, zval *y);
/*@zep NS\NSView scrollRectToVisible(int handle, double x, double y, double width, double height) -> bool */
zend_long ns_nsview_scroll_rect_to_visible(zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSView autoscroll(int handle, int event) -> bool */
zend_long ns_nsview_autoscroll(zval *handle, zval *event);
/*@zep NS\NSView adjustScroll(int handle, double x, double y, double width, double height) -> array */
void ns_nsview_adjust_scroll(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@reserved NS\NSView - (void)scrollRect:(NSRect)rect by:(NSSize)delta API_DEPRECATED("Use NSScrollView to achieve scrolling views.", macos(10.0,10.14)); */
/*@zep NS\NSView translateRectsNeedingDisplayInRectBy(int handle, double clipRectX, double clipRectY, double clipRectWidth, double clipRectHeight, double deltaWidth, double deltaHeight) -> void */
void ns_nsview_translate_rects_needing_display_in_rect_by(zval *handle, zval *clipRectX, zval *clipRectY, zval *clipRectWidth, zval *clipRectHeight, zval *deltaWidth, zval *deltaHeight);
/*@zep NS\NSView hitTest(int handle, double x, double y) -> int */
zend_long ns_nsview_hit_test(zval *handle, zval *x, zval *y);
/*@zep NS\NSView mouseInRect(int handle, double pointX, double pointY, double rectX, double rectY, double rectWidth, double rectHeight) -> bool */
zend_long ns_nsview_mouse_in_rect(zval *handle, zval *pointX, zval *pointY, zval *rectX, zval *rectY, zval *rectWidth, zval *rectHeight);
/*@zep NS\NSView viewWithTag(int handle, int tag) -> int */
zend_long ns_nsview_view_with_tag(zval *handle, zval *tag);
/*@zep NS\NSView tag(int handle) -> int */
zend_long ns_nsview_tag(zval *handle);
/*@zep NS\NSView performKeyEquivalent(int handle, int event) -> bool */
zend_long ns_nsview_perform_key_equivalent(zval *handle, zval *event);
/*@zep NS\NSView acceptsFirstMouse(int handle, int event) -> bool */
zend_long ns_nsview_accepts_first_mouse(zval *handle, zval *event);
/*@zep NS\NSView shouldDelayWindowOrderingForEvent(int handle, int event) -> bool */
zend_long ns_nsview_should_delay_window_ordering_for_event(zval *handle, zval *event);
/*@zep NS\NSView needsPanelToBecomeKey(int handle) -> bool */
zend_long ns_nsview_needs_panel_to_become_key(zval *handle);
/*@zep NS\NSView mouseDownCanMoveWindow(int handle) -> bool */
zend_long ns_nsview_mouse_down_can_move_window(zval *handle);
/*@reserved NS\NSView @property BOOL acceptsTouchEvents API_DEPRECATED("Use allowedTouchTypes instead", macos(10.6,10.12.2)); — getter */
/*@reserved NS\NSView @property BOOL acceptsTouchEvents API_DEPRECATED("Use allowedTouchTypes instead", macos(10.6,10.12.2)); — setter */
/*@zep NS\NSView wantsRestingTouches(int handle) -> bool */
zend_long ns_nsview_wants_resting_touches(zval *handle);
/*@zep NS\NSView setWantsRestingTouches(int handle, bool wantsRestingTouches) -> void */
void ns_nsview_set_wants_resting_touches(zval *handle, zval *wantsRestingTouches);
/*@zep NS\NSView makeBackingLayer(int handle) -> int */
zend_long ns_nsview_make_backing_layer(zval *handle);
/*@zep NS\NSView layerContentsRedrawPolicy(int handle) -> int */
zend_long ns_nsview_layer_contents_redraw_policy(zval *handle);
/*@zep NS\NSView setLayerContentsRedrawPolicy(int handle, int layerContentsRedrawPolicy) -> void */
void ns_nsview_set_layer_contents_redraw_policy(zval *handle, zval *layerContentsRedrawPolicy);
/*@zep NS\NSView layerContentsPlacement(int handle) -> int */
zend_long ns_nsview_layer_contents_placement(zval *handle);
/*@zep NS\NSView setLayerContentsPlacement(int handle, int layerContentsPlacement) -> void */
void ns_nsview_set_layer_contents_placement(zval *handle, zval *layerContentsPlacement);
/*@zep NS\NSView wantsLayer(int handle) -> bool */
zend_long ns_nsview_wants_layer(zval *handle);
/*@zep NS\NSView setWantsLayer(int handle, bool wantsLayer) -> void */
void ns_nsview_set_wants_layer(zval *handle, zval *wantsLayer);
/*@zep NS\NSView layer(int handle) -> int */
zend_long ns_nsview_layer(zval *handle);
/*@zep NS\NSView setLayer(int handle, int layer) -> void */
void ns_nsview_set_layer(zval *handle, zval *layer);
/*@zep NS\NSView wantsUpdateLayer(int handle) -> bool */
zend_long ns_nsview_wants_update_layer(zval *handle);
/*@zep NS\NSView updateLayer(int handle) -> void */
void ns_nsview_update_layer(zval *handle);
/*@zep NS\NSView canDrawSubviewsIntoLayer(int handle) -> bool */
zend_long ns_nsview_can_draw_subviews_into_layer(zval *handle);
/*@zep NS\NSView setCanDrawSubviewsIntoLayer(int handle, bool canDrawSubviewsIntoLayer) -> void */
void ns_nsview_set_can_draw_subviews_into_layer(zval *handle, zval *canDrawSubviewsIntoLayer);
/*@zep NS\NSView layoutSubtreeIfNeeded(int handle) -> void */
void ns_nsview_layout_subtree_if_needed(zval *handle);
/*@zep NS\NSView layout(int handle) -> void */
void ns_nsview_layout(zval *handle);
/*@zep NS\NSView needsLayout(int handle) -> bool */
zend_long ns_nsview_needs_layout(zval *handle);
/*@zep NS\NSView setNeedsLayout(int handle, bool needsLayout) -> void */
void ns_nsview_set_needs_layout(zval *handle, zval *needsLayout);
/*@zep NS\NSView alphaValue(int handle) -> double */
double ns_nsview_alpha_value(zval *handle);
/*@zep NS\NSView setAlphaValue(int handle, double alphaValue) -> void */
void ns_nsview_set_alpha_value(zval *handle, zval *alphaValue);
/*@zep NS\NSView layerUsesCoreImageFilters(int handle) -> bool */
zend_long ns_nsview_layer_uses_core_image_filters(zval *handle);
/*@zep NS\NSView setLayerUsesCoreImageFilters(int handle, bool layerUsesCoreImageFilters) -> void */
void ns_nsview_set_layer_uses_core_image_filters(zval *handle, zval *layerUsesCoreImageFilters);
/*@zep NS\NSView backgroundFilters(int handle) -> array */
void ns_nsview_background_filters(zval *return_value, zval *handle);
/*@zep NS\NSView setBackgroundFilters(int handle, array backgroundFilters) -> void */
void ns_nsview_set_background_filters(zval *handle, zval *backgroundFilters);
/*@zep NS\NSView compositingFilter(int handle) -> int */
zend_long ns_nsview_compositing_filter(zval *handle);
/*@zep NS\NSView setCompositingFilter(int handle, int compositingFilter) -> void */
void ns_nsview_set_compositing_filter(zval *handle, zval *compositingFilter);
/*@zep NS\NSView contentFilters(int handle) -> array */
void ns_nsview_content_filters(zval *return_value, zval *handle);
/*@zep NS\NSView setContentFilters(int handle, array contentFilters) -> void */
void ns_nsview_set_content_filters(zval *handle, zval *contentFilters);
/*@zep NS\NSView shadow(int handle) -> int */
zend_long ns_nsview_shadow(zval *handle);
/*@zep NS\NSView setShadow(int handle, int shadow) -> void */
void ns_nsview_set_shadow(zval *handle, zval *shadow);
/*@zep NS\NSView clipsToBounds(int handle) -> bool */
zend_long ns_nsview_clips_to_bounds(zval *handle);
/*@zep NS\NSView setClipsToBounds(int handle, bool clipsToBounds) -> void */
void ns_nsview_set_clips_to_bounds(zval *handle, zval *clipsToBounds);
/*@zep NS\NSView postsBoundsChangedNotifications(int handle) -> bool */
zend_long ns_nsview_posts_bounds_changed_notifications(zval *handle);
/*@zep NS\NSView setPostsBoundsChangedNotifications(int handle, bool postsBoundsChangedNotifications) -> void */
void ns_nsview_set_posts_bounds_changed_notifications(zval *handle, zval *postsBoundsChangedNotifications);
/*@zep NS\NSView enclosingScrollView(int handle) -> int */
zend_long ns_nsview_enclosing_scroll_view(zval *handle);
/*@zep NS\NSView menuForEvent(int handle, int event) -> int */
zend_long ns_nsview_menu_for_event(zval *handle, zval *event);
/*@zep NS\NSView defaultMenu() -> int */
zend_long ns_nsview_default_menu(void);
/*@zep NS\NSView willOpenMenuWithEvent(int handle, int menu, int event) -> void */
void ns_nsview_will_open_menu_with_event(zval *handle, zval *menu, zval *event);
/*@zep NS\NSView didCloseMenuWithEvent(int handle, int menu, int event) -> void */
void ns_nsview_did_close_menu_with_event(zval *handle, zval *menu, zval *event);
/*@zep NS\NSView toolTip(int handle) -> var */
void ns_nsview_tool_tip(zval *return_value, zval *handle);
/*@zep NS\NSView setToolTip(int handle, var toolTip) -> void */
void ns_nsview_set_tool_tip(zval *handle, zval *toolTip);
/*@zep NS\NSView addToolTipRectOwnerUserData(int handle, double x, double y, double width, double height, int owner, int data) -> int */
zend_long ns_nsview_add_tool_tip_rect_owner_user_data(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *owner, zval *data);
/*@zep NS\NSView removeToolTip(int handle, int tag) -> void */
void ns_nsview_remove_tool_tip(zval *handle, zval *tag);
/*@zep NS\NSView removeAllToolTips(int handle) -> void */
void ns_nsview_remove_all_tool_tips(zval *handle);
/*@zep NS\NSView viewWillStartLiveResize(int handle) -> void */
void ns_nsview_view_will_start_live_resize(zval *handle);
/*@zep NS\NSView viewDidEndLiveResize(int handle) -> void */
void ns_nsview_view_did_end_live_resize(zval *handle);
/*@zep NS\NSView inLiveResize(int handle) -> bool */
zend_long ns_nsview_in_live_resize(zval *handle);
/*@zep NS\NSView preservesContentDuringLiveResize(int handle) -> bool */
zend_long ns_nsview_preserves_content_during_live_resize(zval *handle);
/*@zep NS\NSView rectPreservedDuringLiveResize(int handle) -> array */
void ns_nsview_rect_preserved_during_live_resize(zval *return_value, zval *handle);
/*@zep NS\NSView getRectsExposedDuringLiveResizeCount(int handle) -> array */
void ns_nsview_get_rects_exposed_during_live_resize_count(zval *return_value, zval *handle);
/*@zep NS\NSView inputContext(int handle) -> int */
zend_long ns_nsview_input_context(zval *handle);
/*@zep NS\NSView rectForSmartMagnificationAtPointInRect(int handle, double locationX, double locationY, double visibleRectX, double visibleRectY, double visibleRectWidth, double visibleRectHeight) -> array */
void ns_nsview_rect_for_smart_magnification_at_point_in_rect(zval *return_value, zval *handle, zval *locationX, zval *locationY, zval *visibleRectX, zval *visibleRectY, zval *visibleRectWidth, zval *visibleRectHeight);
/*@zep NS\NSView userInterfaceLayoutDirection(int handle) -> int */
zend_long ns_nsview_user_interface_layout_direction(zval *handle);
/*@zep NS\NSView setUserInterfaceLayoutDirection(int handle, int userInterfaceLayoutDirection) -> void */
void ns_nsview_set_user_interface_layout_direction(zval *handle, zval *userInterfaceLayoutDirection);
/*@zep NS\NSView prepareForReuse(int handle) -> void */
void ns_nsview_prepare_for_reuse(zval *handle);
/*@zep NS\NSView isCompatibleWithResponsiveScrolling() -> bool */
zend_long ns_nsview_is_compatible_with_responsive_scrolling(void);
/*@zep NS\NSView prepareContentInRect(int handle, double x, double y, double width, double height) -> void */
void ns_nsview_prepare_content_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSView preparedContentRect(int handle) -> array */
void ns_nsview_prepared_content_rect(zval *return_value, zval *handle);
/*@zep NS\NSView setPreparedContentRect(int handle, double x, double y, double width, double height) -> void */
void ns_nsview_set_prepared_content_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSView allowsVibrancy(int handle) -> bool */
zend_long ns_nsview_allows_vibrancy(zval *handle);
/*@zep NS\NSView viewDidChangeEffectiveAppearance(int handle) -> void */
void ns_nsview_view_did_change_effective_appearance(zval *handle);

/* ---- NSKeyboardUI ---- */
/*@zep NS\NSView nextKeyView(int handle) -> int */
zend_long ns_nsview_next_key_view(zval *handle);
/*@zep NS\NSView setNextKeyView(int handle, int nextKeyView) -> void */
void ns_nsview_set_next_key_view(zval *handle, zval *nextKeyView);
/*@zep NS\NSView previousKeyView(int handle) -> int */
zend_long ns_nsview_previous_key_view(zval *handle);
/*@zep NS\NSView nextValidKeyView(int handle) -> int */
zend_long ns_nsview_next_valid_key_view(zval *handle);
/*@zep NS\NSView previousValidKeyView(int handle) -> int */
zend_long ns_nsview_previous_valid_key_view(zval *handle);
/*@zep NS\NSView canBecomeKeyView(int handle) -> bool */
zend_long ns_nsview_can_become_key_view(zval *handle);
/*@zep NS\NSView setKeyboardFocusRingNeedsDisplayInRect(int handle, double x, double y, double width, double height) -> void */
void ns_nsview_set_keyboard_focus_ring_needs_display_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSView focusRingType(int handle) -> int */
zend_long ns_nsview_focus_ring_type(zval *handle);
/*@zep NS\NSView setFocusRingType(int handle, int focusRingType) -> void */
void ns_nsview_set_focus_ring_type(zval *handle, zval *focusRingType);
/*@zep NS\NSView defaultFocusRingType() -> int */
zend_long ns_nsview_default_focus_ring_type(void);
/*@zep NS\NSView drawFocusRingMask(int handle) -> void */
void ns_nsview_draw_focus_ring_mask(zval *handle);
/*@zep NS\NSView focusRingMaskBounds(int handle) -> array */
void ns_nsview_focus_ring_mask_bounds(zval *return_value, zval *handle);
/*@zep NS\NSView noteFocusRingMaskChanged(int handle) -> void */
void ns_nsview_note_focus_ring_mask_changed(zval *handle);

/* ---- NSPrinting ---- */
/*@zep NS\NSView writeEPSInsideRectToPasteboard(int handle, double x, double y, double width, double height, int pasteboard) -> void */
void ns_nsview_write_epsinside_rect_to_pasteboard(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *pasteboard);
/*@reserved NS\NSView - (NSData *)dataWithEPSInsideRect:(NSRect)rect; */
/*@zep NS\NSView writePDFInsideRectToPasteboard(int handle, double x, double y, double width, double height, int pasteboard) -> void */
void ns_nsview_write_pdfinside_rect_to_pasteboard(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *pasteboard);
/*@reserved NS\NSView - (NSData *)dataWithPDFInsideRect:(NSRect)rect; */
/*@zep NS\NSView print_(int handle, int sender) -> void */
void ns_nsview_print_(zval *handle, zval *sender);
/*@zep NS\NSView knowsPageRange(int handle) -> array */
void ns_nsview_knows_page_range(zval *return_value, zval *handle);
/*@zep NS\NSView heightAdjustLimit(int handle) -> double */
double ns_nsview_height_adjust_limit(zval *handle);
/*@zep NS\NSView widthAdjustLimit(int handle) -> double */
double ns_nsview_width_adjust_limit(zval *handle);
/*@zep NS\NSView adjustPageWidthNewLeftRightLimit(int handle, double oldLeft, double oldRight, double rightLimit) -> array */
void ns_nsview_adjust_page_width_new_left_right_limit(zval *return_value, zval *handle, zval *oldLeft, zval *oldRight, zval *rightLimit);
/*@zep NS\NSView adjustPageHeightNewTopBottomLimit(int handle, double oldTop, double oldBottom, double bottomLimit) -> array */
void ns_nsview_adjust_page_height_new_top_bottom_limit(zval *return_value, zval *handle, zval *oldTop, zval *oldBottom, zval *bottomLimit);
/*@zep NS\NSView rectForPage(int handle, int page) -> array */
void ns_nsview_rect_for_page(zval *return_value, zval *handle, zval *page);
/*@zep NS\NSView locationOfPrintRect(int handle, double x, double y, double width, double height) -> array */
void ns_nsview_location_of_print_rect(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSView drawPageBorderWithSize(int handle, double width, double height) -> void */
void ns_nsview_draw_page_border_with_size(zval *handle, zval *width, zval *height);
/*@reserved NS\NSView @property (readonly, copy) NSAttributedString *pageHeader; */
/*@reserved NS\NSView @property (readonly, copy) NSAttributedString *pageFooter; */
/*@reserved NS\NSView - (void)drawSheetBorderWithSize:(NSSize)borderSize API_DEPRECATED("This is never invoked and the NSView implementation does nothing", macos(10.0,10.14)); */
/*@zep NS\NSView printJobTitle(int handle) -> string */
void ns_nsview_print_job_title(zval *return_value, zval *handle);
/*@zep NS\NSView beginDocument(int handle) -> void */
void ns_nsview_begin_document(zval *handle);
/*@zep NS\NSView endDocument(int handle) -> void */
void ns_nsview_end_document(zval *handle);
/*@zep NS\NSView beginPageInRectAtPlacement(int handle, double rectX, double rectY, double rectWidth, double rectHeight, double locationX, double locationY) -> void */
void ns_nsview_begin_page_in_rect_at_placement(zval *handle, zval *rectX, zval *rectY, zval *rectWidth, zval *rectHeight, zval *locationX, zval *locationY);
/*@zep NS\NSView endPage(int handle) -> void */
void ns_nsview_end_page(zval *handle);

/* ---- NSDrag ---- */
/*@zep NS\NSView beginDraggingSessionWithItemsEventSource(int handle, array items, int event, int source) -> int */
zend_long ns_nsview_begin_dragging_session_with_items_event_source(zval *handle, zval *items, zval *event, zval *source);
/*@zep NS\NSView registeredDraggedTypes(int handle) -> array */
void ns_nsview_registered_dragged_types(zval *return_value, zval *handle);
/*@zep NS\NSView registerForDraggedTypes(int handle, array newTypes) -> void */
void ns_nsview_register_for_dragged_types(zval *handle, zval *newTypes);
/*@zep NS\NSView unregisterDraggedTypes(int handle) -> void */
void ns_nsview_unregister_dragged_types(zval *handle);

/* ---- NSFullScreenMode ---- */
/*@zep NS\NSView enterFullScreenModeWithOptions(int handle, int screen, int options) -> bool */
zend_long ns_nsview_enter_full_screen_mode_with_options(zval *handle, zval *screen, zval *options);
/*@zep NS\NSView exitFullScreenModeWithOptions(int handle, int options) -> void */
void ns_nsview_exit_full_screen_mode_with_options(zval *handle, zval *options);
/*@zep NS\NSView isInFullScreenMode(int handle) -> bool */
zend_long ns_nsview_is_in_full_screen_mode(zval *handle);

/* ---- NSDefinition ---- */
/*@reserved NS\NSView - (void)showDefinitionForAttributedString:(nullable NSAttributedString *)attrString atPoint:(NSPoint)textBaselineOrigin API_AVAILABLE(macos(10.6)); */
/*@reserved NS\NSView - (void)showDefinitionForAttributedString:(nullable NSAttributedString *)attrString range:(NSRange)targetRange options:(nullable NSDictionary<NSDefinitionOptionKey, id> *)options baselineOriginProvider:(NSPoint (^ _Nullable)(NSRange adjustedRange))originProvider API_AVAILABLE(macos(10.6)); */

/* ---- NSFindIndicator ---- */
/*@zep NS\NSView isDrawingFindIndicator(int handle) -> bool */
zend_long ns_nsview_is_drawing_find_indicator(zval *handle);

/* ---- NSGestureRecognizer ---- */
/*@zep NS\NSView gestureRecognizers(int handle) -> array */
void ns_nsview_gesture_recognizers(zval *return_value, zval *handle);
/*@zep NS\NSView setGestureRecognizers(int handle, array gestureRecognizers) -> void */
void ns_nsview_set_gesture_recognizers(zval *handle, zval *gestureRecognizers);
/*@zep NS\NSView addGestureRecognizer(int handle, int gestureRecognizer) -> void */
void ns_nsview_add_gesture_recognizer(zval *handle, zval *gestureRecognizer);
/*@zep NS\NSView removeGestureRecognizer(int handle, int gestureRecognizer) -> void */
void ns_nsview_remove_gesture_recognizer(zval *handle, zval *gestureRecognizer);

/* ---- NSTouchBar ---- */
/*@zep NS\NSView allowedTouchTypes(int handle) -> int */
zend_long ns_nsview_allowed_touch_types(zval *handle);
/*@zep NS\NSView setAllowedTouchTypes(int handle, int allowedTouchTypes) -> void */
void ns_nsview_set_allowed_touch_types(zval *handle, zval *allowedTouchTypes);

/* ---- NSSafeAreas ---- */
/*@zep NS\NSView safeAreaInsets(int handle) -> array */
void ns_nsview_safe_area_insets(zval *return_value, zval *handle);
/*@zep NS\NSView additionalSafeAreaInsets(int handle) -> array */
void ns_nsview_additional_safe_area_insets(zval *return_value, zval *handle);
/*@zep NS\NSView setAdditionalSafeAreaInsets(int handle, double top, double left, double bottom, double right) -> void */
void ns_nsview_set_additional_safe_area_insets(zval *handle, zval *top, zval *left, zval *bottom, zval *right);
/*@zep NS\NSView safeAreaLayoutGuide(int handle) -> int */
zend_long ns_nsview_safe_area_layout_guide(zval *handle);
/*@zep NS\NSView safeAreaRect(int handle) -> array */
void ns_nsview_safe_area_rect(zval *return_value, zval *handle);
/*@zep NS\NSView layoutMarginsGuide(int handle) -> int */
zend_long ns_nsview_layout_margins_guide(zval *handle);

/* ---- NSTrackingArea ---- */
/*@zep NS\NSView addTrackingArea(int handle, int trackingArea) -> void */
void ns_nsview_add_tracking_area(zval *handle, zval *trackingArea);
/*@zep NS\NSView removeTrackingArea(int handle, int trackingArea) -> void */
void ns_nsview_remove_tracking_area(zval *handle, zval *trackingArea);
/*@zep NS\NSView trackingAreas(int handle) -> array */
void ns_nsview_tracking_areas(zval *return_value, zval *handle);
/*@zep NS\NSView updateTrackingAreas(int handle) -> void */
void ns_nsview_update_tracking_areas(zval *handle);
/*@zep NS\NSView addCursorRectCursor(int handle, double x, double y, double width, double height, int object_) -> void */
void ns_nsview_add_cursor_rect_cursor(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *object_);
/*@zep NS\NSView removeCursorRectCursor(int handle, double x, double y, double width, double height, int object_) -> void */
void ns_nsview_remove_cursor_rect_cursor(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *object_);
/*@zep NS\NSView discardCursorRects(int handle) -> void */
void ns_nsview_discard_cursor_rects(zval *handle);
/*@zep NS\NSView resetCursorRects(int handle) -> void */
void ns_nsview_reset_cursor_rects(zval *handle);
/*@zep NS\NSView addTrackingRectOwnerUserDataAssumeInside(int handle, double x, double y, double width, double height, int owner, int data, bool flag) -> int */
zend_long ns_nsview_add_tracking_rect_owner_user_data_assume_inside(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *owner, zval *data, zval *flag);
/*@zep NS\NSView removeTrackingRect(int handle, int tag) -> void */
void ns_nsview_remove_tracking_rect(zval *handle, zval *tag);

/* ---- NSDisplayLink ---- */
/*@zep NS\NSView displayLinkWithTargetSelector(int handle, int target, string selector) -> int */
zend_long ns_nsview_display_link_with_target_selector(zval *handle, zval *target, zval *selector);

/* ---- NSDeprecated ---- */
/*@reserved NS\NSView - (void)dragImage:(NSImage *)image at:(NSPoint)viewLocation offset:(NSSize)initialOffset event:(NSEvent *)event pasteboard:(NSPasteboard *)pboard source:(id)sourceObj slideBack:(BOOL)slideFlag API_DEPRECATED("Use -beginDraggingSessionWithItems:event:source: instead", macos(10.0,10.7)); */
/*@reserved NS\NSView - (BOOL)dragFile:(NSString *)filename fromRect:(NSRect)rect slideBack:(BOOL)flag event:(NSEvent *)event API_DEPRECATED("Use -beginDraggingSessionWithItems:event:source: instead", macos(10.0,10.13)); */
/*@reserved NS\NSView - (BOOL)dragPromisedFilesOfTypes:(NSArray<NSString *> *)typeArray fromRect:(NSRect)rect source:(id)sourceObject slideBack:(BOOL)flag event:(NSEvent *)event API_DEPRECATED("Use -beginDraggingSessionWithItems:event:source: with an NSFilePromiseProvider instead", macos(10.0,10.13)); */
/*@reserved NS\NSView - (NSPoint)convertPointToBase:(NSPoint)point API_DEPRECATED("", macos(10.5,10.7)); */
/*@reserved NS\NSView - (NSPoint)convertPointFromBase:(NSPoint)point API_DEPRECATED("", macos(10.5,10.7)); */
/*@reserved NS\NSView - (NSSize)convertSizeToBase:(NSSize)size API_DEPRECATED("", macos(10.5,10.7)); */
/*@reserved NS\NSView - (NSSize)convertSizeFromBase:(NSSize)size API_DEPRECATED("", macos(10.5,10.7)); */
/*@reserved NS\NSView - (NSRect)convertRectToBase:(NSRect)rect API_DEPRECATED("", macos(10.5,10.7)); */
/*@reserved NS\NSView - (NSRect)convertRectFromBase:(NSRect)rect API_DEPRECATED("", macos(10.5,10.7)); */
/*@reserved NS\NSView - (BOOL)performMnemonic:(NSString *)string API_DEPRECATED("This has always returned NO and had no effect on macOS", macos(10.0,10.8)); */
/*@reserved NS\NSView - (BOOL)shouldDrawColor API_DEPRECATED("This method no longer does anything", macos(10.0,10.10)); */
/*@reserved NS\NSView - (NSInteger)gState API_DEPRECATED("", macos(10.0,10.10)); */
/*@reserved NS\NSView - (void)allocateGState API_DEPRECATED("", macos(10.0,10.10)); */
/*@reserved NS\NSView - (oneway void)releaseGState API_DEPRECATED("", macos(10.0,10.10)); */
/*@reserved NS\NSView - (void)setUpGState API_DEPRECATED("", macos(10.0,10.10)); */
/*@reserved NS\NSView - (void)renewGState API_DEPRECATED("", macos(10.0,10.10)); */

/* ---- NSWritingToolsCoordinator ---- */
/*@zep NS\NSView writingToolsCoordinator(int handle) -> int */
zend_long ns_nsview_writing_tools_coordinator(zval *handle);
/*@zep NS\NSView setWritingToolsCoordinator(int handle, int writingToolsCoordinator) -> void */
void ns_nsview_set_writing_tools_coordinator(zval *handle, zval *writingToolsCoordinator);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_VIEW_H */
