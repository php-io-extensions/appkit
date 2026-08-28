#ifndef PHP_APPKIT_NS_SCROLLVIEW_H
#define PHP_APPKIT_NS_SCROLLVIEW_H

/*
 * Faithful 1:1 binding of AppKit NSScrollView.h. Every member of the
 * class (base interface + same-file NSRulerSupport and
 * NSFindBarSupport categories) is either bound or reserved. Nothing
 * is omitted. The adopted NSTextFinderBarContainer protocol is not a
 * class member. Notification names (WillStartLiveMagnify /
 * DidEndLiveMagnify / WillStartLiveScroll / DidLiveScroll /
 * DidEndLiveScroll) and the NSScrollElasticity /
 * NSScrollViewFindBarPosition typedefs are not class members.
 * Live construction is initWithFrame (alloc+init glue).
 * initWithCoder: (NSCoder), both Class-taking
 * frameSizeForContentSize: / contentSizeForFrameSize: variants, the
 * two API_DEPRECATED hasHorizontalScroller:hasVerticalScroller:
 * variants, and the class property rulerViewClass (Class) are
 * reserved. Inherited NSView / NSResponder members stay on those
 * classes. scrollWheel: is redeclared here and binds here.
 * Nullable documentView / documentCursor / scrollers / ruler views
 * cross as int handles (0 = nil). NSRect / NSSize / NSPoint /
 * NSEdgeInsets follow the struct convention. NSBorderType /
 * NSScrollerStyle / NSScrollerKnobStyle / NSScrollElasticity /
 * NSScrollViewFindBarPosition / NSEventGestureAxis / NSControlSize
 * cross as int. Flattened collision:
 * setMagnification vs setMagnificationCenteredAtPoint.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Initialization ---- */

/*@zep NS\NSScrollView initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nsscrollview_init_with_frame(zval *x, zval *y, zval *width, zval *height);
/*@reserved NS\NSScrollView - (nullable instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER; */

/*@reserved NS\NSScrollView + (NSSize)frameSizeForContentSize:horizontalScrollerClass:verticalScrollerClass:borderType:controlSize:scrollerStyle: — Class */
/*@reserved NS\NSScrollView + (NSSize)contentSizeForFrameSize:horizontalScrollerClass:verticalScrollerClass:borderType:controlSize:scrollerStyle: — Class */
/*@reserved NS\NSScrollView + (NSSize)frameSizeForContentSize:hasHorizontalScroller:hasVerticalScroller:borderType: API_DEPRECATED */
/*@reserved NS\NSScrollView + (NSSize)contentSizeForFrameSize:hasHorizontalScroller:hasVerticalScroller:borderType: API_DEPRECATED */

/* ---- Document and content ---- */

/*@zep NS\NSScrollView documentVisibleRect(int handle) -> array */
void ns_nsscrollview_document_visible_rect(zval *return_value, zval *handle);
/*@zep NS\NSScrollView contentSize(int handle) -> array */
void ns_nsscrollview_content_size(zval *return_value, zval *handle);

/*@zep NS\NSScrollView documentView(int handle) -> int */
zend_long ns_nsscrollview_document_view(zval *handle);
/*@zep NS\NSScrollView setDocumentView(int handle, int documentView) -> void */
void ns_nsscrollview_set_document_view(zval *handle, zval *documentView);

/*@zep NS\NSScrollView contentView(int handle) -> int */
zend_long ns_nsscrollview_content_view(zval *handle);
/*@zep NS\NSScrollView setContentView(int handle, int contentView) -> void */
void ns_nsscrollview_set_content_view(zval *handle, zval *contentView);

/*@zep NS\NSScrollView documentCursor(int handle) -> int */
zend_long ns_nsscrollview_document_cursor(zval *handle);
/*@zep NS\NSScrollView setDocumentCursor(int handle, int documentCursor) -> void */
void ns_nsscrollview_set_document_cursor(zval *handle, zval *documentCursor);

/*@zep NS\NSScrollView borderType(int handle) -> int */
zend_long ns_nsscrollview_border_type(zval *handle);
/*@zep NS\NSScrollView setBorderType(int handle, int borderType) -> void */
void ns_nsscrollview_set_border_type(zval *handle, zval *borderType);

/*@zep NS\NSScrollView backgroundColor(int handle) -> int */
zend_long ns_nsscrollview_background_color(zval *handle);
/*@zep NS\NSScrollView setBackgroundColor(int handle, int backgroundColor) -> void */
void ns_nsscrollview_set_background_color(zval *handle, zval *backgroundColor);

