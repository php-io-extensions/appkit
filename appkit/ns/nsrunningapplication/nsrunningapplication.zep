namespace AppKit\NS\NSRunningApplication;

%{
#include "ns-runningapplication.h"
#include <stdint.h>
}%


/**
 * NSRunningApplication process instance metadata and activation.
 */
class NSRunningApplication
{
    public static function current() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_runningapplication_current();
        }%
        return handle;
    }
    public static function wrap(int nsRunningApplicationPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_runningapplication_wrap((void *)(uintptr_t) nsRunningApplicationPtr);
        }%
        return handle;
    }
    public static function destroy(int application) -> void
    {
        %{
            ns_runningapplication_destroy((uintptr_t) application);
        }%
    }
    public static function nsRunningApplication(int application) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_runningapplication_nsrunningapplication((uintptr_t) application);
        }%
        return ptr;
    }
    public static function withProcessIdentifier(int pid) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_runningapplication_with_process_identifier((pid_t) pid);
        }%
        return handle;
    }
    public static function withBundleIdentifierCount(string bundleId) -> int
    {
        int count;
        %{
            count = ns_runningapplication_with_bundle_identifier_count(Z_STRVAL(bundleId));
        }%
        return count;
    }
    public static function withBundleIdentifierAt(string bundleId, int index) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_runningapplication_with_bundle_identifier_at(Z_STRVAL(bundleId), (int) index);
        }%
        return handle;
    }
    public static function terminateAutomaticallyTerminableApplications() -> void
    {
        %{
            ns_runningapplication_terminate_automatically_terminable_applications();
        }%
    }
    public static function isTerminated(int application) -> bool
    {
        bool result;
        %{
            result = ns_runningapplication_is_terminated((uintptr_t) application) == 1;
        }%
        return result;
    }
    public static function isFinishedLaunching(int application) -> bool
    {
        bool result;
        %{
            result = ns_runningapplication_is_finished_launching((uintptr_t) application) == 1;
        }%
        return result;
    }
    public static function isHidden(int application) -> bool
    {
        bool result;
        %{
            result = ns_runningapplication_is_hidden((uintptr_t) application) == 1;
        }%
        return result;
    }
    public static function isActive(int application) -> bool
    {
        bool result;
        %{
            result = ns_runningapplication_is_active((uintptr_t) application) == 1;
        }%
        return result;
    }
    public static function ownsMenuBar(int application) -> bool
    {
        bool result;
        %{
            result = ns_runningapplication_owns_menu_bar((uintptr_t) application) == 1;
        }%
        return result;
    }
    public static function activationPolicy(int application) -> int
    {
        int value;
        %{
            value = ns_runningapplication_activation_policy((uintptr_t) application);
        }%
        return value;
    }
    public static function processIdentifier(int application) -> int
    {
        int value;
        %{
            value = ns_runningapplication_process_identifier((uintptr_t) application);
        }%
        return value;
    }
    public static function localizedName(int application) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_runningapplication_localized_name((uintptr_t) application, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function bundleIdentifier(int application) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_runningapplication_bundle_identifier((uintptr_t) application, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function bundleURL(int application) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_runningapplication_bundle_url((uintptr_t) application, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function executableURL(int application) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_runningapplication_executable_url((uintptr_t) application, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function icon(int application) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_runningapplication_icon((uintptr_t) application);
        }%
        return handle;
    }
    public static function hide(int application) -> bool
    {
        bool result;
        %{
            result = ns_runningapplication_hide((uintptr_t) application) == 1;
        }%
        return result;
    }
    public static function unhide(int application) -> bool
    {
        bool result;
        %{
            result = ns_runningapplication_unhide((uintptr_t) application) == 1;
        }%
        return result;
    }
    public static function activateWithOptions(int application, int options) -> bool
    {
        bool result;
        %{
            result = ns_runningapplication_activate_with_options((uintptr_t) application, (unsigned) options) == 1;
        }%
        return result;
    }
    public static function terminate(int application) -> bool
    {
        bool result;
        %{
            result = ns_runningapplication_terminate((uintptr_t) application) == 1;
        }%
        return result;
    }
    public static function forceTerminate(int application) -> bool
    {
        bool result;
        %{
            result = ns_runningapplication_force_terminate((uintptr_t) application) == 1;
        }%
        return result;
    }
}
