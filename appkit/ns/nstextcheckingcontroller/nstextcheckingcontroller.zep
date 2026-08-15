namespace AppKit\NS\NSTextCheckingController;

%{
#include "ns-textcheckingcontroller.h"
#include <stdint.h>
}%


/**
 * NSTextCheckingController — coordinates spell/link checking for a text client.
 */
class NSTextCheckingController
{
    public static function createWithClient(int clientPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textcheckingcontroller_create_with_client((void *)(uintptr_t) clientPtr);
        }%
        return handle;
    }

    public static function wrap(int nsTextCheckingControllerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textcheckingcontroller_wrap((void *)(uintptr_t) nsTextCheckingControllerPtr);
        }%
        return handle;
    }

    public static function destroy(int controller) -> void
    {
        %{
            ns_textcheckingcontroller_destroy((uintptr_t) controller);
        }%
    }

    public static function nsTextCheckingController(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_textcheckingcontroller_nstextcheckingcontroller((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function client(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_textcheckingcontroller_client((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function invalidate(int controller) -> void
    {
        %{
            ns_textcheckingcontroller_invalidate((uintptr_t) controller);
        }%
    }

    public static function didChangeTextInRange(int controller, int location, int length) -> void
    {
        %{
            ns_textcheckingcontroller_did_change_text_in_range((uintptr_t) controller, (int) location, (int) length);
        }%
    }

    public static function insertedTextInRange(int controller, int location, int length) -> void
    {
        %{
            ns_textcheckingcontroller_inserted_text_in_range((uintptr_t) controller, (int) location, (int) length);
        }%
    }

    public static function didChangeSelectedRange(int controller) -> void
    {
        %{
            ns_textcheckingcontroller_did_change_selected_range((uintptr_t) controller);
        }%
    }

    public static function considerTextCheckingForRange(int controller, int location, int length) -> void
    {
        %{
            ns_textcheckingcontroller_consider_text_checking_for_range((uintptr_t) controller, (int) location, (int) length);
        }%
    }

    public static function checkTextInRange(int controller, int location, int length, int types, int options = 0) -> void
    {
        %{
            ns_textcheckingcontroller_check_text_in_range((uintptr_t) controller, (int) location, (int) length, (unsigned long long) types, (uintptr_t) options);
        }%
    }

    public static function checkTextInSelection(int controller) -> void
    {
        %{
            ns_textcheckingcontroller_check_text_in_selection((uintptr_t) controller);
        }%
    }

    public static function checkTextInDocument(int controller) -> void
    {
        %{
            ns_textcheckingcontroller_check_text_in_document((uintptr_t) controller);
        }%
    }

    public static function orderFrontSubstitutionsPanel(int controller) -> void
    {
        %{
            ns_textcheckingcontroller_order_front_substitutions_panel((uintptr_t) controller);
        }%
    }

    public static function checkSpelling(int controller) -> void
    {
        %{
            ns_textcheckingcontroller_check_spelling((uintptr_t) controller);
        }%
    }

    public static function showGuessPanel(int controller) -> void
    {
        %{
            ns_textcheckingcontroller_show_guess_panel((uintptr_t) controller);
        }%
    }

    public static function changeSpelling(int controller) -> void
    {
        %{
            ns_textcheckingcontroller_change_spelling((uintptr_t) controller);
        }%
    }

    public static function ignoreSpelling(int controller) -> void
    {
        %{
            ns_textcheckingcontroller_ignore_spelling((uintptr_t) controller);
        }%
    }

    public static function updateCandidates(int controller) -> void
    {
        %{
            ns_textcheckingcontroller_update_candidates((uintptr_t) controller);
        }%
    }

    public static function getValidAnnotations(int controller) -> array
    {
        array out = [];
        %{
            int count = ns_textcheckingcontroller_valid_annotations_count((uintptr_t) controller);
            int i;
            for (i = 0; i < count; i++) {
                char buf[4096];
                buf[0] = '\0';
                if (ns_textcheckingcontroller_valid_annotation_at((uintptr_t) controller, i, buf, (int) sizeof(buf))) {
                    add_next_index_string(&out, buf);
                }
            }
        }%
        return out;
    }

    public static function setSpellCheckerDocumentTag(int controller, int tag) -> void
    {
        %{
            ns_textcheckingcontroller_set_spell_checker_document_tag((uintptr_t) controller, (int) tag);
        }%
    }

    public static function getSpellCheckerDocumentTag(int controller) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textcheckingcontroller_get_spell_checker_document_tag((uintptr_t) controller);
        }%
        return value;
    }

    /**
     * @return array [menuHandle, effectiveLocation, effectiveLength]
     */
    public static function menuAtIndex(int controller, int location, bool clickedOnSelection) -> array
    {
        array out = [0, 0, 0];
        %{
            int effective_location = 0;
            int effective_length = 0;
            uintptr_t menu = ns_textcheckingcontroller_menu_at_index(
                (uintptr_t) controller,
                (int) location,
                clickedOnSelection ? 1 : 0,
                &effective_location,
                &effective_length
            );
            add_index_long(&out, 0, (zend_long) menu);
            add_index_long(&out, 1, (zend_long) effective_location);
            add_index_long(&out, 2, (zend_long) effective_length);
        }%
        return out;
    }
}
