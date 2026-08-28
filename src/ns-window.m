#include "ns-window.h"
#include "ns-value.h"

void ns_nswindow_frame_rect_for_content_rect_style_mask(zval *return_value, zval *x, zval *y, zval *width, zval *height, zval *style)
{
    @autoreleasepool {
        ns_ret_rect(return_value, [NSWindow frameRectForContentRect:ns_arg_rect(x, y, width, height) styleMask:(NSWindowStyleMask) ns_arg_long(style)]);
    }
}

void ns_nswindow_content_rect_for_frame_rect_style_mask(zval *return_value, zval *x, zval *y, zval *width, zval *height, zval *style)
{
    @autoreleasepool {
        ns_ret_rect(return_value, [NSWindow contentRectForFrameRect:ns_arg_rect(x, y, width, height) styleMask:(NSWindowStyleMask) ns_arg_long(style)]);
    }
}

double ns_nswindow_min_frame_width_with_title_style_mask(zval *title, zval *style)
{
    @autoreleasepool {
        return [NSWindow minFrameWidthWithTitle:ns_arg_string(title) styleMask:(NSWindowStyleMask) ns_arg_long(style)];
    }
}

zend_long ns_nswindow_default_depth_limit(void)
{
    @autoreleasepool {
        return (zend_long) [NSWindow defaultDepthLimit];
    }
}

void ns_nswindow_frame_rect_for_content_rect(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_rect(return_value, w != nil ? [w frameRectForContentRect:ns_arg_rect(x, y, width, height)] : NSZeroRect);
    }
}

void ns_nswindow_content_rect_for_frame_rect(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_rect(return_value, w != nil ? [w contentRectForFrameRect:ns_arg_rect(x, y, width, height)] : NSZeroRect);
    }
}

zend_long ns_nswindow_init_with_content_rect_style_mask_backing_defer(zval *x, zval *y, zval *width, zval *height, zval *style, zval *backingStoreType, zval *flag)
{
    @autoreleasepool {
        NSWindow *created = [[NSWindow alloc] initWithContentRect:ns_arg_rect(x, y, width, height) styleMask:(NSWindowStyleMask) ns_arg_long(style) backing:(NSBackingStoreType) ns_arg_long(backingStoreType) defer:ns_arg_bool(flag)];
        return ns_handle_for(created);
    }
}

zend_long ns_nswindow_init_with_content_rect_style_mask_backing_defer_screen(zval *x, zval *y, zval *width, zval *height, zval *style, zval *backingStoreType, zval *flag, zval *screen)
{
    @autoreleasepool {
        NSWindow *created = [[NSWindow alloc] initWithContentRect:ns_arg_rect(x, y, width, height) styleMask:(NSWindowStyleMask) ns_arg_long(style) backing:(NSBackingStoreType) ns_arg_long(backingStoreType) defer:ns_arg_bool(flag) screen:ns_arg_object(screen)];
        return ns_handle_for(created);
    }
}

void ns_nswindow_title(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_string(return_value, w != nil ? [w title] : nil);
    }
}

void ns_nswindow_set_title(zval *handle, zval *title)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setTitle:ns_arg_string(title)];
    }
}

void ns_nswindow_subtitle(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_string(return_value, w != nil ? [w subtitle] : nil);
    }
}

void ns_nswindow_set_subtitle(zval *handle, zval *subtitle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setSubtitle:ns_arg_string(subtitle)];
    }
}

zend_long ns_nswindow_title_visibility(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return w != nil ? (zend_long) [w titleVisibility] : 0;
    }
}

void ns_nswindow_set_title_visibility(zval *handle, zval *titleVisibility)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setTitleVisibility:(NSWindowTitleVisibility) ns_arg_long(titleVisibility)];
    }
}

zend_long ns_nswindow_titlebar_appears_transparent(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w titlebarAppearsTransparent]) ? 1 : 0;
    }
}

void ns_nswindow_set_titlebar_appears_transparent(zval *handle, zval *titlebarAppearsTransparent)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setTitlebarAppearsTransparent:ns_arg_bool(titlebarAppearsTransparent)];
    }
}

zend_long ns_nswindow_toolbar_style(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return w != nil ? (zend_long) [w toolbarStyle] : 0;
    }
}

void ns_nswindow_set_toolbar_style(zval *handle, zval *toolbarStyle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setToolbarStyle:(NSWindowToolbarStyle) ns_arg_long(toolbarStyle)];
    }
}

void ns_nswindow_content_layout_rect(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_rect(return_value, w != nil ? [w contentLayoutRect] : NSZeroRect);
    }
}

zend_long ns_nswindow_content_layout_guide(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w contentLayoutGuide] : nil);
    }
}

void ns_nswindow_titlebar_accessory_view_controllers(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_object_array(return_value, w != nil ? [w titlebarAccessoryViewControllers] : nil);
    }
}

void ns_nswindow_set_titlebar_accessory_view_controllers(zval *handle, zval *titlebarAccessoryViewControllers)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setTitlebarAccessoryViewControllers:ns_arg_object_array(titlebarAccessoryViewControllers)];
    }
}

void ns_nswindow_add_titlebar_accessory_view_controller(zval *handle, zval *childViewController)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w addTitlebarAccessoryViewController:ns_arg_object(childViewController)];
    }
}

