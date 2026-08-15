#ifndef PHP_APPKIT_NS_STATUSBAR_H
#define PHP_APPKIT_NS_STATUSBAR_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_STATUS_ITEM_LENGTH_VARIABLE = 0,
    NS_STATUS_ITEM_LENGTH_SQUARE = 1
} ns_status_item_length_kind;

uintptr_t ns_statusbar_system(void);
uintptr_t ns_statusbar_wrap(void *bar);
void ns_statusbar_destroy(uintptr_t bar);
void *ns_statusbar_nsstatusbar(uintptr_t bar);
uintptr_t ns_statusbar_status_item_with_length(uintptr_t bar, double length);
uintptr_t ns_statusbar_status_item_with_kind(uintptr_t bar, int kind);
void ns_statusbar_remove_status_item(uintptr_t bar, uintptr_t item);
int ns_statusbar_is_vertical(uintptr_t bar);
double ns_statusbar_thickness(uintptr_t bar);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_STATUSBAR_H */
