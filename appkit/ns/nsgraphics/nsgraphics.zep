namespace AppKit\NS\NSGraphics;

%{
#include "ns-graphics.h"
}%

class NSGraphics
{
    public static function beep() -> void
    {
        %{
            ns_graphics_beep();
        }%
    }

    public static function rectFill(double x, double y, double width, double height) -> void
    {
        %{
            ns_graphics_rect_fill(x, y, width, height);
        }%
    }

    public static function rectFillUsingOperation(double x, double y, double width, double height, int op) -> void
    {
        %{
            ns_graphics_rect_fill_using_operation(x, y, width, height, (unsigned int) op);
        }%
    }

    public static function frameRect(double x, double y, double width, double height) -> void
    {
        %{
            ns_graphics_frame_rect(x, y, width, height);
        }%
    }

    public static function frameRectWithWidth(double x, double y, double width, double height, double frameWidth) -> void
    {
        %{
            ns_graphics_frame_rect_with_width(x, y, width, height, frameWidth);
        }%
    }

    public static function frameRectWithWidthUsingOperation(double x, double y, double width, double height, double frameWidth, int op) -> void
    {
        %{
            ns_graphics_frame_rect_with_width_using_operation(x, y, width, height, frameWidth, (unsigned int) op);
        }%
    }

    public static function rectClip(double x, double y, double width, double height) -> void
    {
        %{
            ns_graphics_rect_clip(x, y, width, height);
        }%
    }

    public static function drawGrayBezel(double x, double y, double width, double height, double clipX, double clipY, double clipW, double clipH) -> void
    {
        %{
            ns_graphics_draw_gray_bezel(x, y, width, height, clipX, clipY, clipW, clipH);
        }%
    }

    public static function drawGroove(double x, double y, double width, double height, double clipX, double clipY, double clipW, double clipH) -> void
    {
        %{
            ns_graphics_draw_groove(x, y, width, height, clipX, clipY, clipW, clipH);
        }%
    }

    public static function drawWhiteBezel(double x, double y, double width, double height, double clipX, double clipY, double clipW, double clipH) -> void
    {
        %{
            ns_graphics_draw_white_bezel(x, y, width, height, clipX, clipY, clipW, clipH);
        }%
    }

    public static function drawButton(double x, double y, double width, double height, double clipX, double clipY, double clipW, double clipH) -> void
    {
        %{
            ns_graphics_draw_button(x, y, width, height, clipX, clipY, clipW, clipH);
        }%
    }

    public static function drawDarkBezel(double x, double y, double width, double height, double clipX, double clipY, double clipW, double clipH) -> void
    {
        %{
            ns_graphics_draw_dark_bezel(x, y, width, height, clipX, clipY, clipW, clipH);
        }%
    }

    public static function drawLightBezel(double x, double y, double width, double height, double clipX, double clipY, double clipW, double clipH) -> void
    {
        %{
            ns_graphics_draw_light_bezel(x, y, width, height, clipX, clipY, clipW, clipH);
        }%
    }

    public static function eraseRect(double x, double y, double width, double height) -> void
    {
        %{
            ns_graphics_erase_rect(x, y, width, height);
        }%
    }

    public static function highlightRect(double x, double y, double width, double height) -> void
    {
        %{
            ns_graphics_highlight_rect(x, y, width, height);
        }%
    }

    public static function dottedFrameRect(double x, double y, double width, double height) -> void
    {
        %{
            ns_graphics_dotted_frame_rect(x, y, width, height);
        }%
    }

    public static function drawWindowBackground(double x, double y, double width, double height) -> void
    {
        %{
            ns_graphics_draw_window_background(x, y, width, height);
        }%
    }

    public static function setFocusRingStyle(int placement) -> void
    {
        %{
            ns_graphics_set_focus_ring_style((unsigned int) placement);
        }%
    }

    public static function disableScreenUpdates() -> void
    {
        %{
            ns_graphics_disable_screen_updates();
        }%
    }

    public static function enableScreenUpdates() -> void
    {
        %{
            ns_graphics_enable_screen_updates();
        }%
    }

    public static function showAnimationEffect(int effect, double centerX, double centerY, double sizeW, double sizeH) -> void
    {
        %{
            ns_graphics_show_animation_effect((unsigned int) effect, centerX, centerY, sizeW, sizeH);
        }%
    }

    public static function white() -> double
    {
        double value;
        %{
            value = ns_graphics_white();
        }%
        return value;
    }

    public static function lightGray() -> double
    {
        double value;
        %{
            value = ns_graphics_light_gray();
        }%
        return value;
    }

    public static function darkGray() -> double
    {
        double value;
        %{
            value = ns_graphics_dark_gray();
        }%
        return value;
    }

    public static function black() -> double
    {
        double value;
        %{
            value = ns_graphics_black();
        }%
        return value;
    }
}
