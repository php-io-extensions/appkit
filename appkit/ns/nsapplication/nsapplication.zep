namespace AppKit\NS\NSApplication;

%{
#include "ns-app.h"
#include <stdint.h>
}%

/**
 * NSApplication lifecycle — Darwin only.
 */
class NSApplication
{
    public static function init() -> bool
    {
        bool result;
        %{
            result = ns_app_init() == 1;
        }%
        return result;
    }

    /**
     * @return int Borrowed NSApplication* (sharedApplication), or 0
     */
    public static function shared() -> int
    {
        int handle;
        %{
            handle = (zend_long)(uintptr_t) ns_app_shared();
        }%
        return handle;
    }

    /**
     * Drain pending AppKit events; block for the next event only when the queue was empty.
     * @return bool false when quit was requested
     */
    public static function poll() -> bool
    {
        bool result;
        %{
            result = ns_app_poll() == 1;
        }%
        return result;
    }

    public static function run() -> void
    {
        %{
            ns_app_run();
        }%
    }

    public static function terminate() -> void
    {
        %{
            ns_app_terminate();
        }%
    }

    public static function shouldQuit() -> bool
    {
        bool result;
        %{
            result = ns_app_should_quit() == 1;
        }%
        return result;
    }

    public static function resetQuit() -> void
    {
        %{
            ns_app_reset_quit();
        }%
    }

    /**
     * @return int NSApp global (sharedApplication), or 0
     */
    public static function nsApp() -> int
    {
        int handle;
        %{
            handle = (zend_long)(uintptr_t) ns_app_nsapp();
        }%
        return handle;
    }

    public static function appKitVersionNumber() -> double
    {
        double value;
        %{
            value = ns_app_kit_version_number();
        }%
        return value;
    }
}
