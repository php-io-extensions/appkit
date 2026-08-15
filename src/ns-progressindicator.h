#ifndef PHP_APPKIT_NS_PROGRESSINDICATOR_H
#define PHP_APPKIT_NS_PROGRESSINDICATOR_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_progressindicator_create(double x, double y, double width, double height);

void ns_progressindicator_destroy(uintptr_t bar);

void ns_progressindicator_set_indeterminate(uintptr_t bar, int on);

void ns_progressindicator_set_min(uintptr_t bar, double min);

void ns_progressindicator_set_max(uintptr_t bar, double max);

void ns_progressindicator_set_value(uintptr_t bar, double value);

double ns_progressindicator_get_value(uintptr_t bar);

void ns_progressindicator_start(uintptr_t bar);

void ns_progressindicator_stop(uintptr_t bar);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PROGRESSINDICATOR_H */
