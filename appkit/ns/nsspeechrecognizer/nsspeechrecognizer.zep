namespace AppKit\NS\NSSpeechRecognizer;

%{
#include "ns-speechrecognizer.h"
#include <stdint.h>
}%


/**
 * NSSpeechRecognizer — spoken command recognition.
 */
class NSSpeechRecognizer
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_speechrecognizer_create();
        }%
        return handle;
    }

    public static function wrap(int nsSpeechRecognizerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_speechrecognizer_wrap((void *)(uintptr_t) nsSpeechRecognizerPtr);
        }%
        return handle;
    }

    public static function destroy(int recognizer) -> void
    {
        %{
            ns_speechrecognizer_destroy((uintptr_t) recognizer);
        }%
    }

    public static function nsSpeechRecognizer(int recognizer) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_speechrecognizer_nsspeechrecognizer((uintptr_t) recognizer);
        }%
        return ptr;
    }

    public static function startListening(int recognizer) -> void
    {
        %{
            ns_speechrecognizer_start_listening((uintptr_t) recognizer);
        }%
    }

    public static function stopListening(int recognizer) -> void
    {
        %{
            ns_speechrecognizer_stop_listening((uintptr_t) recognizer);
        }%
    }

    public static function setCommands(int recognizer, array commands) -> void
    {
        %{
            const char *items[256];
            int count = 0;
            zval *entry;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(commands), entry) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(entry);
                items[count++] = Z_STRVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
            ns_speechrecognizer_set_commands((uintptr_t) recognizer, items, count);
        }%
    }

    public static function commandsCount(int recognizer) -> int
    {
        int count;
        %{
            count = ns_speechrecognizer_commands_count((uintptr_t) recognizer);
        }%
        return count;
    }

    public static function commandAt(int recognizer, int index) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_speechrecognizer_command_at((uintptr_t) recognizer, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function displayedCommandsTitle(int recognizer) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_speechrecognizer_displayed_commands_title((uintptr_t) recognizer, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setDisplayedCommandsTitle(int recognizer, string title) -> void
    {
        %{
            ns_speechrecognizer_set_displayed_commands_title((uintptr_t) recognizer, Z_STRVAL(title));
        }%
    }

    public static function listensInForegroundOnly(int recognizer) -> bool
    {
        bool result;
        %{
            result = ns_speechrecognizer_listens_in_foreground_only((uintptr_t) recognizer) == 1;
        }%
        return result;
    }

    public static function setListensInForegroundOnly(int recognizer, bool flag) -> void
    {
        %{
            ns_speechrecognizer_set_listens_in_foreground_only((uintptr_t) recognizer, flag ? 1 : 0);
        }%
    }

    public static function blocksOtherRecognizers(int recognizer) -> bool
    {
        bool result;
        %{
            result = ns_speechrecognizer_blocks_other_recognizers((uintptr_t) recognizer) == 1;
        }%
        return result;
    }

    public static function setBlocksOtherRecognizers(int recognizer, bool flag) -> void
    {
        %{
            ns_speechrecognizer_set_blocks_other_recognizers((uintptr_t) recognizer, flag ? 1 : 0);
        }%
    }
}
