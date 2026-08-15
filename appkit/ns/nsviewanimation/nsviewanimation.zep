namespace AppKit\NS\NSViewAnimation;

%{
#include "ns-viewanimation.h"
#include "ns-animation.h"
#include <stdint.h>
}%

/**
 * NSViewAnimation — fade and frame animations for views/windows.
 */
class NSViewAnimation
{
    public static function createFadeIn(int targetHandle, bool isWindow, float duration) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_viewanimation_create_fade((uintptr_t) targetHandle, isWindow ? 1 : 0, 0, (double) duration);
        }%
        return handle;
    }

    public static function createFadeOut(int targetHandle, bool isWindow, float duration) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_viewanimation_create_fade((uintptr_t) targetHandle, isWindow ? 1 : 0, 1, (double) duration);
        }%
        return handle;
    }

    public static function createWithFrames(int targetHandle, bool isWindow, float startX, float startY, float startW, float startH, float endX, float endY, float endW, float endH, float duration) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_viewanimation_create_frame(
                (uintptr_t) targetHandle,
                isWindow ? 1 : 0,
                (double) startX, (double) startY, (double) startW, (double) startH,
                (double) endX, (double) endY, (double) endW, (double) endH,
                (double) duration
            );
        }%
        return handle;
    }

    public static function wrap(int nsViewAnimationPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_viewanimation_wrap((void *)(uintptr_t) nsViewAnimationPtr);
        }%
        return handle;
    }

    public static function destroy(int animation) -> void
    {
        %{
            ns_viewanimation_destroy((uintptr_t) animation);
        }%
    }

    public static function nsViewAnimation(int animation) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_viewanimation_nsviewanimation((uintptr_t) animation);
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
}
