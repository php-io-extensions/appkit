#ifndef PHP_APPKIT_NS_WINDOW_H
#define PHP_APPKIT_NS_WINDOW_H

/*
 * Faithful 1:1 binding of AppKit NSWindow.h. Every member of the
 * class (base interface + same-file categories) is either bound or
 * reserved. API_DEPRECATED members, blocks, NSCoder, NSData, NSError**,
 * NSAttributedString, and Class are reserved; nothing is omitted.
 * Protocol methods live on Bridge delegates, not here.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/*@zep NS\NSWindow frameRectForContentRectStyleMask(double x, double y, double width, double height, int style) -> array */
void ns_nswindow_frame_rect_for_content_rect_style_mask(zval *return_value, zval *x, zval *y, zval *width, zval *height, zval *style);

/*@zep NS\NSWindow contentRectForFrameRectStyleMask(double x, double y, double width, double height, int style) -> array */
void ns_nswindow_content_rect_for_frame_rect_style_mask(zval *return_value, zval *x, zval *y, zval *width, zval *height, zval *style);

/*@zep NS\NSWindow minFrameWidthWithTitleStyleMask(string title, int style) -> double */
double ns_nswindow_min_frame_width_with_title_style_mask(zval *title, zval *style);

/*@zep NS\NSWindow defaultDepthLimit() -> int */
zend_long ns_nswindow_default_depth_limit(void);

