#ifndef PHP_APPKIT_NS_OPENPANEL_H
#define PHP_APPKIT_NS_OPENPANEL_H

/*
 * Faithful 1:1 binding of AppKit NSOpenPanel.h. Every member of
 * the class (base interface + same-file InheritedAndUnavailable
 * and NSDeprecated categories) is either bound or reserved.
 * Nothing is omitted. Inherited NSSavePanel / NSPanel / NSWindow
 * members stay on those classes. Protocol NSOpenSavePanelDelegate
 * is not a class member (delegate methods belong to Bridge).
 * Construction is the openPanel class factory (not a singleton;
 * each call allocs a new panel). This header declares no
 * initializer. Completion-handler presentation methods live on
 * NSSavePanel and stay reserved there; runModal on NSSavePanel
 * is the usable path. Same-file InheritedAndUnavailable
 * redeclares showsContentTypes as NS_UNAVAILABLE and is reserved
 * (getter + setter). Same-file NSDeprecated is reserved
 * (filenames and the path/types-taking beginSheet / begin /
 * runModal variants are API_DEPRECATED). URLs is
 * NSArray<NSURL *> and crosses as an array of handles.
 * getter=isAccessoryViewDisclosed emits isAccessoryViewDisclosed.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Creating Panels ---- */

/*@zep NS\NSOpenPanel openPanel() -> int */
zend_long ns_nsopenpanel_open_panel(void);

/* ---- Result / configuration ---- */

/*@zep NS\NSOpenPanel URLs(int handle) -> array */
void ns_nsopenpanel_urls(zval *return_value, zval *handle);

/*@zep NS\NSOpenPanel resolvesAliases(int handle) -> bool */
zend_long ns_nsopenpanel_resolves_aliases(zval *handle);
/*@zep NS\NSOpenPanel setResolvesAliases(int handle, bool resolvesAliases) -> void */
void ns_nsopenpanel_set_resolves_aliases(zval *handle, zval *resolvesAliases);

/*@zep NS\NSOpenPanel canChooseDirectories(int handle) -> bool */
zend_long ns_nsopenpanel_can_choose_directories(zval *handle);
/*@zep NS\NSOpenPanel setCanChooseDirectories(int handle, bool canChooseDirectories) -> void */
void ns_nsopenpanel_set_can_choose_directories(zval *handle, zval *canChooseDirectories);

/*@zep NS\NSOpenPanel allowsMultipleSelection(int handle) -> bool */
zend_long ns_nsopenpanel_allows_multiple_selection(zval *handle);
/*@zep NS\NSOpenPanel setAllowsMultipleSelection(int handle, bool allowsMultipleSelection) -> void */
void ns_nsopenpanel_set_allows_multiple_selection(zval *handle, zval *allowsMultipleSelection);

/*@zep NS\NSOpenPanel canChooseFiles(int handle) -> bool */
zend_long ns_nsopenpanel_can_choose_files(zval *handle);
/*@zep NS\NSOpenPanel setCanChooseFiles(int handle, bool canChooseFiles) -> void */
void ns_nsopenpanel_set_can_choose_files(zval *handle, zval *canChooseFiles);

/*@zep NS\NSOpenPanel canResolveUbiquitousConflicts(int handle) -> bool */
zend_long ns_nsopenpanel_can_resolve_ubiquitous_conflicts(zval *handle);
/*@zep NS\NSOpenPanel setCanResolveUbiquitousConflicts(int handle, bool canResolveUbiquitousConflicts) -> void */
void ns_nsopenpanel_set_can_resolve_ubiquitous_conflicts(zval *handle, zval *canResolveUbiquitousConflicts);

/*@zep NS\NSOpenPanel canDownloadUbiquitousContents(int handle) -> bool */
zend_long ns_nsopenpanel_can_download_ubiquitous_contents(zval *handle);
/*@zep NS\NSOpenPanel setCanDownloadUbiquitousContents(int handle, bool canDownloadUbiquitousContents) -> void */
void ns_nsopenpanel_set_can_download_ubiquitous_contents(zval *handle, zval *canDownloadUbiquitousContents);

/*@zep NS\NSOpenPanel isAccessoryViewDisclosed(int handle) -> bool */
zend_long ns_nsopenpanel_is_accessory_view_disclosed(zval *handle);
/*@zep NS\NSOpenPanel setAccessoryViewDisclosed(int handle, bool accessoryViewDisclosed) -> void */
void ns_nsopenpanel_set_accessory_view_disclosed(zval *handle, zval *accessoryViewDisclosed);

/* ---- InheritedAndUnavailable ---- */

/*@reserved NS\NSOpenPanel @property BOOL showsContentTypes NS_UNAVAILABLE — getter */
/*@reserved NS\NSOpenPanel @property BOOL showsContentTypes NS_UNAVAILABLE — setter */

/* ---- NSDeprecated ---- */

/*@reserved NS\NSOpenPanel - (NSArray *)filenames API_DEPRECATED */
/*@reserved NS\NSOpenPanel - (void)beginSheetForDirectory:file:types:modalForWindow:modalDelegate:didEndSelector:contextInfo: API_DEPRECATED */
/*@reserved NS\NSOpenPanel - (void)beginForDirectory:file:types:modelessDelegate:didEndSelector:contextInfo: API_DEPRECATED */
/*@reserved NS\NSOpenPanel - (NSInteger)runModalForDirectory:(nullable NSString *)path file:(nullable NSString *)name types:(nullable NSArray *)fileTypes API_DEPRECATED */
/*@reserved NS\NSOpenPanel - (NSInteger)runModalForTypes:(nullable NSArray *)fileTypes API_DEPRECATED */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_OPENPANEL_H */
