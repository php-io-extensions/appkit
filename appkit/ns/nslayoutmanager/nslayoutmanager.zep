namespace AppKit\NS\NSLayoutManager;

%{
#include "ns-layoutmanager.h"
#include <stdint.h>
}%


/**
 * NSLayoutManager — maps text storage into text containers.
 */
class NSLayoutManager
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutmanager_create();
        }%
        return handle;
    }

    public static function wrap(int nsLayoutManagerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutmanager_wrap((void *)(uintptr_t) nsLayoutManagerPtr);
        }%
        return handle;
    }

    public static function destroy(int manager) -> void
    {
        %{
            ns_layoutmanager_destroy((uintptr_t) manager);
        }%
    }

    public static function nsLayoutManager(int manager) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_layoutmanager_nslayoutmanager((uintptr_t) manager);
        }%
        return ptr;
    }

    public static function replaceTextStorage(int manager, int storage) -> void
    {
        %{
            ns_layoutmanager_replace_text_storage((uintptr_t) manager, (uintptr_t) storage);
        }%
    }

    public static function addTextContainer(int manager, int container) -> void
    {
        %{
            ns_layoutmanager_add_text_container((uintptr_t) manager, (uintptr_t) container);
        }%
    }

    public static function removeTextContainerAtIndex(int manager, int index) -> void
    {
        %{
            ns_layoutmanager_remove_text_container_at_index((uintptr_t) manager, (int) index);
        }%
    }

    public static function textContainersCount(int manager) -> int
    {
        int value;
        %{
            value = (zend_long) ns_layoutmanager_text_containers_count((uintptr_t) manager);
        }%
        return value;
    }

    public static function textContainerChangedGeometry(int manager, int container) -> void
    {
        %{
            ns_layoutmanager_text_container_changed_geometry((uintptr_t) manager, (uintptr_t) container);
        }%
    }

    public static function setShowsInvisibleCharacters(int manager, bool flag) -> void
    {
        %{
            ns_layoutmanager_set_shows_invisible_characters((uintptr_t) manager, flag ? 1 : 0);
        }%
    }

    public static function showsInvisibleCharacters(int manager) -> bool
    {
        bool result;
        %{
            result = ns_layoutmanager_shows_invisible_characters((uintptr_t) manager) == 1;
        }%
        return result;
    }

    public static function setShowsControlCharacters(int manager, bool flag) -> void
    {
        %{
            ns_layoutmanager_set_shows_control_characters((uintptr_t) manager, flag ? 1 : 0);
        }%
    }

    public static function showsControlCharacters(int manager) -> bool
    {
        bool result;
        %{
            result = ns_layoutmanager_shows_control_characters((uintptr_t) manager) == 1;
        }%
        return result;
    }

    public static function setUsesDefaultHyphenation(int manager, bool flag) -> void
    {
        %{
            ns_layoutmanager_set_uses_default_hyphenation((uintptr_t) manager, flag ? 1 : 0);
        }%
    }

    public static function usesDefaultHyphenation(int manager) -> bool
    {
        bool result;
        %{
            result = ns_layoutmanager_uses_default_hyphenation((uintptr_t) manager) == 1;
        }%
        return result;
    }

    public static function setDefaultFont(int manager, int font) -> void
    {
        %{
            ns_layoutmanager_set_default_font((uintptr_t) manager, (uintptr_t) font);
        }%
    }

    public static function defaultFont(int manager) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutmanager_default_font((uintptr_t) manager);
        }%
        return handle;
    }
}
