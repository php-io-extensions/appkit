#ifndef PHP_APPKIT_NS_PATHCELL_H
#define PHP_APPKIT_NS_PATHCELL_H

/*
 * Faithful 1:1 binding of AppKit NSPathCell.h. Every member of the
 * class (the single base interface; no same-file categories) is
 * either bound or reserved. The NSPathStyle typedef (including the
 * deprecated NSPathStyleNavigationBar case) is not a class member.
 * Adopted NSMenuItemValidation / NSOpenSavePanelDelegate and
 * protocol NSPathCellDelegate are not class members (delegate
 * methods belong to Bridge). Inherited NSActionCell / NSCell
 * members stay on those classes. No designated initializer is
 * declared here — construction is synthesized initTextCell /
 * initImageCell (allocs NSPathCell; nearest bound ancestor is
 * NSCell). pathComponentCellClass is reserved (Class).
 * placeholderAttributedString is reserved (NSAttributedString).
 * NSURL *URL crosses as a handle (0 = nil). Nullable
 * NSArray<NSString *> allowedTypes crosses as var so null means
 * allow-all and an empty array means allow-nothing.
 * placeholderString is a nullable NSString and crosses as var.
 * Nullable SEL doubleAction crosses as var. setObjectValue:
 * takes id<NSCopying> as a handle (0 = nil). pathComponentCells
 * is NSArray of NSPathComponentCell handles. rectOfPathComponentCell:
 * withFrame:inView: and pathComponentCellAtPoint:withFrame:inView:
 * follow the NSRect / NSPoint convention. mouseEntered: /
 * mouseExited:withFrame:inView: take an NSEvent handle plus the
 * frame doubles. backgroundColor / delegate / clickedPathComponentCell
 * / NSColor / NSView / NSPathComponentCell cross as int handles
 * (0 = nil). NSPathStyle crosses as int.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSPathCell ---- */

/*@zep-construct NS\NSPathCell initTextCell(string string_) -> int */
zend_long ns_nspathcell_init_text_cell(zval *string_);
/*@zep-construct NS\NSPathCell initImageCell(int image) -> int */
zend_long ns_nspathcell_init_image_cell(zval *image);

/*@zep NS\NSPathCell pathStyle(int handle) -> int */
zend_long ns_nspathcell_path_style(zval *handle);
/*@zep NS\NSPathCell setPathStyle(int handle, int pathStyle) -> void */
void ns_nspathcell_set_path_style(zval *handle, zval *pathStyle);

/*@zep NS\NSPathCell URL(int handle) -> int */
zend_long ns_nspathcell_url(zval *handle);
/*@zep NS\NSPathCell setURL(int handle, int URL) -> void */
void ns_nspathcell_set_url(zval *handle, zval *URL);

/*@zep NS\NSPathCell setObjectValue(int handle, int obj) -> void */
void ns_nspathcell_set_object_value(zval *handle, zval *obj);

/*@zep NS\NSPathCell allowedTypes(int handle) -> var */
void ns_nspathcell_allowed_types(zval *return_value, zval *handle);
/*@zep NS\NSPathCell setAllowedTypes(int handle, var allowedTypes) -> void */
void ns_nspathcell_set_allowed_types(zval *handle, zval *allowedTypes);

/*@zep NS\NSPathCell delegate(int handle) -> int */
zend_long ns_nspathcell_delegate(zval *handle);
/*@zep NS\NSPathCell setDelegate(int handle, int delegate) -> void */
void ns_nspathcell_set_delegate(zval *handle, zval *delegate);

/*@reserved NS\NSPathCell @property (class, readonly) Class pathComponentCellClass — Class */

/*@zep NS\NSPathCell pathComponentCells(int handle) -> array */
void ns_nspathcell_path_component_cells(zval *return_value, zval *handle);
/*@zep NS\NSPathCell setPathComponentCells(int handle, array pathComponentCells) -> void */
void ns_nspathcell_set_path_component_cells(zval *handle, zval *pathComponentCells);

/*@zep NS\NSPathCell rectOfPathComponentCellWithFrameInView(int handle, int cell, double x, double y, double width, double height, int view) -> array */
void ns_nspathcell_rect_of_path_component_cell_with_frame_in_view(zval *return_value, zval *handle, zval *cell, zval *x, zval *y, zval *width, zval *height, zval *view);

/*@zep NS\NSPathCell pathComponentCellAtPointWithFrameInView(int handle, double locationX, double locationY, double x, double y, double width, double height, int view) -> int */
zend_long ns_nspathcell_path_component_cell_at_point_with_frame_in_view(zval *handle, zval *locationX, zval *locationY, zval *x, zval *y, zval *width, zval *height, zval *view);

/*@zep NS\NSPathCell clickedPathComponentCell(int handle) -> int */
zend_long ns_nspathcell_clicked_path_component_cell(zval *handle);

/*@zep NS\NSPathCell mouseEnteredWithFrameInView(int handle, int event, double x, double y, double width, double height, int view) -> void */
void ns_nspathcell_mouse_entered_with_frame_in_view(zval *handle, zval *event, zval *x, zval *y, zval *width, zval *height, zval *view);
/*@zep NS\NSPathCell mouseExitedWithFrameInView(int handle, int event, double x, double y, double width, double height, int view) -> void */
void ns_nspathcell_mouse_exited_with_frame_in_view(zval *handle, zval *event, zval *x, zval *y, zval *width, zval *height, zval *view);

/*@zep NS\NSPathCell doubleAction(int handle) -> var */
void ns_nspathcell_double_action(zval *return_value, zval *handle);
/*@zep NS\NSPathCell setDoubleAction(int handle, var doubleAction) -> void */
void ns_nspathcell_set_double_action(zval *handle, zval *doubleAction);

/*@zep NS\NSPathCell backgroundColor(int handle) -> int */
zend_long ns_nspathcell_background_color(zval *handle);
/*@zep NS\NSPathCell setBackgroundColor(int handle, int backgroundColor) -> void */
void ns_nspathcell_set_background_color(zval *handle, zval *backgroundColor);

/*@zep NS\NSPathCell placeholderString(int handle) -> var */
void ns_nspathcell_placeholder_string(zval *return_value, zval *handle);
/*@zep NS\NSPathCell setPlaceholderString(int handle, var placeholderString) -> void */
void ns_nspathcell_set_placeholder_string(zval *handle, zval *placeholderString);

/*@reserved NS\NSPathCell @property (nullable, copy) NSAttributedString *placeholderAttributedString — getter */
/*@reserved NS\NSPathCell @property (nullable, copy) NSAttributedString *placeholderAttributedString — setter */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PATHCELL_H */
