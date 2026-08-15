#ifndef PHP_APPKIT_NS_TEXTVIEW_H
#define PHP_APPKIT_NS_TEXTVIEW_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textview_create(double x, double y, double width, double height, const char *value);
void ns_textview_destroy(uintptr_t view);
void ns_textview_set_string(uintptr_t view, const char *value);
int ns_textview_get_string(uintptr_t view, char *out, int out_len);
int ns_textview_poll_change(uintptr_t view);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTVIEW_H */
