#ifndef PHP_APPKIT_NS_BUTTONTOUCHBARITEM_H
#define PHP_APPKIT_NS_BUTTONTOUCHBARITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_buttontouchbaritem_button_with_title(const char *identifier, const char *title);
uintptr_t ns_buttontouchbaritem_button_with_image(const char *identifier, uintptr_t image);
uintptr_t ns_buttontouchbaritem_button_with_title_and_image(const char *identifier, const char *title, uintptr_t image);
uintptr_t ns_buttontouchbaritem_wrap(void *item);
void ns_buttontouchbaritem_destroy(uintptr_t item);
void *ns_buttontouchbaritem_nsbuttontouchbaritem(uintptr_t item);
void ns_buttontouchbaritem_set_title(uintptr_t item, const char *title);
int ns_buttontouchbaritem_get_title(uintptr_t item, char *out, int out_len);
void ns_buttontouchbaritem_set_image(uintptr_t item, uintptr_t image);
void ns_buttontouchbaritem_set_bezel_color(uintptr_t item, uintptr_t color);
void ns_buttontouchbaritem_set_enabled(uintptr_t item, int flag);
int ns_buttontouchbaritem_is_enabled(uintptr_t item);
void ns_buttontouchbaritem_set_customization_label(uintptr_t item, const char *label);
int ns_buttontouchbaritem_get_customization_label(uintptr_t item, char *out, int out_len);
int ns_buttontouchbaritem_poll_action(uintptr_t item);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_BUTTONTOUCHBARITEM_H */
