namespace AppKit\NS\NSSpeechSynthesizer;

%{
#include "ns-speechsynthesizer.h"
#include <stdint.h>
}%


/**
 * NSSpeechSynthesizer — text-to-speech (deprecated on macOS 14; use AVSpeechSynthesizer for new code).
 */
class NSSpeechSynthesizer
{
    public static function create(string voice = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_speechsynthesizer_create(Z_STRVAL(voice));
        }%
        return handle;
    }

    public static function wrap(int nsSpeechSynthesizerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_speechsynthesizer_wrap((void *)(uintptr_t) nsSpeechSynthesizerPtr);
        }%
        return handle;
    }

    public static function destroy(int synthesizer) -> void
    {
        %{
            ns_speechsynthesizer_destroy((uintptr_t) synthesizer);
        }%
    }

    public static function nsSpeechSynthesizer(int synthesizer) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_speechsynthesizer_nsspeechsynthesizer((uintptr_t) synthesizer);
        }%
        return ptr;
    }

    public static function startSpeakingString(int synthesizer, string text) -> bool
    {
        bool result;
        %{
            result = ns_speechsynthesizer_start_speaking_string((uintptr_t) synthesizer, Z_STRVAL(text)) == 1;
        }%
        return result;
    }

    public static function startSpeakingStringToURL(int synthesizer, string text, string url) -> bool
    {
        bool result;
        %{
            result = ns_speechsynthesizer_start_speaking_string_to_url((uintptr_t) synthesizer, Z_STRVAL(text), Z_STRVAL(url)) == 1;
        }%
        return result;
    }

    public static function isSpeaking(int synthesizer) -> bool
    {
        bool result;
        %{
            result = ns_speechsynthesizer_is_speaking((uintptr_t) synthesizer) == 1;
        }%
        return result;
    }

    public static function stopSpeaking(int synthesizer) -> void
    {
        %{
            ns_speechsynthesizer_stop_speaking((uintptr_t) synthesizer);
        }%
    }

    public static function stopSpeakingAtBoundary(int synthesizer, int boundary) -> void
    {
        %{
            ns_speechsynthesizer_stop_speaking_at_boundary((uintptr_t) synthesizer, (int) boundary);
        }%
    }

    public static function pauseSpeakingAtBoundary(int synthesizer, int boundary) -> void
    {
        %{
            ns_speechsynthesizer_pause_speaking_at_boundary((uintptr_t) synthesizer, (int) boundary);
        }%
    }

    public static function continueSpeaking(int synthesizer) -> void
    {
        %{
            ns_speechsynthesizer_continue_speaking((uintptr_t) synthesizer);
        }%
    }

    public static function voice(int synthesizer) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_speechsynthesizer_voice((uintptr_t) synthesizer, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setVoice(int synthesizer, string voice) -> bool
    {
        bool result;
        %{
            result = ns_speechsynthesizer_set_voice((uintptr_t) synthesizer, Z_STRVAL(voice)) == 1;
        }%
        return result;
    }

    public static function rate(int synthesizer) -> double
    {
        double value;
        %{
            value = (double) ns_speechsynthesizer_rate((uintptr_t) synthesizer);
        }%
        return value;
    }

    public static function setRate(int synthesizer, double rate) -> void
    {
        %{
            ns_speechsynthesizer_set_rate((uintptr_t) synthesizer, (float) rate);
        }%
    }

    public static function volume(int synthesizer) -> double
    {
        double value;
        %{
            value = (double) ns_speechsynthesizer_volume((uintptr_t) synthesizer);
        }%
        return value;
    }

    public static function setVolume(int synthesizer, double volume) -> void
    {
        %{
            ns_speechsynthesizer_set_volume((uintptr_t) synthesizer, (float) volume);
        }%
    }

    public static function usesFeedbackWindow(int synthesizer) -> bool
    {
        bool result;
        %{
            result = ns_speechsynthesizer_uses_feedback_window((uintptr_t) synthesizer) == 1;
        }%
        return result;
    }

    public static function setUsesFeedbackWindow(int synthesizer, bool flag) -> void
    {
        %{
            ns_speechsynthesizer_set_uses_feedback_window((uintptr_t) synthesizer, flag ? 1 : 0);
        }%
    }

    public static function phonemesFromText(int synthesizer, string text) -> string
    {
        %{
            char buf[8192];
            buf[0] = '\0';
            if (ns_speechsynthesizer_phonemes_from_text((uintptr_t) synthesizer, Z_STRVAL(text), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function isAnyApplicationSpeaking() -> bool
    {
        bool result;
        %{
            result = ns_speechsynthesizer_is_any_application_speaking() == 1;
        }%
        return result;
    }

    public static function defaultVoice() -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_speechsynthesizer_default_voice(buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function availableVoicesCount() -> int
    {
        int count;
        %{
            count = ns_speechsynthesizer_available_voices_count();
        }%
        return count;
    }

    public static function availableVoiceAt(int index) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_speechsynthesizer_available_voice_at((int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function attributeForVoice(string voice, string key) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_speechsynthesizer_attribute_for_voice(Z_STRVAL(voice), Z_STRVAL(key), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}
