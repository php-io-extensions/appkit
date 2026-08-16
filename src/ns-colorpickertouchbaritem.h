#ifndef PHP_APPKIT_NS_COLORPICKERTOUCHBARITEM_H
#define PHP_APPKIT_NS_COLORPICKERTOUCHBARITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_colorpickertouchbaritem_color_picker(const char *identifier);
uintptr_t ns_colorpickertouchbaritem_text_color_picker(const char *identifier);
uintptr_t ns_colorpickertouchbaritem_stroke_color_picker(const char *identifier);
uintptr_t ns_colorpickertouchbaritem_color_picker_with_button_image(const char *identifier, uintptr_t image);
uintptr_t ns_colorpickertouchbaritem_wrap(void *item);
void ns_colorpickertouchbaritem_destroy(uintptr_t item);
void *ns_colorpickertouchbaritem_nscolorpickertouchbaritem(uintptr_t item);
void ns_colorpickertouchbaritem_set_color(uintptr_t item, uintptr_t color);
uintptr_t ns_colorpickertouchbaritem_get_color(uintptr_t item);
void ns_colorpickertouchbaritem_set_shows_alpha(uintptr_t item, int flag);
int ns_colorpickertouchbaritem_shows_alpha(uintptr_t item);
void ns_colorpickertouchbaritem_set_enabled(uintptr_t item, int flag);
int ns_colorpickertouchbaritem_is_enabled(uintptr_t item);
void ns_colorpickertouchbaritem_set_customization_label(uintptr_t item, const char *label);
int ns_colorpickertouchbaritem_get_customization_label(uintptr_t item, char *out, int out_len);
int ns_colorpickertouchbaritem_poll_action(uintptr_t item);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COLORPICKERTOUCHBARITEM_H */