void ns_nswindow_insert_titlebar_accessory_view_controller_at_index(zval *handle, zval *childViewController, zval *index)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w insertTitlebarAccessoryViewController:ns_arg_object(childViewController) atIndex:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nswindow_remove_titlebar_accessory_view_controller_at_index(zval *handle, zval *index)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w removeTitlebarAccessoryViewControllerAtIndex:(NSInteger) ns_arg_long(index)];
    }
}

zend_long ns_nswindow_represented_url(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w representedURL] : nil);
    }
}

void ns_nswindow_set_represented_url(zval *handle, zval *representedURL)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setRepresentedURL:ns_arg_object(representedURL)];
    }
}

void ns_nswindow_represented_filename(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_string(return_value, w != nil ? [w representedFilename] : nil);
    }
}

void ns_nswindow_set_represented_filename(zval *handle, zval *representedFilename)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setRepresentedFilename:ns_arg_string(representedFilename)];
    }
}

void ns_nswindow_set_title_with_represented_filename(zval *handle, zval *filename)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setTitleWithRepresentedFilename:ns_arg_string(filename)];
    }
}

zend_long ns_nswindow_is_excluded_from_windows_menu(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w isExcludedFromWindowsMenu]) ? 1 : 0;
    }
}

void ns_nswindow_set_excluded_from_windows_menu(zval *handle, zval *excludedFromWindowsMenu)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setExcludedFromWindowsMenu:ns_arg_bool(excludedFromWindowsMenu)];
    }
}

zend_long ns_nswindow_content_view(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w contentView] : nil);
    }
}

void ns_nswindow_set_content_view(zval *handle, zval *contentView)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setContentView:ns_arg_object(contentView)];
    }
}

zend_long ns_nswindow_delegate(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w delegate] : nil);
    }
}

void ns_nswindow_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setDelegate:ns_arg_object(delegate)];
    }
}

zend_long ns_nswindow_window_number(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return w != nil ? (zend_long) [w windowNumber] : 0;
    }
}

zend_long ns_nswindow_style_mask(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return w != nil ? (zend_long) [w styleMask] : 0;
    }
}

void ns_nswindow_set_style_mask(zval *handle, zval *styleMask)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setStyleMask:(NSWindowStyleMask) ns_arg_long(styleMask)];
    }
}

zend_long ns_nswindow_field_editor_for_object(zval *handle, zval *createFlag, zval *object)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w fieldEditor:ns_arg_bool(createFlag) forObject:ns_arg_object(object)] : nil);
    }
}

void ns_nswindow_end_editing_for(zval *handle, zval *object)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w endEditingFor:ns_arg_object(object)];
    }
}

void ns_nswindow_constrain_frame_rect_to_screen(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *screen)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_rect(return_value, w != nil ? [w constrainFrameRect:ns_arg_rect(x, y, width, height) toScreen:ns_arg_object(screen)] : NSZeroRect);
    }
}

void ns_nswindow_set_frame_display(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *flag)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setFrame:ns_arg_rect(x, y, width, height) display:ns_arg_bool(flag)];
    }
}

void ns_nswindow_set_content_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setContentSize:ns_arg_size(width, height)];
    }
}

void ns_nswindow_set_frame_origin(zval *handle, zval *x, zval *y)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setFrameOrigin:ns_arg_point(x, y)];
    }
}

void ns_nswindow_set_frame_top_left_point(zval *handle, zval *x, zval *y)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setFrameTopLeftPoint:ns_arg_point(x, y)];
    }
}

void ns_nswindow_cascade_top_left_from_point(zval *return_value, zval *handle, zval *x, zval *y)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_point(return_value, w != nil ? [w cascadeTopLeftFromPoint:ns_arg_point(x, y)] : NSZeroPoint);
    }
}

void ns_nswindow_cascading_reference_frame(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_rect(return_value, w != nil ? [w cascadingReferenceFrame] : NSZeroRect);
    }
}

void ns_nswindow_frame(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_rect(return_value, w != nil ? [w frame] : NSZeroRect);
    }
}

double ns_nswindow_animation_resize_time(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return w != nil ? [w animationResizeTime:ns_arg_rect(x, y, width, height)] : 0.0;
    }
}

void ns_nswindow_set_frame_display_animate(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *displayFlag, zval *animateFlag)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setFrame:ns_arg_rect(x, y, width, height) display:ns_arg_bool(displayFlag) animate:ns_arg_bool(animateFlag)];
    }
}

zend_long ns_nswindow_in_live_resize(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w inLiveResize]) ? 1 : 0;
    }
}

void ns_nswindow_resize_increments(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_size(return_value, w != nil ? [w resizeIncrements] : NSZeroSize);
    }
}

void ns_nswindow_set_resize_increments(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setResizeIncrements:ns_arg_size(width, height)];
    }
}

void ns_nswindow_aspect_ratio(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_size(return_value, w != nil ? [w aspectRatio] : NSZeroSize);
    }
}

void ns_nswindow_set_aspect_ratio(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setAspectRatio:ns_arg_size(width, height)];
    }
}

void ns_nswindow_content_resize_increments(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_size(return_value, w != nil ? [w contentResizeIncrements] : NSZeroSize);
    }
}

void ns_nswindow_set_content_resize_increments(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setContentResizeIncrements:ns_arg_size(width, height)];
    }
}

void ns_nswindow_content_aspect_ratio(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_size(return_value, w != nil ? [w contentAspectRatio] : NSZeroSize);
    }
}

void ns_nswindow_set_content_aspect_ratio(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setContentAspectRatio:ns_arg_size(width, height)];
    }
}

zend_long ns_nswindow_views_need_display(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w viewsNeedDisplay]) ? 1 : 0;
    }
}

