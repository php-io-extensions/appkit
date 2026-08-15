#ifndef PHP_APPKIT_NS_FONTCOLLECTION_H
#define PHP_APPKIT_NS_FONTCOLLECTION_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_fontcollection_wrap(void *collection);

void ns_fontcollection_destroy(uintptr_t collection);

void *ns_fontcollection_nsfontcollection(uintptr_t collection);

uintptr_t ns_fontcollection_with_descriptor(uintptr_t descriptor);

uintptr_t ns_fontcollection_with_all_available(void);

uintptr_t ns_fontcollection_with_name(const char *name);

uintptr_t ns_fontcollection_with_name_visibility(const char *name, unsigned visibility);

int ns_fontcollection_show(uintptr_t collection, const char *name, unsigned visibility);

int ns_fontcollection_hide(const char *name, unsigned visibility);

int ns_fontcollection_rename(const char *old_name, unsigned visibility, const char *new_name);

int ns_fontcollection_all_names_count(void);

int ns_fontcollection_all_name_at(int index, char *out, int out_len);

int ns_fontcollection_query_descriptors_count(uintptr_t collection);

uintptr_t ns_fontcollection_query_descriptor_at(uintptr_t collection, int index);

int ns_fontcollection_exclusion_descriptors_count(uintptr_t collection);

uintptr_t ns_fontcollection_exclusion_descriptor_at(uintptr_t collection, int index);

int ns_fontcollection_matching_descriptors_count(uintptr_t collection);

uintptr_t ns_fontcollection_matching_descriptor_at(uintptr_t collection, int index);

int ns_fontcollection_matching_descriptors_for_family_count(uintptr_t collection, const char *family);

uintptr_t ns_fontcollection_matching_descriptor_for_family_at(uintptr_t collection, const char *family, int index);

uintptr_t ns_fontcollection_mutable_with_descriptor(uintptr_t descriptor);

uintptr_t ns_fontcollection_mutable_with_all_available(void);

uintptr_t ns_fontcollection_mutable_with_name(const char *name);

uintptr_t ns_fontcollection_mutable_with_name_visibility(const char *name, unsigned visibility);

void ns_fontcollection_add_query_for_descriptor(uintptr_t collection, uintptr_t descriptor);

void ns_fontcollection_remove_query_for_descriptor(uintptr_t collection, uintptr_t descriptor);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_FONTCOLLECTION_H */
