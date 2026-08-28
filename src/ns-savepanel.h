#ifndef PHP_APPKIT_NS_SAVEPANEL_H
#define PHP_APPKIT_NS_SAVEPANEL_H

/*
 * Faithful 1:1 binding of AppKit NSSavePanel.h. Every member of
 * the class (base interface + same-file NSDeprecated category) is
 * either bound or reserved. Nothing is omitted. Protocol
 * NSOpenSavePanelDelegate is not a class member (delegate methods
 * belong to Bridge). NSObject(NSSavePanelDelegateDeprecated) binds
 * on NSObject, not here. The NSFileHandlingPanelCancelButton /
 * NSFileHandlingPanelOKButton enum aliases are not class members.
 * Inherited NSPanel / NSWindow members stay on those classes.
 * Construction is the savePanel class factory (not a singleton;
 * each call allocs a new panel). This header declares no
 * initializer. beginSheetModalForWindow:completionHandler: and
 * beginWithCompletionHandler: are reserved (block); runModal is
 * the usable presentation path. Same-file NSDeprecated is reserved
 * (filename / directory / requiredFileType / allowedFileTypes and
 * the path-taking beginSheet / runModal variants are
 * API_DEPRECATED). NSURL *URL / directoryURL and UTType *
 * currentContentType / NSArray<UTType *> allowedContentTypes
 * cross as handles (0 = nil) or an array of handles. identifier
 * is a nullable NSUserInterfaceItemIdentifier (NSString typedef)
 * and crosses as var. prompt / title / nameFieldLabel / message
 * are null_resettable NSString and cross as string.
 * nameFieldStringValue is a non-null NSString (string). tagNames
 * is NSArray<NSString *> (array of strings). accessoryView /
 * delegate / NSView / id<NSOpenSavePanelDelegate> cross as int
 * handles (0 = nil). NSModalResponse from runModal crosses as
 * int. getter=isExpanded / getter=isExtensionHidden emit
 * isExpanded / isExtensionHidden. IBAction ok: / cancel: are
 * void; sender is a nullable id handle.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Creating Panels ---- */

/*@zep NS\NSSavePanel savePanel() -> int */
zend_long ns_nssavepanel_save_panel(void);

/* ---- Result Properties ---- */

/*@zep NS\NSSavePanel URL(int handle) -> int */
zend_long ns_nssavepanel_url(zval *handle);

/* ---- Configuration Properties ---- */

/*@zep NS\NSSavePanel identifier(int handle) -> var */
void ns_nssavepanel_identifier(zval *return_value, zval *handle);
/*@zep NS\NSSavePanel setIdentifier(int handle, var identifier) -> void */
void ns_nssavepanel_set_identifier(zval *handle, zval *identifier);

/*@zep NS\NSSavePanel directoryURL(int handle) -> int */
zend_long ns_nssavepanel_directory_url(zval *handle);
/*@zep NS\NSSavePanel setDirectoryURL(int handle, int directoryURL) -> void */
void ns_nssavepanel_set_directory_url(zval *handle, zval *directoryURL);

/*@zep NS\NSSavePanel allowedContentTypes(int handle) -> array */
void ns_nssavepanel_allowed_content_types(zval *return_value, zval *handle);
/*@zep NS\NSSavePanel setAllowedContentTypes(int handle, array allowedContentTypes) -> void */
void ns_nssavepanel_set_allowed_content_types(zval *handle, zval *allowedContentTypes);

/*@zep NS\NSSavePanel allowsOtherFileTypes(int handle) -> bool */
zend_long ns_nssavepanel_allows_other_file_types(zval *handle);
/*@zep NS\NSSavePanel setAllowsOtherFileTypes(int handle, bool allowsOtherFileTypes) -> void */
void ns_nssavepanel_set_allows_other_file_types(zval *handle, zval *allowsOtherFileTypes);