void ns_nswindow_set_views_need_display(zval *handle, zval *viewsNeedDisplay)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setViewsNeedDisplay:ns_arg_bool(viewsNeedDisplay)];
    }
}

void ns_nswindow_display_if_needed(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w displayIfNeeded];
    }
}

void ns_nswindow_display(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w display];
    }
}

zend_long ns_nswindow_preserves_content_during_live_resize(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w preservesContentDuringLiveResize]) ? 1 : 0;
    }
}

void ns_nswindow_set_preserves_content_during_live_resize(zval *handle, zval *preservesContentDuringLiveResize)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setPreservesContentDuringLiveResize:ns_arg_bool(preservesContentDuringLiveResize)];
    }
}

void ns_nswindow_update(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w update];
    }
}

zend_long ns_nswindow_make_first_responder(zval *handle, zval *responder)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w makeFirstResponder:ns_arg_object(responder)]) ? 1 : 0;
    }
}

zend_long ns_nswindow_first_responder(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w firstResponder] : nil);
    }
}

zend_long ns_nswindow_resize_flags(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return w != nil ? (zend_long) [w resizeFlags] : 0;
    }
}

void ns_nswindow_close(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w close];
    }
}

zend_long ns_nswindow_is_released_when_closed(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w isReleasedWhenClosed]) ? 1 : 0;
    }
}

void ns_nswindow_set_released_when_closed(zval *handle, zval *releasedWhenClosed)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setReleasedWhenClosed:ns_arg_bool(releasedWhenClosed)];
    }
}

void ns_nswindow_miniaturize(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w miniaturize:ns_arg_object(sender)];
    }
}

void ns_nswindow_deminiaturize(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w deminiaturize:ns_arg_object(sender)];
    }
}

zend_long ns_nswindow_is_zoomed(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w isZoomed]) ? 1 : 0;
    }
}

void ns_nswindow_zoom(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w zoom:ns_arg_object(sender)];
    }
}

zend_long ns_nswindow_is_miniaturized(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w isMiniaturized]) ? 1 : 0;
    }
}

zend_long ns_nswindow_try_to_perform_with(zval *handle, zval *action, zval *object)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w tryToPerform:ns_arg_sel(action) with:ns_arg_object(object)]) ? 1 : 0;
    }
}

zend_long ns_nswindow_valid_requestor_for_send_type_return_type(zval *handle, zval *sendType, zval *returnType)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w validRequestorForSendType:ns_arg_string(sendType) returnType:ns_arg_string(returnType)] : nil);
    }
}

zend_long ns_nswindow_background_color(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w backgroundColor] : nil);
    }
}

void ns_nswindow_set_background_color(zval *handle, zval *backgroundColor)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setBackgroundColor:ns_arg_object(backgroundColor)];
    }
}

void ns_nswindow_set_content_border_thickness_for_edge(zval *handle, zval *thickness, zval *edge)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setContentBorderThickness:ns_arg_double(thickness) forEdge:(NSRectEdge) ns_arg_long(edge)];
    }
}

double ns_nswindow_content_border_thickness_for_edge(zval *handle, zval *edge)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return w != nil ? [w contentBorderThicknessForEdge:(NSRectEdge) ns_arg_long(edge)] : 0.0;
    }
}

void ns_nswindow_set_autorecalculates_content_border_thickness_for_edge(zval *handle, zval *flag, zval *edge)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setAutorecalculatesContentBorderThickness:ns_arg_bool(flag) forEdge:(NSRectEdge) ns_arg_long(edge)];
    }
}

zend_long ns_nswindow_autorecalculates_content_border_thickness_for_edge(zval *handle, zval *edge)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w autorecalculatesContentBorderThicknessForEdge:(NSRectEdge) ns_arg_long(edge)]) ? 1 : 0;
    }
}

zend_long ns_nswindow_is_movable(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w isMovable]) ? 1 : 0;
    }
}

void ns_nswindow_set_movable(zval *handle, zval *movable)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setMovable:ns_arg_bool(movable)];
    }
}

zend_long ns_nswindow_is_movable_by_window_background(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w isMovableByWindowBackground]) ? 1 : 0;
    }
}

void ns_nswindow_set_movable_by_window_background(zval *handle, zval *movableByWindowBackground)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setMovableByWindowBackground:ns_arg_bool(movableByWindowBackground)];
    }
}

zend_long ns_nswindow_hides_on_deactivate(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w hidesOnDeactivate]) ? 1 : 0;
    }
}

void ns_nswindow_set_hides_on_deactivate(zval *handle, zval *hidesOnDeactivate)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setHidesOnDeactivate:ns_arg_bool(hidesOnDeactivate)];
    }
}

zend_long ns_nswindow_can_hide(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w canHide]) ? 1 : 0;
    }
}

void ns_nswindow_set_can_hide(zval *handle, zval *canHide)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setCanHide:ns_arg_bool(canHide)];
    }
}

void ns_nswindow_center(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w center];
    }
}

void ns_nswindow_make_key_and_order_front(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w makeKeyAndOrderFront:ns_arg_object(sender)];
    }
}

void ns_nswindow_order_front(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w orderFront:ns_arg_object(sender)];
    }
}

void ns_nswindow_order_back(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w orderBack:ns_arg_object(sender)];
    }
}

void ns_nswindow_order_out(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w orderOut:ns_arg_object(sender)];
    }
}