/*@zep NS\NSScrollView drawsBackground(int handle) -> bool */
zend_long ns_nsscrollview_draws_background(zval *handle);
/*@zep NS\NSScrollView setDrawsBackground(int handle, bool drawsBackground) -> void */
void ns_nsscrollview_set_draws_background(zval *handle, zval *drawsBackground);

/* ---- Scrollers ---- */

/*@zep NS\NSScrollView hasVerticalScroller(int handle) -> bool */
zend_long ns_nsscrollview_has_vertical_scroller(zval *handle);
/*@zep NS\NSScrollView setHasVerticalScroller(int handle, bool hasVerticalScroller) -> void */
void ns_nsscrollview_set_has_vertical_scroller(zval *handle, zval *hasVerticalScroller);

/*@zep NS\NSScrollView hasHorizontalScroller(int handle) -> bool */
zend_long ns_nsscrollview_has_horizontal_scroller(zval *handle);
/*@zep NS\NSScrollView setHasHorizontalScroller(int handle, bool hasHorizontalScroller) -> void */
void ns_nsscrollview_set_has_horizontal_scroller(zval *handle, zval *hasHorizontalScroller);

/*@zep NS\NSScrollView verticalScroller(int handle) -> int */
zend_long ns_nsscrollview_vertical_scroller(zval *handle);
/*@zep NS\NSScrollView setVerticalScroller(int handle, int verticalScroller) -> void */
void ns_nsscrollview_set_vertical_scroller(zval *handle, zval *verticalScroller);

/*@zep NS\NSScrollView horizontalScroller(int handle) -> int */
zend_long ns_nsscrollview_horizontal_scroller(zval *handle);
/*@zep NS\NSScrollView setHorizontalScroller(int handle, int horizontalScroller) -> void */
void ns_nsscrollview_set_horizontal_scroller(zval *handle, zval *horizontalScroller);

/*@zep NS\NSScrollView autohidesScrollers(int handle) -> bool */
zend_long ns_nsscrollview_autohides_scrollers(zval *handle);
/*@zep NS\NSScrollView setAutohidesScrollers(int handle, bool autohidesScrollers) -> void */
void ns_nsscrollview_set_autohides_scrollers(zval *handle, zval *autohidesScrollers);

/* ---- Scroll amounts ---- */

/*@zep NS\NSScrollView horizontalLineScroll(int handle) -> double */
double ns_nsscrollview_horizontal_line_scroll(zval *handle);
/*@zep NS\NSScrollView setHorizontalLineScroll(int handle, double horizontalLineScroll) -> void */
void ns_nsscrollview_set_horizontal_line_scroll(zval *handle, zval *horizontalLineScroll);

/*@zep NS\NSScrollView verticalLineScroll(int handle) -> double */
double ns_nsscrollview_vertical_line_scroll(zval *handle);
/*@zep NS\NSScrollView setVerticalLineScroll(int handle, double verticalLineScroll) -> void */
void ns_nsscrollview_set_vertical_line_scroll(zval *handle, zval *verticalLineScroll);

/*@zep NS\NSScrollView lineScroll(int handle) -> double */
double ns_nsscrollview_line_scroll(zval *handle);
/*@zep NS\NSScrollView setLineScroll(int handle, double lineScroll) -> void */
void ns_nsscrollview_set_line_scroll(zval *handle, zval *lineScroll);

/*@zep NS\NSScrollView horizontalPageScroll(int handle) -> double */
double ns_nsscrollview_horizontal_page_scroll(zval *handle);
/*@zep NS\NSScrollView setHorizontalPageScroll(int handle, double horizontalPageScroll) -> void */
void ns_nsscrollview_set_horizontal_page_scroll(zval *handle, zval *horizontalPageScroll);

/*@zep NS\NSScrollView verticalPageScroll(int handle) -> double */
double ns_nsscrollview_vertical_page_scroll(zval *handle);
/*@zep NS\NSScrollView setVerticalPageScroll(int handle, double verticalPageScroll) -> void */
void ns_nsscrollview_set_vertical_page_scroll(zval *handle, zval *verticalPageScroll);

/*@zep NS\NSScrollView pageScroll(int handle) -> double */
double ns_nsscrollview_page_scroll(zval *handle);
/*@zep NS\NSScrollView setPageScroll(int handle, double pageScroll) -> void */
void ns_nsscrollview_set_page_scroll(zval *handle, zval *pageScroll);

