namespace AppKit\NS\NSDocumentController;

%{
#include "ns-documentcontroller.h"
#include <stdint.h>
}%


/**
 * NSDocumentController shared document registry and open/save orchestration.
 */
class NSDocumentController
{
    public static function shared() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_documentcontroller_shared();
        }%
        return handle;
    }
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_documentcontroller_create();
        }%
        return handle;
    }
    public static function wrap(int nsDocumentControllerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_documentcontroller_wrap((void *)(uintptr_t) nsDocumentControllerPtr);
        }%
        return handle;
    }
    public static function destroy(int controller) -> void
    {
        %{
            ns_documentcontroller_destroy((uintptr_t) controller);
        }%
    }
    public static function nsDocumentController(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_documentcontroller_nsdocumentcontroller((uintptr_t) controller);
        }%
        return ptr;
    }
    public static function documentsCount(int controller) -> int
    {
        int count;
        %{
            count = ns_documentcontroller_documents_count((uintptr_t) controller);
        }%
        return count;
    }
    public static function documentAt(int controller, int index) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_documentcontroller_document_at((uintptr_t) controller, (int) index);
        }%
        return handle;
    }
    public static function currentDocument(int controller) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_documentcontroller_current_document((uintptr_t) controller);
        }%
        return handle;
    }
    public static function currentDirectory(int controller) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_documentcontroller_current_directory((uintptr_t) controller, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function documentForURL(int controller, string url) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_documentcontroller_document_for_url((uintptr_t) controller, Z_STRVAL(url));
        }%
        return handle;
    }
    public static function documentForWindow(int controller, int window) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_documentcontroller_document_for_window((uintptr_t) controller, (uintptr_t) window);
        }%
        return handle;
    }
    public static function addDocument(int controller, int document) -> void
    {
        %{
            ns_documentcontroller_add_document((uintptr_t) controller, (uintptr_t) document);
        }%
    }
    public static function removeDocument(int controller, int document) -> void
    {
        %{
            ns_documentcontroller_remove_document((uintptr_t) controller, (uintptr_t) document);
        }%
    }
    public static function defaultType(int controller) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_documentcontroller_default_type((uintptr_t) controller, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function openUntitledDocumentAndDisplay(int controller, bool displayDocument) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_documentcontroller_open_untitled_document_and_display((uintptr_t) controller, displayDocument ? 1 : 0);
        }%
        return handle;
    }
    public static function hasEditedDocuments(int controller) -> bool
    {
        bool result;
        %{
            result = ns_documentcontroller_has_edited_documents((uintptr_t) controller) == 1;
        }%
        return result;
    }
    public static function documentClassNamesCount(int controller) -> int
    {
        int count;
        %{
            count = ns_documentcontroller_document_class_names_count((uintptr_t) controller);
        }%
        return count;
    }
    public static function documentClassNameAt(int controller, int index) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_documentcontroller_document_class_name_at((uintptr_t) controller, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function displayNameForType(int controller, string typeName) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_documentcontroller_display_name_for_type((uintptr_t) controller, Z_STRVAL(typeName), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function recentDocumentURLsCount(int controller) -> int
    {
        int count;
        %{
            count = ns_documentcontroller_recent_document_urls_count((uintptr_t) controller);
        }%
        return count;
    }
    public static function recentDocumentURLAt(int controller, int index) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_documentcontroller_recent_document_url_at((uintptr_t) controller, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function noteNewRecentDocument(int controller, int document) -> void
    {
        %{
            ns_documentcontroller_note_new_recent_document((uintptr_t) controller, (uintptr_t) document);
        }%
    }
    public static function noteNewRecentDocumentURL(int controller, string url) -> void
    {
        %{
            ns_documentcontroller_note_new_recent_document_url((uintptr_t) controller, Z_STRVAL(url));
        }%
    }
    public static function clearRecentDocuments(int controller) -> void
    {
        %{
            ns_documentcontroller_clear_recent_documents((uintptr_t) controller);
        }%
    }
}
