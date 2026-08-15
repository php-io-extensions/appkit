#ifndef PHP_APPKIT_NS_TEXTVIEWPORTLAYOUTCONTROLLER_H
#define PHP_APPKIT_NS_TEXTVIEWPORTLAYOUTCONTROLLER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textviewportlayoutcontroller_wrap(void *controller);
void ns_textviewportlayoutcontroller_destroy(uintptr_t controller);
void *ns_textviewportlayoutcontroller_nstextviewportlayoutcontroller(uintptr_t controller);

void ns_textviewportlayoutcontroller_viewport_bounds(uintptr_t controller, double *x, double *y, double *w, double *h);
void ns_textviewportlayoutcontroller_layout_viewport(uintptr_t controller);
void ns_textviewportlayoutcontroller_adjust_viewport_by_vertical_offset(uintptr_t controller, double offset);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTVIEWPORTLAYOUTCONTROLLER_H */
