#ifndef PHP_APPKIT_NS_GRAPHICS_H
#define PHP_APPKIT_NS_GRAPHICS_H

#ifdef __cplusplus
extern "C" {
#endif

void ns_graphics_beep(void);
void ns_graphics_rect_fill(double x, double y, double width, double height);
void ns_graphics_rect_fill_using_operation(double x, double y, double width, double height, unsigned int op);
void ns_graphics_frame_rect(double x, double y, double width, double height);
void ns_graphics_frame_rect_with_width(double x, double y, double width, double height, double frame_width);
void ns_graphics_frame_rect_with_width_using_operation(double x, double y, double width, double height, double frame_width, unsigned int op);
void ns_graphics_rect_clip(double x, double y, double width, double height);
void ns_graphics_draw_gray_bezel(double x, double y, double width, double height, double clip_x, double clip_y, double clip_w, double clip_h);
void ns_graphics_draw_groove(double x, double y, double width, double height, double clip_x, double clip_y, double clip_w, double clip_h);
void ns_graphics_draw_white_bezel(double x, double y, double width, double height, double clip_x, double clip_y, double clip_w, double clip_h);
void ns_graphics_draw_button(double x, double y, double width, double height, double clip_x, double clip_y, double clip_w, double clip_h);
void ns_graphics_draw_dark_bezel(double x, double y, double width, double height, double clip_x, double clip_y, double clip_w, double clip_h);
void ns_graphics_draw_light_bezel(double x, double y, double width, double height, double clip_x, double clip_y, double clip_w, double clip_h);
void ns_graphics_erase_rect(double x, double y, double width, double height);
void ns_graphics_highlight_rect(double x, double y, double width, double height);
void ns_graphics_dotted_frame_rect(double x, double y, double width, double height);
void ns_graphics_draw_window_background(double x, double y, double width, double height);
void ns_graphics_set_focus_ring_style(unsigned int placement);
void ns_graphics_disable_screen_updates(void);
void ns_graphics_enable_screen_updates(void);
void ns_graphics_show_animation_effect(unsigned int effect, double center_x, double center_y, double size_w, double size_h);
double ns_graphics_white(void);
double ns_graphics_light_gray(void);
double ns_graphics_dark_gray(void);
double ns_graphics_black(void);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_GRAPHICS_H */
