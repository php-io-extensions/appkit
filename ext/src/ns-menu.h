#ifndef PHP_APPKIT_NS_MENU_H
#define PHP_APPKIT_NS_MENU_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Install a standard macOS menu bar: App | File | Edit | Window | Help.
 * app_name is used for the application menu title (e.g. "AppKit") and
 * remembered for a later About item. Includes Quit (Cmd+Q). No About —
 * call ns_menu_enable_about to opt in. Idempotent — replaces the main menu.
 */
int ns_menu_install_default(const char *app_name);

/**
 * Add a menu item under an existing top-level menu (creates the menu if missing).
 * key_equivalent may be "" for none (single lowercase char typical, e.g. "n").
 * action_id is a UTF-8 token returned later by ns_menu_poll_action when chosen.
 * Returns 1 on success.
 */
int ns_menu_add_item(
    const char *menu_title,
    const char *item_title,
    const char *key_equivalent,
    const char *action_id
);

/**
 * Opt-in About item at index 0 of the application submenu (mainMenu.itemArray[0]).
 * enabled != 0: insert or reuse one item titled "About <app_name>", wired to
 * handleCustomAction (poll-only; never terminates, never opens a panel).
 * Empty/NULL action_id means "about". enabled == 0: remove the item if present.
 * Returns 1 on success.
 */
int ns_menu_enable_about(int enabled, const char *action_id);

/**
 * If a custom menu item was activated since the last poll, copy its action_id
 * into out_action (out_action_len bytes, NUL-terminated) and return 1.
 * Otherwise return 0.
 */
int ns_menu_poll_action(char *out_action, int out_action_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_MENU_H */