void ns_nswindow_order_window_relative_to(zval *handle, zval *place, zval *otherWin)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w orderWindow:(NSWindowOrderingMode) ns_arg_long(place) relativeTo:(NSInteger) ns_arg_long(otherWin)];
    }
}

void ns_nswindow_order_front_regardless(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w orderFrontRegardless];
    }
}

zend_long ns_nswindow_miniwindow_image(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w miniwindowImage] : nil);
    }
}

void ns_nswindow_set_miniwindow_image(zval *handle, zval *miniwindowImage)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setMiniwindowImage:ns_arg_object(miniwindowImage)];
    }
}

void ns_nswindow_miniwindow_title(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_string(return_value, w != nil ? [w miniwindowTitle] : nil);
    }
}

void ns_nswindow_set_miniwindow_title(zval *handle, zval *miniwindowTitle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setMiniwindowTitle:ns_arg_string(miniwindowTitle)];
    }
}

zend_long ns_nswindow_dock_tile(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w dockTile] : nil);
    }
}

zend_long ns_nswindow_is_document_edited(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w isDocumentEdited]) ? 1 : 0;
    }
}

void ns_nswindow_set_document_edited(zval *handle, zval *documentEdited)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setDocumentEdited:ns_arg_bool(documentEdited)];
    }
}

zend_long ns_nswindow_is_visible(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w isVisible]) ? 1 : 0;
    }
}

zend_long ns_nswindow_is_key_window(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w isKeyWindow]) ? 1 : 0;
    }
}

zend_long ns_nswindow_is_main_window(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w isMainWindow]) ? 1 : 0;
    }
}

zend_long ns_nswindow_can_become_key_window(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w canBecomeKeyWindow]) ? 1 : 0;
    }
}

zend_long ns_nswindow_can_become_main_window(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w canBecomeMainWindow]) ? 1 : 0;
    }
}

void ns_nswindow_make_key_window(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w makeKeyWindow];
    }
}

void ns_nswindow_make_main_window(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w makeMainWindow];
    }
}

void ns_nswindow_become_key_window(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w becomeKeyWindow];
    }
}

void ns_nswindow_resign_key_window(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w resignKeyWindow];
    }
}

void ns_nswindow_become_main_window(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w becomeMainWindow];
    }
}

void ns_nswindow_resign_main_window(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w resignMainWindow];
    }
}

zend_long ns_nswindow_works_when_modal(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w worksWhenModal]) ? 1 : 0;
    }
}

zend_long ns_nswindow_prevents_application_termination_when_modal(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w preventsApplicationTerminationWhenModal]) ? 1 : 0;
    }
}

void ns_nswindow_set_prevents_application_termination_when_modal(zval *handle, zval *preventsApplicationTerminationWhenModal)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setPreventsApplicationTerminationWhenModal:ns_arg_bool(preventsApplicationTerminationWhenModal)];
    }
}

void ns_nswindow_convert_rect_to_screen(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_rect(return_value, w != nil ? [w convertRectToScreen:ns_arg_rect(x, y, width, height)] : NSZeroRect);
    }
}

void ns_nswindow_convert_rect_from_screen(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_rect(return_value, w != nil ? [w convertRectFromScreen:ns_arg_rect(x, y, width, height)] : NSZeroRect);
    }
}

void ns_nswindow_convert_point_to_screen(zval *return_value, zval *handle, zval *x, zval *y)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_point(return_value, w != nil ? [w convertPointToScreen:ns_arg_point(x, y)] : NSZeroPoint);
    }
}

void ns_nswindow_convert_point_from_screen(zval *return_value, zval *handle, zval *x, zval *y)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_point(return_value, w != nil ? [w convertPointFromScreen:ns_arg_point(x, y)] : NSZeroPoint);
    }
}

void ns_nswindow_convert_rect_to_backing(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_rect(return_value, w != nil ? [w convertRectToBacking:ns_arg_rect(x, y, width, height)] : NSZeroRect);
    }
}

void ns_nswindow_convert_rect_from_backing(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_rect(return_value, w != nil ? [w convertRectFromBacking:ns_arg_rect(x, y, width, height)] : NSZeroRect);
    }
}

void ns_nswindow_convert_point_to_backing(zval *return_value, zval *handle, zval *x, zval *y)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_point(return_value, w != nil ? [w convertPointToBacking:ns_arg_point(x, y)] : NSZeroPoint);
    }
}

void ns_nswindow_convert_point_from_backing(zval *return_value, zval *handle, zval *x, zval *y)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_point(return_value, w != nil ? [w convertPointFromBacking:ns_arg_point(x, y)] : NSZeroPoint);
    }
}

void ns_nswindow_backing_aligned_rect_options(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *options)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_rect(return_value, w != nil ? [w backingAlignedRect:ns_arg_rect(x, y, width, height) options:(NSAlignmentOptions) ns_arg_long(options)] : NSZeroRect);
    }
}

double ns_nswindow_backing_scale_factor(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return w != nil ? [w backingScaleFactor] : 0.0;
    }
}

void ns_nswindow_perform_close(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w performClose:ns_arg_object(sender)];
    }
}

void ns_nswindow_perform_miniaturize(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w performMiniaturize:ns_arg_object(sender)];
    }
}

void ns_nswindow_perform_zoom(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w performZoom:ns_arg_object(sender)];
    }
}

void ns_nswindow_print(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w print:ns_arg_object(sender)];
    }
}

zend_long ns_nswindow_allows_tool_tips_when_application_is_inactive(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w allowsToolTipsWhenApplicationIsInactive]) ? 1 : 0;
    }
}

