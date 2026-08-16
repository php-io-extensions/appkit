namespace AppKit\NS\NSHelpManager;

%{
#include "ns-helpmanager.h"
#include <stdint.h>
}%


/**
 * NSHelpManager Help Viewer and context help.
 */
class NSHelpManager
{
    public static function shared() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_helpmanager_shared();
        }%
        return handle;
    }
    public static function destroy(int manager) -> void
    {
        %{
            ns_helpmanager_destroy((uintptr_t) manager);
        }%
    }
    public static function nsHelpManager(int manager) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_helpmanager_nshelpmanager((uintptr_t) manager);
        }%
        return ptr;
    }
    public static function isContextHelpModeActive() -> bool
    {
        bool result;
        %{
            result = ns_helpmanager_is_context_help_mode_active() == 1;
        }%
        return result;
    }
    public static function setContextHelpModeActive(bool active) -> void
    {
        %{
            ns_helpmanager_set_context_help_mode_active(active ? 1 : 0);
        }%
    }
    public static function setContextHelpForObject(int objectPtr, string helpText) -> void
    {
        %{
            ns_helpmanager_set_context_help_for_object((uintptr_t) objectPtr, Z_STRVAL(helpText));
        }%
    }
    public static function removeContextHelpForObject(int objectPtr) -> void
    {
        %{
            ns_helpmanager_remove_context_help_for_object((uintptr_t) objectPtr);
        }%
    }
    public static function contextHelpForObject(int objectPtr) -> string
    {
        %{
            char buf[8192];
            buf[0] = '\0';
            if (ns_helpmanager_context_help_for_object((uintptr_t) objectPtr, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function showContextHelpForObject(int objectPtr, double x, double y) -> bool
    {
        bool result;
        %{
            result = ns_helpmanager_show_context_help_for_object((uintptr_t) objectPtr, x, y) == 1;
        }%
        return result;
    }
    public static function openHelpAnchor(string anchor, string book = "") -> void
    {
        %{
            ns_helpmanager_open_help_anchor(Z_STRVAL(anchor), Z_STRVAL(book));
        }%
    }
    public static function findString(string query, string book = "") -> void
    {
        %{
            ns_helpmanager_find_string(Z_STRVAL(query), Z_STRVAL(book));
        }%
    }
    public static function registerBooksInBundlePath(string bundlePath = "") -> bool
    {
        bool result;
        %{
            result = ns_helpmanager_register_books_in_bundle_path(Z_STRVAL(bundlePath)) == 1;
        }%
        return result;
    }
}
