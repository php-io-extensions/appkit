#ifndef PHP_APPKIT_NS_POPOVER_H
#define PHP_APPKIT_NS_POPOVER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_popover_create(void);

void ns_popover_destroy(uintptr_t popover);

void ns_popover_set_content(uintptr_t popover, uintptr_t view);

void ns_popover_show(uintptr_t popover, uintptr_t anchor);

void ns_popover_close(uintptr_t popover);

int ns_popover_is_shown(uintptr_t popover);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_POPOVER_H */