void ns_nswindow_set_allows_tool_tips_when_application_is_inactive(zval *handle, zval *allowsToolTipsWhenApplicationIsInactive)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setAllowsToolTipsWhenApplicationIsInactive:ns_arg_bool(allowsToolTipsWhenApplicationIsInactive)];
    }
}

zend_long ns_nswindow_backing_type(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return w != nil ? (zend_long) [w backingType] : 0;
    }
}

void ns_nswindow_set_backing_type(zval *handle, zval *backingType)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setBackingType:(NSBackingStoreType) ns_arg_long(backingType)];
    }
}

zend_long ns_nswindow_level(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return w != nil ? (zend_long) [w level] : 0;
    }
}

void ns_nswindow_set_level(zval *handle, zval *level)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setLevel:(NSWindowLevel) ns_arg_long(level)];
    }
}

zend_long ns_nswindow_depth_limit(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return w != nil ? (zend_long) [w depthLimit] : 0;
    }
}

void ns_nswindow_set_depth_limit(zval *handle, zval *depthLimit)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setDepthLimit:(NSWindowDepth) ns_arg_long(depthLimit)];
    }
}

void ns_nswindow_set_dynamic_depth_limit(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setDynamicDepthLimit:ns_arg_bool(flag)];
    }
}

zend_long ns_nswindow_has_dynamic_depth_limit(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w hasDynamicDepthLimit]) ? 1 : 0;
    }
}

zend_long ns_nswindow_screen(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w screen] : nil);
    }
}

zend_long ns_nswindow_deepest_screen(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w deepestScreen] : nil);
    }
}

zend_long ns_nswindow_has_shadow(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w hasShadow]) ? 1 : 0;
    }
}

void ns_nswindow_set_has_shadow(zval *handle, zval *hasShadow)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setHasShadow:ns_arg_bool(hasShadow)];
    }
}

void ns_nswindow_invalidate_shadow(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w invalidateShadow];
    }
}

double ns_nswindow_alpha_value(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return w != nil ? [w alphaValue] : 0.0;
    }
}

void ns_nswindow_set_alpha_value(zval *handle, zval *alphaValue)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setAlphaValue:ns_arg_double(alphaValue)];
    }
}

zend_long ns_nswindow_is_opaque(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w isOpaque]) ? 1 : 0;
    }
}

void ns_nswindow_set_opaque(zval *handle, zval *opaque)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setOpaque:ns_arg_bool(opaque)];
    }
}

zend_long ns_nswindow_sharing_type(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return w != nil ? (zend_long) [w sharingType] : 0;
    }
}

void ns_nswindow_set_sharing_type(zval *handle, zval *sharingType)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setSharingType:(NSWindowSharingType) ns_arg_long(sharingType)];
    }
}

zend_long ns_nswindow_allows_concurrent_view_drawing(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w allowsConcurrentViewDrawing]) ? 1 : 0;
    }
}

void ns_nswindow_set_allows_concurrent_view_drawing(zval *handle, zval *allowsConcurrentViewDrawing)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setAllowsConcurrentViewDrawing:ns_arg_bool(allowsConcurrentViewDrawing)];
    }
}

zend_long ns_nswindow_displays_when_screen_profile_changes(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w displaysWhenScreenProfileChanges]) ? 1 : 0;
    }
}

void ns_nswindow_set_displays_when_screen_profile_changes(zval *handle, zval *displaysWhenScreenProfileChanges)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setDisplaysWhenScreenProfileChanges:ns_arg_bool(displaysWhenScreenProfileChanges)];
    }
}

zend_long ns_nswindow_can_become_visible_without_login(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w canBecomeVisibleWithoutLogin]) ? 1 : 0;
    }
}

void ns_nswindow_set_can_become_visible_without_login(zval *handle, zval *canBecomeVisibleWithoutLogin)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setCanBecomeVisibleWithoutLogin:ns_arg_bool(canBecomeVisibleWithoutLogin)];
    }
}

zend_long ns_nswindow_collection_behavior(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return w != nil ? (zend_long) [w collectionBehavior] : 0;
    }
}

void ns_nswindow_set_collection_behavior(zval *handle, zval *collectionBehavior)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setCollectionBehavior:(NSWindowCollectionBehavior) ns_arg_long(collectionBehavior)];
    }
}

zend_long ns_nswindow_animation_behavior(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return w != nil ? (zend_long) [w animationBehavior] : 0;
    }
}

void ns_nswindow_set_animation_behavior(zval *handle, zval *animationBehavior)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setAnimationBehavior:(NSWindowAnimationBehavior) ns_arg_long(animationBehavior)];
    }
}

zend_long ns_nswindow_is_on_active_space(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w isOnActiveSpace]) ? 1 : 0;
    }
}

void ns_nswindow_toggle_full_screen(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w toggleFullScreen:ns_arg_object(sender)];
    }
}

void ns_nswindow_string_with_saved_frame(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_string(return_value, w != nil ? [w stringWithSavedFrame] : nil);
    }
}

void ns_nswindow_set_frame_from_string(zval *handle, zval *string)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setFrameFromString:ns_arg_string(string)];
    }
}

void ns_nswindow_save_frame_using_name(zval *handle, zval *name)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w saveFrameUsingName:ns_arg_string(name)];
    }
}

zend_long ns_nswindow_set_frame_using_name_force(zval *handle, zval *name, zval *force)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w setFrameUsingName:ns_arg_string(name) force:ns_arg_bool(force)]) ? 1 : 0;
    }
}

