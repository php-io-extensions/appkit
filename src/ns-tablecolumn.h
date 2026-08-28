#ifndef PHP_APPKIT_NS_TABLECOLUMN_H
#define PHP_APPKIT_NS_TABLECOLUMN_H

/*
 * Faithful 1:1 binding of AppKit NSTableColumn.h. Every member of
 * the class (base interface + same-file NSDeprecated category) is
 * either bound or reserved. Nothing is omitted. Adopted NSCoding
 * and NSUserInterfaceItemIdentification are not extra class members
 * beyond what this header redeclares. The
 * NSTableColumnResizingOptions typedef is not a class member.
 * Live construction is initWithIdentifier: (alloc+init glue).
 * initWithCoder: is reserved (NSCoder). setResizable: and
 * isResizable are API_DEPRECATED and reserved. dataCell and
 * dataCellForRow: are comment-only soft-deprecated (no
 * API_DEPRECATED) and stay bound. Inherited NSObject members stay
 * on that class. identifier is NSUserInterfaceItemIdentifier and
 * crosses as string. title is a non-null NSString (string).
 * headerToolTip is a nullable NSString (var). tableView /
 * headerCell / sortDescriptorPrototype / dataCell cross as int
 * handles (0 = nil). width / minWidth / maxWidth are CGFloat
 * (double). resizingMask is NSTableColumnResizingOptions (int).
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Construction ---- */

/*@zep NS\NSTableColumn initWithIdentifier(string identifier) -> int */
zend_long ns_nstablecolumn_init_with_identifier(zval *identifier);
/*@reserved NS\NSTableColumn - (instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER; */

/* ---- Identity / table / width ---- */

/*@zep NS\NSTableColumn identifier(int handle) -> string */
void ns_nstablecolumn_identifier(zval *return_value, zval *handle);
/*@zep NS\NSTableColumn setIdentifier(int handle, string identifier) -> void */
void ns_nstablecolumn_set_identifier(zval *handle, zval *identifier);

/*@zep NS\NSTableColumn tableView(int handle) -> int */
zend_long ns_nstablecolumn_table_view(zval *handle);
/*@zep NS\NSTableColumn setTableView(int handle, int tableView) -> void */
void ns_nstablecolumn_set_table_view(zval *handle, zval *tableView);

/*@zep NS\NSTableColumn width(int handle) -> double */
double ns_nstablecolumn_width(zval *handle);
/*@zep NS\NSTableColumn setWidth(int handle, double width) -> void */
void ns_nstablecolumn_set_width(zval *handle, zval *width);

/*@zep NS\NSTableColumn minWidth(int handle) -> double */
double ns_nstablecolumn_min_width(zval *handle);
/*@zep NS\NSTableColumn setMinWidth(int handle, double minWidth) -> void */
void ns_nstablecolumn_set_min_width(zval *handle, zval *minWidth);

/*@zep NS\NSTableColumn maxWidth(int handle) -> double */
double ns_nstablecolumn_max_width(zval *handle);
/*@zep NS\NSTableColumn setMaxWidth(int handle, double maxWidth) -> void */
void ns_nstablecolumn_set_max_width(zval *handle, zval *maxWidth);

/*@zep NS\NSTableColumn title(int handle) -> string */
void ns_nstablecolumn_title(zval *return_value, zval *handle);
/*@zep NS\NSTableColumn setTitle(int handle, string title) -> void */
void ns_nstablecolumn_set_title(zval *handle, zval *title);

/*@zep NS\NSTableColumn headerCell(int handle) -> int */
zend_long ns_nstablecolumn_header_cell(zval *handle);
/*@zep NS\NSTableColumn setHeaderCell(int handle, int headerCell) -> void */
void ns_nstablecolumn_set_header_cell(zval *handle, zval *headerCell);

/*@zep NS\NSTableColumn isEditable(int handle) -> bool */
zend_long ns_nstablecolumn_is_editable(zval *handle);
/*@zep NS\NSTableColumn setEditable(int handle, bool editable) -> void */
void ns_nstablecolumn_set_editable(zval *handle, zval *editable);

/*@zep NS\NSTableColumn sizeToFit(int handle) -> void */
void ns_nstablecolumn_size_to_fit(zval *handle);

/*@zep NS\NSTableColumn sortDescriptorPrototype(int handle) -> int */
zend_long ns_nstablecolumn_sort_descriptor_prototype(zval *handle);
/*@zep NS\NSTableColumn setSortDescriptorPrototype(int handle, int sortDescriptorPrototype) -> void */
void ns_nstablecolumn_set_sort_descriptor_prototype(zval *handle, zval *sortDescriptorPrototype);

/*@zep NS\NSTableColumn resizingMask(int handle) -> int */
zend_long ns_nstablecolumn_resizing_mask(zval *handle);
/*@zep NS\NSTableColumn setResizingMask(int handle, int resizingMask) -> void */
void ns_nstablecolumn_set_resizing_mask(zval *handle, zval *resizingMask);

/*@zep NS\NSTableColumn headerToolTip(int handle) -> var */
void ns_nstablecolumn_header_tool_tip(zval *return_value, zval *handle);
/*@zep NS\NSTableColumn setHeaderToolTip(int handle, var headerToolTip) -> void */
void ns_nstablecolumn_set_header_tool_tip(zval *handle, zval *headerToolTip);

/*@zep NS\NSTableColumn isHidden(int handle) -> bool */
zend_long ns_nstablecolumn_is_hidden(zval *handle);
/*@zep NS\NSTableColumn setHidden(int handle, bool hidden) -> void */
void ns_nstablecolumn_set_hidden(zval *handle, zval *hidden);

/* ---- NSDeprecated ---- */

/*@reserved NS\NSTableColumn - (void)setResizable:(BOOL)flag API_DEPRECATED */
/*@reserved NS\NSTableColumn - (BOOL)isResizable API_DEPRECATED */
/*@reserved NS\NSTableColumn @property (strong) id dataCell — cell-based NSTableView deprecated in 10.10 */
/*@reserved NS\NSTableColumn - (void)setDataCell:(id)dataCell — cell-based NSTableView deprecated in 10.10 */
/*@reserved NS\NSTableColumn - (id)dataCellForRow:(NSInteger)row — cell-based NSTableView deprecated in 10.10 */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TABLECOLUMN_H */
