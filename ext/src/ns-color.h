#ifndef PHP_APPKIT_NS_COLOR_H
#define PHP_APPKIT_NS_COLOR_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_COLOR_KIND_BLACK = 0,
    NS_COLOR_KIND_DARK_GRAY,
    NS_COLOR_KIND_LIGHT_GRAY,
    NS_COLOR_KIND_WHITE,
    NS_COLOR_KIND_GRAY,
    NS_COLOR_KIND_RED,
    NS_COLOR_KIND_GREEN,
    NS_COLOR_KIND_BLUE,
    NS_COLOR_KIND_CYAN,
    NS_COLOR_KIND_YELLOW,
    NS_COLOR_KIND_MAGENTA,
    NS_COLOR_KIND_ORANGE,
    NS_COLOR_KIND_PURPLE,
    NS_COLOR_KIND_BROWN,
    NS_COLOR_KIND_CLEAR,
    NS_COLOR_KIND_LABEL,
    NS_COLOR_KIND_SECONDARY_LABEL,
    NS_COLOR_KIND_CONTROL_ACCENT,
    NS_COLOR_KIND_TEXT,
    NS_COLOR_KIND_CONTROL,
    NS_COLOR_KIND_WINDOW_BACKGROUND,
    NS_COLOR_KIND_SEPARATOR
} ns_color_kind;

uintptr_t ns_color_wrap(void *color);

void ns_color_destroy(uintptr_t color);

void *ns_color_nscolor(uintptr_t color);

uintptr_t ns_color_with_rgba(double red, double green, double blue, double alpha);

uintptr_t ns_color_with_srgb_bytes(int red, int green, int blue, int alpha);

uintptr_t ns_color_with_white(double white, double alpha);

uintptr_t ns_color_with_hsb(double hue, double saturation, double brightness, double alpha);

uintptr_t ns_color_named(const char *name);

uintptr_t ns_color_with_catalog(const char *listName, const char *colorName);

uintptr_t ns_color_standard(int kind);

uintptr_t ns_color_with_alpha(uintptr_t color, double alpha);

uintptr_t ns_color_using_color_space(uintptr_t color, uintptr_t space);

int ns_color_type(uintptr_t color);

double ns_color_alpha(uintptr_t color);

int ns_color_get_srgba(uintptr_t color, int *r, int *g, int *b, int *a);

int ns_color_get_rgba_double(uintptr_t color, double *r, double *g, double *b, double *a);

void ns_color_set(uintptr_t color);

void ns_color_set_fill(uintptr_t color);

void ns_color_set_stroke(uintptr_t color);

int ns_color_catalog_name(uintptr_t color, char *out, int out_len);

int ns_color_color_name(uintptr_t color, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COLOR_H */