/*@zep NS\NSSavePanel currentContentType(int handle) -> int */
zend_long ns_nssavepanel_current_content_type(zval *handle);
/*@zep NS\NSSavePanel setCurrentContentType(int handle, int currentContentType) -> void */
void ns_nssavepanel_set_current_content_type(zval *handle, zval *currentContentType);

/*@zep NS\NSSavePanel accessoryView(int handle) -> int */
zend_long ns_nssavepanel_accessory_view(zval *handle);
/*@zep NS\NSSavePanel setAccessoryView(int handle, int accessoryView) -> void */
void ns_nssavepanel_set_accessory_view(zval *handle, zval *accessoryView);

/*@zep NS\NSSavePanel delegate(int handle) -> int */
zend_long ns_nssavepanel_delegate(zval *handle);
/*@zep NS\NSSavePanel setDelegate(int handle, int delegate) -> void */
void ns_nssavepanel_set_delegate(zval *handle, zval *delegate);

/*@zep NS\NSSavePanel isExpanded(int handle) -> bool */
zend_long ns_nssavepanel_is_expanded(zval *handle);

/*@zep NS\NSSavePanel canCreateDirectories(int handle) -> bool */
zend_long ns_nssavepanel_can_create_directories(zval *handle);
/*@zep NS\NSSavePanel setCanCreateDirectories(int handle, bool canCreateDirectories) -> void */
void ns_nssavepanel_set_can_create_directories(zval *handle, zval *canCreateDirectories);

/*@zep NS\NSSavePanel canSelectHiddenExtension(int handle) -> bool */
zend_long ns_nssavepanel_can_select_hidden_extension(zval *handle);
/*@zep NS\NSSavePanel setCanSelectHiddenExtension(int handle, bool canSelectHiddenExtension) -> void */
void ns_nssavepanel_set_can_select_hidden_extension(zval *handle, zval *canSelectHiddenExtension);

/*@zep NS\NSSavePanel isExtensionHidden(int handle) -> bool */
zend_long ns_nssavepanel_is_extension_hidden(zval *handle);
/*@zep NS\NSSavePanel setExtensionHidden(int handle, bool extensionHidden) -> void */
void ns_nssavepanel_set_extension_hidden(zval *handle, zval *extensionHidden);

/*@zep NS\NSSavePanel treatsFilePackagesAsDirectories(int handle) -> bool */
zend_long ns_nssavepanel_treats_file_packages_as_directories(zval *handle);
/*@zep NS\NSSavePanel setTreatsFilePackagesAsDirectories(int handle, bool treatsFilePackagesAsDirectories) -> void */
void ns_nssavepanel_set_treats_file_packages_as_directories(zval *handle, zval *treatsFilePackagesAsDirectories);

/*@zep NS\NSSavePanel prompt(int handle) -> string */
void ns_nssavepanel_prompt(zval *return_value, zval *handle);
/*@zep NS\NSSavePanel setPrompt(int handle, string prompt) -> void */
void ns_nssavepanel_set_prompt(zval *handle, zval *prompt);

/*@zep NS\NSSavePanel title(int handle) -> string */
void ns_nssavepanel_title(zval *return_value, zval *handle);
/*@zep NS\NSSavePanel setTitle(int handle, string title) -> void */
void ns_nssavepanel_set_title(zval *handle, zval *title);

/*@zep NS\NSSavePanel nameFieldLabel(int handle) -> string */
void ns_nssavepanel_name_field_label(zval *return_value, zval *handle);
/*@zep NS\NSSavePanel setNameFieldLabel(int handle, string nameFieldLabel) -> void */
void ns_nssavepanel_set_name_field_label(zval *handle, zval *nameFieldLabel);

/*@zep NS\NSSavePanel nameFieldStringValue(int handle) -> string */
void ns_nssavepanel_name_field_string_value(zval *return_value, zval *handle);
/*@zep NS\NSSavePanel setNameFieldStringValue(int handle, string nameFieldStringValue) -> void */
void ns_nssavepanel_set_name_field_string_value(zval *handle, zval *nameFieldStringValue);

