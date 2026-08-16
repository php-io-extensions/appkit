#import <AppKit/AppKit.h>
#import "ns-graphics.h"

static NSRect ns_rect(double x, double y, double width, double height)
{
    return NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
}

void ns_graphics_beep(void)
{
    NSBeep();
}

void ns_graphics_rect_fill(double x, double y, double width, double height)
{
    NSRectFill(ns_rect(x, y, width, height));
}

void ns_graphics_rect_fill_using_operation(double x, double y, double width, double height, unsigned int op)
{
    NSRectFillUsingOperation(ns_rect(x, y, width, height), (NSCompositingOperation)op);
}

void ns_graphics_frame_rect(double x, double y, double width, double height)
{
    NSFrameRect(ns_rect(x, y, width, height));
}

void ns_graphics_frame_rect_with_width(double x, double y, double width, double height, double frame_width)
{
    NSFrameRectWithWidth(ns_rect(x, y, width, height), (CGFloat)frame_width);
}

void ns_graphics_frame_rect_with_width_using_operation(double x, double y, double width, double height, double frame_width, unsigned int op)
{
    NSFrameRectWithWidthUsingOperation(ns_rect(x, y, width, height), (CGFloat)frame_width, (NSCompositingOperation)op);
}

void ns_graphics_rect_clip(double x, double y, double width, double height)
{
    NSRectClip(ns_rect(x, y, width, height));
}

void ns_graphics_draw_gray_bezel(double x, double y, double width, double height, double clip_x, double clip_y, double clip_w, double clip_h)
{
    NSDrawGrayBezel(ns_rect(x, y, width, height), ns_rect(clip_x, clip_y, clip_w, clip_h));
}

void ns_graphics_draw_groove(double x, double y, double width, double height, double clip_x, double clip_y, double clip_w, double clip_h)
{
    NSDrawGroove(ns_rect(x, y, width, height), ns_rect(clip_x, clip_y, clip_w, clip_h));
}

void ns_graphics_draw_white_bezel(double x, double y, double width, double height, double clip_x, double clip_y, double clip_w, double clip_h)
{
    NSDrawWhiteBezel(ns_rect(x, y, width, height), ns_rect(clip_x, clip_y, clip_w, clip_h));
}

void ns_graphics_draw_button(double x, double y, double width, double height, double clip_x, double clip_y, double clip_w, double clip_h)
{
    NSDrawButton(ns_rect(x, y, width, height), ns_rect(clip_x, clip_y, clip_w, clip_h));
}

void ns_graphics_draw_dark_bezel(double x, double y, double width, double height, double clip_x, double clip_y, double clip_w, double clip_h)
{
    NSDrawDarkBezel(ns_rect(x, y, width, height), ns_rect(clip_x, clip_y, clip_w, clip_h));
}

void ns_graphics_draw_light_bezel(double x, double y, double width, double height, double clip_x, double clip_y, double clip_w, double clip_h)
{
    NSDrawLightBezel(ns_rect(x, y, width, height), ns_rect(clip_x, clip_y, clip_w, clip_h));
}

void ns_graphics_erase_rect(double x, double y, double width, double height)
{
    NSEraseRect(ns_rect(x, y, width, height));
}

void ns_graphics_highlight_rect(double x, double y, double width, double height)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    NSHighlightRect(ns_rect(x, y, width, height));
#pragma clang diagnostic pop
}

void ns_graphics_dotted_frame_rect(double x, double y, double width, double height)
{
    NSDottedFrameRect(ns_rect(x, y, width, height));
}

void ns_graphics_draw_window_background(double x, double y, double width, double height)
{
    NSDrawWindowBackground(ns_rect(x, y, width, height));
}

void ns_graphics_set_focus_ring_style(unsigned int placement)
{
    NSSetFocusRingStyle((NSFocusRingPlacement)placement);
}

void ns_graphics_disable_screen_updates(void)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    NSDisableScreenUpdates();
#pragma clang diagnostic pop
}

void ns_graphics_enable_screen_updates(void)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    NSEnableScreenUpdates();
#pragma clang diagnostic pop
}

void ns_graphics_show_animation_effect(unsigned int effect, double center_x, double center_y, double size_w, double size_h)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    NSShowAnimationEffect((NSAnimationEffect)effect,
                          NSMakePoint((CGFloat)center_x, (CGFloat)center_y),
                          NSMakeSize((CGFloat)size_w, (CGFloat)size_h),
                          nil,
                          NULL,
                          NULL);
#pragma clang diagnostic pop
}

double ns_graphics_white(void)
{
    return (double)NSWhite;
}

double ns_graphics_light_gray(void)
{
    return (double)NSLightGray;
}

double ns_graphics_dark_gray(void)
{
    return (double)NSDarkGray;
}

double ns_graphics_black(void)
{
    return (double)NSBlack;
}
