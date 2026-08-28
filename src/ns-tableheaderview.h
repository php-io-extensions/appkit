#ifndef PHP_APPKIT_NS_TABLEHEADERVIEW_H
#define PHP_APPKIT_NS_TABLEHEADERVIEW_H

/*
 * Faithful 1:1 binding of AppKit NSTableHeaderView.h. Every member
 * of the single base interface is either bound or reserved.
 * Nothing is reserved — the header has no blocks, NSCoder,
 * NSAttributedString, NSData, Class, or API_DEPRECATED members.
 * There are no same-file categories. The adopted
 * NSViewToolTipOwner protocol is not a class member. Inherited
 * NSView / NSResponder members stay on those classes. This header
 * declares no initializer — construction is synthesized
 * initWithFrame (allocs NSTableHeaderView). tableView is a
 * nullable weak handle. draggedColumn / resizedColumn are
 * NSInteger (int; draggedColumn is -1 when nothing is dragged).
 * draggedDistance is CGFloat (double). headerRectOfColumn:
 * returns an NSRect assoc array. columnAtPoint: takes NSPoint
 * component doubles.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- construction glue ---- */

/*@zep-construct NS\NSTableHeaderView initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nstableheaderview_init_with_frame(zval *x, zval *y, zval *width, zval *height);

/* ---- NSTableHeaderView ---- */

/*@zep NS\NSTableHeaderView tableView(int handle) -> int */
zend_long ns_nstableheaderview_table_view(zval *handle);
/*@zep NS\NSTableHeaderView setTableView(int handle, int tableView) -> void */
void ns_nstableheaderview_set_table_view(zval *handle, zval *tableView);

/*@zep NS\NSTableHeaderView draggedColumn(int handle) -> int */
zend_long ns_nstableheaderview_dragged_column(zval *handle);

/*@zep NS\NSTableHeaderView draggedDistance(int handle) -> double */
double ns_nstableheaderview_dragged_distance(zval *handle);

/*@zep NS\NSTableHeaderView resizedColumn(int handle) -> int */
zend_long ns_nstableheaderview_resized_column(zval *handle);

/*@zep NS\NSTableHeaderView headerRectOfColumn(int handle, int column) -> array */
void ns_nstableheaderview_header_rect_of_column(zval *return_value, zval *handle, zval *column);

/*@zep NS\NSTableHeaderView columnAtPoint(int handle, double x, double y) -> int */
zend_long ns_nstableheaderview_column_at_point(zval *handle, zval *x, zval *y);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TABLEHEADERVIEW_H */
