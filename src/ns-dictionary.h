#ifndef PHP_APPKIT_NS_DICTIONARY_H
#define PHP_APPKIT_NS_DICTIONARY_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/** Empty mutable dictionary. Caller owns until ns_dictionary_destroy. */
uintptr_t ns_dictionary_create_mutable(void);

/** Wrap a borrowed NSDictionary* or NSMutableDictionary*. */
uintptr_t ns_dictionary_wrap(void *dictionary);

void ns_dictionary_destroy(uintptr_t dictionary);

/** Borrowed NSDictionary* (0 if invalid). Do not free. */
void *ns_dictionary_nsdictionary(uintptr_t dictionary);

int ns_dictionary_count(uintptr_t dictionary);

void ns_dictionary_set_string(uintptr_t dictionary, const char *key, const char *value);
int ns_dictionary_get_string(uintptr_t dictionary, const char *key, char *out, int out_len);

void ns_dictionary_set_int(uintptr_t dictionary, const char *key, long long value);
int ns_dictionary_get_int(uintptr_t dictionary, const char *key, long long *out);

void ns_dictionary_set_double(uintptr_t dictionary, const char *key, double value);
int ns_dictionary_get_double(uintptr_t dictionary, const char *key, double *out);

void ns_dictionary_set_bool(uintptr_t dictionary, const char *key, int value);
int ns_dictionary_get_bool(uintptr_t dictionary, const char *key, int *out);

void ns_dictionary_set_dictionary(uintptr_t dictionary, const char *key, uintptr_t value_dictionary);
uintptr_t ns_dictionary_get_dictionary(uintptr_t dictionary, const char *key);

int ns_dictionary_has_key(uintptr_t dictionary, const char *key);

int ns_dictionary_keys_count(uintptr_t dictionary);
int ns_dictionary_key_at(uintptr_t dictionary, int index, char *out, int out_len);

/** Retained immutable copy handle, or 0. */
uintptr_t ns_dictionary_copy_immutable(uintptr_t dictionary);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_DICTIONARY_H */
