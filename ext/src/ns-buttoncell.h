#ifndef PHP_APPKIT_NS_BUTTONCELL_H
#define PHP_APPKIT_NS_BUTTONCELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_buttoncell_create_text(const char *string);
uintptr_t ns_buttoncell_create_image(uintptr_t image);
uintptr_t ns_buttoncell_wrap(void *cell);
void ns_buttoncell_destroy(uintptr_t cell);
void *ns_buttoncell_nsbuttoncell(uintptr_t cell);

void ns_buttoncell_set_title(uintptr_t cell, const char *title);
int ns_buttoncell_get_title(uintptr_t cell, char *out, int out_len);
void ns_buttoncell_set_state(uintptr_t cell, int state);
int ns_buttoncell_get_state(uintptr_t cell);
void ns_buttoncell_set_enabled(uintptr_t cell, int enabled);
int ns_buttoncell_is_enabled(uintptr_t cell);
void ns_buttoncell_set_tag(uintptr_t cell, int tag);
int ns_buttoncell_get_tag(uintptr_t cell);

void ns_buttoncell_set_bezel_style(uintptr_t cell, int style);
int ns_buttoncell_get_bezel_style(uintptr_t cell);
void ns_buttoncell_set_button_type(uintptr_t cell, int type);
void ns_buttoncell_set_alternate_title(uintptr_t cell, const char *title);
int ns_buttoncell_get_alternate_title(uintptr_t cell, char *out, int out_len);
void ns_buttoncell_set_key_equivalent(uintptr_t cell, const char *key);
int ns_buttoncell_get_key_equivalent(uintptr_t cell, char *out, int out_len);
void ns_buttoncell_set_transparent(uintptr_t cell, int flag);
int ns_buttoncell_is_transparent(uintptr_t cell);
void ns_buttoncell_set_image_dims_when_disabled(uintptr_t cell, int flag);
int ns_buttoncell_image_dims_when_disabled(uintptr_t cell);
void ns_buttoncell_perform_click(uintptr_t cell);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_BUTTONCELL_H */