zend_long ns_nswindow_set_frame_using_name(zval *handle, zval *name)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w setFrameUsingName:ns_arg_string(name)]) ? 1 : 0;
    }
}

zend_long ns_nswindow_set_frame_autosave_name(zval *handle, zval *name)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w setFrameAutosaveName:ns_arg_string(name)]) ? 1 : 0;
    }
}

void ns_nswindow_frame_autosave_name(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_string(return_value, w != nil ? [w frameAutosaveName] : nil);
    }
}

void ns_nswindow_remove_frame_using_name(zval *name)
{
    @autoreleasepool {
        [NSWindow removeFrameUsingName:ns_arg_string(name)];
    }
}

void ns_nswindow_min_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_size(return_value, w != nil ? [w minSize] : NSZeroSize);
    }
}

void ns_nswindow_set_min_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setMinSize:ns_arg_size(width, height)];
    }
}

void ns_nswindow_max_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_size(return_value, w != nil ? [w maxSize] : NSZeroSize);
    }
}

void ns_nswindow_set_max_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setMaxSize:ns_arg_size(width, height)];
    }
}

void ns_nswindow_content_min_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_size(return_value, w != nil ? [w contentMinSize] : NSZeroSize);
    }
}

void ns_nswindow_set_content_min_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setContentMinSize:ns_arg_size(width, height)];
    }
}

void ns_nswindow_content_max_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_size(return_value, w != nil ? [w contentMaxSize] : NSZeroSize);
    }
}

void ns_nswindow_set_content_max_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setContentMaxSize:ns_arg_size(width, height)];
    }
}

void ns_nswindow_min_full_screen_content_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_size(return_value, w != nil ? [w minFullScreenContentSize] : NSZeroSize);
    }
}

void ns_nswindow_set_min_full_screen_content_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setMinFullScreenContentSize:ns_arg_size(width, height)];
    }
}

void ns_nswindow_max_full_screen_content_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_size(return_value, w != nil ? [w maxFullScreenContentSize] : NSZeroSize);
    }
}

void ns_nswindow_set_max_full_screen_content_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setMaxFullScreenContentSize:ns_arg_size(width, height)];
    }
}

zend_long ns_nswindow_device_description(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w deviceDescription] : nil);
    }
}

zend_long ns_nswindow_window_controller(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w windowController] : nil);
    }
}

void ns_nswindow_set_window_controller(zval *handle, zval *windowController)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setWindowController:ns_arg_object(windowController)];
    }
}

void ns_nswindow_end_sheet(zval *handle, zval *sheetWindow)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w endSheet:ns_arg_object(sheetWindow)];
    }
}

void ns_nswindow_end_sheet_return_code(zval *handle, zval *sheetWindow, zval *returnCode)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w endSheet:ns_arg_object(sheetWindow) returnCode:(NSModalResponse) ns_arg_long(returnCode)];
    }
}

void ns_nswindow_sheets(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_object_array(return_value, w != nil ? [w sheets] : nil);
    }
}

zend_long ns_nswindow_attached_sheet(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w attachedSheet] : nil);
    }
}

zend_long ns_nswindow_is_sheet(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w isSheet]) ? 1 : 0;
    }
}

zend_long ns_nswindow_sheet_parent(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w sheetParent] : nil);
    }
}

zend_long ns_nswindow_standard_window_button_for_style_mask(zval *b, zval *styleMask)
{
    @autoreleasepool {
        return ns_handle_for([NSWindow standardWindowButton:(NSWindowButton) ns_arg_long(b) forStyleMask:(NSWindowStyleMask) ns_arg_long(styleMask)]);
    }
}

zend_long ns_nswindow_standard_window_button(zval *handle, zval *b)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w standardWindowButton:(NSWindowButton) ns_arg_long(b)] : nil);
    }
}

void ns_nswindow_add_child_window_ordered(zval *handle, zval *childWin, zval *place)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w addChildWindow:ns_arg_object(childWin) ordered:(NSWindowOrderingMode) ns_arg_long(place)];
    }
}

void ns_nswindow_remove_child_window(zval *handle, zval *childWin)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w removeChildWindow:ns_arg_object(childWin)];
    }
}

void ns_nswindow_child_windows(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_object_array(return_value, w != nil ? [w childWindows] : nil);
    }
}

zend_long ns_nswindow_parent_window(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w parentWindow] : nil);
    }
}

void ns_nswindow_set_parent_window(zval *handle, zval *parentWindow)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setParentWindow:ns_arg_object(parentWindow)];
    }
}

zend_long ns_nswindow_appearance_source(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w appearanceSource] : nil);
    }
}

void ns_nswindow_set_appearance_source(zval *handle, zval *appearanceSource)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setAppearanceSource:ns_arg_object(appearanceSource)];
    }
}

zend_long ns_nswindow_color_space(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w colorSpace] : nil);
    }
}

void ns_nswindow_set_color_space(zval *handle, zval *colorSpace)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setColorSpace:ns_arg_object(colorSpace)];
    }
}

zend_long ns_nswindow_can_represent_display_gamut(zval *handle, zval *displayGamut)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w canRepresentDisplayGamut:(NSDisplayGamut) ns_arg_long(displayGamut)]) ? 1 : 0;
    }
}

