#ifndef PHP_APPKIT_NS_DATEPICKER_H
#define PHP_APPKIT_NS_DATEPICKER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_datepicker_create(double x, double y, double width, double height);

void ns_datepicker_destroy(uintptr_t picker);

void ns_datepicker_set_timestamp(uintptr_t picker, long timestamp);

long ns_datepicker_get_timestamp(uintptr_t picker);

int ns_datepicker_poll_change(uintptr_t picker);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_DATEPICKER_H */
