#ifndef PHP_APPKIT_NS_STEPPERTOUCHBARITEM_H
#define PHP_APPKIT_NS_STEPPERTOUCHBARITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_steppertouchbaritem_stepper_with_formatter(const char *identifier);
uintptr_t ns_steppertouchbaritem_wrap(void *item);
void ns_steppertouchbaritem_destroy(uintptr_t item);
void *ns_steppertouchbaritem_nssteppertouchbaritem(uintptr_t item);
void ns_steppertouchbaritem_set_max_value(uintptr_t item, double value);
double ns_steppertouchbaritem_get_max_value(uintptr_t item);
void ns_steppertouchbaritem_set_min_value(uintptr_t item, double value);
double ns_steppertouchbaritem_get_min_value(uintptr_t item);
void ns_steppertouchbaritem_set_increment(uintptr_t item, double value);
double ns_steppertouchbaritem_get_increment(uintptr_t item);
void ns_steppertouchbaritem_set_value(uintptr_t item, double value);
double ns_steppertouchbaritem_get_value(uintptr_t item);
void ns_steppertouchbaritem_set_customization_label(uintptr_t item, const char *label);
int ns_steppertouchbaritem_get_customization_label(uintptr_t item, char *out, int out_len);
int ns_steppertouchbaritem_poll_action(uintptr_t item);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_STEPPERTOUCHBARITEM_H */