void ns_nswindow_window_numbers_with_options(zval *return_value, zval *options)
{
    @autoreleasepool {
        ns_ret_object_array(return_value, [NSWindow windowNumbersWithOptions:(NSWindowNumberListOptions) ns_arg_long(options)]);
    }
}

zend_long ns_nswindow_window_number_at_point_below_window_with_window_number(zval *x, zval *y, zval *windowNumber)
{
    @autoreleasepool {
        return (zend_long) [NSWindow windowNumberAtPoint:ns_arg_point(x, y) belowWindowWithWindowNumber:(NSInteger) ns_arg_long(windowNumber)];
    }
}

zend_long ns_nswindow_occlusion_state(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return w != nil ? (zend_long) [w occlusionState] : 0;
    }
}

zend_long ns_nswindow_titlebar_separator_style(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return w != nil ? (zend_long) [w titlebarSeparatorStyle] : 0;
    }
}

void ns_nswindow_set_titlebar_separator_style(zval *handle, zval *titlebarSeparatorStyle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setTitlebarSeparatorStyle:(NSTitlebarSeparatorStyle) ns_arg_long(titlebarSeparatorStyle)];
    }
}

zend_long ns_nswindow_content_view_controller(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w contentViewController] : nil);
    }
}

void ns_nswindow_set_content_view_controller(zval *handle, zval *contentViewController)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setContentViewController:ns_arg_object(contentViewController)];
    }
}

zend_long ns_nswindow_window_with_content_view_controller(zval *contentViewController)
{
    @autoreleasepool {
        return ns_handle_for([NSWindow windowWithContentViewController:ns_arg_object(contentViewController)]);
    }
}

void ns_nswindow_perform_window_drag_with_event(zval *handle, zval *event)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w performWindowDragWithEvent:ns_arg_object(event)];
    }
}

zend_long ns_nswindow_initial_first_responder(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w initialFirstResponder] : nil);
    }
}

void ns_nswindow_set_initial_first_responder(zval *handle, zval *initialFirstResponder)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setInitialFirstResponder:ns_arg_object(initialFirstResponder)];
    }
}

void ns_nswindow_select_next_key_view(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w selectNextKeyView:ns_arg_object(sender)];
    }
}

void ns_nswindow_select_previous_key_view(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w selectPreviousKeyView:ns_arg_object(sender)];
    }
}

void ns_nswindow_select_key_view_following_view(zval *handle, zval *view)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w selectKeyViewFollowingView:ns_arg_object(view)];
    }
}

void ns_nswindow_select_key_view_preceding_view(zval *handle, zval *view)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w selectKeyViewPrecedingView:ns_arg_object(view)];
    }
}

zend_long ns_nswindow_key_view_selection_direction(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return w != nil ? (zend_long) [w keyViewSelectionDirection] : 0;
    }
}

zend_long ns_nswindow_default_button_cell(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w defaultButtonCell] : nil);
    }
}

void ns_nswindow_set_default_button_cell(zval *handle, zval *defaultButtonCell)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setDefaultButtonCell:ns_arg_object(defaultButtonCell)];
    }
}

void ns_nswindow_disable_key_equivalent_for_default_button_cell(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w disableKeyEquivalentForDefaultButtonCell];
    }
}

void ns_nswindow_enable_key_equivalent_for_default_button_cell(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w enableKeyEquivalentForDefaultButtonCell];
    }
}

zend_long ns_nswindow_autorecalculates_key_view_loop(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w autorecalculatesKeyViewLoop]) ? 1 : 0;
    }
}

void ns_nswindow_set_autorecalculates_key_view_loop(zval *handle, zval *autorecalculatesKeyViewLoop)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setAutorecalculatesKeyViewLoop:ns_arg_bool(autorecalculatesKeyViewLoop)];
    }
}

void ns_nswindow_recalculate_key_view_loop(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w recalculateKeyViewLoop];
    }
}

zend_long ns_nswindow_toolbar(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w toolbar] : nil);
    }
}

void ns_nswindow_set_toolbar(zval *handle, zval *toolbar)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setToolbar:ns_arg_object(toolbar)];
    }
}

void ns_nswindow_toggle_toolbar_shown(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w toggleToolbarShown:ns_arg_object(sender)];
    }
}

void ns_nswindow_run_toolbar_customization_palette(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w runToolbarCustomizationPalette:ns_arg_object(sender)];
    }
}

zend_long ns_nswindow_allows_automatic_window_tabbing(void)
{
    @autoreleasepool {
        return ([NSWindow allowsAutomaticWindowTabbing]) ? 1 : 0;
    }
}

void ns_nswindow_set_allows_automatic_window_tabbing(zval *allowsAutomaticWindowTabbing)
{
    @autoreleasepool {
        [NSWindow setAllowsAutomaticWindowTabbing:ns_arg_bool(allowsAutomaticWindowTabbing)];
    }
}

zend_long ns_nswindow_user_tabbing_preference(void)
{
    @autoreleasepool {
        return (zend_long) [NSWindow userTabbingPreference];
    }
}

zend_long ns_nswindow_tabbing_mode(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return w != nil ? (zend_long) [w tabbingMode] : 0;
    }
}

void ns_nswindow_set_tabbing_mode(zval *handle, zval *tabbingMode)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setTabbingMode:(NSWindowTabbingMode) ns_arg_long(tabbingMode)];
    }
}

void ns_nswindow_tabbing_identifier(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_string(return_value, w != nil ? [w tabbingIdentifier] : nil);
    }
}

void ns_nswindow_set_tabbing_identifier(zval *handle, zval *tabbingIdentifier)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setTabbingIdentifier:ns_arg_string(tabbingIdentifier)];
    }
}

