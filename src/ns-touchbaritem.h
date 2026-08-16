#ifndef PHP_APPKIT_NS_TOUCHBARITEM_H
#define PHP_APPKIT_NS_TOUCHBARITEM_H

#include <stdint.h>

#ifdef __OBJC__
@class NSString, NSTouchBarItem;
int ns_copy_nsstring(NSString *text, char *out, int out_len);
uintptr_t ns_retain_obj(id object);
NSTouchBarItem *ns_touchbaritem_from(uintptr_t handle);
NSArray<NSString *> *ns_strings_from_c(const char **items, int count);
#endif

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_touchbaritem_create(const char *identifier);
uintptr_t ns_touchbaritem_wrap(void *item);
void ns_touchbaritem_destroy(uintptr_t item);
void *ns_touchbaritem_nstouchbaritem(uintptr_t item);

int ns_touchbaritem_get_identifier(uintptr_t item, char *out, int out_len);
void ns_touchbaritem_set_visibility_priority(uintptr_t item, float priority);
float ns_touchbaritem_get_visibility_priority(uintptr_t item);
int ns_touchbaritem_get_customization_label(uintptr_t item, char *out, int out_len);
int ns_touchbaritem_is_visible(uintptr_t item);
uintptr_t ns_touchbaritem_get_view(uintptr_t item);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TOUCHBARITEM_H */
