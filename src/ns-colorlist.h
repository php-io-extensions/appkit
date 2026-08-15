#ifndef PHP_APPKIT_NS_COLORLIST_H
#define PHP_APPKIT_NS_COLORLIST_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_colorlist_wrap(void *list);

void ns_colorlist_destroy(uintptr_t list);

void *ns_colorlist_nscolorlist(uintptr_t list);

int ns_colorlist_available_count(void);

uintptr_t ns_colorlist_available_at(int index);

uintptr_t ns_colorlist_named(const char *name);

uintptr_t ns_colorlist_create(const char *name);

uintptr_t ns_colorlist_create_from_file(const char *name, const char *path);

int ns_colorlist_name(uintptr_t list, char *out, int out_len);

int ns_colorlist_is_editable(uintptr_t list);

void ns_colorlist_set_color(uintptr_t list, uintptr_t color, const char *key);

void ns_colorlist_insert_color(uintptr_t list, uintptr_t color, const char *key, int index);

void ns_colorlist_remove_color_with_key(uintptr_t list, const char *key);

uintptr_t ns_colorlist_color_with_key(uintptr_t list, const char *key);

int ns_colorlist_all_keys_count(uintptr_t list);

int ns_colorlist_all_key_at(uintptr_t list, int index, char *out, int out_len);

int ns_colorlist_write_to_url(uintptr_t list, const char *url);

void ns_colorlist_remove_file(uintptr_t list);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COLORLIST_H */
