#ifndef PHP_APPKIT_NS_SEGMENTEDCONTROL_H
#define PHP_APPKIT_NS_SEGMENTEDCONTROL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_segmentedcontrol_create(double x, double y, double width, double height, int count);

void ns_segmentedcontrol_destroy(uintptr_t control);

void ns_segmentedcontrol_set_label(uintptr_t control, int index, const char *title);

void ns_segmentedcontrol_set_selected(uintptr_t control, int index);

int ns_segmentedcontrol_get_selected(uintptr_t control);

int ns_segmentedcontrol_poll_change(uintptr_t control);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SEGMENTEDCONTROL_H */
