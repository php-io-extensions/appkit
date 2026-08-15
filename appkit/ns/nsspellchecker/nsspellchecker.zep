namespace AppKit\NS\NSSpellChecker;

%{
#include "ns-spellchecker.h"
#include <stdint.h>
}%


/**
 * NSSpellChecker — shared spelling service.
 */
class NSSpellChecker
{
    public static function shared() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_spellchecker_shared();
        }%
        return handle;
    }

    public static function destroy(int checker) -> void
    {
        %{
            ns_spellchecker_destroy((uintptr_t) checker);
        }%
    }

    public static function uniqueSpellDocumentTag() -> int
    {
        int value;
        %{
            value = (zend_long) ns_spellchecker_unique_spell_document_tag();
        }%
        return value;
    }

    /**
     * @return array [location, length] — location is -1 when NSNotFound
     */
    public static function checkSpelling(int checker, string text, int startingAt = 0) -> array
    {
        array out = [];
        %{
            int location = 0, length = 0;
            ns_spellchecker_check_spelling((uintptr_t) checker, Z_STRVAL(text), (int) startingAt, &location, &length);
            add_next_index_long(&out, location);
            add_next_index_long(&out, length);
        }%
        return out;
    }

    public static function countWordsInString(int checker, string text, string language = "") -> int
    {
        int value;
        %{
            value = (zend_long) ns_spellchecker_count_words_in_string((uintptr_t) checker, Z_STRVAL(text), Z_STRVAL(language));
        }%
        return value;
    }

    public static function ignoreWord(int checker, string word, int tag) -> void
    {
        %{
            ns_spellchecker_ignore_word((uintptr_t) checker, Z_STRVAL(word), (int) tag);
        }%
    }

    public static function ignoredWordsCount(int checker, int tag) -> int
    {
        int value;
        %{
            value = (zend_long) ns_spellchecker_ignored_words_count((uintptr_t) checker, (int) tag);
        }%
        return value;
    }

    public static function ignoredWordsAt(int checker, int tag, int index) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_spellchecker_ignored_word_at((uintptr_t) checker, (int) tag, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function updateSpellingPanelWithMisspelledWord(int checker, string word) -> void
    {
        %{
            ns_spellchecker_update_spelling_panel_with_misspelled_word((uintptr_t) checker, Z_STRVAL(word));
        }%
    }

    public static function updatePanels(int checker) -> void
    {
        %{
            ns_spellchecker_update_panels((uintptr_t) checker);
        }%
    }

    public static function isAutomaticSpellingCorrectionEnabled(int checker) -> bool
    {
        bool result;
        %{
            result = ns_spellchecker_is_automatic_spelling_correction_enabled((uintptr_t) checker) == 1;
        }%
        return result;
    }

    public static function setAutomaticSpellingCorrectionEnabled(int checker, bool flag) -> void
    {
        %{
            ns_spellchecker_set_automatic_spelling_correction_enabled((uintptr_t) checker, flag ? 1 : 0);
        }%
    }
}
