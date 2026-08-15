#ifndef PHP_APPKIT_NS_TABLECELLVIEW_H
#define PHP_APPKIT_NS_TABLECELLVIEW_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_tablecellview_create(double x, double y, double width, double height);
uintptr_t ns_tablecellview_wrap(void *view);
void ns_tablecellview_destroy(uintptr_t cell);
void ns_tablecellview_set_text(uintptr_t cell, const char *text);
int ns_tablecellview_get_text(uintptr_t cell, char *out, int out_len);
void ns_tablecellview_set_image(uintptr_t cell, uintptr_t image);
uintptr_t ns_tablecellview_text_field(uintptr_t cell);
uintptr_t ns_tablecellview_image_view(uintptr_t cell);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TABLECELLVIEW_H */
