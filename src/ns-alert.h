#ifndef PHP_APPKIT_NS_ALERT_H
#define PHP_APPKIT_NS_ALERT_H

/*
 * Faithful 1:1 binding of AppKit NSAlert.h. Every member of the
 * class (base interface + same-file NSAlertDeprecated category) is
 * either bound or reserved. Nothing is omitted. The NSAlertStyle
 * typedef, the NSModalResponse button-return static consts, and
 * the deprecated NSWarningAlertStyle / NSInformationalAlertStyle /
 * NSCriticalAlertStyle aliases are not class members. Protocol
 * NSAlertDelegate is not a class member (delegate methods belong
 * to Bridge). This header declares no initializer — construction
 * is synthesized init (allocs NSAlert) plus the alertWithError:
 * class factory. Inherited NSObject members stay on that class.
 * beginSheetModalForWindow:completionHandler: is reserved (block);
 * runModal is the usable presentation path. The deprecated
 * alertWithMessageText:… and
 * beginSheetModalForWindow:modalDelegate:didEndSelector:contextInfo:
 * are API_DEPRECATED and reserved. messageText / informativeText
 * are non-null NSString and cross as string. helpAnchor is a
 * nullable NSHelpAnchorName (NSString typedef) and crosses as var.
 * icon is null_resettable NSImage and crosses as an int handle
 * (0 = nil restores the app icon). buttons is NSArray<NSButton *>
 * and crosses as an array of handles. NSError * / NSImage / NSView
 * / NSWindow / NSButton / id<NSAlertDelegate> cross as int handles
 * (0 = nil). NSAlertStyle / NSModalResponse cross as int. BOOL
 * showsHelp / showsSuppressionButton have no getter=is prefix.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- construction glue ---- */

/*@zep-construct NS\NSAlert init() -> int */
zend_long ns_nsalert_init(void);

/* ---- Creating Alerts ---- */

/*@zep NS\NSAlert alertWithError(int error) -> int */
zend_long ns_nsalert_alert_with_error(zval *error);

/* ---- Accessing Alert Text ---- */

/*@zep NS\NSAlert messageText(int handle) -> string */
void ns_nsalert_message_text(zval *return_value, zval *handle);
/*@zep NS\NSAlert setMessageText(int handle, string messageText) -> void */
void ns_nsalert_set_message_text(zval *handle, zval *messageText);

/*@zep NS\NSAlert informativeText(int handle) -> string */
void ns_nsalert_informative_text(zval *return_value, zval *handle);
/*@zep NS\NSAlert setInformativeText(int handle, string informativeText) -> void */
void ns_nsalert_set_informative_text(zval *handle, zval *informativeText);

/* ---- Accessing a Custom Alert Icon ---- */

/*@zep NS\NSAlert icon(int handle) -> int */
zend_long ns_nsalert_icon(zval *handle);
/*@zep NS\NSAlert setIcon(int handle, int icon) -> void */
void ns_nsalert_set_icon(zval *handle, zval *icon);

/* ---- Accessing Alert Response Buttons ---- */

/*@zep NS\NSAlert addButtonWithTitle(int handle, string title) -> int */
zend_long ns_nsalert_add_button_with_title(zval *handle, zval *title);

/*@zep NS\NSAlert buttons(int handle) -> array */
void ns_nsalert_buttons(zval *return_value, zval *handle);

/* ---- Configuring Alerts ---- */

/*@zep NS\NSAlert alertStyle(int handle) -> int */
zend_long ns_nsalert_alert_style(zval *handle);
/*@zep NS\NSAlert setAlertStyle(int handle, int alertStyle) -> void */
void ns_nsalert_set_alert_style(zval *handle, zval *alertStyle);

/*@zep NS\NSAlert showsHelp(int handle) -> bool */
zend_long ns_nsalert_shows_help(zval *handle);
/*@zep NS\NSAlert setShowsHelp(int handle, bool showsHelp) -> void */
void ns_nsalert_set_shows_help(zval *handle, zval *showsHelp);

/*@zep NS\NSAlert helpAnchor(int handle) -> var */
void ns_nsalert_help_anchor(zval *return_value, zval *handle);
/*@zep NS\NSAlert setHelpAnchor(int handle, var helpAnchor) -> void */
void ns_nsalert_set_help_anchor(zval *handle, zval *helpAnchor);

/*@zep NS\NSAlert delegate(int handle) -> int */
zend_long ns_nsalert_delegate(zval *handle);
/*@zep NS\NSAlert setDelegate(int handle, int delegate) -> void */
void ns_nsalert_set_delegate(zval *handle, zval *delegate);

/*@zep NS\NSAlert accessoryView(int handle) -> int */
zend_long ns_nsalert_accessory_view(zval *handle);
/*@zep NS\NSAlert setAccessoryView(int handle, int accessoryView) -> void */
void ns_nsalert_set_accessory_view(zval *handle, zval *accessoryView);

/*@zep NS\NSAlert layout(int handle) -> void */
void ns_nsalert_layout(zval *handle);

/* ---- Displaying Alerts ---- */

/*@zep NS\NSAlert runModal(int handle) -> int */
zend_long ns_nsalert_run_modal(zval *handle);

/*@zep NS\NSAlert showsSuppressionButton(int handle) -> bool */
zend_long ns_nsalert_shows_suppression_button(zval *handle);
/*@zep NS\NSAlert setShowsSuppressionButton(int handle, bool showsSuppressionButton) -> void */
void ns_nsalert_set_shows_suppression_button(zval *handle, zval *showsSuppressionButton);

/*@zep NS\NSAlert suppressionButton(int handle) -> int */
zend_long ns_nsalert_suppression_button(zval *handle);

/*@reserved NS\NSAlert - (void)beginSheetModalForWindow:(NSWindow *)sheetWindow completionHandler:(void (^ _Nullable)(NSModalResponse returnCode))handler — block */

/* ---- Getting Alert Windows ---- */

/*@zep NS\NSAlert window(int handle) -> int */
zend_long ns_nsalert_window(zval *handle);

/* ---- NSAlertDeprecated ---- */

/*@reserved NS\NSAlert + (NSAlert *)alertWithMessageText:(nullable NSString *)message defaultButton:(nullable NSString *)defaultButton alternateButton:(nullable NSString *)alternateButton otherButton:(nullable NSString *)otherButton informativeTextWithFormat:(NSString *)format, ... API_DEPRECATED */
/*@reserved NS\NSAlert - (void)beginSheetModalForWindow:(NSWindow *)window modalDelegate:(nullable id)delegate didEndSelector:(nullable SEL)didEndSelector contextInfo:(nullable void *)contextInfo API_DEPRECATED */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_ALERT_H */
