#ifndef PHP_APPKIT_NS_LAYOUTMANAGER_H
#define PHP_APPKIT_NS_LAYOUTMANAGER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_layoutmanager_create(void);
uintptr_t ns_layoutmanager_wrap(void *manager);
void ns_layoutmanager_destroy(uintptr_t manager);
void *ns_layoutmanager_nslayoutmanager(uintptr_t manager);

void ns_layoutmanager_replace_text_storage(uintptr_t manager, uintptr_t storage);
void ns_layoutmanager_add_text_container(uintptr_t manager, uintptr_t container);
void ns_layoutmanager_remove_text_container_at_index(uintptr_t manager, int index);
int ns_layoutmanager_text_containers_count(uintptr_t manager);
void ns_layoutmanager_text_container_changed_geometry(uintptr_t manager, uintptr_t container);

void ns_layoutmanager_set_shows_invisible_characters(uintptr_t manager, int flag);
int ns_layoutmanager_shows_invisible_characters(uintptr_t manager);
void ns_layoutmanager_set_shows_control_characters(uintptr_t manager, int flag);
int ns_layoutmanager_shows_control_characters(uintptr_t manager);
void ns_layoutmanager_set_uses_default_hyphenation(uintptr_t manager, int flag);
int ns_layoutmanager_uses_default_hyphenation(uintptr_t manager);
void ns_layoutmanager_set_default_font(uintptr_t manager, uintptr_t font);
uintptr_t ns_layoutmanager_default_font(uintptr_t manager);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_LAYOUTMANAGER_H */
