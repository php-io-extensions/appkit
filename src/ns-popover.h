#ifndef PHP_APPKIT_NS_POPOVER_H
#define PHP_APPKIT_NS_POPOVER_H

/*
 * Faithful 1:1 binding of AppKit NSPopover.h. Every member of the
 * single base interface is either bound or reserved. Nothing is
 * omitted. There are no same-file categories on NSPopover. Adopted
 * NSAppearanceCustomization / NSAccessibilityElement /
 * NSAccessibility and the NSPopoverDelegate protocol are not class
 * members (delegate methods belong to Bridge). Notification names
 * (WillShow / DidShow / WillClose / DidClose), close-reason
 * constants, and the NSPopoverAppearance / NSPopoverBehavior
 * typedefs are not class members. Live construction is init
 * (alloc+init glue). Inherited NSResponder members stay on that
 * class.
 *
 * The audit blanks preprocessor lines, so both sides of the
 * 10.10+ NSAppearance appearance / effectiveAppearance block and
 * the pre-10.10 NSPopoverAppearance appearance property are
 * counted. The live NSAppearance appearance and effectiveAppearance
 * stay bound; the deprecated NSPopoverAppearance appearance is
 * reserved as a duplicate (and as API_DEPRECATED). initWithCoder:
 * (NSCoder) is reserved. Comment-only soft-available members
 * (isDetached, hasFullSizeContent, showRelativeToToolbarItem:)
 * stay bound. Nullable delegate / appearance /
 * contentViewController / sender cross as int handles (0 = nil).
 * contentSize is {width, height}; positioningRect is
 * {x, y, width, height}. NSPopoverBehavior / NSRectEdge cross as
 * int. getter=isShown / isDetached emit as isShown / isDetached.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Initialization ---- */

/*@zep NS\NSPopover init() -> int */
zend_long ns_nspopover_init(void);
/*@reserved NS\NSPopover - (nullable instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER; */

/* ---- Delegate and appearance ---- */

/*@zep NS\NSPopover delegate(int handle) -> int */
zend_long ns_nspopover_delegate(zval *handle);
/*@zep NS\NSPopover setDelegate(int handle, int delegate) -> void */
void ns_nspopover_set_delegate(zval *handle, zval *delegate);

/*@zep NS\NSPopover appearance(int handle) -> int */
zend_long ns_nspopover_appearance(zval *handle);
/*@zep NS\NSPopover setAppearance(int handle, int appearance) -> void */
void ns_nspopover_set_appearance(zval *handle, zval *appearance);

/*@zep NS\NSPopover effectiveAppearance(int handle) -> int */
zend_long ns_nspopover_effective_appearance(zval *handle);

/*@reserved NS\NSPopover @property NSPopoverAppearance appearance API_DEPRECATED — pre-10.10 duplicate getter */
/*@reserved NS\NSPopover @property NSPopoverAppearance appearance API_DEPRECATED — pre-10.10 duplicate setter */

/* ---- Behavior and content ---- */

/*@zep NS\NSPopover behavior(int handle) -> int */
zend_long ns_nspopover_behavior(zval *handle);
/*@zep NS\NSPopover setBehavior(int handle, int behavior) -> void */
void ns_nspopover_set_behavior(zval *handle, zval *behavior);

/*@zep NS\NSPopover animates(int handle) -> bool */
zend_long ns_nspopover_animates(zval *handle);
/*@zep NS\NSPopover setAnimates(int handle, bool animates) -> void */
void ns_nspopover_set_animates(zval *handle, zval *animates);

/*@zep NS\NSPopover contentViewController(int handle) -> int */
zend_long ns_nspopover_content_view_controller(zval *handle);
/*@zep NS\NSPopover setContentViewController(int handle, int contentViewController) -> void */
void ns_nspopover_set_content_view_controller(zval *handle, zval *contentViewController);

/*@zep NS\NSPopover contentSize(int handle) -> array */
void ns_nspopover_content_size(zval *return_value, zval *handle);
/*@zep NS\NSPopover setContentSize(int handle, double width, double height) -> void */
void ns_nspopover_set_content_size(zval *handle, zval *width, zval *height);

/*@zep NS\NSPopover isShown(int handle) -> bool */
zend_long ns_nspopover_is_shown(zval *handle);

/*@zep NS\NSPopover isDetached(int handle) -> bool */
zend_long ns_nspopover_is_detached(zval *handle);

/*@zep NS\NSPopover positioningRect(int handle) -> array */
void ns_nspopover_positioning_rect(zval *return_value, zval *handle);
/*@zep NS\NSPopover setPositioningRect(int handle, double x, double y, double width, double height) -> void */
void ns_nspopover_set_positioning_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSPopover hasFullSizeContent(int handle) -> bool */
zend_long ns_nspopover_has_full_size_content(zval *handle);
/*@zep NS\NSPopover setHasFullSizeContent(int handle, bool hasFullSizeContent) -> void */
void ns_nspopover_set_has_full_size_content(zval *handle, zval *hasFullSizeContent);

/* ---- Show and close ---- */

/*@zep NS\NSPopover showRelativeToRectOfViewPreferredEdge(int handle, double x, double y, double width, double height, int positioningView, int preferredEdge) -> void */
void ns_nspopover_show_relative_to_rect_of_view_preferred_edge(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *positioningView, zval *preferredEdge);

/*@zep NS\NSPopover showRelativeToToolbarItem(int handle, int toolbarItem) -> void */
void ns_nspopover_show_relative_to_toolbar_item(zval *handle, zval *toolbarItem);

/*@zep NS\NSPopover performClose(int handle, int sender) -> void */
void ns_nspopover_perform_close(zval *handle, zval *sender);

/*@zep NS\NSPopover close(int handle) -> void */
void ns_nspopover_close(zval *handle);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_POPOVER_H */
