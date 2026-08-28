#ifndef PHP_APPKIT_NS_MENUITEM_H
#define PHP_APPKIT_NS_MENUITEM_H

/*
 * Faithful 1:1 binding of AppKit NSMenuItem.h. Every member of the
 * class (base interface + same-file NSDeprecated category) is either
 * bound or reserved. NSAttributedString and NSCoder members plus the
 * four API_DEPRECATED mnemonic methods are reserved; nothing is
 * omitted. The NSView(NSViewEnclosingMenuItem) category lives on
 * NSView, not here. The deprecated NSMenuItem protocol and the
 * NSMenuItemImportFromDeviceIdentifier constant are not class members.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSMenuItem ---- */

/*@zep NS\NSMenuItem usesUserKeyEquivalents() -> bool */
zend_long ns_nsmenuitem_uses_user_key_equivalents(void);
/*@zep NS\NSMenuItem setUsesUserKeyEquivalents(bool flag) -> void */
void ns_nsmenuitem_set_uses_user_key_equivalents(zval *flag);

/*@zep NS\NSMenuItem separatorItem() -> int */
zend_long ns_nsmenuitem_separator_item(void);
/*@zep NS\NSMenuItem sectionHeaderWithTitle(string title) -> int */
zend_long ns_nsmenuitem_section_header_with_title(zval *title);
/*@zep NS\NSMenuItem writingToolsItems() -> array */
void ns_nsmenuitem_writing_tools_items(zval *return_value);

/*@zep NS\NSMenuItem initWithTitleActionKeyEquivalent(string title, string action, string keyEquivalent) -> int */
zend_long ns_nsmenuitem_init_with_title_action_key_equivalent(zval *title, zval *action, zval *keyEquivalent);
/*@reserved NS\NSMenuItem - (instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER */

/*@zep NS\NSMenuItem menu(int handle) -> int */
zend_long ns_nsmenuitem_menu(zval *handle);
/*@zep NS\NSMenuItem setMenu(int handle, int menu) -> void */
void ns_nsmenuitem_set_menu(zval *handle, zval *menu);

/*@zep NS\NSMenuItem hasSubmenu(int handle) -> bool */
zend_long ns_nsmenuitem_has_submenu(zval *handle);
/*@zep NS\NSMenuItem submenu(int handle) -> int */
zend_long ns_nsmenuitem_submenu(zval *handle);
/*@zep NS\NSMenuItem setSubmenu(int handle, int submenu) -> void */
void ns_nsmenuitem_set_submenu(zval *handle, zval *submenu);

/*@zep NS\NSMenuItem parentItem(int handle) -> int */
zend_long ns_nsmenuitem_parent_item(zval *handle);

/*@zep NS\NSMenuItem title(int handle) -> string */
void ns_nsmenuitem_title(zval *return_value, zval *handle);
/*@zep NS\NSMenuItem setTitle(int handle, string title) -> void */
void ns_nsmenuitem_set_title(zval *handle, zval *title);

/*@reserved NS\NSMenuItem @property (nullable, copy) NSAttributedString *attributedTitle — getter */
/*@reserved NS\NSMenuItem @property (nullable, copy) NSAttributedString *attributedTitle — setter */

/*@zep NS\NSMenuItem subtitle(int handle) -> var */
void ns_nsmenuitem_subtitle(zval *return_value, zval *handle);
/*@zep NS\NSMenuItem setSubtitle(int handle, var subtitle) -> void */
void ns_nsmenuitem_set_subtitle(zval *handle, zval *subtitle);

/*@zep NS\NSMenuItem isSeparatorItem(int handle) -> bool */
zend_long ns_nsmenuitem_is_separator_item(zval *handle);
/*@zep NS\NSMenuItem isSectionHeader(int handle) -> bool */
zend_long ns_nsmenuitem_is_section_header(zval *handle);

