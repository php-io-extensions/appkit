namespace AppKit\NS\NSTextStorage;

%{
#include "ns-textstorage.h"
#include <stdint.h>
}%


/**
 * NSTextStorage — mutable attributed string backing layout.
 */
class NSTextStorage
{
    public static function create(string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textstorage_create(Z_STRVAL(value));
        }%
        return handle;
    }

    public static function wrap(int nsTextStoragePtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textstorage_wrap((void *)(uintptr_t) nsTextStoragePtr);
        }%
        return handle;
    }

    public static function destroy(int storage) -> void
    {
        %{
            ns_textstorage_destroy((uintptr_t) storage);
        }%
    }

    public static function nsTextStorage(int storage) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_textstorage_nstextstorage((uintptr_t) storage);
        }%
        return ptr;
    }

    public static function setString(int storage, string value) -> void
    {
        %{
            ns_textstorage_set_string((uintptr_t) storage, Z_STRVAL(value));
        }%
    }

    public static function getString(int storage) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_textstorage_get_string((uintptr_t) storage, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function addLayoutManager(int storage, int manager) -> void
    {
        %{
            ns_textstorage_add_layout_manager((uintptr_t) storage, (uintptr_t) manager);
        }%
    }

    public static function removeLayoutManager(int storage, int manager) -> void
    {
        %{
            ns_textstorage_remove_layout_manager((uintptr_t) storage, (uintptr_t) manager);
        }%
    }

    public static function layoutManagersCount(int storage) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textstorage_layout_managers_count((uintptr_t) storage);
        }%
        return value;
    }

    public static function editedMask(int storage) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textstorage_edited_mask((uintptr_t) storage);
        }%
        return value;
    }

    /**
     * @return array [location, length]
     */
    public static function getEditedRange(int storage) -> array
    {
        array out = [];
        %{
            int location = 0, length = 0;
            ns_textstorage_get_edited_range((uintptr_t) storage, &location, &length);
            add_next_index_long(&out, location);
            add_next_index_long(&out, length);
        }%
        return out;
    }

    public static function changeInLength(int storage) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textstorage_change_in_length((uintptr_t) storage);
        }%
        return value;
    }

    public static function beginEditing(int storage) -> void
    {
        %{
            ns_textstorage_begin_editing((uintptr_t) storage);
        }%
    }

    public static function endEditing(int storage) -> void
    {
        %{
            ns_textstorage_end_editing((uintptr_t) storage);
        }%
    }

    public static function processEditing(int storage) -> void
    {
        %{
            ns_textstorage_process_editing((uintptr_t) storage);
        }%
    }

    public static function setFixesAttributesLazily(int storage, bool flag) -> void
    {
        %{
            ns_textstorage_set_fixes_attributes_lazily((uintptr_t) storage, flag ? 1 : 0);
        }%
    }

    public static function fixesAttributesLazily(int storage) -> bool
    {
        bool result;
        %{
            result = ns_textstorage_fixes_attributes_lazily((uintptr_t) storage) == 1;
        }%
        return result;
    }
}
