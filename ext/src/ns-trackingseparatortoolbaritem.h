#ifndef PHP_APPKIT_NS_TRACKINGSEPARATORTOOLBARITEM_H
#define PHP_APPKIT_NS_TRACKINGSEPARATORTOOLBARITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_trackingseparatortoolbaritem_create(const char *identifier);
uintptr_t ns_trackingseparatortoolbaritem_tracking_separator(const char *identifier, uintptr_t splitView, int dividerIndex);
uintptr_t ns_trackingseparatortoolbaritem_wrap(void *item);
void ns_trackingseparatortoolbaritem_destroy(uintptr_t item);
void *ns_trackingseparatortoolbaritem_nstrackingseparatortoolbaritem(uintptr_t item);
void ns_trackingseparatortoolbaritem_set_split_view(uintptr_t item, uintptr_t splitView);
uintptr_t ns_trackingseparatortoolbaritem_get_split_view(uintptr_t item);
void ns_trackingseparatortoolbaritem_set_divider_index(uintptr_t item, int dividerIndex);
int ns_trackingseparatortoolbaritem_get_divider_index(uintptr_t item);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TRACKINGSEPARATORTOOLBARITEM_H */
