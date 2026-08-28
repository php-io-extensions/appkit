#ifndef PHP_APPKIT_NS_PATHCONTROL_H
#define PHP_APPKIT_NS_PATHCONTROL_H

/*
 * Faithful 1:1 binding of AppKit NSPathControl.h. Every member of
 * the class (base interface + same-file NSDeprecated category) is
 * either bound or reserved. Nothing is omitted. Protocol
 * NSPathControlDelegate is not a class member (delegate methods
 * belong to Bridge). The NSPathStyle typedef lives in
 * NSPathCell.h and is not a class member. Inherited NSControl /
 * NSView members stay on those classes. The redeclared menu
 * property binds here. No designated initializer is declared
 * here — construction is synthesized initWithFrame (allocs
 * NSPathControl). placeholderAttributedString is reserved
 * (NSAttributedString). Same-file NSDeprecated is reserved
 * (clickedPathComponentCell / pathComponentCells /
 * setPathComponentCells: are API_DEPRECATED). getter=isEditable
 * emits isEditable. NSURL *URL crosses as a handle (0 = nil).
 * Nullable NSArray<NSString *> allowedTypes crosses as var so
 * null means allow-all and an empty array means allow-nothing.
 * placeholderString is a nullable NSString and crosses as var.
 * Nullable SEL doubleAction crosses as var. pathItems is
 * NSArray<NSPathControlItem *> (array of handles; set to empty,
 * never null). backgroundColor / clickedPathItem / delegate /
 * NSMenu / NSColor / NSPathControlItem cross as int handles
 * (0 = nil). NSPathStyle / NSDragOperation cross as int.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSPathControl ---- */

/*@zep-construct NS\NSPathControl initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nspathcontrol_init_with_frame(zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSPathControl isEditable(int handle) -> bool */
zend_long ns_nspathcontrol_is_editable(zval *handle);
/*@zep NS\NSPathControl setEditable(int handle, bool editable) -> void */
void ns_nspathcontrol_set_editable(zval *handle, zval *editable);

/*@zep NS\NSPathControl allowedTypes(int handle) -> var */
void ns_nspathcontrol_allowed_types(zval *return_value, zval *handle);
/*@zep NS\NSPathControl setAllowedTypes(int handle, var allowedTypes) -> void */
void ns_nspathcontrol_set_allowed_types(zval *handle, zval *allowedTypes);

/*@zep NS\NSPathControl placeholderString(int handle) -> var */
void ns_nspathcontrol_placeholder_string(zval *return_value, zval *handle);
/*@zep NS\NSPathControl setPlaceholderString(int handle, var placeholderString) -> void */
void ns_nspathcontrol_set_placeholder_string(zval *handle, zval *placeholderString);

/*@reserved NS\NSPathControl @property (nullable, copy) NSAttributedString *placeholderAttributedString — getter */
/*@reserved NS\NSPathControl @property (nullable, copy) NSAttributedString *placeholderAttributedString — setter */

/*@zep NS\NSPathControl URL(int handle) -> int */
zend_long ns_nspathcontrol_url(zval *handle);
/*@zep NS\NSPathControl setURL(int handle, int URL) -> void */
void ns_nspathcontrol_set_url(zval *handle, zval *URL);

/*@zep NS\NSPathControl doubleAction(int handle) -> var */
void ns_nspathcontrol_double_action(zval *return_value, zval *handle);
/*@zep NS\NSPathControl setDoubleAction(int handle, var doubleAction) -> void */
void ns_nspathcontrol_set_double_action(zval *handle, zval *doubleAction);

/*@zep NS\NSPathControl pathStyle(int handle) -> int */
zend_long ns_nspathcontrol_path_style(zval *handle);
/*@zep NS\NSPathControl setPathStyle(int handle, int pathStyle) -> void */
void ns_nspathcontrol_set_path_style(zval *handle, zval *pathStyle);

/*@zep NS\NSPathControl clickedPathItem(int handle) -> int */
zend_long ns_nspathcontrol_clicked_path_item(zval *handle);

/*@zep NS\NSPathControl pathItems(int handle) -> array */
void ns_nspathcontrol_path_items(zval *return_value, zval *handle);
/*@zep NS\NSPathControl setPathItems(int handle, array pathItems) -> void */
void ns_nspathcontrol_set_path_items(zval *handle, zval *pathItems);

/*@zep NS\NSPathControl backgroundColor(int handle) -> int */
zend_long ns_nspathcontrol_background_color(zval *handle);
/*@zep NS\NSPathControl setBackgroundColor(int handle, int backgroundColor) -> void */
void ns_nspathcontrol_set_background_color(zval *handle, zval *backgroundColor);

/*@zep NS\NSPathControl delegate(int handle) -> int */
zend_long ns_nspathcontrol_delegate(zval *handle);
/*@zep NS\NSPathControl setDelegate(int handle, int delegate) -> void */
void ns_nspathcontrol_set_delegate(zval *handle, zval *delegate);

/*@zep NS\NSPathControl setDraggingSourceOperationMaskForLocal(int handle, int mask, bool isLocal) -> void */
void ns_nspathcontrol_set_dragging_source_operation_mask_for_local(zval *handle, zval *mask, zval *isLocal);

/*@zep NS\NSPathControl menu(int handle) -> int */
zend_long ns_nspathcontrol_menu(zval *handle);
/*@zep NS\NSPathControl setMenu(int handle, int menu) -> void */
void ns_nspathcontrol_set_menu(zval *handle, zval *menu);

/* ---- NSDeprecated ---- */

/*@reserved NS\NSPathControl - (nullable NSPathComponentCell *)clickedPathComponentCell API_DEPRECATED */
/*@reserved NS\NSPathControl - (NSArray<NSPathComponentCell *> *)pathComponentCells API_DEPRECATED */
/*@reserved NS\NSPathControl - (void)setPathComponentCells:(NSArray<NSPathComponentCell *> *)cells API_DEPRECATED */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PATHCONTROL_H */