/*@zep NS\NSScrollView scrollsDynamically(int handle) -> bool */
zend_long ns_nsscrollview_scrolls_dynamically(zval *handle);
/*@zep NS\NSScrollView setScrollsDynamically(int handle, bool scrollsDynamically) -> void */
void ns_nsscrollview_set_scrolls_dynamically(zval *handle, zval *scrollsDynamically);

/*@zep NS\NSScrollView tile(int handle) -> void */
void ns_nsscrollview_tile(zval *handle);
/*@zep NS\NSScrollView reflectScrolledClipView(int handle, int clipView) -> void */
void ns_nsscrollview_reflect_scrolled_clip_view(zval *handle, zval *clipView);
/*@zep NS\NSScrollView scrollWheel(int handle, int event) -> void */
void ns_nsscrollview_scroll_wheel(zval *handle, zval *event);

/* ---- Overlay scrollers and elasticity ---- */

/*@zep NS\NSScrollView scrollerStyle(int handle) -> int */
zend_long ns_nsscrollview_scroller_style(zval *handle);
/*@zep NS\NSScrollView setScrollerStyle(int handle, int scrollerStyle) -> void */
void ns_nsscrollview_set_scroller_style(zval *handle, zval *scrollerStyle);

/*@zep NS\NSScrollView scrollerKnobStyle(int handle) -> int */
zend_long ns_nsscrollview_scroller_knob_style(zval *handle);
/*@zep NS\NSScrollView setScrollerKnobStyle(int handle, int scrollerKnobStyle) -> void */
void ns_nsscrollview_set_scroller_knob_style(zval *handle, zval *scrollerKnobStyle);

/*@zep NS\NSScrollView flashScrollers(int handle) -> void */
void ns_nsscrollview_flash_scrollers(zval *handle);

/*@zep NS\NSScrollView horizontalScrollElasticity(int handle) -> int */
zend_long ns_nsscrollview_horizontal_scroll_elasticity(zval *handle);
/*@zep NS\NSScrollView setHorizontalScrollElasticity(int handle, int horizontalScrollElasticity) -> void */
void ns_nsscrollview_set_horizontal_scroll_elasticity(zval *handle, zval *horizontalScrollElasticity);

/*@zep NS\NSScrollView verticalScrollElasticity(int handle) -> int */
zend_long ns_nsscrollview_vertical_scroll_elasticity(zval *handle);
/*@zep NS\NSScrollView setVerticalScrollElasticity(int handle, int verticalScrollElasticity) -> void */
void ns_nsscrollview_set_vertical_scroll_elasticity(zval *handle, zval *verticalScrollElasticity);

/*@zep NS\NSScrollView usesPredominantAxisScrolling(int handle) -> bool */
zend_long ns_nsscrollview_uses_predominant_axis_scrolling(zval *handle);
/*@zep NS\NSScrollView setUsesPredominantAxisScrolling(int handle, bool usesPredominantAxisScrolling) -> void */
void ns_nsscrollview_set_uses_predominant_axis_scrolling(zval *handle, zval *usesPredominantAxisScrolling);

/* ---- Magnification ---- */

/*@zep NS\NSScrollView allowsMagnification(int handle) -> bool */
zend_long ns_nsscrollview_allows_magnification(zval *handle);
/*@zep NS\NSScrollView setAllowsMagnification(int handle, bool allowsMagnification) -> void */
void ns_nsscrollview_set_allows_magnification(zval *handle, zval *allowsMagnification);

/*@zep NS\NSScrollView magnification(int handle) -> double */
double ns_nsscrollview_magnification(zval *handle);
/*@zep NS\NSScrollView setMagnification(int handle, double magnification) -> void */
void ns_nsscrollview_set_magnification(zval *handle, zval *magnification);

/*@zep NS\NSScrollView maxMagnification(int handle) -> double */
double ns_nsscrollview_max_magnification(zval *handle);
/*@zep NS\NSScrollView setMaxMagnification(int handle, double maxMagnification) -> void */
void ns_nsscrollview_set_max_magnification(zval *handle, zval *maxMagnification);

/*@zep NS\NSScrollView minMagnification(int handle) -> double */
double ns_nsscrollview_min_magnification(zval *handle);
/*@zep NS\NSScrollView setMinMagnification(int handle, double minMagnification) -> void */
void ns_nsscrollview_set_min_magnification(zval *handle, zval *minMagnification);

