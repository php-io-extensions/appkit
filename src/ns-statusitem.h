#ifndef PHP_APPKIT_NS_STATUSITEM_H
#define PHP_APPKIT_NS_STATUSITEM_H

/*
 * Faithful 1:1 binding of AppKit NSStatusItem.h. Every member of
 * the class (base interface + same-file NSStatusItemDeprecated
 * category) is either bound or reserved. Nothing is omitted. The
 * NSStatusItemBehavior options typedef and the
 * NSStatusItemAutosaveName string typedef are not class members.
 * Inherited NSObject members stay on that class. Items are
 * obtained from NSStatusBar statusItemWithLength:; this header
 * declares no initializer — construction is synthesized init
 * (allocs NSStatusItem). Same-file NSStatusItemDeprecated is
 * reserved (action / doubleAction / target / title /
 * attributedTitle / image / alternateImage / enabled /
 * highlightMode / toolTip / view each as getter+setter;
 * sendActionOn:; drawStatusBarBackgroundInRect:withHighlight:;
 * popUpStatusItemMenu: are API_DEPRECATED). statusBar / button
 * are readonly and cross as int handles (0 = nil). menu is a
 * nullable NSMenu handle. length is CGFloat (double).
 * NSStatusItemBehavior crosses as int. getter=isVisible emits
 * isVisible. autosaveName is a null_resettable
 * NSStatusItemAutosaveName and crosses as var so null resets
 * the automatically chosen name.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- construction glue ---- */

/*@zep-construct NS\NSStatusItem init() -> int */
zend_long ns_nsstatusitem_init(void);

/* ---- Status item ---- */

/*@zep NS\NSStatusItem statusBar(int handle) -> int */
zend_long ns_nsstatusitem_status_bar(zval *handle);

/*@zep NS\NSStatusItem length(int handle) -> double */
double ns_nsstatusitem_length(zval *handle);
/*@zep NS\NSStatusItem setLength(int handle, double length) -> void */
void ns_nsstatusitem_set_length(zval *handle, zval *length);

/*@zep NS\NSStatusItem menu(int handle) -> int */
zend_long ns_nsstatusitem_menu(zval *handle);
/*@zep NS\NSStatusItem setMenu(int handle, int menu) -> void */
void ns_nsstatusitem_set_menu(zval *handle, zval *menu);

/*@zep NS\NSStatusItem button(int handle) -> int */
zend_long ns_nsstatusitem_button(zval *handle);

/*@zep NS\NSStatusItem behavior(int handle) -> int */
zend_long ns_nsstatusitem_behavior(zval *handle);
/*@zep NS\NSStatusItem setBehavior(int handle, int behavior) -> void */
void ns_nsstatusitem_set_behavior(zval *handle, zval *behavior);

/*@zep NS\NSStatusItem isVisible(int handle) -> bool */
zend_long ns_nsstatusitem_is_visible(zval *handle);
/*@zep NS\NSStatusItem setVisible(int handle, bool visible) -> void */
void ns_nsstatusitem_set_visible(zval *handle, zval *visible);

/*@zep NS\NSStatusItem autosaveName(int handle) -> var */
void ns_nsstatusitem_autosave_name(zval *return_value, zval *handle);
/*@zep NS\NSStatusItem setAutosaveName(int handle, var autosaveName) -> void */
void ns_nsstatusitem_set_autosave_name(zval *handle, zval *autosaveName);

/* ---- NSStatusItemDeprecated ---- */

/*@reserved NS\NSStatusItem @property (nullable) SEL action API_DEPRECATED — getter */
/*@reserved NS\NSStatusItem @property (nullable) SEL action API_DEPRECATED — setter */
/*@reserved NS\NSStatusItem @property (nullable) SEL doubleAction API_DEPRECATED — getter */
/*@reserved NS\NSStatusItem @property (nullable) SEL doubleAction API_DEPRECATED — setter */
/*@reserved NS\NSStatusItem @property (nullable, weak) id target API_DEPRECATED — getter */
/*@reserved NS\NSStatusItem @property (nullable, weak) id target API_DEPRECATED — setter */
/*@reserved NS\NSStatusItem @property (nullable, copy) NSString *title API_DEPRECATED — getter */
/*@reserved NS\NSStatusItem @property (nullable, copy) NSString *title API_DEPRECATED — setter */
/*@reserved NS\NSStatusItem @property (nullable, copy) NSAttributedString *attributedTitle API_DEPRECATED — getter */
/*@reserved NS\NSStatusItem @property (nullable, copy) NSAttributedString *attributedTitle API_DEPRECATED — setter */
/*@reserved NS\NSStatusItem @property (nullable, strong) NSImage *image API_DEPRECATED — getter */
/*@reserved NS\NSStatusItem @property (nullable, strong) NSImage *image API_DEPRECATED — setter */
/*@reserved NS\NSStatusItem @property (nullable, strong) NSImage *alternateImage API_DEPRECATED — getter */
/*@reserved NS\NSStatusItem @property (nullable, strong) NSImage *alternateImage API_DEPRECATED — setter */
/*@reserved NS\NSStatusItem @property (getter=isEnabled) BOOL enabled API_DEPRECATED — getter */
/*@reserved NS\NSStatusItem @property (getter=isEnabled) BOOL enabled API_DEPRECATED — setter */
/*@reserved NS\NSStatusItem @property BOOL highlightMode API_DEPRECATED — getter */
/*@reserved NS\NSStatusItem @property BOOL highlightMode API_DEPRECATED — setter */
/*@reserved NS\NSStatusItem @property (nullable, copy) NSString *toolTip API_DEPRECATED — getter */
/*@reserved NS\NSStatusItem @property (nullable, copy) NSString *toolTip API_DEPRECATED — setter */
/*@reserved NS\NSStatusItem - (NSInteger)sendActionOn:(NSEventMask)mask API_DEPRECATED */
/*@reserved NS\NSStatusItem @property (nullable, strong) NSView *view API_DEPRECATED — getter */
/*@reserved NS\NSStatusItem @property (nullable, strong) NSView *view API_DEPRECATED — setter */
/*@reserved NS\NSStatusItem - (void)drawStatusBarBackgroundInRect:(NSRect)rect withHighlight:(BOOL)highlight API_DEPRECATED */
/*@reserved NS\NSStatusItem - (void)popUpStatusItemMenu:(NSMenu *)menu API_DEPRECATED */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_STATUSITEM_H */
