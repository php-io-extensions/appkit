#ifndef PHP_APPKIT_NS_SCRUBBERARRANGEDVIEW_H
#define PHP_APPKIT_NS_SCRUBBERARRANGEDVIEW_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_scrubberarrangedview_create(double x, double y, double width, double height);
uintptr_t ns_scrubberarrangedview_wrap(void *view);
void ns_scrubberarrangedview_destroy(uintptr_t view);
void *ns_scrubberarrangedview_nsscrubberarrangedview(uintptr_t view);
void ns_scrubberarrangedview_set_selected(uintptr_t view, int flag);
int ns_scrubberarrangedview_is_selected(uintptr_t view);
void ns_scrubberarrangedview_set_highlighted(uintptr_t view, int flag);
int ns_scrubberarrangedview_is_highlighted(uintptr_t view);
void ns_scrubberarrangedview_apply_layout_attributes(uintptr_t view, void *layoutAttributes);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SCRUBBERARRANGEDVIEW_H */
