#ifndef PHP_APPKIT_NS_TABVIEWITEM_H
#define PHP_APPKIT_NS_TABVIEWITEM_H

/*
 * Faithful 1:1 binding of AppKit NSTabViewItem.h. Every member of the
 * single base interface is either bound or reserved. Nothing is
 * omitted. There are no same-file categories. Adopted NSCoding is
 * not a class member (NSCoder stays reserved when declared; this
 * header does not redeclare encodeWithCoder: / initWithCoder:).
 * The NSTabState typedef is not a class member. Live construction
 * is initWithIdentifier: (alloc+init glue) plus the
 * tabViewItemWithViewController: factory. Inherited NSObject
 * members stay on that class. Nullable identifier / image / view /
 * viewController / tabView / initialFirstResponder / toolTip
 * arguments cross as int handles (0 = nil) or var (null = nil).
 * label is a non-null NSString (string). color is an NSColor
 * handle. tabState (NSTabState) crosses as int. drawLabel:inRect:
 * takes a BOOL plus NSRect component doubles; sizeOfLabel: returns
 * {width, height}.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Creating items ---- */

/*@zep NS\NSTabViewItem tabViewItemWithViewController(int viewController) -> int */
zend_long ns_nstabviewitem_tab_view_item_with_view_controller(zval *viewController);

/*@zep NS\NSTabViewItem initWithIdentifier(int identifier) -> int */
zend_long ns_nstabviewitem_init_with_identifier(zval *identifier);

/* ---- Identity and chrome ---- */

/*@zep NS\NSTabViewItem identifier(int handle) -> int */
zend_long ns_nstabviewitem_identifier(zval *handle);
/*@zep NS\NSTabViewItem setIdentifier(int handle, int identifier) -> void */
void ns_nstabviewitem_set_identifier(zval *handle, zval *identifier);

/*@zep NS\NSTabViewItem color(int handle) -> int */
zend_long ns_nstabviewitem_color(zval *handle);
/*@zep NS\NSTabViewItem setColor(int handle, int color) -> void */
void ns_nstabviewitem_set_color(zval *handle, zval *color);

/*@zep NS\NSTabViewItem label(int handle) -> string */
void ns_nstabviewitem_label(zval *return_value, zval *handle);
/*@zep NS\NSTabViewItem setLabel(int handle, string label) -> void */
void ns_nstabviewitem_set_label(zval *handle, zval *label);

/*@zep NS\NSTabViewItem image(int handle) -> int */
zend_long ns_nstabviewitem_image(zval *handle);
/*@zep NS\NSTabViewItem setImage(int handle, int image) -> void */
void ns_nstabviewitem_set_image(zval *handle, zval *image);

/*@zep NS\NSTabViewItem view(int handle) -> int */
zend_long ns_nstabviewitem_view(zval *handle);
/*@zep NS\NSTabViewItem setView(int handle, int view) -> void */
void ns_nstabviewitem_set_view(zval *handle, zval *view);

/*@zep NS\NSTabViewItem viewController(int handle) -> int */
zend_long ns_nstabviewitem_view_controller(zval *handle);
/*@zep NS\NSTabViewItem setViewController(int handle, int viewController) -> void */
void ns_nstabviewitem_set_view_controller(zval *handle, zval *viewController);

/*@zep NS\NSTabViewItem tabState(int handle) -> int */
zend_long ns_nstabviewitem_tab_state(zval *handle);

/*@zep NS\NSTabViewItem tabView(int handle) -> int */
zend_long ns_nstabviewitem_tab_view(zval *handle);

/*@zep NS\NSTabViewItem initialFirstResponder(int handle) -> int */
zend_long ns_nstabviewitem_initial_first_responder(zval *handle);
/*@zep NS\NSTabViewItem setInitialFirstResponder(int handle, int initialFirstResponder) -> void */
void ns_nstabviewitem_set_initial_first_responder(zval *handle, zval *initialFirstResponder);

/*@zep NS\NSTabViewItem toolTip(int handle) -> var */
void ns_nstabviewitem_tool_tip(zval *return_value, zval *handle);
/*@zep NS\NSTabViewItem setToolTip(int handle, var toolTip) -> void */
void ns_nstabviewitem_set_tool_tip(zval *handle, zval *toolTip);

/* ---- Tab drawing / measuring ---- */

/*@zep NS\NSTabViewItem drawLabelInRect(int handle, bool shouldTruncateLabel, double x, double y, double width, double height) -> void */
void ns_nstabviewitem_draw_label_in_rect(zval *handle, zval *shouldTruncateLabel, zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSTabViewItem sizeOfLabel(int handle, bool computeMin) -> array */
void ns_nstabviewitem_size_of_label(zval *return_value, zval *handle, zval *computeMin);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TABVIEWITEM_H */
