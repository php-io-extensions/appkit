#ifndef PHP_APPKIT_NS_CANDIDATELISTTOUCHBARITEM_H
#define PHP_APPKIT_NS_CANDIDATELISTTOUCHBARITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_candidatelisttouchbaritem_create(const char *identifier);
uintptr_t ns_candidatelisttouchbaritem_wrap(void *item);
void ns_candidatelisttouchbaritem_destroy(uintptr_t item);
void *ns_candidatelisttouchbaritem_nscandidatelisttouchbaritem(uintptr_t item);
void ns_candidatelisttouchbaritem_set_collapsed(uintptr_t item, int flag);
int ns_candidatelisttouchbaritem_is_collapsed(uintptr_t item);
void ns_candidatelisttouchbaritem_set_allows_collapsing(uintptr_t item, int flag);
int ns_candidatelisttouchbaritem_allows_collapsing(uintptr_t item);
int ns_candidatelisttouchbaritem_is_candidate_list_visible(uintptr_t item);
void ns_candidatelisttouchbaritem_update_with_insertion_point_visibility(uintptr_t item, int visible);
void ns_candidatelisttouchbaritem_set_allows_text_input_context_candidates(uintptr_t item, int flag);
int ns_candidatelisttouchbaritem_allows_text_input_context_candidates(uintptr_t item);
void ns_candidatelisttouchbaritem_set_candidates(uintptr_t item, const char **candidates, int count);
int ns_candidatelisttouchbaritem_candidates_count(uintptr_t item);
int ns_candidatelisttouchbaritem_candidate_at(uintptr_t item, int index, char *out, int out_len);
void ns_candidatelisttouchbaritem_set_customization_label(uintptr_t item, const char *label);
int ns_candidatelisttouchbaritem_get_customization_label(uintptr_t item, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_CANDIDATELISTTOUCHBARITEM_H */
