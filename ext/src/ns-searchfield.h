#ifndef PHP_APPKIT_NS_SEARCHFIELD_H
#define PHP_APPKIT_NS_SEARCHFIELD_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_searchfield_create(double x, double y, double width, double height, const char *value);
void ns_searchfield_destroy(uintptr_t field);
void ns_searchfield_set_string(uintptr_t field, const char *value);
int ns_searchfield_get_string(uintptr_t field, char *out, int out_len);
void ns_searchfield_set_recent_searches(uintptr_t field, const char **items, int count);
int ns_searchfield_recent_searches_count(uintptr_t field);
int ns_searchfield_recent_search_at(uintptr_t field, int index, char *out, int out_len);
void ns_searchfield_set_recents_autosave_name(uintptr_t field, const char *name);
int ns_searchfield_get_recents_autosave_name(uintptr_t field, char *out, int out_len);
void ns_searchfield_set_sends_whole_search_string(uintptr_t field, int flag);
int ns_searchfield_sends_whole_search_string(uintptr_t field);
void ns_searchfield_set_maximum_recents(uintptr_t field, int maximum);
int ns_searchfield_maximum_recents(uintptr_t field);
void ns_searchfield_set_sends_search_string_immediately(uintptr_t field, int flag);
int ns_searchfield_sends_search_string_immediately(uintptr_t field);
int ns_searchfield_poll_change(uintptr_t field);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SEARCHFIELD_H */
