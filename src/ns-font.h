#ifndef PHP_APPKIT_NS_FONT_H
#define PHP_APPKIT_NS_FONT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_FONT_META_SYSTEM = 0,
    NS_FONT_META_BOLD_SYSTEM,
    NS_FONT_META_LABEL,
    NS_FONT_META_TITLE_BAR,
    NS_FONT_META_MENU,
    NS_FONT_META_MENU_BAR,
    NS_FONT_META_MESSAGE,
    NS_FONT_META_PALETTE,
    NS_FONT_META_TOOL_TIPS,
    NS_FONT_META_CONTROL_CONTENT,
    NS_FONT_META_USER,
    NS_FONT_META_USER_FIXED_PITCH
} ns_font_meta_kind;

typedef enum {
    NS_FONT_WEIGHT_ULTRA_LIGHT = 0,
    NS_FONT_WEIGHT_THIN,
    NS_FONT_WEIGHT_LIGHT,
    NS_FONT_WEIGHT_REGULAR,
    NS_FONT_WEIGHT_MEDIUM,
    NS_FONT_WEIGHT_SEMIBOLD,
    NS_FONT_WEIGHT_BOLD,
    NS_FONT_WEIGHT_HEAVY,
    NS_FONT_WEIGHT_BLACK
} ns_font_weight_kind;

typedef enum {
    NS_FONT_WIDTH_COMPRESSED = 0,
    NS_FONT_WIDTH_CONDENSED,
    NS_FONT_WIDTH_STANDARD,
    NS_FONT_WIDTH_EXPANDED
} ns_font_width_kind;

typedef enum {
    NS_FONT_TEXT_STYLE_LARGE_TITLE = 0,
    NS_FONT_TEXT_STYLE_TITLE1,
    NS_FONT_TEXT_STYLE_TITLE2,
    NS_FONT_TEXT_STYLE_TITLE3,
    NS_FONT_TEXT_STYLE_HEADLINE,
    NS_FONT_TEXT_STYLE_SUBHEADLINE,
    NS_FONT_TEXT_STYLE_BODY,
    NS_FONT_TEXT_STYLE_CALLOUT,
    NS_FONT_TEXT_STYLE_FOOTNOTE,
    NS_FONT_TEXT_STYLE_CAPTION1,
    NS_FONT_TEXT_STYLE_CAPTION2
} ns_font_text_style_kind;

uintptr_t ns_font_wrap(void *font);

void ns_font_destroy(uintptr_t font);

void *ns_font_nsfont(uintptr_t font);

uintptr_t ns_font_with_name(const char *name, double size);

uintptr_t ns_font_with_descriptor(uintptr_t descriptor, double size);

uintptr_t ns_font_meta(int kind, double size);

uintptr_t ns_font_system_weight(double size, int weight_kind);

uintptr_t ns_font_system_weight_width(double size, int weight_kind, int width_kind);

uintptr_t ns_font_monospaced_digit_system(double size, int weight_kind);

uintptr_t ns_font_monospaced_system(double size, int weight_kind);

uintptr_t ns_font_preferred_for_text_style(int style_kind);

uintptr_t ns_font_with_size(uintptr_t font, double size);

void ns_font_set_user_font(uintptr_t font);

void ns_font_set_user_fixed_pitch_font(uintptr_t font);

double ns_font_system_font_size(void);

double ns_font_small_system_font_size(void);

double ns_font_label_font_size(void);

double ns_font_system_font_size_for_control_size(unsigned control_size);

int ns_font_font_name(uintptr_t font, char *out, int out_len);

int ns_font_family_name(uintptr_t font, char *out, int out_len);

int ns_font_display_name(uintptr_t font, char *out, int out_len);

double ns_font_point_size(uintptr_t font);

uintptr_t ns_font_font_descriptor(uintptr_t font);

unsigned ns_font_number_of_glyphs(uintptr_t font);

int ns_font_is_fixed_pitch(uintptr_t font);

int ns_font_is_vertical(uintptr_t font);

uintptr_t ns_font_vertical_font(uintptr_t font);

double ns_font_ascender(uintptr_t font);

double ns_font_descender(uintptr_t font);

double ns_font_leading(uintptr_t font);

double ns_font_underline_position(uintptr_t font);

double ns_font_underline_thickness(uintptr_t font);

double ns_font_italic_angle(uintptr_t font);

double ns_font_cap_height(uintptr_t font);

double ns_font_x_height(uintptr_t font);

int ns_font_bounding_rect(uintptr_t font, double *x, double *y, double *w, double *h);

int ns_font_maximum_advancement(uintptr_t font, double *width, double *height);

void ns_font_set(uintptr_t font);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_FONT_H */
