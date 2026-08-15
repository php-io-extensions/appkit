#ifndef PHP_APPKIT_NS_COMBOBUTTON_H
#define PHP_APPKIT_NS_COMBOBUTTON_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_COMBO_BUTTON_STYLE_SPLIT = 0,
    NS_COMBO_BUTTON_STYLE_UNIFIED = 1
} ns_combo_button_style;

uintptr_t ns_combobutton_create_with_title(double x, double y, double width, double height, const char *title, uintptr_t menu);
void ns_combobutton_destroy(uintptr_t button);
void ns_combobutton_set_title(uintptr_t button, const char *title);
int ns_combobutton_get_title(uintptr_t button, char *out, int out_len);
void ns_combobutton_set_image(uintptr_t button, uintptr_t image);
void ns_combobutton_set_menu(uintptr_t button, uintptr_t menu);
uintptr_t ns_combobutton_get_menu(uintptr_t button);
void ns_combobutton_set_style(uintptr_t button, int style);
int ns_combobutton_get_style(uintptr_t button);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COMBOBUTTON_H */
