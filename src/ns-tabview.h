#ifndef PHP_APPKIT_NS_TABVIEW_H
#define PHP_APPKIT_NS_TABVIEW_H

/*
 * Faithful 1:1 binding of AppKit NSTabView.h. Every member of the
 * single base interface is either bound or reserved. Nothing is
 * omitted. There are no same-file categories. Adopted
 * NSTabViewDelegate is not a class member (delegate methods belong
 * to Bridge). NSTabViewItem has its own header and is not bound
 * here. The NSTabViewType / NSTabPosition / NSTabViewBorderType
 * typedefs and NSAppKitVersionNumberWithDirectionalTabs are not
 * class members. This header declares no initializer — construction
 * is synthesized initWithFrame (allocs NSTabView).
 * Inherited NSView / NSResponder members stay on those classes.
 * tabViewType stays bound (comment-only "use tabPosition and
 * tabViewBorderType instead", not API_DEPRECATED). Reserved:
 * controlTint getter/setter (API_DEPRECATED). Nullable
 * selectedTabViewItem / delegate / sender / identifier arguments
 * cross as int handles (0 = nil). tabViewItems is
 * NSArray<NSTabViewItem *> (handles). contentRect / minimumSize
 * follow the struct convention. NSPoint for tabViewItemAtPoint:
 * is component doubles. Enums (NSTabViewType, NSTabPosition,
 * NSTabViewBorderType, NSControlSize) cross as int.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- construction glue ---- */

/*@zep-construct NS\NSTabView initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nstabview_init_with_frame(zval *x, zval *y, zval *width, zval *height);

/* ---- Select ---- */

/*@zep NS\NSTabView selectTabViewItem(int handle, int tabViewItem) -> void */
void ns_nstabview_select_tab_view_item(zval *handle, zval *tabViewItem);
/*@zep NS\NSTabView selectTabViewItemAtIndex(int handle, int index) -> void */
void ns_nstabview_select_tab_view_item_at_index(zval *handle, zval *index);
/*@zep NS\NSTabView selectTabViewItemWithIdentifier(int handle, int identifier) -> void */
void ns_nstabview_select_tab_view_item_with_identifier(zval *handle, zval *identifier);
/*@zep NS\NSTabView takeSelectedTabViewItemFromSender(int handle, int sender) -> void */
void ns_nstabview_take_selected_tab_view_item_from_sender(zval *handle, zval *sender);

/* ---- Navigation ---- */

/*@zep NS\NSTabView selectFirstTabViewItem(int handle, int sender) -> void */
void ns_nstabview_select_first_tab_view_item(zval *handle, zval *sender);
/*@zep NS\NSTabView selectLastTabViewItem(int handle, int sender) -> void */
void ns_nstabview_select_last_tab_view_item(zval *handle, zval *sender);
/*@zep NS\NSTabView selectNextTabViewItem(int handle, int sender) -> void */
void ns_nstabview_select_next_tab_view_item(zval *handle, zval *sender);
/*@zep NS\NSTabView selectPreviousTabViewItem(int handle, int sender) -> void */
void ns_nstabview_select_previous_tab_view_item(zval *handle, zval *sender);

/* ---- Getters / configuration ---- */

/*@zep NS\NSTabView selectedTabViewItem(int handle) -> int */
zend_long ns_nstabview_selected_tab_view_item(zval *handle);

/*@zep NS\NSTabView font(int handle) -> int */
zend_long ns_nstabview_font(zval *handle);
/*@zep NS\NSTabView setFont(int handle, int font) -> void */
void ns_nstabview_set_font(zval *handle, zval *font);

/*@zep NS\NSTabView tabViewType(int handle) -> int */
zend_long ns_nstabview_tab_view_type(zval *handle);
/*@zep NS\NSTabView setTabViewType(int handle, int tabViewType) -> void */
void ns_nstabview_set_tab_view_type(zval *handle, zval *tabViewType);

/*@zep NS\NSTabView tabPosition(int handle) -> int */
zend_long ns_nstabview_tab_position(zval *handle);
/*@zep NS\NSTabView setTabPosition(int handle, int tabPosition) -> void */
void ns_nstabview_set_tab_position(zval *handle, zval *tabPosition);

