#ifndef PHP_APPKIT_NS_PRESSURECONFIGURATION_H
#define PHP_APPKIT_NS_PRESSURECONFIGURATION_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_pressureconfiguration_create(int behavior);
uintptr_t ns_pressureconfiguration_wrap(void *configuration);
void ns_pressureconfiguration_destroy(uintptr_t configuration);
void *ns_pressureconfiguration_nspressureconfiguration(uintptr_t configuration);
int ns_pressureconfiguration_pressure_behavior(uintptr_t configuration);
void ns_pressureconfiguration_set(uintptr_t configuration);
void ns_view_set_pressure_configuration(uintptr_t view, uintptr_t configuration);
uintptr_t ns_view_pressure_configuration(uintptr_t view);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PRESSURECONFIGURATION_H */
