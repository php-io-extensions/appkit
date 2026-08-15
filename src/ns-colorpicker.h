#ifndef PHP_APPKIT_NS_COLORPICKER_H
#define PHP_APPKIT_NS_COLORPICKER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_colorpicker_wrap(void *picker);

void ns_colorpicker_destroy(uintptr_t picker);

void *ns_colorpicker_nscolorpicker(uintptr_t picker);

uintptr_t ns_colorpicker_create(unsigned mask, uintptr_t panel);

uintptr_t ns_colorpicker_color_panel(uintptr_t picker);

int ns_colorpicker_button_tool_tip(uintptr_t picker, char *out, int out_len);

int ns_colorpicker_min_content_size(uintptr_t picker, double *width, double *height);

void ns_colorpicker_set_mode(uintptr_t picker, int mode);

void ns_colorpicker_attach_color_list(uintptr_t picker, uintptr_t list);

void ns_colorpicker_detach_color_list(uintptr_t picker, uintptr_t list);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COLORPICKER_H */