/*@zep NS\NSMenuItem keyEquivalent(int handle) -> string */
void ns_nsmenuitem_key_equivalent(zval *return_value, zval *handle);
/*@zep NS\NSMenuItem setKeyEquivalent(int handle, string keyEquivalent) -> void */
void ns_nsmenuitem_set_key_equivalent(zval *handle, zval *keyEquivalent);

/*@zep NS\NSMenuItem keyEquivalentModifierMask(int handle) -> int */
zend_long ns_nsmenuitem_key_equivalent_modifier_mask(zval *handle);
/*@zep NS\NSMenuItem setKeyEquivalentModifierMask(int handle, int mask) -> void */
void ns_nsmenuitem_set_key_equivalent_modifier_mask(zval *handle, zval *mask);

/*@zep NS\NSMenuItem userKeyEquivalent(int handle) -> string */
void ns_nsmenuitem_user_key_equivalent(zval *return_value, zval *handle);

/*@zep NS\NSMenuItem allowsKeyEquivalentWhenHidden(int handle) -> bool */
zend_long ns_nsmenuitem_allows_key_equivalent_when_hidden(zval *handle);
/*@zep NS\NSMenuItem setAllowsKeyEquivalentWhenHidden(int handle, bool flag) -> void */
void ns_nsmenuitem_set_allows_key_equivalent_when_hidden(zval *handle, zval *flag);

/*@zep NS\NSMenuItem allowsAutomaticKeyEquivalentLocalization(int handle) -> bool */
zend_long ns_nsmenuitem_allows_automatic_key_equivalent_localization(zval *handle);
/*@zep NS\NSMenuItem setAllowsAutomaticKeyEquivalentLocalization(int handle, bool flag) -> void */
void ns_nsmenuitem_set_allows_automatic_key_equivalent_localization(zval *handle, zval *flag);

/*@zep NS\NSMenuItem allowsAutomaticKeyEquivalentMirroring(int handle) -> bool */
zend_long ns_nsmenuitem_allows_automatic_key_equivalent_mirroring(zval *handle);
/*@zep NS\NSMenuItem setAllowsAutomaticKeyEquivalentMirroring(int handle, bool flag) -> void */
void ns_nsmenuitem_set_allows_automatic_key_equivalent_mirroring(zval *handle, zval *flag);

/*@zep NS\NSMenuItem image(int handle) -> int */
zend_long ns_nsmenuitem_image(zval *handle);
/*@zep NS\NSMenuItem setImage(int handle, int image) -> void */
void ns_nsmenuitem_set_image(zval *handle, zval *image);

/*@zep NS\NSMenuItem state(int handle) -> int */
zend_long ns_nsmenuitem_state(zval *handle);
/*@zep NS\NSMenuItem setState(int handle, int state) -> void */
void ns_nsmenuitem_set_state(zval *handle, zval *state);

/*@zep NS\NSMenuItem onStateImage(int handle) -> int */
zend_long ns_nsmenuitem_on_state_image(zval *handle);
/*@zep NS\NSMenuItem setOnStateImage(int handle, int image) -> void */
void ns_nsmenuitem_set_on_state_image(zval *handle, zval *image);
/*@zep NS\NSMenuItem offStateImage(int handle) -> int */
zend_long ns_nsmenuitem_off_state_image(zval *handle);
/*@zep NS\NSMenuItem setOffStateImage(int handle, int image) -> void */
void ns_nsmenuitem_set_off_state_image(zval *handle, zval *image);
/*@zep NS\NSMenuItem mixedStateImage(int handle) -> int */
zend_long ns_nsmenuitem_mixed_state_image(zval *handle);
/*@zep NS\NSMenuItem setMixedStateImage(int handle, int image) -> void */
void ns_nsmenuitem_set_mixed_state_image(zval *handle, zval *image);

/*@zep NS\NSMenuItem isEnabled(int handle) -> bool */
zend_long ns_nsmenuitem_is_enabled(zval *handle);
/*@zep NS\NSMenuItem setEnabled(int handle, bool flag) -> void */
void ns_nsmenuitem_set_enabled(zval *handle, zval *flag);