/*@zep NS\NSTabView tabViewBorderType(int handle) -> int */
zend_long ns_nstabview_tab_view_border_type(zval *handle);
/*@zep NS\NSTabView setTabViewBorderType(int handle, int tabViewBorderType) -> void */
void ns_nstabview_set_tab_view_border_type(zval *handle, zval *tabViewBorderType);

/*@zep NS\NSTabView tabViewItems(int handle) -> array */
void ns_nstabview_tab_view_items(zval *return_value, zval *handle);
/*@zep NS\NSTabView setTabViewItems(int handle, array tabViewItems) -> void */
void ns_nstabview_set_tab_view_items(zval *handle, zval *tabViewItems);

/*@zep NS\NSTabView allowsTruncatedLabels(int handle) -> bool */
zend_long ns_nstabview_allows_truncated_labels(zval *handle);
/*@zep NS\NSTabView setAllowsTruncatedLabels(int handle, bool allowsTruncatedLabels) -> void */
void ns_nstabview_set_allows_truncated_labels(zval *handle, zval *allowsTruncatedLabels);

/*@zep NS\NSTabView minimumSize(int handle) -> array */
void ns_nstabview_minimum_size(zval *return_value, zval *handle);

/*@zep NS\NSTabView drawsBackground(int handle) -> bool */
zend_long ns_nstabview_draws_background(zval *handle);
/*@zep NS\NSTabView setDrawsBackground(int handle, bool drawsBackground) -> void */
void ns_nstabview_set_draws_background(zval *handle, zval *drawsBackground);

/*@zep NS\NSTabView controlSize(int handle) -> int */
zend_long ns_nstabview_control_size(zval *handle);
/*@zep NS\NSTabView setControlSize(int handle, int controlSize) -> void */
void ns_nstabview_set_control_size(zval *handle, zval *controlSize);

/* ---- Add / remove tabs ---- */

/*@zep NS\NSTabView addTabViewItem(int handle, int tabViewItem) -> void */
void ns_nstabview_add_tab_view_item(zval *handle, zval *tabViewItem);
/*@zep NS\NSTabView insertTabViewItemAtIndex(int handle, int tabViewItem, int index) -> void */
void ns_nstabview_insert_tab_view_item_at_index(zval *handle, zval *tabViewItem, zval *index);
/*@zep NS\NSTabView removeTabViewItem(int handle, int tabViewItem) -> void */
void ns_nstabview_remove_tab_view_item(zval *handle, zval *tabViewItem);

/* ---- Delegate ---- */

/*@zep NS\NSTabView delegate(int handle) -> int */
zend_long ns_nstabview_delegate(zval *handle);
/*@zep NS\NSTabView setDelegate(int handle, int delegate) -> void */
void ns_nstabview_set_delegate(zval *handle, zval *delegate);

/* ---- Hit testing ---- */

/*@zep NS\NSTabView tabViewItemAtPoint(int handle, double x, double y) -> int */
zend_long ns_nstabview_tab_view_item_at_point(zval *handle, zval *x, zval *y);

/* ---- Geometry ---- */

/*@zep NS\NSTabView contentRect(int handle) -> array */
void ns_nstabview_content_rect(zval *return_value, zval *handle);

/* ---- Query ---- */

/*@zep NS\NSTabView numberOfTabViewItems(int handle) -> int */
zend_long ns_nstabview_number_of_tab_view_items(zval *handle);
/*@zep NS\NSTabView indexOfTabViewItem(int handle, int tabViewItem) -> int */
zend_long ns_nstabview_index_of_tab_view_item(zval *handle, zval *tabViewItem);
/*@zep NS\NSTabView tabViewItemAtIndex(int handle, int index) -> int */
zend_long ns_nstabview_tab_view_item_at_index(zval *handle, zval *index);
/*@zep NS\NSTabView indexOfTabViewItemWithIdentifier(int handle, int identifier) -> int */
zend_long ns_nstabview_index_of_tab_view_item_with_identifier(zval *handle, zval *identifier);

/* ---- Deprecated ---- */

/*@reserved NS\NSTabView @property NSControlTint controlTint API_DEPRECATED — getter */
/*@reserved NS\NSTabView @property NSControlTint controlTint API_DEPRECATED — setter */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TABVIEW_H */
