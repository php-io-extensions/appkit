namespace AppKit\NS\NSMenu;

%{
#include "ns-menu.h"
}%

/**
 * macOS menu bar (NSMenu). Item-level binds continue on NSMenuItem.
 */
class NSMenu
{
    /**
     * Install App | File | Edit | Window | Help, including Quit (Cmd+Q).
     * No About item — call enableAbout to opt in.
     */
    public static function installDefault(string appName) -> bool
    {
        bool result;
        %{
            result = ns_menu_install_default(Z_STRVAL(appName)) == 1;
        }%
        return result;
    }

    /**
     * Add an NSMenuItem under a top-level menu (created if missing).
     * actionId "quit" also terminates the app.
     */
    public static function addItem(string menuTitle, string itemTitle, string keyEquivalent, string actionId) -> bool
    {
        bool result;
        %{
            result = ns_menu_add_item(
                Z_STRVAL(menuTitle),
                Z_STRVAL(itemTitle),
                Z_STRVAL(keyEquivalent),
                Z_STRVAL(actionId)
            ) == 1;
        }%
        return result;
    }

    /**
     * Opt-in About under the application menu (bar label is the process name).
     * Click sets a pending action id for pollAction; does not quit or open a panel.
     * Empty actionId means "about".
     */
    public static function enableAbout(bool enabled, string actionId = "about") -> bool
    {
        bool result;
        %{
            result = ns_menu_enable_about(enabled ? 1 : 0, Z_STRVAL(actionId)) == 1;
        }%
        return result;
    }

    /**
     * @return string Action id of a selected custom item, or "" if none
     */
    public static function pollAction() -> string
    {
        %{
            char buf[256];
            buf[0] = '\0';
            if (ns_menu_poll_action(buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}
