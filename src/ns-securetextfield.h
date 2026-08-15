#ifndef PHP_APPKIT_NS_SECURETEXTFIELD_H
#define PHP_APPKIT_NS_SECURETEXTFIELD_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_securetextfield_create(double x, double y, double width, double height, const char *value);
void ns_securetextfield_destroy(uintptr_t field);
void ns_securetextfield_set_string(uintptr_t field, const char *value);
int ns_securetextfield_get_string(uintptr_t field, char *out, int out_len);
int ns_securetextfield_poll_change(uintptr_t field);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SECURETEXTFIELD_H */
