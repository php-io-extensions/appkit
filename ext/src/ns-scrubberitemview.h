#ifndef PHP_APPKIT_NS_SCRUBBERITEMVIEW_H
#define PHP_APPKIT_NS_SCRUBBERITEMVIEW_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_scrubberitemview_create(double x, double y, double width, double height);
uintptr_t ns_scrubberitemview_wrap(void *view);
void ns_scrubberitemview_destroy(uintptr_t view);
void *ns_scrubberitemview_nsscrubberitemview(uintptr_t view);
void ns_scrubberitemview_set_selected(uintptr_t view, int flag);
int ns_scrubberitemview_is_selected(uintptr_t view);
void ns_scrubberitemview_set_highlighted(uintptr_t view, int flag);
int ns_scrubberitemview_is_highlighted(uintptr_t view);
void ns_scrubberitemview_apply_layout_attributes(uintptr_t view, void *layoutAttributes);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SCRUBBERITEMVIEW_H */
