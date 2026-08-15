#ifndef PHP_APPKIT_NS_SCROLLER_H
#define PHP_APPKIT_NS_SCROLLER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_scroller_create(double x, double y, double width, double height);
uintptr_t ns_scroller_wrap(void *scroller);
void ns_scroller_destroy(uintptr_t scroller);
void *ns_scroller_nsscroller(uintptr_t scroller);
void ns_scroller_set_scroller_style(uintptr_t scroller, int style);
int ns_scroller_get_scroller_style(uintptr_t scroller);
void ns_scroller_set_knob_style(uintptr_t scroller, int style);
int ns_scroller_get_knob_style(uintptr_t scroller);
void ns_scroller_set_control_size(uintptr_t scroller, int size);
int ns_scroller_get_control_size(uintptr_t scroller);
void ns_scroller_set_knob_proportion(uintptr_t scroller, double proportion);
double ns_scroller_get_knob_proportion(uintptr_t scroller);
int ns_scroller_get_hit_part(uintptr_t scroller);
int ns_scroller_get_preferred_scroller_style(void);
double ns_scroller_scroller_width(int control_size, int scroller_style);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SCROLLER_H */
