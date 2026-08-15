#ifndef PHP_APPKIT_NS_IMAGEVIEW_H
#define PHP_APPKIT_NS_IMAGEVIEW_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_imageview_create(double x, double y, double width, double height);

void ns_imageview_destroy(uintptr_t view);

int ns_imageview_set_path(uintptr_t view, const char *path);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_IMAGEVIEW_H */