/*@zep NS\NSMenuItem isAlternate(int handle) -> bool */
zend_long ns_nsmenuitem_is_alternate(zval *handle);
/*@zep NS\NSMenuItem setAlternate(int handle, bool flag) -> void */
void ns_nsmenuitem_set_alternate(zval *handle, zval *flag);

/*@zep NS\NSMenuItem indentationLevel(int handle) -> int */
zend_long ns_nsmenuitem_indentation_level(zval *handle);
/*@zep NS\NSMenuItem setIndentationLevel(int handle, int level) -> void */
void ns_nsmenuitem_set_indentation_level(zval *handle, zval *level);

/*@zep NS\NSMenuItem target(int handle) -> int */
zend_long ns_nsmenuitem_target(zval *handle);
/*@zep NS\NSMenuItem setTarget(int handle, int target) -> void */
void ns_nsmenuitem_set_target(zval *handle, zval *target);

/*@zep NS\NSMenuItem action(int handle) -> var */
void ns_nsmenuitem_action(zval *return_value, zval *handle);
/*@zep NS\NSMenuItem setAction(int handle, var action) -> void */
void ns_nsmenuitem_set_action(zval *handle, zval *action);

/*@zep NS\NSMenuItem tag(int handle) -> int */
zend_long ns_nsmenuitem_tag(zval *handle);
/*@zep NS\NSMenuItem setTag(int handle, int tag) -> void */
void ns_nsmenuitem_set_tag(zval *handle, zval *tag);

/*@zep NS\NSMenuItem representedObject(int handle) -> int */
zend_long ns_nsmenuitem_represented_object(zval *handle);
/*@zep NS\NSMenuItem setRepresentedObject(int handle, int representedObject) -> void */
void ns_nsmenuitem_set_represented_object(zval *handle, zval *representedObject);

/*@zep NS\NSMenuItem view(int handle) -> int */
zend_long ns_nsmenuitem_view(zval *handle);
/*@zep NS\NSMenuItem setView(int handle, int view) -> void */
void ns_nsmenuitem_set_view(zval *handle, zval *view);

/*@zep NS\NSMenuItem isHighlighted(int handle) -> bool */
zend_long ns_nsmenuitem_is_highlighted(zval *handle);

/*@zep NS\NSMenuItem isHidden(int handle) -> bool */
zend_long ns_nsmenuitem_is_hidden(zval *handle);
/*@zep NS\NSMenuItem setHidden(int handle, bool flag) -> void */
void ns_nsmenuitem_set_hidden(zval *handle, zval *flag);
/*@zep NS\NSMenuItem isHiddenOrHasHiddenAncestor(int handle) -> bool */
zend_long ns_nsmenuitem_is_hidden_or_has_hidden_ancestor(zval *handle);

/*@zep NS\NSMenuItem toolTip(int handle) -> var */
void ns_nsmenuitem_tool_tip(zval *return_value, zval *handle);
/*@zep NS\NSMenuItem setToolTip(int handle, var toolTip) -> void */
void ns_nsmenuitem_set_tool_tip(zval *handle, zval *toolTip);

/*@zep NS\NSMenuItem badge(int handle) -> int */
zend_long ns_nsmenuitem_badge(zval *handle);
/*@zep NS\NSMenuItem setBadge(int handle, int badge) -> void */
void ns_nsmenuitem_set_badge(zval *handle, zval *badge);

/* ---- NSDeprecated ---- */

/*@reserved NS\NSMenuItem - (void)setMnemonicLocation:(NSUInteger)location API_DEPRECATED */
/*@reserved NS\NSMenuItem - (NSUInteger)mnemonicLocation API_DEPRECATED */
/*@reserved NS\NSMenuItem - (null_unspecified NSString *)mnemonic API_DEPRECATED */
/*@reserved NS\NSMenuItem - (void)setTitleWithMnemonic:(NSString *)stringWithAmpersand API_DEPRECATED */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_MENUITEM_H */
