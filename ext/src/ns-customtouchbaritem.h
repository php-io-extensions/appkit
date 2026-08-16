#ifndef PHP_APPKIT_NS_CUSTOMTOUCHBARITEM_H
#define PHP_APPKIT_NS_CUSTOMTOUCHBARITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_customtouchbaritem_create(const char *identifier);
uintptr_t ns_customtouchbaritem_wrap(void *item);
void ns_customtouchbaritem_destroy(uintptr_t item);
void *ns_customtouchbaritem_nscustomtouchbaritem(uintptr_t item);
void ns_customtouchbaritem_set_view(uintptr_t item, uintptr_t view);
uintptr_t ns_customtouchbaritem_get_view(uintptr_t item);
void ns_customtouchbaritem_set_customization_label(uintptr_t item, const char *label);
int ns_customtouchbaritem_get_customization_label(uintptr_t item, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_CUSTOMTOUCHBARITEM_H */
