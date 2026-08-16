#ifndef PHP_APPKIT_NS_DOCKTILE_H
#define PHP_APPKIT_NS_DOCKTILE_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_docktile_application(void);
uintptr_t ns_docktile_wrap(void *dock_tile);
void ns_docktile_destroy(uintptr_t tile);
void *ns_docktile_nsdocktile(uintptr_t tile);
void ns_docktile_size(uintptr_t tile, double *width, double *height);
void ns_docktile_set_content_view(uintptr_t tile, uintptr_t view);
uintptr_t ns_docktile_content_view(uintptr_t tile);
void ns_docktile_display(uintptr_t tile);
void ns_docktile_set_shows_application_badge(uintptr_t tile, int flag);
int ns_docktile_shows_application_badge(uintptr_t tile);
void ns_docktile_set_badge_label(uintptr_t tile, const char *label);
int ns_docktile_badge_label(uintptr_t tile, char *out, int out_len);
void *ns_docktile_owner(uintptr_t tile);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_DOCKTILE_H */