/*@zep NS\NSScrollView magnifyToFitRect(int handle, double x, double y, double width, double height) -> void */
void ns_nsscrollview_magnify_to_fit_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSScrollView setMagnificationCenteredAtPoint(int handle, double magnification, double x, double y) -> void */
void ns_nsscrollview_set_magnification_centered_at_point(zval *handle, zval *magnification, zval *x, zval *y);

/*@zep NS\NSScrollView addFloatingSubviewForAxis(int handle, int view, int axis) -> void */
void ns_nsscrollview_add_floating_subview_for_axis(zval *handle, zval *view, zval *axis);

/* ---- Insets ---- */

/*@zep NS\NSScrollView automaticallyAdjustsContentInsets(int handle) -> bool */
zend_long ns_nsscrollview_automatically_adjusts_content_insets(zval *handle);
/*@zep NS\NSScrollView setAutomaticallyAdjustsContentInsets(int handle, bool automaticallyAdjustsContentInsets) -> void */
void ns_nsscrollview_set_automatically_adjusts_content_insets(zval *handle, zval *automaticallyAdjustsContentInsets);

/*@zep NS\NSScrollView contentInsets(int handle) -> array */
void ns_nsscrollview_content_insets(zval *return_value, zval *handle);
/*@zep NS\NSScrollView setContentInsets(int handle, double top, double left, double bottom, double right) -> void */
void ns_nsscrollview_set_content_insets(zval *handle, zval *top, zval *left, zval *bottom, zval *right);

/*@zep NS\NSScrollView scrollerInsets(int handle) -> array */
void ns_nsscrollview_scroller_insets(zval *return_value, zval *handle);
/*@zep NS\NSScrollView setScrollerInsets(int handle, double top, double left, double bottom, double right) -> void */
void ns_nsscrollview_set_scroller_insets(zval *handle, zval *top, zval *left, zval *bottom, zval *right);

/* ---- NSRulerSupport ---- */

/*@reserved NS\NSScrollView @property (class, null_resettable) Class rulerViewClass — getter */
/*@reserved NS\NSScrollView @property (class, null_resettable) Class rulerViewClass — setter */

/*@zep NS\NSScrollView rulersVisible(int handle) -> bool */
zend_long ns_nsscrollview_rulers_visible(zval *handle);
/*@zep NS\NSScrollView setRulersVisible(int handle, bool rulersVisible) -> void */
void ns_nsscrollview_set_rulers_visible(zval *handle, zval *rulersVisible);

/*@zep NS\NSScrollView hasHorizontalRuler(int handle) -> bool */
zend_long ns_nsscrollview_has_horizontal_ruler(zval *handle);
/*@zep NS\NSScrollView setHasHorizontalRuler(int handle, bool hasHorizontalRuler) -> void */
void ns_nsscrollview_set_has_horizontal_ruler(zval *handle, zval *hasHorizontalRuler);

/*@zep NS\NSScrollView hasVerticalRuler(int handle) -> bool */
zend_long ns_nsscrollview_has_vertical_ruler(zval *handle);
/*@zep NS\NSScrollView setHasVerticalRuler(int handle, bool hasVerticalRuler) -> void */
void ns_nsscrollview_set_has_vertical_ruler(zval *handle, zval *hasVerticalRuler);

/*@zep NS\NSScrollView horizontalRulerView(int handle) -> int */
zend_long ns_nsscrollview_horizontal_ruler_view(zval *handle);
/*@zep NS\NSScrollView setHorizontalRulerView(int handle, int horizontalRulerView) -> void */
void ns_nsscrollview_set_horizontal_ruler_view(zval *handle, zval *horizontalRulerView);

/*@zep NS\NSScrollView verticalRulerView(int handle) -> int */
zend_long ns_nsscrollview_vertical_ruler_view(zval *handle);
/*@zep NS\NSScrollView setVerticalRulerView(int handle, int verticalRulerView) -> void */
void ns_nsscrollview_set_vertical_ruler_view(zval *handle, zval *verticalRulerView);

/* ---- NSFindBarSupport ---- */

/*@zep NS\NSScrollView findBarPosition(int handle) -> int */
zend_long ns_nsscrollview_find_bar_position(zval *handle);
/*@zep NS\NSScrollView setFindBarPosition(int handle, int findBarPosition) -> void */
void ns_nsscrollview_set_find_bar_position(zval *handle, zval *findBarPosition);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SCROLLVIEW_H */
