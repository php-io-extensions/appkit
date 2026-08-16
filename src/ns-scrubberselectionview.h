#ifndef PHP_APPKIT_NS_SCRUBBERSELECTIONVIEW_H
#define PHP_APPKIT_NS_SCRUBBERSELECTIONVIEW_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_scrubberselectionview_create(double x, double y, double width, double height);
uintptr_t ns_scrubberselectionview_wrap(void *view);
void ns_scrubberselectionview_destroy(uintptr_t view);
void *ns_scrubberselectionview_nsscrubberselectionview(uintptr_t view);
void ns_scrubberselectionview_set_selected(uintptr_t view, int flag);
int ns_scrubberselectionview_is_selected(uintptr_t view);
void ns_scrubberselectionview_set_highlighted(uintptr_t view, int flag);
int ns_scrubberselectionview_is_highlighted(uintptr_t view);
void ns_scrubberselectionview_apply_layout_attributes(uintptr_t view, void *layoutAttributes);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SCRUBBERSELECTIONVIEW_H */
