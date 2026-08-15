namespace AppKit\NS\NSAnimation;

%{
#include "ns-animation.h"
#include <stdint.h>
}%

/**
 * NSAnimation — timed progress animation.
 */
class NSAnimation
{
    public static function create(float duration, int curve = 0) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_animation_create((double) duration, (int) curve);
        }%
        return handle;
    }

    public static function wrap(int nsAnimationPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_animation_wrap((void *)(uintptr_t) nsAnimationPtr);
        }%
        return handle;
    }

    public static function destroy(int animation) -> void
    {
        %{
            ns_animation_destroy((uintptr_t) animation);
        }%
    }

    public static function nsAnimation(int animation) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_animation_nsanimation((uintptr_t) animation);
        }%
        return ptr;
    }

    public static function start(int animation) -> void
    {
        %{
            ns_animation_start((uintptr_t) animation);
        }%
    }

    public static function stop(int animation) -> void
    {
        %{
            ns_animation_stop((uintptr_t) animation);
        }%
    }

    public static function isAnimating(int animation) -> bool
    {
        bool result;
        %{
            result = ns_animation_is_animating((uintptr_t) animation) == 1;
        }%
        return result;
    }

    public static function setCurrentProgress(int animation, float progress) -> void
    {
        %{
            ns_animation_set_current_progress((uintptr_t) animation, (float) progress);
        }%
    }

    public static function getCurrentProgress(int animation) -> double
    {
        double value;
        %{
            value = (double) ns_animation_get_current_progress((uintptr_t) animation);
        }%
        return value;
    }

    public static function setDuration(int animation, float duration) -> void
    {
        %{
            ns_animation_set_duration((uintptr_t) animation, (double) duration);
        }%
    }

    public static function getDuration(int animation) -> double
    {
        double value;
        %{
            value = ns_animation_get_duration((uintptr_t) animation);
        }%
        return value;
    }

    public static function setBlockingMode(int animation, int mode) -> void
    {
        %{
            ns_animation_set_blocking_mode((uintptr_t) animation, (int) mode);
        }%
    }

    public static function getBlockingMode(int animation) -> int
    {
        int value;
        %{
            value = (zend_long) ns_animation_get_blocking_mode((uintptr_t) animation);
        }%
        return value;
    }

    public static function setFrameRate(int animation, float frameRate) -> void
    {
        %{
            ns_animation_set_frame_rate((uintptr_t) animation, (float) frameRate);
        }%
    }

    public static function getFrameRate(int animation) -> double
    {
        double value;
        %{
            value = (double) ns_animation_get_frame_rate((uintptr_t) animation);
        }%
        return value;
    }

    public static function setCurve(int animation, int curve) -> void
    {
        %{
            ns_animation_set_curve((uintptr_t) animation, (int) curve);
        }%
    }

    public static function getCurve(int animation) -> int
    {
        int value;
        %{
            value = (zend_long) ns_animation_get_curve((uintptr_t) animation);
        }%
        return value;
    }

    public static function getCurrentValue(int animation) -> double
    {
        double value;
        %{
            value = (double) ns_animation_get_current_value((uintptr_t) animation);
        }%
        return value;
    }

    public static function addProgressMark(int animation, float mark) -> void
    {
        %{
            ns_animation_add_progress_mark((uintptr_t) animation, (float) mark);
        }%
    }

    public static function removeProgressMark(int animation, float mark) -> void
    {
        %{
            ns_animation_remove_progress_mark((uintptr_t) animation, (float) mark);
        }%
    }
}
