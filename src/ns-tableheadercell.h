#ifndef PHP_APPKIT_NS_TABLEHEADERCELL_H
#define PHP_APPKIT_NS_TABLEHEADERCELL_H

/*
 * Faithful 1:1 binding of AppKit NSTableHeaderCell.h. Every member
 * of the single base interface is either bound or reserved.
 * Nothing is reserved — the header has no blocks, NSCoder,
 * NSAttributedString, NSData, Class, or API_DEPRECATED members.
 * There are no same-file categories. Inherited NSTextFieldCell /
 * NSActionCell / NSCell members stay on those classes. This
 * header declares no initializer — construction is synthesized
 * initTextCell (allocs NSTableHeaderCell).
 * drawSortIndicatorWithFrame:inView:ascending:priority: takes an
 * NSRect as component doubles plus a view handle, a BOOL, and an
 * NSInteger. sortIndicatorRectForBounds: takes an NSRect and
 * returns an assoc array.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- construction glue ---- */

/*@zep-construct NS\NSTableHeaderCell initTextCell(string string_) -> int */
zend_long ns_nstableheadercell_init_text_cell(zval *string_);

/* ---- NSTableHeaderCell ---- */

/*@zep NS\NSTableHeaderCell drawSortIndicatorWithFrameInViewAscendingPriority(int handle, double x, double y, double width, double height, int controlView, bool ascending, int priority) -> void */
void ns_nstableheadercell_draw_sort_indicator_with_frame_in_view_ascending_priority(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *controlView, zval *ascending, zval *priority);

/*@zep NS\NSTableHeaderCell sortIndicatorRectForBounds(int handle, double x, double y, double width, double height) -> array */
void ns_nstableheadercell_sort_indicator_rect_for_bounds(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TABLEHEADERCELL_H */
