#ifndef PHP_APPKIT_NS_TEXTFIELD_H
#define PHP_APPKIT_NS_TEXTFIELD_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textfield_create(double x, double y, double width, double height, const char *value);
void ns_textfield_destroy(uintptr_t field);
void ns_textfield_set_string(uintptr_t field, const char *value);
int ns_textfield_get_string(uintptr_t field, char *out, int out_len);
void ns_textfield_set_editable(uintptr_t field, int editable);
int ns_textfield_poll_change(uintptr_t field);

/** Static NSTextField label (non-editable). */
uintptr_t ns_label_create(double x, double y, double width, double height, const char *value);
void ns_label_destroy(uintptr_t label);
void ns_label_set_string(uintptr_t label, const char *value);
int ns_label_get_string(uintptr_t label, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTFIELD_H */
