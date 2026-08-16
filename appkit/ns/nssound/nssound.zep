namespace AppKit\NS\NSSound;

%{
#include "ns-sound.h"
#include <stdint.h>
}%


/**
 * NSSound — named and file-based sound playback.
 */
class NSSound
{
    public static function soundNamed(string name) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_sound_sound_named(Z_STRVAL(name));
        }%
        return handle;
    }

    public static function createWithContentsOfFile(string path, bool byRef = false) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_sound_create_with_contents_of_file(Z_STRVAL(path), byRef ? 1 : 0);
        }%
        return handle;
    }

    public static function createWithContentsOfURL(string url, bool byRef = false) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_sound_create_with_contents_of_url(Z_STRVAL(url), byRef ? 1 : 0);
        }%
        return handle;
    }

    public static function wrap(int nsSoundPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_sound_wrap((void *)(uintptr_t) nsSoundPtr);
        }%
        return handle;
    }

    public static function destroy(int sound) -> void
    {
        %{
            ns_sound_destroy((uintptr_t) sound);
        }%
    }

    public static function nsSound(int sound) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_sound_nssound((uintptr_t) sound);
        }%
        return ptr;
    }

    public static function setName(int sound, string name) -> bool
    {
        bool result;
        %{
            result = ns_sound_set_name((uintptr_t) sound, Z_STRVAL(name)) == 1;
        }%
        return result;
    }

    public static function name(int sound) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_sound_name((uintptr_t) sound, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function play(int sound) -> bool
    {
        bool result;
        %{
            result = ns_sound_play((uintptr_t) sound) == 1;
        }%
        return result;
    }

    public static function pause(int sound) -> bool
    {
        bool result;
        %{
            result = ns_sound_pause((uintptr_t) sound) == 1;
        }%
        return result;
    }

    public static function resume(int sound) -> bool
    {
        bool result;
        %{
            result = ns_sound_resume((uintptr_t) sound) == 1;
        }%
        return result;
    }

    public static function stop(int sound) -> bool
    {
        bool result;
        %{
            result = ns_sound_stop((uintptr_t) sound) == 1;
        }%
        return result;
    }

    public static function isPlaying(int sound) -> bool
    {
        bool result;
        %{
            result = ns_sound_is_playing((uintptr_t) sound) == 1;
        }%
        return result;
    }

    public static function duration(int sound) -> double
    {
        double value;
        %{
            value = ns_sound_duration((uintptr_t) sound);
        }%
        return value;
    }

    public static function volume(int sound) -> double
    {
        double value;
        %{
            value = (double) ns_sound_volume((uintptr_t) sound);
        }%
        return value;
    }

    public static function setVolume(int sound, double volume) -> void
    {
        %{
            ns_sound_set_volume((uintptr_t) sound, (float) volume);
        }%
    }

    public static function currentTime(int sound) -> double
    {
        double value;
        %{
            value = ns_sound_current_time((uintptr_t) sound);
        }%
        return value;
    }

    public static function setCurrentTime(int sound, double seconds) -> void
    {
        %{
            ns_sound_set_current_time((uintptr_t) sound, seconds);
        }%
    }

    public static function loops(int sound) -> bool
    {
        bool result;
        %{
            result = ns_sound_loops((uintptr_t) sound) == 1;
        }%
        return result;
    }

    public static function setLoops(int sound, bool loops) -> void
    {
        %{
            ns_sound_set_loops((uintptr_t) sound, loops ? 1 : 0);
        }%
    }

    public static function playbackDeviceIdentifier(int sound) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_sound_playback_device_identifier((uintptr_t) sound, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setPlaybackDeviceIdentifier(int sound, string identifier) -> void
    {
        %{
            ns_sound_set_playback_device_identifier((uintptr_t) sound, Z_STRVAL(identifier));
        }%
    }

    public static function canInitWithPasteboard(int pasteboard) -> bool
    {
        bool result;
        %{
            result = ns_sound_can_init_with_pasteboard((uintptr_t) pasteboard) == 1;
        }%
        return result;
    }

    public static function createWithPasteboard(int pasteboard) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_sound_create_with_pasteboard((uintptr_t) pasteboard);
        }%
        return handle;
    }

    public static function writeToPasteboard(int sound, int pasteboard) -> void
    {
        %{
            ns_sound_write_to_pasteboard((uintptr_t) sound, (uintptr_t) pasteboard);
        }%
    }

    public static function unfilteredTypesCount() -> int
    {
        int count;
        %{
            count = ns_sound_unfiltered_types_count();
        }%
        return count;
    }

    public static function unfilteredTypeAt(int index) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_sound_unfiltered_type_at((int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}
