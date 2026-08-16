#ifndef PHP_APPKIT_NS_ACCESSIBILITYCUSTOMROTOR_H
#define PHP_APPKIT_NS_ACCESSIBILITYCUSTOMROTOR_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_accessibilitycustomrotor_create(const char *label);
uintptr_t ns_accessibilitycustomrotor_create_with_type(int rotor_type);
uintptr_t ns_accessibilitycustomrotor_wrap(void *rotor);
void ns_accessibilitycustomrotor_destroy(uintptr_t rotor);
void *ns_accessibilitycustomrotor_nsaccessibilitycustomrotor(uintptr_t rotor);
int ns_accessibilitycustomrotor_type(uintptr_t rotor);
void ns_accessibilitycustomrotor_set_type(uintptr_t rotor, int rotor_type);
int ns_accessibilitycustomrotor_label(uintptr_t rotor, char *out, int out_len);
void ns_accessibilitycustomrotor_set_label(uintptr_t rotor, const char *label);
void ns_accessibilitycustomrotor_set_next_item(uintptr_t rotor, uintptr_t item);
int ns_accessibilitycustomrotor_poll_search(uintptr_t rotor, int *direction, char *filter_out, int filter_len);

uintptr_t ns_accessibilitycustomrotoritem_create_with_element(uintptr_t element);
uintptr_t ns_accessibilitycustomrotoritem_create_with_token(const char *token, const char *label);
uintptr_t ns_accessibilitycustomrotoritem_wrap(void *item);
void ns_accessibilitycustomrotoritem_destroy(uintptr_t item);
void *ns_accessibilitycustomrotoritem_nsaccessibilitycustomrotoritem(uintptr_t item);
int ns_accessibilitycustomrotoritem_custom_label(uintptr_t item, char *out, int out_len);
void ns_accessibilitycustomrotoritem_set_custom_label(uintptr_t item, const char *label);
void ns_accessibilitycustomrotoritem_set_target_range(uintptr_t item, unsigned long location, unsigned long length);
int ns_accessibilitycustomrotoritem_target_range(uintptr_t item, unsigned long *location, unsigned long *length);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_ACCESSIBILITYCUSTOMROTOR_H */
