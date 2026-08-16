#ifndef PHP_APPKIT_NS_SCRUBBERLAYOUT_H
#define PHP_APPKIT_NS_SCRUBBERLAYOUT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_scrubberlayout_create(void);
uintptr_t ns_scrubberlayout_wrap(void *layout);
void ns_scrubberlayout_destroy(uintptr_t layout);
void *ns_scrubberlayout_nsscrubberlayout(uintptr_t layout);
void ns_scrubberlayout_invalidate(uintptr_t layout);
uintptr_t ns_scrubberlayout_scrubber(uintptr_t layout);
int ns_scrubberlayout_visible_rect(uintptr_t layout, double *x, double *y, double *width, double *height);
double ns_scrubberlayout_content_width(uintptr_t layout);
double ns_scrubberlayout_content_height(uintptr_t layout);
int ns_scrubberlayout_should_invalidate_for_selection_change(uintptr_t layout);
int ns_scrubberlayout_should_invalidate_for_highlight_change(uintptr_t layout);
int ns_scrubberlayout_automatically_mirrors_in_rtl(uintptr_t layout);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SCRUBBERLAYOUT_H */
