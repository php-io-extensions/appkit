namespace AppKit\NS\NSDocument;

%{
#include "ns-document.h"
#include <stdint.h>
}%


/**
 * NSDocument document-based app model object.
 */
class NSDocument
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_document_create();
        }%
        return handle;
    }
    public static function wrap(int nsDocumentPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_document_wrap((void *)(uintptr_t) nsDocumentPtr);
        }%
        return handle;
    }
    public static function destroy(int document) -> void
    {
        %{
            ns_document_destroy((uintptr_t) document);
        }%
    }
    public static function nsDocument(int document) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_document_nsdocument((uintptr_t) document);
        }%
        return ptr;
    }
    public static function initWithType(string typeName) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_document_init_with_type(Z_STRVAL(typeName));
        }%
        return handle;
    }
    public static function initWithContentsOfURL(string url, string typeName) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_document_init_with_contents_of_url(Z_STRVAL(url), Z_STRVAL(typeName));
        }%
        return handle;
    }
    public static function getFileType(int document) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_document_get_file_type((uintptr_t) document, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function setFileType(int document, string typeName) -> void
    {
        %{
            ns_document_set_file_type((uintptr_t) document, Z_STRVAL(typeName));
        }%
    }
    public static function getFileURL(int document) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_document_get_file_url((uintptr_t) document, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function setFileURL(int document, string url) -> void
    {
        %{
            ns_document_set_file_url((uintptr_t) document, Z_STRVAL(url));
        }%
    }
    public static function getDisplayName(int document) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_document_get_display_name((uintptr_t) document, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function setDisplayName(int document, string name) -> void
    {
        %{
            ns_document_set_display_name((uintptr_t) document, Z_STRVAL(name));
        }%
    }
    public static function isDocumentEdited(int document) -> bool
    {
        bool result;
        %{
            result = ns_document_is_document_edited((uintptr_t) document) == 1;
        }%
        return result;
    }
    public static function hasUnautosavedChanges(int document) -> bool
    {
        bool result;
        %{
            result = ns_document_has_unautosaved_changes((uintptr_t) document) == 1;
        }%
        return result;
    }
    public static function isDraft(int document) -> bool
    {
        bool result;
        %{
            result = ns_document_is_draft((uintptr_t) document) == 1;
        }%
        return result;
    }
    public static function setDraft(int document, bool draft) -> void
    {
        %{
            ns_document_set_draft((uintptr_t) document, draft ? 1 : 0);
        }%
    }
    public static function isEntireFileLoaded(int document) -> bool
    {
        bool result;
        %{
            result = ns_document_is_entire_file_loaded((uintptr_t) document) == 1;
        }%
        return result;
    }
    public static function updateChangeCount(int document, int changeType) -> void
    {
        %{
            ns_document_update_change_count((uintptr_t) document, (unsigned) changeType);
        }%
    }
    public static function close(int document) -> void
    {
        %{
            ns_document_close((uintptr_t) document);
        }%
    }
    public static function makeWindowControllers(int document) -> void
    {
        %{
            ns_document_make_window_controllers((uintptr_t) document);
        }%
    }
    public static function showWindows(int document) -> void
    {
        %{
            ns_document_show_windows((uintptr_t) document);
        }%
    }
    public static function windowControllersCount(int document) -> int
    {
        int count;
        %{
            count = ns_document_window_controllers_count((uintptr_t) document);
        }%
        return count;
    }
    public static function windowControllerAt(int document, int index) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_document_window_controller_at((uintptr_t) document, (int) index);
        }%
        return handle;
    }
    public static function addWindowController(int document, int windowController) -> void
    {
        %{
            ns_document_add_window_controller((uintptr_t) document, (uintptr_t) windowController);
        }%
    }
    public static function removeWindowController(int document, int windowController) -> void
    {
        %{
            ns_document_remove_window_controller((uintptr_t) document, (uintptr_t) windowController);
        }%
    }
    public static function readFromURL(int document, string url, string typeName) -> bool
    {
        bool result;
        %{
            result = ns_document_read_from_url((uintptr_t) document, Z_STRVAL(url), Z_STRVAL(typeName)) == 1;
        }%
        return result;
    }
    public static function writeToURL(int document, string url, string typeName) -> bool
    {
        bool result;
        %{
            result = ns_document_write_to_url((uintptr_t) document, Z_STRVAL(url), Z_STRVAL(typeName)) == 1;
        }%
        return result;
    }
    public static function revertToContentsOfURL(int document, string url, string typeName) -> bool
    {
        bool result;
        %{
            result = ns_document_revert_to_contents_of_url((uintptr_t) document, Z_STRVAL(url), Z_STRVAL(typeName)) == 1;
        }%
        return result;
    }
    public static function getWindowNibName(int document) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_document_get_window_nib_name((uintptr_t) document, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function getAutosavingFileType(int document) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_document_get_autosaving_file_type((uintptr_t) document, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}
