#ifndef PHP_APPKIT_NS_SPLITVIEW_H
#define PHP_APPKIT_NS_SPLITVIEW_H

/*
 * Faithful 1:1 binding of AppKit NSSplitView.h. Every member of the
 * class (base interface + same-file NSSplitViewArrangedSubviews and
 * NSDeprecated categories) is either bound or reserved. Nothing is
 * omitted. The adopted NSSplitViewDelegate protocol is not a class
 * member (delegate methods belong to Bridge). Notification names
 * (WillResizeSubviews / DidResizeSubviews), the
 * NSSplitViewDividerStyle typedef, and NSSplitViewAutosaveName
 * are not class members. This header declares no initializer —
 * construction is synthesized initWithFrame (allocs NSSplitView).
 * Inherited NSView / NSResponder members stay on those
 * classes. setIsPaneSplitter: / isPaneSplitter are API_DEPRECATED
 * and reserved. The holdingPriority pair lives inside
 * !TARGET_OS_IPHONE and is bound (the audit blanks preprocessor
 * lines, so those methods still count). getter=isVertical emits
 * isVertical / setVertical. Nullable autosaveName crosses as var
 * (null = nil). Delegate / arranged subviews / dividerColor cross
 * as int handles (0 = nil) or an array of handles.
 * NSSplitViewDividerStyle / NSInteger cross as int. NSLayoutPriority
 * (float) and divider positions / thickness cross as double.
 * drawDividerInRect: follows the NSRect convention (component
 * doubles in).
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- construction glue ---- */

/*@zep-construct NS\NSSplitView initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nssplitview_init_with_frame(zval *x, zval *y, zval *width, zval *height);

/* ---- Orientation and chrome ---- */

/*@zep NS\NSSplitView isVertical(int handle) -> bool */
zend_long ns_nssplitview_is_vertical(zval *handle);
/*@zep NS\NSSplitView setVertical(int handle, bool vertical) -> void */
void ns_nssplitview_set_vertical(zval *handle, zval *vertical);

/*@zep NS\NSSplitView dividerStyle(int handle) -> int */
zend_long ns_nssplitview_divider_style(zval *handle);
/*@zep NS\NSSplitView setDividerStyle(int handle, int dividerStyle) -> void */
void ns_nssplitview_set_divider_style(zval *handle, zval *dividerStyle);

/*@zep NS\NSSplitView autosaveName(int handle) -> var */
void ns_nssplitview_autosave_name(zval *return_value, zval *handle);
/*@zep NS\NSSplitView setAutosaveName(int handle, var autosaveName) -> void */
void ns_nssplitview_set_autosave_name(zval *handle, zval *autosaveName);

/*@zep NS\NSSplitView delegate(int handle) -> int */
zend_long ns_nssplitview_delegate(zval *handle);
/*@zep NS\NSSplitView setDelegate(int handle, int delegate) -> void */
void ns_nssplitview_set_delegate(zval *handle, zval *delegate);

/*@zep NS\NSSplitView drawDividerInRect(int handle, double x, double y, double width, double height) -> void */
void ns_nssplitview_draw_divider_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSSplitView dividerColor(int handle) -> int */
zend_long ns_nssplitview_divider_color(zval *handle);

/*@zep NS\NSSplitView dividerThickness(int handle) -> double */
double ns_nssplitview_divider_thickness(zval *handle);

/* ---- Layout ---- */

/*@zep NS\NSSplitView adjustSubviews(int handle) -> void */
void ns_nssplitview_adjust_subviews(zval *handle);

/*@zep NS\NSSplitView isSubviewCollapsed(int handle, int subview) -> bool */
zend_long ns_nssplitview_is_subview_collapsed(zval *handle, zval *subview);

/*@zep NS\NSSplitView minPossiblePositionOfDividerAtIndex(int handle, int dividerIndex) -> double */
double ns_nssplitview_min_possible_position_of_divider_at_index(zval *handle, zval *dividerIndex);

/*@zep NS\NSSplitView maxPossiblePositionOfDividerAtIndex(int handle, int dividerIndex) -> double */
double ns_nssplitview_max_possible_position_of_divider_at_index(zval *handle, zval *dividerIndex);

/*@zep NS\NSSplitView setPositionOfDividerAtIndex(int handle, double position, int dividerIndex) -> void */
void ns_nssplitview_set_position_of_divider_at_index(zval *handle, zval *position, zval *dividerIndex);

/*@zep NS\NSSplitView holdingPriorityForSubviewAtIndex(int handle, int subviewIndex) -> double */
double ns_nssplitview_holding_priority_for_subview_at_index(zval *handle, zval *subviewIndex);

/*@zep NS\NSSplitView setHoldingPriorityForSubviewAtIndex(int handle, double priority, int subviewIndex) -> void */
void ns_nssplitview_set_holding_priority_for_subview_at_index(zval *handle, zval *priority, zval *subviewIndex);

/* ---- NSSplitViewArrangedSubviews ---- */

/*@zep NS\NSSplitView arrangesAllSubviews(int handle) -> bool */
zend_long ns_nssplitview_arranges_all_subviews(zval *handle);
/*@zep NS\NSSplitView setArrangesAllSubviews(int handle, bool arrangesAllSubviews) -> void */
void ns_nssplitview_set_arranges_all_subviews(zval *handle, zval *arrangesAllSubviews);

/*@zep NS\NSSplitView arrangedSubviews(int handle) -> array */
void ns_nssplitview_arranged_subviews(zval *return_value, zval *handle);

/*@zep NS\NSSplitView addArrangedSubview(int handle, int view) -> void */
void ns_nssplitview_add_arranged_subview(zval *handle, zval *view);

/*@zep NS\NSSplitView insertArrangedSubviewAtIndex(int handle, int view, int index) -> void */
void ns_nssplitview_insert_arranged_subview_at_index(zval *handle, zval *view, zval *index);

/*@zep NS\NSSplitView removeArrangedSubview(int handle, int view) -> void */
void ns_nssplitview_remove_arranged_subview(zval *handle, zval *view);

/* ---- NSDeprecated ---- */

/*@reserved NS\NSSplitView - (void)setIsPaneSplitter:(BOOL)flag API_DEPRECATED */
/*@reserved NS\NSSplitView - (BOOL)isPaneSplitter API_DEPRECATED */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SPLITVIEW_H */
