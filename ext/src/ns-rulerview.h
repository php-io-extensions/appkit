#ifndef PHP_APPKIT_NS_RULERVIEW_H
#define PHP_APPKIT_NS_RULERVIEW_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_rulerview_create(int orientation);
uintptr_t ns_rulerview_wrap(void *ruler);
void ns_rulerview_destroy(uintptr_t ruler);
void *ns_rulerview_nsrulerview(uintptr_t ruler);
void ns_rulerview_set_orientation(uintptr_t ruler, int orientation);
int ns_rulerview_get_orientation(uintptr_t ruler);
void ns_rulerview_set_rule_thickness(uintptr_t ruler, double thickness);
double ns_rulerview_get_rule_thickness(uintptr_t ruler);
void ns_rulerview_set_measurement_units(uintptr_t ruler, const char *units);
int ns_rulerview_get_measurement_units(uintptr_t ruler, char *out, int out_len);
void ns_rulerview_set_origin_offset(uintptr_t ruler, double offset);
double ns_rulerview_get_origin_offset(uintptr_t ruler);
void ns_rulerview_set_client_view(uintptr_t ruler, uintptr_t view);
uintptr_t ns_rulerview_client_view(uintptr_t ruler);
void ns_rulerview_set_accessory_view(uintptr_t ruler, uintptr_t view);
uintptr_t ns_rulerview_accessory_view(uintptr_t ruler);
void ns_rulerview_add_marker(uintptr_t ruler, uintptr_t marker);
void ns_rulerview_remove_marker(uintptr_t ruler, uintptr_t marker);
void ns_rulerview_invalidate_hash_marks(uintptr_t ruler);
double ns_rulerview_baseline_location(uintptr_t ruler);
double ns_rulerview_required_thickness(uintptr_t ruler);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_RULERVIEW_H */