/*@zep NS\NSSavePanel message(int handle) -> string */
void ns_nssavepanel_message(zval *return_value, zval *handle);
/*@zep NS\NSSavePanel setMessage(int handle, string message) -> void */
void ns_nssavepanel_set_message(zval *handle, zval *message);

/*@zep NS\NSSavePanel showsHiddenFiles(int handle) -> bool */
zend_long ns_nssavepanel_shows_hidden_files(zval *handle);
/*@zep NS\NSSavePanel setShowsHiddenFiles(int handle, bool showsHiddenFiles) -> void */
void ns_nssavepanel_set_shows_hidden_files(zval *handle, zval *showsHiddenFiles);

/*@zep NS\NSSavePanel showsTagField(int handle) -> bool */
zend_long ns_nssavepanel_shows_tag_field(zval *handle);
/*@zep NS\NSSavePanel setShowsTagField(int handle, bool showsTagField) -> void */
void ns_nssavepanel_set_shows_tag_field(zval *handle, zval *showsTagField);

/*@zep NS\NSSavePanel tagNames(int handle) -> array */
void ns_nssavepanel_tag_names(zval *return_value, zval *handle);
/*@zep NS\NSSavePanel setTagNames(int handle, array tagNames) -> void */
void ns_nssavepanel_set_tag_names(zval *handle, zval *tagNames);

/*@zep NS\NSSavePanel showsContentTypes(int handle) -> bool */
zend_long ns_nssavepanel_shows_content_types(zval *handle);
/*@zep NS\NSSavePanel setShowsContentTypes(int handle, bool showsContentTypes) -> void */
void ns_nssavepanel_set_shows_content_types(zval *handle, zval *showsContentTypes);

/*@zep NS\NSSavePanel validateVisibleColumns(int handle) -> void */
void ns_nssavepanel_validate_visible_columns(zval *handle);

/* ---- Actions ---- */

/*@zep NS\NSSavePanel ok(int handle, int sender) -> void */
void ns_nssavepanel_ok(zval *handle, zval *sender);

/*@zep NS\NSSavePanel cancel(int handle, int sender) -> void */
void ns_nssavepanel_cancel(zval *handle, zval *sender);

/* ---- Displaying/Showing ---- */

/*@reserved NS\NSSavePanel - (void)beginSheetModalForWindow:(NSWindow *)window completionHandler:(void (^)(NSModalResponse result))handler — block */
/*@reserved NS\NSSavePanel - (void)beginWithCompletionHandler:(void (^)(NSModalResponse result))handler — block */

/*@zep NS\NSSavePanel runModal(int handle) -> int */
zend_long ns_nssavepanel_run_modal(zval *handle);

/* ---- NSDeprecated ---- */

/*@reserved NS\NSSavePanel - (NSString *)filename API_DEPRECATED */
/*@reserved NS\NSSavePanel - (NSString *)directory API_DEPRECATED */
/*@reserved NS\NSSavePanel - (void)setDirectory:(nullable NSString *)path API_DEPRECATED */
/*@reserved NS\NSSavePanel - (nullable NSString *)requiredFileType API_DEPRECATED */
/*@reserved NS\NSSavePanel - (void)setRequiredFileType:(nullable NSString *)type API_DEPRECATED */
/*@reserved NS\NSSavePanel - (void)beginSheetForDirectory:file:modalForWindow:modalDelegate:didEndSelector:contextInfo: API_DEPRECATED */
/*@reserved NS\NSSavePanel - (NSInteger)runModalForDirectory:(nullable NSString *)path file:(nullable NSString *)name API_DEPRECATED */
/*@reserved NS\NSSavePanel - (IBAction)selectText:(nullable id)sender API_DEPRECATED */
/*@reserved NS\NSSavePanel @property (nullable, copy) NSArray<NSString *> *allowedFileTypes API_DEPRECATED — getter */
/*@reserved NS\NSSavePanel @property (nullable, copy) NSArray<NSString *> *allowedFileTypes API_DEPRECATED — setter */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SAVEPANEL_H */
