namespace AppKit\NS\NSUserDefaultsController;

%{
#include "ns-userdefaultscontroller.h"
#include <stdint.h>
}%

/**
 * NSUserDefaultsController — Cocoa bindings controller for NSUserDefaults.
 */
class NSUserDefaultsController
{
    public static function shared() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_userdefaultscontroller_shared();
        }%
        return handle;
    }

    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_userdefaultscontroller_create();
        }%
        return handle;
    }

    public static function createWithInitialValues(int dictionaryHandle) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_userdefaultscontroller_create_with_initial_values((uintptr_t) dictionaryHandle);
        }%
        return handle;
    }

    public static function wrap(int nsUserDefaultsControllerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_userdefaultscontroller_wrap((void *)(uintptr_t) nsUserDefaultsControllerPtr);
        }%
        return handle;
    }

    public static function destroy(int controller) -> void
    {
        %{
            ns_userdefaultscontroller_destroy((uintptr_t) controller);
        }%
    }

    public static function nsUserDefaultsController(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_userdefaultscontroller_nsuserdefaultscontroller((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function discardEditing(int controller) -> void
    {
        %{
            ns_userdefaultscontroller_discard_editing((uintptr_t) controller);
        }%
    }

    public static function commitEditing(int controller) -> bool
    {
        bool result;
        %{
            result = ns_userdefaultscontroller_commit_editing((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function isEditing(int controller) -> bool
    {
        bool result;
        %{
            result = ns_userdefaultscontroller_is_editing((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function defaults(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_userdefaultscontroller_defaults((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function setInitialValues(int controller, int dictionaryHandle) -> void
    {
        %{
            ns_userdefaultscontroller_set_initial_values((uintptr_t) controller, (uintptr_t) dictionaryHandle);
        }%
    }

    public static function initialValues(int controller) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_userdefaultscontroller_initial_values((uintptr_t) controller);
        }%
        return handle;
    }

    public static function setAppliesImmediately(int controller, bool value) -> void
    {
        %{
            ns_userdefaultscontroller_set_applies_immediately((uintptr_t) controller, value ? 1 : 0);
        }%
    }

    public static function appliesImmediately(int controller) -> bool
    {
        bool result;
        %{
            result = ns_userdefaultscontroller_applies_immediately((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function hasUnappliedChanges(int controller) -> bool
    {
        bool result;
        %{
            result = ns_userdefaultscontroller_has_unapplied_changes((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function values(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_userdefaultscontroller_values((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function revert(int controller) -> void
    {
        %{
            ns_userdefaultscontroller_revert((uintptr_t) controller);
        }%
    }

    public static function save(int controller) -> void
    {
        %{
            ns_userdefaultscontroller_save((uintptr_t) controller);
        }%
    }

    public static function revertToInitialValues(int controller) -> void
    {
        %{
            ns_userdefaultscontroller_revert_to_initial_values((uintptr_t) controller);
        }%
    }
}
