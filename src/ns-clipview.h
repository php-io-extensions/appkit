#ifndef PHP_APPKIT_NS_CLIPVIEW_H
#define PHP_APPKIT_NS_CLIPVIEW_H

/*
 * Faithful 1:1 binding of AppKit NSClipView.h. Every member of the
 * class (base interface + same-file class extension) is either
 * bound or reserved. Nothing is omitted. The
 * NSView(NSClipViewSuperview) category lives on NSView, not here.
 * This header declares no initializer — construction is
 * synthesized initWithFrame (allocs NSClipView); typical
 * instances also come from NSScrollView.contentView. Inherited NSView /
 * NSResponder members stay on those classes. autoscroll: is
 * redeclared here and binds here. constrainScrollPoint: and
 * copiesOnScroll are API_DEPRECATED and reserved. Nullable
 * documentView / documentCursor cross as int handles (0 = nil).
 * NSRect / NSPoint / NSEdgeInsets follow the struct convention.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- construction glue ---- */

/*@zep-construct NS\NSClipView initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nsclipview_init_with_frame(zval *x, zval *y, zval *width, zval *height);

/* ---- Document and chrome ---- */

/*@zep NS\NSClipView backgroundColor(int handle) -> int */
zend_long ns_nsclipview_background_color(zval *handle);
/*@zep NS\NSClipView setBackgroundColor(int handle, int backgroundColor) -> void */
void ns_nsclipview_set_background_color(zval *handle, zval *backgroundColor);

/*@zep NS\NSClipView drawsBackground(int handle) -> bool */
zend_long ns_nsclipview_draws_background(zval *handle);
/*@zep NS\NSClipView setDrawsBackground(int handle, bool drawsBackground) -> void */
void ns_nsclipview_set_draws_background(zval *handle, zval *drawsBackground);

/*@zep NS\NSClipView documentView(int handle) -> int */
zend_long ns_nsclipview_document_view(zval *handle);
/*@zep NS\NSClipView setDocumentView(int handle, int documentView) -> void */
void ns_nsclipview_set_document_view(zval *handle, zval *documentView);

/*@zep NS\NSClipView documentRect(int handle) -> array */
void ns_nsclipview_document_rect(zval *return_value, zval *handle);

/*@zep NS\NSClipView documentCursor(int handle) -> int */
zend_long ns_nsclipview_document_cursor(zval *handle);
/*@zep NS\NSClipView setDocumentCursor(int handle, int documentCursor) -> void */
void ns_nsclipview_set_document_cursor(zval *handle, zval *documentCursor);

/*@zep NS\NSClipView documentVisibleRect(int handle) -> array */
void ns_nsclipview_document_visible_rect(zval *return_value, zval *handle);

/* ---- Notifications and scrolling ---- */

/*@zep NS\NSClipView viewFrameChanged(int handle, int notification) -> void */
void ns_nsclipview_view_frame_changed(zval *handle, zval *notification);
/*@zep NS\NSClipView viewBoundsChanged(int handle, int notification) -> void */
void ns_nsclipview_view_bounds_changed(zval *handle, zval *notification);

/*@zep NS\NSClipView autoscroll(int handle, int event) -> bool */
zend_long ns_nsclipview_autoscroll(zval *handle, zval *event);
/*@zep NS\NSClipView scrollToPoint(int handle, double x, double y) -> void */
void ns_nsclipview_scroll_to_point(zval *handle, zval *x, zval *y);

/*@zep NS\NSClipView constrainBoundsRect(int handle, double x, double y, double width, double height) -> array */
void ns_nsclipview_constrain_bounds_rect(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);

/* ---- Insets ---- */

/*@zep NS\NSClipView contentInsets(int handle) -> array */
void ns_nsclipview_content_insets(zval *return_value, zval *handle);
/*@zep NS\NSClipView setContentInsets(int handle, double top, double left, double bottom, double right) -> void */
void ns_nsclipview_set_content_insets(zval *handle, zval *top, zval *left, zval *bottom, zval *right);

/*@zep NS\NSClipView automaticallyAdjustsContentInsets(int handle) -> bool */
zend_long ns_nsclipview_automatically_adjusts_content_insets(zval *handle);
/*@zep NS\NSClipView setAutomaticallyAdjustsContentInsets(int handle, bool automaticallyAdjustsContentInsets) -> void */
void ns_nsclipview_set_automatically_adjusts_content_insets(zval *handle, zval *automaticallyAdjustsContentInsets);

/* ---- Deprecated class extension ---- */

/*@reserved NS\NSClipView - (NSPoint)constrainScrollPoint:(NSPoint)newOrigin API_DEPRECATED */
/*@reserved NS\NSClipView @property BOOL copiesOnScroll API_DEPRECATED — getter */
/*@reserved NS\NSClipView @property BOOL copiesOnScroll API_DEPRECATED — setter */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_CLIPVIEW_H */
