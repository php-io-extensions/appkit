namespace AppKit\NS\NSWorkspace;

%{
#include "ns-workspace.h"
#include <stdint.h>
}%


/**
 * NSWorkspace shared desktop workspace.
 */
class NSWorkspace
{
    public static function shared() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_workspace_shared();
        }%
        return handle;
    }
    public static function wrap(int nsWorkspacePtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_workspace_wrap((void *)(uintptr_t) nsWorkspacePtr);
        }%
        return handle;
    }
    public static function destroy(int workspace) -> void
    {
        %{
            ns_workspace_destroy((uintptr_t) workspace);
        }%
    }
    public static function nsWorkspace(int workspace) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_workspace_nsworkspace((uintptr_t) workspace);
        }%
        return ptr;
    }
    public static function openURL(int workspace, string url) -> bool
    {
        bool result;
        %{
            result = ns_workspace_open_url((uintptr_t) workspace, Z_STRVAL(url)) == 1;
        }%
        return result;
    }
    public static function selectFile(int workspace, string fullPath, string rootPath = "") -> bool
    {
        bool result;
        %{
            result = ns_workspace_select_file((uintptr_t) workspace, Z_STRVAL(fullPath), Z_STRVAL(rootPath)) == 1;
        }%
        return result;
    }
    public static function showSearchResults(int workspace, string query) -> bool
    {
        bool result;
        %{
            result = ns_workspace_show_search_results((uintptr_t) workspace, Z_STRVAL(query)) == 1;
        }%
        return result;
    }
    public static function isFilePackage(int workspace, string path) -> bool
    {
        bool result;
        %{
            result = ns_workspace_is_file_package((uintptr_t) workspace, Z_STRVAL(path)) == 1;
        }%
        return result;
    }
    public static function iconForFile(int workspace, string path) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_workspace_icon_for_file((uintptr_t) workspace, Z_STRVAL(path));
        }%
        return handle;
    }
    public static function hideOtherApplications(int workspace) -> void
    {
        %{
            ns_workspace_hide_other_applications((uintptr_t) workspace);
        }%
    }
    public static function urlForApplicationWithBundleIdentifier(int workspace, string bundleId) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_workspace_url_for_application_with_bundle_id((uintptr_t) workspace, Z_STRVAL(bundleId), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function urlForApplicationToOpenURL(int workspace, string url) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_workspace_url_for_application_to_open_url((uintptr_t) workspace, Z_STRVAL(url), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function frontmostApplicationName(int workspace) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_workspace_frontmost_application_name((uintptr_t) workspace, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function runningApplicationsCount(int workspace) -> int
    {
        int count;
        %{
            count = ns_workspace_running_applications_count((uintptr_t) workspace);
        }%
        return count;
    }
    public static function runningApplicationAt(int workspace, int index) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_workspace_running_application_at((uintptr_t) workspace, (int) index);
        }%
        return handle;
    }
}
