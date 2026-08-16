#ifndef PHP_APPKIT_NS_PAGELAYOUT_H
#define PHP_APPKIT_NS_PAGELAYOUT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_pagelayout_page_layout(void);
void ns_pagelayout_destroy(uintptr_t layout);
void *ns_pagelayout_nspagelayout(uintptr_t layout);
int ns_pagelayout_run_modal(uintptr_t layout);
int ns_pagelayout_run_modal_with_print_info(uintptr_t layout, void *printInfo);
void *ns_pagelayout_print_info(uintptr_t layout);
void ns_pagelayout_add_accessory_controller(uintptr_t layout, uintptr_t controller);
void ns_pagelayout_remove_accessory_controller(uintptr_t layout, uintptr_t controller);
int ns_pagelayout_accessory_controller_count(uintptr_t layout);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PAGELAYOUT_H */
