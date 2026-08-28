#ifndef PHP_APPKIT_NS_SEARCHFIELDCELL_H
#define PHP_APPKIT_NS_SEARCHFIELDCELL_H

/*
 * Faithful 1:1 binding of AppKit NSSearchFieldCell.h. Every
 * member of the class (the single base interface; no same-file
 * categories) is either bound or reserved. initWithCoder is
 * reserved (NSCoder). initImageCell is reserved
 * (NS_UNAVAILABLE). The file-level menu-template tag static
 * consts (NSSearchFieldRecentsTitleMenuItemTag and siblings)
 * are not class members. Inherited NSTextFieldCell /
 * NSActionCell / NSCell members stay on those classes.
 * initTextCell is alloc+init construction glue. Nullable
 * NSButtonCell searchButtonCell / cancelButtonCell and
 * NSMenu searchMenuTemplate cross as handles (0 = nil).
 * searchTextRectForBounds: / searchButtonRectForBounds: /
 * cancelButtonRectForBounds: follow the NSRect convention.
 * recentSearches is null_resettable NSArray<NSString *> —
 * the getter is an array of strings and the setter takes var
 * so null resets. recentsAutosaveName is a nullable
 * NSSearchFieldRecentsAutosaveName and crosses as var. BOOL
 * sendsWholeSearchString / sendsSearchStringImmediately have
 * no getter=isX and emit as those names. maximumRecents is
 * NSInteger (int).
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSSearchFieldCell ---- */

/*@zep NS\NSSearchFieldCell initTextCell(string string_) -> int */
zend_long ns_nssearchfieldcell_init_text_cell(zval *string_);
/*@reserved NS\NSSearchFieldCell - (instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER; */
/*@reserved NS\NSSearchFieldCell - (instancetype)initImageCell:(nullable NSImage *)image NS_UNAVAILABLE; */

/*@zep NS\NSSearchFieldCell searchButtonCell(int handle) -> int */
zend_long ns_nssearchfieldcell_search_button_cell(zval *handle);
/*@zep NS\NSSearchFieldCell setSearchButtonCell(int handle, int searchButtonCell) -> void */
void ns_nssearchfieldcell_set_search_button_cell(zval *handle, zval *searchButtonCell);

/*@zep NS\NSSearchFieldCell cancelButtonCell(int handle) -> int */
zend_long ns_nssearchfieldcell_cancel_button_cell(zval *handle);
/*@zep NS\NSSearchFieldCell setCancelButtonCell(int handle, int cancelButtonCell) -> void */
void ns_nssearchfieldcell_set_cancel_button_cell(zval *handle, zval *cancelButtonCell);

/*@zep NS\NSSearchFieldCell resetSearchButtonCell(int handle) -> void */
void ns_nssearchfieldcell_reset_search_button_cell(zval *handle);
/*@zep NS\NSSearchFieldCell resetCancelButtonCell(int handle) -> void */
void ns_nssearchfieldcell_reset_cancel_button_cell(zval *handle);

/*@zep NS\NSSearchFieldCell searchTextRectForBounds(int handle, double x, double y, double width, double height) -> array */
void ns_nssearchfieldcell_search_text_rect_for_bounds(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSSearchFieldCell searchButtonRectForBounds(int handle, double x, double y, double width, double height) -> array */
void ns_nssearchfieldcell_search_button_rect_for_bounds(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSSearchFieldCell cancelButtonRectForBounds(int handle, double x, double y, double width, double height) -> array */
void ns_nssearchfieldcell_cancel_button_rect_for_bounds(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSSearchFieldCell searchMenuTemplate(int handle) -> int */
zend_long ns_nssearchfieldcell_search_menu_template(zval *handle);
/*@zep NS\NSSearchFieldCell setSearchMenuTemplate(int handle, int searchMenuTemplate) -> void */
void ns_nssearchfieldcell_set_search_menu_template(zval *handle, zval *searchMenuTemplate);

/*@zep NS\NSSearchFieldCell sendsWholeSearchString(int handle) -> bool */
zend_long ns_nssearchfieldcell_sends_whole_search_string(zval *handle);
/*@zep NS\NSSearchFieldCell setSendsWholeSearchString(int handle, bool sendsWholeSearchString) -> void */
void ns_nssearchfieldcell_set_sends_whole_search_string(zval *handle, zval *sendsWholeSearchString);

/*@zep NS\NSSearchFieldCell maximumRecents(int handle) -> int */
zend_long ns_nssearchfieldcell_maximum_recents(zval *handle);
/*@zep NS\NSSearchFieldCell setMaximumRecents(int handle, int maximumRecents) -> void */
void ns_nssearchfieldcell_set_maximum_recents(zval *handle, zval *maximumRecents);

/*@zep NS\NSSearchFieldCell recentSearches(int handle) -> array */
void ns_nssearchfieldcell_recent_searches(zval *return_value, zval *handle);
/*@zep NS\NSSearchFieldCell setRecentSearches(int handle, var recentSearches) -> void */
void ns_nssearchfieldcell_set_recent_searches(zval *handle, zval *recentSearches);

/*@zep NS\NSSearchFieldCell recentsAutosaveName(int handle) -> var */
void ns_nssearchfieldcell_recents_autosave_name(zval *return_value, zval *handle);
/*@zep NS\NSSearchFieldCell setRecentsAutosaveName(int handle, var recentsAutosaveName) -> void */
void ns_nssearchfieldcell_set_recents_autosave_name(zval *handle, zval *recentsAutosaveName);

/*@zep NS\NSSearchFieldCell sendsSearchStringImmediately(int handle) -> bool */
zend_long ns_nssearchfieldcell_sends_search_string_immediately(zval *handle);
/*@zep NS\NSSearchFieldCell setSendsSearchStringImmediately(int handle, bool sendsSearchStringImmediately) -> void */
void ns_nssearchfieldcell_set_sends_search_string_immediately(zval *handle, zval *sendsSearchStringImmediately);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SEARCHFIELDCELL_H */