void ns_nswindow_select_next_tab(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w selectNextTab:ns_arg_object(sender)];
    }
}

void ns_nswindow_select_previous_tab(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w selectPreviousTab:ns_arg_object(sender)];
    }
}

void ns_nswindow_move_tab_to_new_window(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w moveTabToNewWindow:ns_arg_object(sender)];
    }
}

void ns_nswindow_merge_all_windows(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w mergeAllWindows:ns_arg_object(sender)];
    }
}

void ns_nswindow_toggle_tab_bar(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w toggleTabBar:ns_arg_object(sender)];
    }
}

void ns_nswindow_toggle_tab_overview(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w toggleTabOverview:ns_arg_object(sender)];
    }
}

void ns_nswindow_tabbed_windows(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_object_array(return_value, w != nil ? [w tabbedWindows] : nil);
    }
}

void ns_nswindow_add_tabbed_window_ordered(zval *handle, zval *window, zval *ordered)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w addTabbedWindow:ns_arg_object(window) ordered:(NSWindowOrderingMode) ns_arg_long(ordered)];
    }
}

zend_long ns_nswindow_tab(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w tab] : nil);
    }
}

zend_long ns_nswindow_tab_group(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w tabGroup] : nil);
    }
}

zend_long ns_nswindow_has_active_window_sharing_session(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w hasActiveWindowSharingSession]) ? 1 : 0;
    }
}

zend_long ns_nswindow_window_titlebar_layout_direction(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return w != nil ? (zend_long) [w windowTitlebarLayoutDirection] : 0;
    }
}

zend_long ns_nswindow_next_event_matching_mask(zval *handle, zval *mask)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w nextEventMatchingMask:(NSEventMask) ns_arg_long(mask)] : nil);
    }
}

zend_long ns_nswindow_next_event_matching_mask_until_date_in_mode_dequeue(zval *handle, zval *mask, zval *expiration, zval *mode, zval *deqFlag)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w nextEventMatchingMask:(NSEventMask) ns_arg_long(mask) untilDate:ns_arg_object(expiration) inMode:ns_arg_string(mode) dequeue:ns_arg_bool(deqFlag)] : nil);
    }
}

void ns_nswindow_discard_events_matching_mask_before_event(zval *handle, zval *mask, zval *lastEvent)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w discardEventsMatchingMask:(NSEventMask) ns_arg_long(mask) beforeEvent:ns_arg_object(lastEvent)];
    }
}

void ns_nswindow_post_event_at_start(zval *handle, zval *event, zval *flag)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w postEvent:ns_arg_object(event) atStart:ns_arg_bool(flag)];
    }
}

void ns_nswindow_send_event(zval *handle, zval *event)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w sendEvent:ns_arg_object(event)];
    }
}

zend_long ns_nswindow_current_event(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w currentEvent] : nil);
    }
}

zend_long ns_nswindow_accepts_mouse_moved_events(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w acceptsMouseMovedEvents]) ? 1 : 0;
    }
}

void ns_nswindow_set_accepts_mouse_moved_events(zval *handle, zval *acceptsMouseMovedEvents)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setAcceptsMouseMovedEvents:ns_arg_bool(acceptsMouseMovedEvents)];
    }
}

zend_long ns_nswindow_ignores_mouse_events(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w ignoresMouseEvents]) ? 1 : 0;
    }
}

void ns_nswindow_set_ignores_mouse_events(zval *handle, zval *ignoresMouseEvents)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w setIgnoresMouseEvents:ns_arg_bool(ignoresMouseEvents)];
    }
}

void ns_nswindow_mouse_location_outside_of_event_stream(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        ns_ret_point(return_value, w != nil ? [w mouseLocationOutsideOfEventStream] : NSZeroPoint);
    }
}

void ns_nswindow_disable_cursor_rects(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w disableCursorRects];
    }
}

void ns_nswindow_enable_cursor_rects(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w enableCursorRects];
    }
}

void ns_nswindow_discard_cursor_rects(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w discardCursorRects];
    }
}

zend_long ns_nswindow_are_cursor_rects_enabled(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return (w != nil && [w areCursorRectsEnabled]) ? 1 : 0;
    }
}

void ns_nswindow_invalidate_cursor_rects_for_view(zval *handle, zval *view)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w invalidateCursorRectsForView:ns_arg_object(view)];
    }
}

void ns_nswindow_reset_cursor_rects(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w resetCursorRects];
    }
}

zend_long ns_nswindow_begin_dragging_session_with_items_event_source(zval *handle, zval *items, zval *event, zval *source)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w beginDraggingSessionWithItems:ns_arg_object_array(items) event:ns_arg_object(event) source:ns_arg_object(source)] : nil);
    }
}

void ns_nswindow_register_for_dragged_types(zval *handle, zval *newTypes)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w registerForDraggedTypes:ns_arg_string_array(newTypes)];
    }
}

void ns_nswindow_unregister_dragged_types(zval *handle)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        if (w == nil) { return; }
        [w unregisterDraggedTypes];
    }
}

zend_long ns_nswindow_display_link_with_target_selector(zval *handle, zval *target, zval *selector)
{
    @autoreleasepool {
        NSWindow *w = NS_ARG_AS(NSWindow, handle);
        return ns_handle_for(w != nil ? [w displayLinkWithTarget:ns_arg_object(target) selector:ns_arg_sel(selector)] : nil);
    }
}