/*@zep NS\NSWindow frameRectForContentRect(int handle, double x, double y, double width, double height) -> array */
void ns_nswindow_frame_rect_for_content_rect(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSWindow contentRectForFrameRect(int handle, double x, double y, double width, double height) -> array */
void ns_nswindow_content_rect_for_frame_rect(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSWindow initWithContentRectStyleMaskBackingDefer(double x, double y, double width, double height, int style, int backingStoreType, bool flag) -> int */
zend_long ns_nswindow_init_with_content_rect_style_mask_backing_defer(zval *x, zval *y, zval *width, zval *height, zval *style, zval *backingStoreType, zval *flag);

/*@zep NS\NSWindow initWithContentRectStyleMaskBackingDeferScreen(double x, double y, double width, double height, int style, int backingStoreType, bool flag, int screen) -> int */
zend_long ns_nswindow_init_with_content_rect_style_mask_backing_defer_screen(zval *x, zval *y, zval *width, zval *height, zval *style, zval *backingStoreType, zval *flag, zval *screen);

/*@reserved NS\NSWindow - (instancetype)initWithCoder:(NSCoder *)coder NS_UNAVAILABLE; */

/*@zep NS\NSWindow title(int handle) -> string */
void ns_nswindow_title(zval *return_value, zval *handle);
/*@zep NS\NSWindow setTitle(int handle, string title) -> void */
void ns_nswindow_set_title(zval *handle, zval *title);

/*@zep NS\NSWindow subtitle(int handle) -> string */
void ns_nswindow_subtitle(zval *return_value, zval *handle);
/*@zep NS\NSWindow setSubtitle(int handle, string subtitle) -> void */
void ns_nswindow_set_subtitle(zval *handle, zval *subtitle);

/*@zep NS\NSWindow titleVisibility(int handle) -> int */
zend_long ns_nswindow_title_visibility(zval *handle);
/*@zep NS\NSWindow setTitleVisibility(int handle, int titleVisibility) -> void */
void ns_nswindow_set_title_visibility(zval *handle, zval *titleVisibility);

/*@zep NS\NSWindow titlebarAppearsTransparent(int handle) -> bool */
zend_long ns_nswindow_titlebar_appears_transparent(zval *handle);
/*@zep NS\NSWindow setTitlebarAppearsTransparent(int handle, bool titlebarAppearsTransparent) -> void */
void ns_nswindow_set_titlebar_appears_transparent(zval *handle, zval *titlebarAppearsTransparent);

/*@zep NS\NSWindow toolbarStyle(int handle) -> int */
zend_long ns_nswindow_toolbar_style(zval *handle);
/*@zep NS\NSWindow setToolbarStyle(int handle, int toolbarStyle) -> void */
void ns_nswindow_set_toolbar_style(zval *handle, zval *toolbarStyle);

/*@zep NS\NSWindow contentLayoutRect(int handle) -> array */
void ns_nswindow_content_layout_rect(zval *return_value, zval *handle);

/*@zep NS\NSWindow contentLayoutGuide(int handle) -> int */
zend_long ns_nswindow_content_layout_guide(zval *handle);

/*@zep NS\NSWindow titlebarAccessoryViewControllers(int handle) -> array */
void ns_nswindow_titlebar_accessory_view_controllers(zval *return_value, zval *handle);
/*@zep NS\NSWindow setTitlebarAccessoryViewControllers(int handle, array titlebarAccessoryViewControllers) -> void */
void ns_nswindow_set_titlebar_accessory_view_controllers(zval *handle, zval *titlebarAccessoryViewControllers);

/*@zep NS\NSWindow addTitlebarAccessoryViewController(int handle, int childViewController) -> void */
void ns_nswindow_add_titlebar_accessory_view_controller(zval *handle, zval *childViewController);

/*@zep NS\NSWindow insertTitlebarAccessoryViewControllerAtIndex(int handle, int childViewController, int index) -> void */
void ns_nswindow_insert_titlebar_accessory_view_controller_at_index(zval *handle, zval *childViewController, zval *index);

/*@zep NS\NSWindow removeTitlebarAccessoryViewControllerAtIndex(int handle, int index) -> void */
void ns_nswindow_remove_titlebar_accessory_view_controller_at_index(zval *handle, zval *index);

/*@zep NS\NSWindow representedURL(int handle) -> int */
zend_long ns_nswindow_represented_url(zval *handle);
/*@zep NS\NSWindow setRepresentedURL(int handle, int representedURL) -> void */
void ns_nswindow_set_represented_url(zval *handle, zval *representedURL);

/*@zep NS\NSWindow representedFilename(int handle) -> string */
void ns_nswindow_represented_filename(zval *return_value, zval *handle);
/*@zep NS\NSWindow setRepresentedFilename(int handle, string representedFilename) -> void */
void ns_nswindow_set_represented_filename(zval *handle, zval *representedFilename);

/*@zep NS\NSWindow setTitleWithRepresentedFilename(int handle, string filename) -> void */
void ns_nswindow_set_title_with_represented_filename(zval *handle, zval *filename);

/*@zep NS\NSWindow isExcludedFromWindowsMenu(int handle) -> bool */
zend_long ns_nswindow_is_excluded_from_windows_menu(zval *handle);
/*@zep NS\NSWindow setExcludedFromWindowsMenu(int handle, bool excludedFromWindowsMenu) -> void */
void ns_nswindow_set_excluded_from_windows_menu(zval *handle, zval *excludedFromWindowsMenu);

/*@zep NS\NSWindow contentView(int handle) -> int */
zend_long ns_nswindow_content_view(zval *handle);
/*@zep NS\NSWindow setContentView(int handle, int contentView) -> void */
void ns_nswindow_set_content_view(zval *handle, zval *contentView);

/*@zep NS\NSWindow delegate(int handle) -> int */
zend_long ns_nswindow_delegate(zval *handle);
/*@zep NS\NSWindow setDelegate(int handle, int delegate) -> void */
void ns_nswindow_set_delegate(zval *handle, zval *delegate);

/*@zep NS\NSWindow windowNumber(int handle) -> int */
zend_long ns_nswindow_window_number(zval *handle);

/*@zep NS\NSWindow styleMask(int handle) -> int */
zend_long ns_nswindow_style_mask(zval *handle);
/*@zep NS\NSWindow setStyleMask(int handle, int styleMask) -> void */
void ns_nswindow_set_style_mask(zval *handle, zval *styleMask);

/*@zep NS\NSWindow fieldEditorForObject(int handle, bool createFlag, int object) -> int */
zend_long ns_nswindow_field_editor_for_object(zval *handle, zval *createFlag, zval *object);

/*@zep NS\NSWindow endEditingFor(int handle, int object) -> void */
void ns_nswindow_end_editing_for(zval *handle, zval *object);

/*@zep NS\NSWindow constrainFrameRectToScreen(int handle, double x, double y, double width, double height, int screen) -> array */
void ns_nswindow_constrain_frame_rect_to_screen(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *screen);

/*@zep NS\NSWindow setFrameDisplay(int handle, double x, double y, double width, double height, bool flag) -> void */
void ns_nswindow_set_frame_display(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *flag);

/*@zep NS\NSWindow setContentSize(int handle, double width, double height) -> void */
void ns_nswindow_set_content_size(zval *handle, zval *width, zval *height);

/*@zep NS\NSWindow setFrameOrigin(int handle, double x, double y) -> void */
void ns_nswindow_set_frame_origin(zval *handle, zval *x, zval *y);

/*@zep NS\NSWindow setFrameTopLeftPoint(int handle, double x, double y) -> void */
void ns_nswindow_set_frame_top_left_point(zval *handle, zval *x, zval *y);

/*@zep NS\NSWindow cascadeTopLeftFromPoint(int handle, double x, double y) -> array */
void ns_nswindow_cascade_top_left_from_point(zval *return_value, zval *handle, zval *x, zval *y);

/*@zep NS\NSWindow cascadingReferenceFrame(int handle) -> array */
void ns_nswindow_cascading_reference_frame(zval *return_value, zval *handle);

/*@zep NS\NSWindow frame(int handle) -> array */
void ns_nswindow_frame(zval *return_value, zval *handle);

/*@zep NS\NSWindow animationResizeTime(int handle, double x, double y, double width, double height) -> double */
double ns_nswindow_animation_resize_time(zval *handle, zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSWindow setFrameDisplayAnimate(int handle, double x, double y, double width, double height, bool displayFlag, bool animateFlag) -> void */
void ns_nswindow_set_frame_display_animate(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *displayFlag, zval *animateFlag);

/*@zep NS\NSWindow inLiveResize(int handle) -> bool */
zend_long ns_nswindow_in_live_resize(zval *handle);

/*@zep NS\NSWindow resizeIncrements(int handle) -> array */
void ns_nswindow_resize_increments(zval *return_value, zval *handle);
/*@zep NS\NSWindow setResizeIncrements(int handle, double width, double height) -> void */
void ns_nswindow_set_resize_increments(zval *handle, zval *width, zval *height);

/*@zep NS\NSWindow aspectRatio(int handle) -> array */
void ns_nswindow_aspect_ratio(zval *return_value, zval *handle);
/*@zep NS\NSWindow setAspectRatio(int handle, double width, double height) -> void */
void ns_nswindow_set_aspect_ratio(zval *handle, zval *width, zval *height);

/*@zep NS\NSWindow contentResizeIncrements(int handle) -> array */
void ns_nswindow_content_resize_increments(zval *return_value, zval *handle);
/*@zep NS\NSWindow setContentResizeIncrements(int handle, double width, double height) -> void */
void ns_nswindow_set_content_resize_increments(zval *handle, zval *width, zval *height);

/*@zep NS\NSWindow contentAspectRatio(int handle) -> array */
void ns_nswindow_content_aspect_ratio(zval *return_value, zval *handle);
/*@zep NS\NSWindow setContentAspectRatio(int handle, double width, double height) -> void */
void ns_nswindow_set_content_aspect_ratio(zval *handle, zval *width, zval *height);

/*@zep NS\NSWindow viewsNeedDisplay(int handle) -> bool */
zend_long ns_nswindow_views_need_display(zval *handle);
/*@zep NS\NSWindow setViewsNeedDisplay(int handle, bool viewsNeedDisplay) -> void */
void ns_nswindow_set_views_need_display(zval *handle, zval *viewsNeedDisplay);

/*@zep NS\NSWindow displayIfNeeded(int handle) -> void */
void ns_nswindow_display_if_needed(zval *handle);

/*@zep NS\NSWindow display(int handle) -> void */
void ns_nswindow_display(zval *handle);

/*@zep NS\NSWindow preservesContentDuringLiveResize(int handle) -> bool */
zend_long ns_nswindow_preserves_content_during_live_resize(zval *handle);
/*@zep NS\NSWindow setPreservesContentDuringLiveResize(int handle, bool preservesContentDuringLiveResize) -> void */
void ns_nswindow_set_preserves_content_during_live_resize(zval *handle, zval *preservesContentDuringLiveResize);

/*@zep NS\NSWindow update(int handle) -> void */
void ns_nswindow_update(zval *handle);

/*@zep NS\NSWindow makeFirstResponder(int handle, int responder) -> bool */
zend_long ns_nswindow_make_first_responder(zval *handle, zval *responder);

/*@zep NS\NSWindow firstResponder(int handle) -> int */
zend_long ns_nswindow_first_responder(zval *handle);

/*@zep NS\NSWindow resizeFlags(int handle) -> int */
zend_long ns_nswindow_resize_flags(zval *handle);

/*@zep NS\NSWindow close(int handle) -> void */
void ns_nswindow_close(zval *handle);

/*@zep NS\NSWindow isReleasedWhenClosed(int handle) -> bool */
zend_long ns_nswindow_is_released_when_closed(zval *handle);
/*@zep NS\NSWindow setReleasedWhenClosed(int handle, bool releasedWhenClosed) -> void */
void ns_nswindow_set_released_when_closed(zval *handle, zval *releasedWhenClosed);

/*@zep NS\NSWindow miniaturize(int handle, int sender) -> void */
void ns_nswindow_miniaturize(zval *handle, zval *sender);

/*@zep NS\NSWindow deminiaturize(int handle, int sender) -> void */
void ns_nswindow_deminiaturize(zval *handle, zval *sender);

/*@zep NS\NSWindow isZoomed(int handle) -> bool */
zend_long ns_nswindow_is_zoomed(zval *handle);

/*@zep NS\NSWindow zoom(int handle, int sender) -> void */
void ns_nswindow_zoom(zval *handle, zval *sender);

/*@zep NS\NSWindow isMiniaturized(int handle) -> bool */
zend_long ns_nswindow_is_miniaturized(zval *handle);

/*@zep NS\NSWindow tryToPerformWith(int handle, string action, int object) -> bool */
zend_long ns_nswindow_try_to_perform_with(zval *handle, zval *action, zval *object);

/*@zep NS\NSWindow validRequestorForSendTypeReturnType(int handle, var sendType, var returnType) -> int */
zend_long ns_nswindow_valid_requestor_for_send_type_return_type(zval *handle, zval *sendType, zval *returnType);

/*@zep NS\NSWindow backgroundColor(int handle) -> int */
zend_long ns_nswindow_background_color(zval *handle);
/*@zep NS\NSWindow setBackgroundColor(int handle, int backgroundColor) -> void */
void ns_nswindow_set_background_color(zval *handle, zval *backgroundColor);

/*@zep NS\NSWindow setContentBorderThicknessForEdge(int handle, double thickness, int edge) -> void */
void ns_nswindow_set_content_border_thickness_for_edge(zval *handle, zval *thickness, zval *edge);

/*@zep NS\NSWindow contentBorderThicknessForEdge(int handle, int edge) -> double */
double ns_nswindow_content_border_thickness_for_edge(zval *handle, zval *edge);

/*@zep NS\NSWindow setAutorecalculatesContentBorderThicknessForEdge(int handle, bool flag, int edge) -> void */
void ns_nswindow_set_autorecalculates_content_border_thickness_for_edge(zval *handle, zval *flag, zval *edge);

/*@zep NS\NSWindow autorecalculatesContentBorderThicknessForEdge(int handle, int edge) -> bool */
zend_long ns_nswindow_autorecalculates_content_border_thickness_for_edge(zval *handle, zval *edge);

/*@zep NS\NSWindow isMovable(int handle) -> bool */
zend_long ns_nswindow_is_movable(zval *handle);
/*@zep NS\NSWindow setMovable(int handle, bool movable) -> void */
void ns_nswindow_set_movable(zval *handle, zval *movable);

/*@zep NS\NSWindow isMovableByWindowBackground(int handle) -> bool */
zend_long ns_nswindow_is_movable_by_window_background(zval *handle);
/*@zep NS\NSWindow setMovableByWindowBackground(int handle, bool movableByWindowBackground) -> void */
void ns_nswindow_set_movable_by_window_background(zval *handle, zval *movableByWindowBackground);

/*@zep NS\NSWindow hidesOnDeactivate(int handle) -> bool */
zend_long ns_nswindow_hides_on_deactivate(zval *handle);
/*@zep NS\NSWindow setHidesOnDeactivate(int handle, bool hidesOnDeactivate) -> void */
void ns_nswindow_set_hides_on_deactivate(zval *handle, zval *hidesOnDeactivate);

/*@zep NS\NSWindow canHide(int handle) -> bool */
zend_long ns_nswindow_can_hide(zval *handle);
/*@zep NS\NSWindow setCanHide(int handle, bool canHide) -> void */
void ns_nswindow_set_can_hide(zval *handle, zval *canHide);

/*@zep NS\NSWindow center(int handle) -> void */
void ns_nswindow_center(zval *handle);

/*@zep NS\NSWindow makeKeyAndOrderFront(int handle, int sender) -> void */
void ns_nswindow_make_key_and_order_front(zval *handle, zval *sender);

/*@zep NS\NSWindow orderFront(int handle, int sender) -> void */
void ns_nswindow_order_front(zval *handle, zval *sender);

/*@zep NS\NSWindow orderBack(int handle, int sender) -> void */
void ns_nswindow_order_back(zval *handle, zval *sender);

/*@zep NS\NSWindow orderOut(int handle, int sender) -> void */
void ns_nswindow_order_out(zval *handle, zval *sender);

/*@zep NS\NSWindow orderWindowRelativeTo(int handle, int place, int otherWin) -> void */
void ns_nswindow_order_window_relative_to(zval *handle, zval *place, zval *otherWin);

/*@zep NS\NSWindow orderFrontRegardless(int handle) -> void */
void ns_nswindow_order_front_regardless(zval *handle);

/*@zep NS\NSWindow miniwindowImage(int handle) -> int */
zend_long ns_nswindow_miniwindow_image(zval *handle);
/*@zep NS\NSWindow setMiniwindowImage(int handle, int miniwindowImage) -> void */
void ns_nswindow_set_miniwindow_image(zval *handle, zval *miniwindowImage);

/*@zep NS\NSWindow miniwindowTitle(int handle) -> var */
void ns_nswindow_miniwindow_title(zval *return_value, zval *handle);
/*@zep NS\NSWindow setMiniwindowTitle(int handle, var miniwindowTitle) -> void */
void ns_nswindow_set_miniwindow_title(zval *handle, zval *miniwindowTitle);

/*@zep NS\NSWindow dockTile(int handle) -> int */
zend_long ns_nswindow_dock_tile(zval *handle);

/*@zep NS\NSWindow isDocumentEdited(int handle) -> bool */
zend_long ns_nswindow_is_document_edited(zval *handle);
/*@zep NS\NSWindow setDocumentEdited(int handle, bool documentEdited) -> void */
void ns_nswindow_set_document_edited(zval *handle, zval *documentEdited);

/*@zep NS\NSWindow isVisible(int handle) -> bool */
zend_long ns_nswindow_is_visible(zval *handle);

/*@zep NS\NSWindow isKeyWindow(int handle) -> bool */
zend_long ns_nswindow_is_key_window(zval *handle);

/*@zep NS\NSWindow isMainWindow(int handle) -> bool */
zend_long ns_nswindow_is_main_window(zval *handle);

/*@zep NS\NSWindow canBecomeKeyWindow(int handle) -> bool */
zend_long ns_nswindow_can_become_key_window(zval *handle);

/*@zep NS\NSWindow canBecomeMainWindow(int handle) -> bool */
zend_long ns_nswindow_can_become_main_window(zval *handle);

/*@zep NS\NSWindow makeKeyWindow(int handle) -> void */
void ns_nswindow_make_key_window(zval *handle);

/*@zep NS\NSWindow makeMainWindow(int handle) -> void */
void ns_nswindow_make_main_window(zval *handle);

/*@zep NS\NSWindow becomeKeyWindow(int handle) -> void */
void ns_nswindow_become_key_window(zval *handle);

/*@zep NS\NSWindow resignKeyWindow(int handle) -> void */
void ns_nswindow_resign_key_window(zval *handle);

/*@zep NS\NSWindow becomeMainWindow(int handle) -> void */
void ns_nswindow_become_main_window(zval *handle);

/*@zep NS\NSWindow resignMainWindow(int handle) -> void */
void ns_nswindow_resign_main_window(zval *handle);

/*@zep NS\NSWindow worksWhenModal(int handle) -> bool */
zend_long ns_nswindow_works_when_modal(zval *handle);

/*@zep NS\NSWindow preventsApplicationTerminationWhenModal(int handle) -> bool */
zend_long ns_nswindow_prevents_application_termination_when_modal(zval *handle);
/*@zep NS\NSWindow setPreventsApplicationTerminationWhenModal(int handle, bool preventsApplicationTerminationWhenModal) -> void */
void ns_nswindow_set_prevents_application_termination_when_modal(zval *handle, zval *preventsApplicationTerminationWhenModal);

/*@zep NS\NSWindow convertRectToScreen(int handle, double x, double y, double width, double height) -> array */
void ns_nswindow_convert_rect_to_screen(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSWindow convertRectFromScreen(int handle, double x, double y, double width, double height) -> array */
void ns_nswindow_convert_rect_from_screen(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSWindow convertPointToScreen(int handle, double x, double y) -> array */
void ns_nswindow_convert_point_to_screen(zval *return_value, zval *handle, zval *x, zval *y);

/*@zep NS\NSWindow convertPointFromScreen(int handle, double x, double y) -> array */
void ns_nswindow_convert_point_from_screen(zval *return_value, zval *handle, zval *x, zval *y);

/*@zep NS\NSWindow convertRectToBacking(int handle, double x, double y, double width, double height) -> array */
void ns_nswindow_convert_rect_to_backing(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSWindow convertRectFromBacking(int handle, double x, double y, double width, double height) -> array */
void ns_nswindow_convert_rect_from_backing(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSWindow convertPointToBacking(int handle, double x, double y) -> array */
void ns_nswindow_convert_point_to_backing(zval *return_value, zval *handle, zval *x, zval *y);

/*@zep NS\NSWindow convertPointFromBacking(int handle, double x, double y) -> array */
void ns_nswindow_convert_point_from_backing(zval *return_value, zval *handle, zval *x, zval *y);

/*@zep NS\NSWindow backingAlignedRectOptions(int handle, double x, double y, double width, double height, int options) -> array */
void ns_nswindow_backing_aligned_rect_options(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *options);

/*@zep NS\NSWindow backingScaleFactor(int handle) -> double */
double ns_nswindow_backing_scale_factor(zval *handle);

/*@zep NS\NSWindow performClose(int handle, int sender) -> void */
void ns_nswindow_perform_close(zval *handle, zval *sender);

/*@zep NS\NSWindow performMiniaturize(int handle, int sender) -> void */
void ns_nswindow_perform_miniaturize(zval *handle, zval *sender);

/*@zep NS\NSWindow performZoom(int handle, int sender) -> void */
void ns_nswindow_perform_zoom(zval *handle, zval *sender);

/*@reserved NS\NSWindow - (NSData *)dataWithEPSInsideRect:(NSRect)rect; */

/*@reserved NS\NSWindow - (NSData *)dataWithPDFInsideRect:(NSRect)rect; */

/*@zep NS\NSWindow print(int handle, int sender) -> void */
void ns_nswindow_print(zval *handle, zval *sender);

/*@zep NS\NSWindow allowsToolTipsWhenApplicationIsInactive(int handle) -> bool */
zend_long ns_nswindow_allows_tool_tips_when_application_is_inactive(zval *handle);
/*@zep NS\NSWindow setAllowsToolTipsWhenApplicationIsInactive(int handle, bool allowsToolTipsWhenApplicationIsInactive) -> void */
void ns_nswindow_set_allows_tool_tips_when_application_is_inactive(zval *handle, zval *allowsToolTipsWhenApplicationIsInactive);

/*@zep NS\NSWindow backingType(int handle) -> int */
zend_long ns_nswindow_backing_type(zval *handle);
/*@zep NS\NSWindow setBackingType(int handle, int backingType) -> void */
void ns_nswindow_set_backing_type(zval *handle, zval *backingType);

/*@zep NS\NSWindow level(int handle) -> int */
zend_long ns_nswindow_level(zval *handle);
/*@zep NS\NSWindow setLevel(int handle, int level) -> void */
void ns_nswindow_set_level(zval *handle, zval *level);

/*@zep NS\NSWindow depthLimit(int handle) -> int */
zend_long ns_nswindow_depth_limit(zval *handle);
/*@zep NS\NSWindow setDepthLimit(int handle, int depthLimit) -> void */
void ns_nswindow_set_depth_limit(zval *handle, zval *depthLimit);

/*@zep NS\NSWindow setDynamicDepthLimit(int handle, bool flag) -> void */
void ns_nswindow_set_dynamic_depth_limit(zval *handle, zval *flag);

/*@zep NS\NSWindow hasDynamicDepthLimit(int handle) -> bool */
zend_long ns_nswindow_has_dynamic_depth_limit(zval *handle);

/*@zep NS\NSWindow screen(int handle) -> int */
zend_long ns_nswindow_screen(zval *handle);

/*@zep NS\NSWindow deepestScreen(int handle) -> int */
zend_long ns_nswindow_deepest_screen(zval *handle);

/*@zep NS\NSWindow hasShadow(int handle) -> bool */
zend_long ns_nswindow_has_shadow(zval *handle);
/*@zep NS\NSWindow setHasShadow(int handle, bool hasShadow) -> void */
void ns_nswindow_set_has_shadow(zval *handle, zval *hasShadow);

/*@zep NS\NSWindow invalidateShadow(int handle) -> void */
void ns_nswindow_invalidate_shadow(zval *handle);

/*@zep NS\NSWindow alphaValue(int handle) -> double */
double ns_nswindow_alpha_value(zval *handle);
/*@zep NS\NSWindow setAlphaValue(int handle, double alphaValue) -> void */
void ns_nswindow_set_alpha_value(zval *handle, zval *alphaValue);

/*@zep NS\NSWindow isOpaque(int handle) -> bool */
zend_long ns_nswindow_is_opaque(zval *handle);
/*@zep NS\NSWindow setOpaque(int handle, bool opaque) -> void */
void ns_nswindow_set_opaque(zval *handle, zval *opaque);

/*@zep NS\NSWindow sharingType(int handle) -> int */
zend_long ns_nswindow_sharing_type(zval *handle);
/*@zep NS\NSWindow setSharingType(int handle, int sharingType) -> void */
void ns_nswindow_set_sharing_type(zval *handle, zval *sharingType);

/*@zep NS\NSWindow allowsConcurrentViewDrawing(int handle) -> bool */
zend_long ns_nswindow_allows_concurrent_view_drawing(zval *handle);
/*@zep NS\NSWindow setAllowsConcurrentViewDrawing(int handle, bool allowsConcurrentViewDrawing) -> void */
void ns_nswindow_set_allows_concurrent_view_drawing(zval *handle, zval *allowsConcurrentViewDrawing);

/*@zep NS\NSWindow displaysWhenScreenProfileChanges(int handle) -> bool */
zend_long ns_nswindow_displays_when_screen_profile_changes(zval *handle);
/*@zep NS\NSWindow setDisplaysWhenScreenProfileChanges(int handle, bool displaysWhenScreenProfileChanges) -> void */
void ns_nswindow_set_displays_when_screen_profile_changes(zval *handle, zval *displaysWhenScreenProfileChanges);

/*@zep NS\NSWindow canBecomeVisibleWithoutLogin(int handle) -> bool */
zend_long ns_nswindow_can_become_visible_without_login(zval *handle);
/*@zep NS\NSWindow setCanBecomeVisibleWithoutLogin(int handle, bool canBecomeVisibleWithoutLogin) -> void */
void ns_nswindow_set_can_become_visible_without_login(zval *handle, zval *canBecomeVisibleWithoutLogin);

/*@zep NS\NSWindow collectionBehavior(int handle) -> int */
zend_long ns_nswindow_collection_behavior(zval *handle);
/*@zep NS\NSWindow setCollectionBehavior(int handle, int collectionBehavior) -> void */
void ns_nswindow_set_collection_behavior(zval *handle, zval *collectionBehavior);

/*@zep NS\NSWindow animationBehavior(int handle) -> int */
zend_long ns_nswindow_animation_behavior(zval *handle);
/*@zep NS\NSWindow setAnimationBehavior(int handle, int animationBehavior) -> void */
void ns_nswindow_set_animation_behavior(zval *handle, zval *animationBehavior);

/*@zep NS\NSWindow isOnActiveSpace(int handle) -> bool */
zend_long ns_nswindow_is_on_active_space(zval *handle);

/*@zep NS\NSWindow toggleFullScreen(int handle, int sender) -> void */
void ns_nswindow_toggle_full_screen(zval *handle, zval *sender);

/*@zep NS\NSWindow stringWithSavedFrame(int handle) -> string */
void ns_nswindow_string_with_saved_frame(zval *return_value, zval *handle);

/*@zep NS\NSWindow setFrameFromString(int handle, string string) -> void */
void ns_nswindow_set_frame_from_string(zval *handle, zval *string);

/*@zep NS\NSWindow saveFrameUsingName(int handle, string name) -> void */
void ns_nswindow_save_frame_using_name(zval *handle, zval *name);

/*@zep NS\NSWindow setFrameUsingNameForce(int handle, string name, bool force) -> bool */
zend_long ns_nswindow_set_frame_using_name_force(zval *handle, zval *name, zval *force);

/*@zep NS\NSWindow setFrameUsingName(int handle, string name) -> bool */
zend_long ns_nswindow_set_frame_using_name(zval *handle, zval *name);

/*@zep NS\NSWindow setFrameAutosaveName(int handle, string name) -> bool */
zend_long ns_nswindow_set_frame_autosave_name(zval *handle, zval *name);

/*@zep NS\NSWindow frameAutosaveName(int handle) -> string */
void ns_nswindow_frame_autosave_name(zval *return_value, zval *handle);

/*@zep NS\NSWindow removeFrameUsingName(string name) -> void */
void ns_nswindow_remove_frame_using_name(zval *name);

/*@zep NS\NSWindow minSize(int handle) -> array */
void ns_nswindow_min_size(zval *return_value, zval *handle);
/*@zep NS\NSWindow setMinSize(int handle, double width, double height) -> void */
void ns_nswindow_set_min_size(zval *handle, zval *width, zval *height);

/*@zep NS\NSWindow maxSize(int handle) -> array */
void ns_nswindow_max_size(zval *return_value, zval *handle);
/*@zep NS\NSWindow setMaxSize(int handle, double width, double height) -> void */
void ns_nswindow_set_max_size(zval *handle, zval *width, zval *height);

/*@zep NS\NSWindow contentMinSize(int handle) -> array */
void ns_nswindow_content_min_size(zval *return_value, zval *handle);
/*@zep NS\NSWindow setContentMinSize(int handle, double width, double height) -> void */
void ns_nswindow_set_content_min_size(zval *handle, zval *width, zval *height);

/*@zep NS\NSWindow contentMaxSize(int handle) -> array */
void ns_nswindow_content_max_size(zval *return_value, zval *handle);
/*@zep NS\NSWindow setContentMaxSize(int handle, double width, double height) -> void */
void ns_nswindow_set_content_max_size(zval *handle, zval *width, zval *height);

/*@zep NS\NSWindow minFullScreenContentSize(int handle) -> array */
void ns_nswindow_min_full_screen_content_size(zval *return_value, zval *handle);
/*@zep NS\NSWindow setMinFullScreenContentSize(int handle, double width, double height) -> void */
void ns_nswindow_set_min_full_screen_content_size(zval *handle, zval *width, zval *height);

/*@zep NS\NSWindow maxFullScreenContentSize(int handle) -> array */
void ns_nswindow_max_full_screen_content_size(zval *return_value, zval *handle);
/*@zep NS\NSWindow setMaxFullScreenContentSize(int handle, double width, double height) -> void */
void ns_nswindow_set_max_full_screen_content_size(zval *handle, zval *width, zval *height);

/*@zep NS\NSWindow deviceDescription(int handle) -> int */
zend_long ns_nswindow_device_description(zval *handle);

/*@zep NS\NSWindow windowController(int handle) -> int */
zend_long ns_nswindow_window_controller(zval *handle);
/*@zep NS\NSWindow setWindowController(int handle, int windowController) -> void */
void ns_nswindow_set_window_controller(zval *handle, zval *windowController);

/*@reserved NS\NSWindow - (void)beginSheet:(NSWindow *)sheetWindow completionHandler:(void (^ _Nullable)(NSModalResponse returnCode))handler API_AVAILABLE(macos(10.9)); */

/*@reserved NS\NSWindow - (void)beginCriticalSheet:(NSWindow *)sheetWindow completionHandler:(void (^ _Nullable)(NSModalResponse returnCode))handler API_AVAILABLE(macos(10.9)); */

/*@zep NS\NSWindow endSheet(int handle, int sheetWindow) -> void */
void ns_nswindow_end_sheet(zval *handle, zval *sheetWindow);

/*@zep NS\NSWindow endSheetReturnCode(int handle, int sheetWindow, int returnCode) -> void */
void ns_nswindow_end_sheet_return_code(zval *handle, zval *sheetWindow, zval *returnCode);

/*@zep NS\NSWindow sheets(int handle) -> array */
void ns_nswindow_sheets(zval *return_value, zval *handle);

/*@zep NS\NSWindow attachedSheet(int handle) -> int */
zend_long ns_nswindow_attached_sheet(zval *handle);

/*@zep NS\NSWindow isSheet(int handle) -> bool */
zend_long ns_nswindow_is_sheet(zval *handle);

/*@zep NS\NSWindow sheetParent(int handle) -> int */
zend_long ns_nswindow_sheet_parent(zval *handle);

/*@zep NS\NSWindow standardWindowButtonForStyleMask(int b, int styleMask) -> int */
zend_long ns_nswindow_standard_window_button_for_style_mask(zval *b, zval *styleMask);

/*@zep NS\NSWindow standardWindowButton(int handle, int b) -> int */
zend_long ns_nswindow_standard_window_button(zval *handle, zval *b);

/*@zep NS\NSWindow addChildWindowOrdered(int handle, int childWin, int place) -> void */
void ns_nswindow_add_child_window_ordered(zval *handle, zval *childWin, zval *place);

/*@zep NS\NSWindow removeChildWindow(int handle, int childWin) -> void */
void ns_nswindow_remove_child_window(zval *handle, zval *childWin);

/*@zep NS\NSWindow childWindows(int handle) -> array */
void ns_nswindow_child_windows(zval *return_value, zval *handle);

/*@zep NS\NSWindow parentWindow(int handle) -> int */
zend_long ns_nswindow_parent_window(zval *handle);
/*@zep NS\NSWindow setParentWindow(int handle, int parentWindow) -> void */
void ns_nswindow_set_parent_window(zval *handle, zval *parentWindow);

/*@zep NS\NSWindow appearanceSource(int handle) -> int */
zend_long ns_nswindow_appearance_source(zval *handle);
/*@zep NS\NSWindow setAppearanceSource(int handle, int appearanceSource) -> void */
void ns_nswindow_set_appearance_source(zval *handle, zval *appearanceSource);

/*@zep NS\NSWindow colorSpace(int handle) -> int */
zend_long ns_nswindow_color_space(zval *handle);
/*@zep NS\NSWindow setColorSpace(int handle, int colorSpace) -> void */
void ns_nswindow_set_color_space(zval *handle, zval *colorSpace);

/*@zep NS\NSWindow canRepresentDisplayGamut(int handle, int displayGamut) -> bool */
zend_long ns_nswindow_can_represent_display_gamut(zval *handle, zval *displayGamut);

/*@zep NS\NSWindow windowNumbersWithOptions(int options) -> array */
void ns_nswindow_window_numbers_with_options(zval *return_value, zval *options);

/*@zep NS\NSWindow windowNumberAtPointBelowWindowWithWindowNumber(double x, double y, int windowNumber) -> int */
zend_long ns_nswindow_window_number_at_point_below_window_with_window_number(zval *x, zval *y, zval *windowNumber);

/*@zep NS\NSWindow occlusionState(int handle) -> int */
zend_long ns_nswindow_occlusion_state(zval *handle);

/*@zep NS\NSWindow titlebarSeparatorStyle(int handle) -> int */
zend_long ns_nswindow_titlebar_separator_style(zval *handle);
/*@zep NS\NSWindow setTitlebarSeparatorStyle(int handle, int titlebarSeparatorStyle) -> void */
void ns_nswindow_set_titlebar_separator_style(zval *handle, zval *titlebarSeparatorStyle);

/*@zep NS\NSWindow contentViewController(int handle) -> int */
zend_long ns_nswindow_content_view_controller(zval *handle);
/*@zep NS\NSWindow setContentViewController(int handle, int contentViewController) -> void */
void ns_nswindow_set_content_view_controller(zval *handle, zval *contentViewController);

/*@zep NS\NSWindow windowWithContentViewController(int contentViewController) -> int */
zend_long ns_nswindow_window_with_content_view_controller(zval *contentViewController);

/*@zep NS\NSWindow performWindowDragWithEvent(int handle, int event) -> void */
void ns_nswindow_perform_window_drag_with_event(zval *handle, zval *event);

/*@zep NS\NSWindow initialFirstResponder(int handle) -> int */
zend_long ns_nswindow_initial_first_responder(zval *handle);
/*@zep NS\NSWindow setInitialFirstResponder(int handle, int initialFirstResponder) -> void */
void ns_nswindow_set_initial_first_responder(zval *handle, zval *initialFirstResponder);

/*@zep NS\NSWindow selectNextKeyView(int handle, int sender) -> void */
void ns_nswindow_select_next_key_view(zval *handle, zval *sender);

/*@zep NS\NSWindow selectPreviousKeyView(int handle, int sender) -> void */
void ns_nswindow_select_previous_key_view(zval *handle, zval *sender);

/*@zep NS\NSWindow selectKeyViewFollowingView(int handle, int view) -> void */
void ns_nswindow_select_key_view_following_view(zval *handle, zval *view);

/*@zep NS\NSWindow selectKeyViewPrecedingView(int handle, int view) -> void */
void ns_nswindow_select_key_view_preceding_view(zval *handle, zval *view);

/*@zep NS\NSWindow keyViewSelectionDirection(int handle) -> int */
zend_long ns_nswindow_key_view_selection_direction(zval *handle);

/*@zep NS\NSWindow defaultButtonCell(int handle) -> int */
zend_long ns_nswindow_default_button_cell(zval *handle);
/*@zep NS\NSWindow setDefaultButtonCell(int handle, int defaultButtonCell) -> void */
void ns_nswindow_set_default_button_cell(zval *handle, zval *defaultButtonCell);

/*@zep NS\NSWindow disableKeyEquivalentForDefaultButtonCell(int handle) -> void */
void ns_nswindow_disable_key_equivalent_for_default_button_cell(zval *handle);

/*@zep NS\NSWindow enableKeyEquivalentForDefaultButtonCell(int handle) -> void */
void ns_nswindow_enable_key_equivalent_for_default_button_cell(zval *handle);

/*@zep NS\NSWindow autorecalculatesKeyViewLoop(int handle) -> bool */
zend_long ns_nswindow_autorecalculates_key_view_loop(zval *handle);
/*@zep NS\NSWindow setAutorecalculatesKeyViewLoop(int handle, bool autorecalculatesKeyViewLoop) -> void */
void ns_nswindow_set_autorecalculates_key_view_loop(zval *handle, zval *autorecalculatesKeyViewLoop);

/*@zep NS\NSWindow recalculateKeyViewLoop(int handle) -> void */
void ns_nswindow_recalculate_key_view_loop(zval *handle);

/*@zep NS\NSWindow toolbar(int handle) -> int */
zend_long ns_nswindow_toolbar(zval *handle);
/*@zep NS\NSWindow setToolbar(int handle, int toolbar) -> void */
void ns_nswindow_set_toolbar(zval *handle, zval *toolbar);

/*@zep NS\NSWindow toggleToolbarShown(int handle, int sender) -> void */
void ns_nswindow_toggle_toolbar_shown(zval *handle, zval *sender);

/*@zep NS\NSWindow runToolbarCustomizationPalette(int handle, int sender) -> void */
void ns_nswindow_run_toolbar_customization_palette(zval *handle, zval *sender);

/*@reserved NS\NSWindow @property BOOL showsToolbarButton API_DEPRECATED("This property has no effect", macos(10.0, API_TO_BE_DEPRECATED)); — getter */
/*@reserved NS\NSWindow @property BOOL showsToolbarButton API_DEPRECATED("This property has no effect", macos(10.0, API_TO_BE_DEPRECATED)); — setter */

/*@zep NS\NSWindow allowsAutomaticWindowTabbing() -> bool */
zend_long ns_nswindow_allows_automatic_window_tabbing(void);
/*@zep NS\NSWindow setAllowsAutomaticWindowTabbing(bool allowsAutomaticWindowTabbing) -> void */
void ns_nswindow_set_allows_automatic_window_tabbing(zval *allowsAutomaticWindowTabbing);

/*@zep NS\NSWindow userTabbingPreference() -> int */
zend_long ns_nswindow_user_tabbing_preference(void);

/*@zep NS\NSWindow tabbingMode(int handle) -> int */
zend_long ns_nswindow_tabbing_mode(zval *handle);
/*@zep NS\NSWindow setTabbingMode(int handle, int tabbingMode) -> void */
void ns_nswindow_set_tabbing_mode(zval *handle, zval *tabbingMode);

/*@zep NS\NSWindow tabbingIdentifier(int handle) -> string */
void ns_nswindow_tabbing_identifier(zval *return_value, zval *handle);
/*@zep NS\NSWindow setTabbingIdentifier(int handle, string tabbingIdentifier) -> void */
void ns_nswindow_set_tabbing_identifier(zval *handle, zval *tabbingIdentifier);

/*@zep NS\NSWindow selectNextTab(int handle, int sender) -> void */
void ns_nswindow_select_next_tab(zval *handle, zval *sender);

/*@zep NS\NSWindow selectPreviousTab(int handle, int sender) -> void */
void ns_nswindow_select_previous_tab(zval *handle, zval *sender);

/*@zep NS\NSWindow moveTabToNewWindow(int handle, int sender) -> void */
void ns_nswindow_move_tab_to_new_window(zval *handle, zval *sender);

/*@zep NS\NSWindow mergeAllWindows(int handle, int sender) -> void */
void ns_nswindow_merge_all_windows(zval *handle, zval *sender);

/*@zep NS\NSWindow toggleTabBar(int handle, int sender) -> void */
void ns_nswindow_toggle_tab_bar(zval *handle, zval *sender);

/*@zep NS\NSWindow toggleTabOverview(int handle, int sender) -> void */
void ns_nswindow_toggle_tab_overview(zval *handle, zval *sender);

/*@zep NS\NSWindow tabbedWindows(int handle) -> array */
void ns_nswindow_tabbed_windows(zval *return_value, zval *handle);

/*@zep NS\NSWindow addTabbedWindowOrdered(int handle, int window, int ordered) -> void */
void ns_nswindow_add_tabbed_window_ordered(zval *handle, zval *window, zval *ordered);

/*@zep NS\NSWindow tab(int handle) -> int */
zend_long ns_nswindow_tab(zval *handle);

/*@zep NS\NSWindow tabGroup(int handle) -> int */
zend_long ns_nswindow_tab_group(zval *handle);

/*@reserved NS\NSWindow - (void)transferWindowSharingToWindow:(NSWindow *)window completionHandler:(void(^)(NSError * _Nullable error))completionHandler API_AVAILABLE(macos(13.3)); */

/*@zep NS\NSWindow hasActiveWindowSharingSession(int handle) -> bool */
zend_long ns_nswindow_has_active_window_sharing_session(zval *handle);

/*@reserved NS\NSWindow - (void)requestSharingOfWindow:(NSWindow *)window completionHandler:(void (^)(NSError * _Nullable error))completionHandler NS_SWIFT_NAME(requestSharingOfWindow(_:completionHandler:)) API_AVAILABLE(macos(15.0)); */

/*@reserved NS\NSWindow - (void)requestSharingOfWindowUsingPreview:(NSImage *)image title:(NSString *)title completionHandler:(void (^)(NSError * _Nullable error))completionHandler NS_SWIFT_NAME(requestSharingOfWindow(usingPreview:title:completionHandler:)) API_AVAILABLE(macos(15.0)); */

/*@zep NS\NSWindow windowTitlebarLayoutDirection(int handle) -> int */
zend_long ns_nswindow_window_titlebar_layout_direction(zval *handle);

/*@reserved NS\NSWindow - (void)trackEventsMatchingMask:(NSEventMask)mask timeout:(NSTimeInterval)timeout mode:(NSRunLoopMode)mode handler:(void (NS_NOESCAPE ^)(NSEvent *_Nullable event, BOOL *stop))trackingHandler API_AVAILABLE(macos(10.10)); */

/*@zep NS\NSWindow nextEventMatchingMask(int handle, int mask) -> int */
zend_long ns_nswindow_next_event_matching_mask(zval *handle, zval *mask);

/*@zep NS\NSWindow nextEventMatchingMaskUntilDateInModeDequeue(int handle, int mask, int expiration, string mode, bool deqFlag) -> int */
zend_long ns_nswindow_next_event_matching_mask_until_date_in_mode_dequeue(zval *handle, zval *mask, zval *expiration, zval *mode, zval *deqFlag);

/*@zep NS\NSWindow discardEventsMatchingMaskBeforeEvent(int handle, int mask, int lastEvent) -> void */
void ns_nswindow_discard_events_matching_mask_before_event(zval *handle, zval *mask, zval *lastEvent);

/*@zep NS\NSWindow postEventAtStart(int handle, int event, bool flag) -> void */
void ns_nswindow_post_event_at_start(zval *handle, zval *event, zval *flag);

/*@zep NS\NSWindow sendEvent(int handle, int event) -> void */
void ns_nswindow_send_event(zval *handle, zval *event);

/*@zep NS\NSWindow currentEvent(int handle) -> int */
zend_long ns_nswindow_current_event(zval *handle);

/*@zep NS\NSWindow acceptsMouseMovedEvents(int handle) -> bool */
zend_long ns_nswindow_accepts_mouse_moved_events(zval *handle);
/*@zep NS\NSWindow setAcceptsMouseMovedEvents(int handle, bool acceptsMouseMovedEvents) -> void */
void ns_nswindow_set_accepts_mouse_moved_events(zval *handle, zval *acceptsMouseMovedEvents);

/*@zep NS\NSWindow ignoresMouseEvents(int handle) -> bool */
zend_long ns_nswindow_ignores_mouse_events(zval *handle);
/*@zep NS\NSWindow setIgnoresMouseEvents(int handle, bool ignoresMouseEvents) -> void */
void ns_nswindow_set_ignores_mouse_events(zval *handle, zval *ignoresMouseEvents);

/*@zep NS\NSWindow mouseLocationOutsideOfEventStream(int handle) -> array */
void ns_nswindow_mouse_location_outside_of_event_stream(zval *return_value, zval *handle);

/*@zep NS\NSWindow disableCursorRects(int handle) -> void */
void ns_nswindow_disable_cursor_rects(zval *handle);

/*@zep NS\NSWindow enableCursorRects(int handle) -> void */
void ns_nswindow_enable_cursor_rects(zval *handle);

/*@zep NS\NSWindow discardCursorRects(int handle) -> void */
void ns_nswindow_discard_cursor_rects(zval *handle);

/*@zep NS\NSWindow areCursorRectsEnabled(int handle) -> bool */
zend_long ns_nswindow_are_cursor_rects_enabled(zval *handle);

/*@zep NS\NSWindow invalidateCursorRectsForView(int handle, int view) -> void */
void ns_nswindow_invalidate_cursor_rects_for_view(zval *handle, zval *view);

/*@zep NS\NSWindow resetCursorRects(int handle) -> void */
void ns_nswindow_reset_cursor_rects(zval *handle);

/*@zep NS\NSWindow beginDraggingSessionWithItemsEventSource(int handle, array items, int event, int source) -> int */
zend_long ns_nswindow_begin_dragging_session_with_items_event_source(zval *handle, zval *items, zval *event, zval *source);

/*@reserved NS\NSWindow - (void)dragImage:(NSImage *)image at:(NSPoint)baseLocation offset:(NSSize)initialOffset event:(NSEvent *)event pasteboard:(NSPasteboard *)pboard source:(id)sourceObj slideBack:(BOOL)slideFlag API_DEPRECATED("Use -[NSWindow beginDraggingSessionWithItems:event:source:] instead.", macos(10.0, API_TO_BE_DEPRECATED)); */

/*@zep NS\NSWindow registerForDraggedTypes(int handle, array newTypes) -> void */
void ns_nswindow_register_for_dragged_types(zval *handle, zval *newTypes);

/*@zep NS\NSWindow unregisterDraggedTypes(int handle) -> void */
void ns_nswindow_unregister_dragged_types(zval *handle);

/*@zep NS\NSWindow displayLinkWithTargetSelector(int handle, int target, string selector) -> int */
zend_long ns_nswindow_display_link_with_target_selector(zval *handle, zval *target, zval *selector);

/*@reserved NS\NSWindow - (void)cacheImageInRect:(NSRect)rect API_DEPRECATED("This method shouldn’t be used as it doesn’t work in all drawing situations; instead, a subview should be used that implements the desired drawing behavior", macos(10.0,10.13)); */

/*@reserved NS\NSWindow - (void)restoreCachedImage API_DEPRECATED("This method shouldn’t be used as it doesn’t work in all drawing situations; instead, a subview should be used that implements the desired drawing behavior", macos(10.0,10.13)); */

/*@reserved NS\NSWindow - (void)discardCachedImage API_DEPRECATED("This method shouldn’t be used as it doesn’t work in all drawing situations; instead, a subview should be used that implements the desired drawing behavior", macos(10.0,10.13)); */

/*@reserved NS\NSWindow + (void)menuChanged:(NSMenu *)menu API_DEPRECATED("This method does not do anything and should not be called.", macos(10.0,10.11)); */

/*@reserved NS\NSWindow - (NSInteger)gState API_DEPRECATED("This method is unused and should not be called.", macos(10.0,10.10)); */

/*@reserved NS\NSWindow - (NSPoint)convertBaseToScreen:(NSPoint)point API_DEPRECATED("Use -convertRectToScreen: or -convertPointToScreen: instead", macos(10.0,10.7)); */

/*@reserved NS\NSWindow - (NSPoint)convertScreenToBase:(NSPoint)point API_DEPRECATED("Use -convertRectFromScreen or -convertPointFromScreen: instead", macos(10.0,10.7)); */

/*@reserved NS\NSWindow - (CGFloat)userSpaceScaleFactor API_DEPRECATED("Use -convertRectToBacking: and -backingScaleFactor instead", macos(10.4,10.7)); */

/*@reserved NS\NSWindow - (void)useOptimizedDrawing:(BOOL)flag API_DEPRECATED("This method does not do anything and should not be called.", macos(10.0,10.10)); */

/*@reserved NS\NSWindow - (BOOL)canStoreColor API_DEPRECATED("This method does not do anything and should not be called.", macos(10.0,10.10)); */

/*@reserved NS\NSWindow - (void)disableFlushWindow API_DEPRECATED("Use +[NSAnimationContext runAnimationGroup:completionHandler:] to perform atomic updates across runloop invocations.", macos(10.0,10.14)); */

/*@reserved NS\NSWindow - (void)enableFlushWindow API_DEPRECATED("Use +[NSAnimationContext runAnimationGroup:completionHandler:] to perform atomic updates across runloop invocations.", macos(10.0,10.14)); */

/*@reserved NS\NSWindow @property (getter=isFlushWindowDisabled, readonly) BOOL flushWindowDisabled API_DEPRECATED("Use +[NSAnimationContext runAnimationGroup:completionHandler:] to perform atomic updates across runloop invocations.", macos(10.0,10.14)); — getter */

/*@reserved NS\NSWindow - (void)flushWindow API_DEPRECATED("Allow AppKit's automatic deferred display mechanism to take care of flushing any graphics contexts as needed.", macos(10.0,10.14)); */

/*@reserved NS\NSWindow - (void)flushWindowIfNeeded API_DEPRECATED("Allow AppKit's automatic deferred display mechanism to take care of flushing any graphics contexts as needed.", macos(10.0,10.14)); */

/*@reserved NS\NSWindow @property (getter=isAutodisplay) BOOL autodisplay API_DEPRECATED("Use +[NSAnimationContext runAnimationGroup:completionHandler:] to temporarily prevent AppKit's automatic deferred display mechanism from drawing.", macos(10.0,10.14)); — getter */
/*@reserved NS\NSWindow @property (getter=isAutodisplay) BOOL autodisplay API_DEPRECATED("Use +[NSAnimationContext runAnimationGroup:completionHandler:] to temporarily prevent AppKit's automatic deferred display mechanism from drawing.", macos(10.0,10.14)); — setter */

/*@reserved NS\NSWindow @property (nullable, readonly, strong) NSGraphicsContext *graphicsContext API_DEPRECATED("Add instances of NSView to display content in a window.", macos(10.0,10.14)); — getter */

/*@reserved NS\NSWindow @property (getter=isOneShot) BOOL oneShot API_DEPRECATED("This property does not do anything and should not be used", macos(10.0,10.14)); — getter */
/*@reserved NS\NSWindow @property (getter=isOneShot) BOOL oneShot API_DEPRECATED("This property does not do anything and should not be used", macos(10.0,10.14)); — setter */

/*@reserved NS\NSWindow @property NSWindowBackingLocation preferredBackingLocation API_DEPRECATED("This property does not do anything and should not be used", macos(10.5,10.14)); — getter */
/*@reserved NS\NSWindow @property NSWindowBackingLocation preferredBackingLocation API_DEPRECATED("This property does not do anything and should not be used", macos(10.5,10.14)); — setter */

/*@reserved NS\NSWindow @property (readonly) NSWindowBackingLocation backingLocation API_DEPRECATED("This property does not do anything and should not be used", macos(10.5,10.14)); — getter */

/*@reserved NS\NSWindow @property BOOL showsResizeIndicator API_DEPRECATED("This property does not do anything and should not be used.", macos(10.0,15.0)); — getter */
/*@reserved NS\NSWindow @property BOOL showsResizeIndicator API_DEPRECATED("This property does not do anything and should not be used.", macos(10.0,15.0)); — setter */

/*@reserved NS\NSWindow - (nullable NSWindow *)initWithWindowRef:(void * WindowRef)windowRef API_DEPRECATED("This method should not be used.", macos(10.0,15.0)); */

/*@reserved NS\NSWindow @property (readonly) void * WindowRef windowRef NS_RETURNS_INNER_POINTER API_DEPRECATED("This method should not be used.", macos(10.0,15.0)); — getter */

/*@reserved NS\NSWindow - (void)disableScreenUpdatesUntilFlush API_DEPRECATED("This method does not do anything and should not be called.", macos(10.0,15.0)); */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_WINDOW_H */

