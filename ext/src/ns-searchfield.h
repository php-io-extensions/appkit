#ifndef PHP_APPKIT_NS_SEARCHFIELD_H
#define PHP_APPKIT_NS_SEARCHFIELD_H

/*
 * Faithful 1:1 binding of AppKit NSSearchField.h. Every member of
 * the class (base interface + same-file NSSearchField_Deprecated
 * category) is either bound or reserved. Nothing is omitted.
 * Protocol NSSearchFieldDelegate is not a class member (delegate
 * methods belong to Bridge). The NSSearchFieldRecentsAutosaveName
 * string typedef is not a class member. Inherited NSTextField /
 * NSControl / NSView members stay on those classes. The
 * redeclared delegate property binds here. No designated
 * initializer is declared here — construction is synthesized
 * initWithFrame (allocs NSSearchField). Same-file
 * NSSearchField_Deprecated is reserved
 * (rectForSearchTextWhenCentered: /
 * rectForSearchButtonWhenCentered: /
 * rectForCancelButtonWhenCentered: and
 * centersPlaceholder getter+setter are API_DEPRECATED).
 * Readonly NSRect searchTextBounds / searchButtonBounds /
 * cancelButtonBounds follow the NSRect convention (assoc array
 * out). recentSearches is NSArray<NSString *> (array of strings).
 * recentsAutosaveName is a nullable
 * NSSearchFieldRecentsAutosaveName and crosses as var.
 * searchMenuTemplate is a nullable NSMenu handle. BOOL
 * sendsWholeSearchString / sendsSearchStringImmediately have no
 * getter=isX and emit as those names. maximumRecents is
 * NSInteger (int).
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSSearchField ---- */

/*@zep-construct NS\NSSearchField initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nssearchfield_init_with_frame(zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSSearchField searchTextBounds(int handle) -> array */
void ns_nssearchfield_search_text_bounds(zval *return_value, zval *handle);
/*@zep NS\NSSearchField searchButtonBounds(int handle) -> array */
void ns_nssearchfield_search_button_bounds(zval *return_value, zval *handle);
/*@zep NS\NSSearchField cancelButtonBounds(int handle) -> array */
void ns_nssearchfield_cancel_button_bounds(zval *return_value, zval *handle);

/*@zep NS\NSSearchField recentSearches(int handle) -> array */
void ns_nssearchfield_recent_searches(zval *return_value, zval *handle);
/*@zep NS\NSSearchField setRecentSearches(int handle, array recentSearches) -> void */
void ns_nssearchfield_set_recent_searches(zval *handle, zval *recentSearches);

/*@zep NS\NSSearchField recentsAutosaveName(int handle) -> var */
void ns_nssearchfield_recents_autosave_name(zval *return_value, zval *handle);
/*@zep NS\NSSearchField setRecentsAutosaveName(int handle, var recentsAutosaveName) -> void */
void ns_nssearchfield_set_recents_autosave_name(zval *handle, zval *recentsAutosaveName);

/*@zep NS\NSSearchField searchMenuTemplate(int handle) -> int */
zend_long ns_nssearchfield_search_menu_template(zval *handle);
/*@zep NS\NSSearchField setSearchMenuTemplate(int handle, int searchMenuTemplate) -> void */
void ns_nssearchfield_set_search_menu_template(zval *handle, zval *searchMenuTemplate);

/*@zep NS\NSSearchField sendsWholeSearchString(int handle) -> bool */
zend_long ns_nssearchfield_sends_whole_search_string(zval *handle);
/*@zep NS\NSSearchField setSendsWholeSearchString(int handle, bool sendsWholeSearchString) -> void */
void ns_nssearchfield_set_sends_whole_search_string(zval *handle, zval *sendsWholeSearchString);

/*@zep NS\NSSearchField maximumRecents(int handle) -> int */
zend_long ns_nssearchfield_maximum_recents(zval *handle);
/*@zep NS\NSSearchField setMaximumRecents(int handle, int maximumRecents) -> void */
void ns_nssearchfield_set_maximum_recents(zval *handle, zval *maximumRecents);

/*@zep NS\NSSearchField sendsSearchStringImmediately(int handle) -> bool */
zend_long ns_nssearchfield_sends_search_string_immediately(zval *handle);
/*@zep NS\NSSearchField setSendsSearchStringImmediately(int handle, bool sendsSearchStringImmediately) -> void */
void ns_nssearchfield_set_sends_search_string_immediately(zval *handle, zval *sendsSearchStringImmediately);

/*@zep NS\NSSearchField delegate(int handle) -> int */
zend_long ns_nssearchfield_delegate(zval *handle);
/*@zep NS\NSSearchField setDelegate(int handle, int delegate) -> void */
void ns_nssearchfield_set_delegate(zval *handle, zval *delegate);

/* ---- NSSearchField_Deprecated ---- */

/*@reserved NS\NSSearchField - (NSRect)rectForSearchTextWhenCentered:(BOOL)isCentered API_DEPRECATED */
/*@reserved NS\NSSearchField - (NSRect)rectForSearchButtonWhenCentered:(BOOL)isCentered API_DEPRECATED */
/*@reserved NS\NSSearchField - (NSRect)rectForCancelButtonWhenCentered:(BOOL)isCentered API_DEPRECATED */
/*@reserved NS\NSSearchField @property BOOL centersPlaceholder API_DEPRECATED — getter */
/*@reserved NS\NSSearchField @property BOOL centersPlaceholder API_DEPRECATED — setter */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SEARCHFIELD_H */
