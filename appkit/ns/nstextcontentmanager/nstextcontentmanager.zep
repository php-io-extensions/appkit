namespace AppKit\NS\NSTextContentManager;

%{
#include "ns-textcontentmanager.h"
#include <stdint.h>
}%


/**
 * NSTextContentManager — TextKit 2 content owner.
 */
class NSTextContentManager

{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textcontentmanager_create();
        }%
        return handle;
    }

    public static function wrap(int nsTextContentManagerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textcontentmanager_wrap((void *)(uintptr_t) nsTextContentManagerPtr);
        }%
        return handle;
    }

    public static function destroy(int manager) -> void
    {
        %{
            ns_textcontentmanager_destroy((uintptr_t) manager);
        }%
    }

    public static function addTextLayoutManager(int manager, int layoutManager) -> void
    {
        %{
            ns_textcontentmanager_add_text_layout_manager((uintptr_t) manager, (uintptr_t) layoutManager);
        }%
    }

    public static function removeTextLayoutManager(int manager, int layoutManager) -> void
    {
        %{
            ns_textcontentmanager_remove_text_layout_manager((uintptr_t) manager, (uintptr_t) layoutManager);
        }%
    }

    public static function textLayoutManagersCount(int manager) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textcontentmanager_text_layout_managers_count((uintptr_t) manager);
        }%
        return value;
    }

    public static function hasEditingTransaction(int manager) -> bool
    {
        bool result;
        %{
            result = ns_textcontentmanager_has_editing_transaction((uintptr_t) manager) == 1;
        }%
        return result;
    }

    public static function automaticallySynchronizesTextLayoutManagers(int manager) -> bool
    {
        bool result;
        %{
            result = ns_textcontentmanager_automatically_synchronizes_text_layout_managers((uintptr_t) manager) == 1;
        }%
        return result;
    }

    public static function setAutomaticallySynchronizesTextLayoutManagers(int manager, bool flag) -> void
    {
        %{
            ns_textcontentmanager_set_automatically_synchronizes_text_layout_managers((uintptr_t) manager, flag ? 1 : 0);
        }%
    }

    public static function automaticallySynchronizesToBackingStore(int manager) -> bool
    {
        bool result;
        %{
            result = ns_textcontentmanager_automatically_synchronizes_to_backing_store((uintptr_t) manager) == 1;
        }%
        return result;
    }

    public static function setAutomaticallySynchronizesToBackingStore(int manager, bool flag) -> void
    {
        %{
            ns_textcontentmanager_set_automatically_synchronizes_to_backing_store((uintptr_t) manager, flag ? 1 : 0);
        }%
    }

    public static function documentRangePtr(int manager) -> int
    {
        int ptr;
        %{
            ptr = (zend_long) ns_textcontentmanager_document_range_ptr((uintptr_t) manager);
        }%
        return ptr;
    }
}
