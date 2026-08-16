namespace AppKit\NS\NSObjectController;

%{
#include "ns-objectcontroller.h"
#include <stdint.h>
}%

/**
 * NSObjectController — single-object Cocoa bindings controller.
 */
class NSObjectController
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_objectcontroller_create();
        }%
        return handle;
    }

    public static function createWithContent(int contentPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_objectcontroller_create_with_content((void *)(uintptr_t) contentPtr);
        }%
        return handle;
    }

    public static function wrap(int nsObjectControllerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_objectcontroller_wrap((void *)(uintptr_t) nsObjectControllerPtr);
        }%
        return handle;
    }

    public static function destroy(int controller) -> void
    {
        %{
            ns_objectcontroller_destroy((uintptr_t) controller);
        }%
    }

    public static function nsObjectController(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_objectcontroller_nsobjectcontroller((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function discardEditing(int controller) -> void
    {
        %{
            ns_objectcontroller_discard_editing((uintptr_t) controller);
        }%
    }

    public static function commitEditing(int controller) -> bool
    {
        bool result;
        %{
            result = ns_objectcontroller_commit_editing((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function isEditing(int controller) -> bool
    {
        bool result;
        %{
            result = ns_objectcontroller_is_editing((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function setContent(int controller, int contentPtr) -> void
    {
        %{
            ns_objectcontroller_set_content((uintptr_t) controller, (void *)(uintptr_t) contentPtr);
        }%
    }

    public static function content(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_objectcontroller_content((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function selection(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_objectcontroller_selection((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function selectedObjectsCount(int controller) -> int
    {
        int count;
        %{
            count = ns_objectcontroller_selected_objects_count((uintptr_t) controller);
        }%
        return count;
    }

    public static function selectedObjectAt(int controller, int index) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_objectcontroller_selected_object_at((uintptr_t) controller, (int) index);
        }%
        return ptr;
    }

    public static function setAutomaticallyPreparesContent(int controller, bool value) -> void
    {
        %{
            ns_objectcontroller_set_automatically_prepares_content((uintptr_t) controller, value ? 1 : 0);
        }%
    }

    public static function automaticallyPreparesContent(int controller) -> bool
    {
        bool result;
        %{
            result = ns_objectcontroller_automatically_prepares_content((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function prepareContent(int controller) -> void
    {
        %{
            ns_objectcontroller_prepare_content((uintptr_t) controller);
        }%
    }

    public static function setObjectClassName(int controller, string className) -> void
    {
        %{
            ns_objectcontroller_set_object_class_name((uintptr_t) controller, Z_STRVAL(className));
        }%
    }

    public static function objectClassName(int controller) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_objectcontroller_object_class_name((uintptr_t) controller, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function newObject(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_objectcontroller_new_object((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function addObject(int controller, int objectPtr) -> void
    {
        %{
            ns_objectcontroller_add_object((uintptr_t) controller, (void *)(uintptr_t) objectPtr);
        }%
    }

    public static function removeObject(int controller, int objectPtr) -> void
    {
        %{
            ns_objectcontroller_remove_object((uintptr_t) controller, (void *)(uintptr_t) objectPtr);
        }%
    }

    public static function setEditable(int controller, bool value) -> void
    {
        %{
            ns_objectcontroller_set_editable((uintptr_t) controller, value ? 1 : 0);
        }%
    }

    public static function isEditable(int controller) -> bool
    {
        bool result;
        %{
            result = ns_objectcontroller_is_editable((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function canAdd(int controller) -> bool
    {
        bool result;
        %{
            result = ns_objectcontroller_can_add((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function canRemove(int controller) -> bool
    {
        bool result;
        %{
            result = ns_objectcontroller_can_remove((uintptr_t) controller) == 1;
        }%
        return result;
    }
}
