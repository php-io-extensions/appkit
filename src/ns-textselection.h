#ifndef PHP_APPKIT_NS_TEXTSELECTION_H
#define PHP_APPKIT_NS_TEXTSELECTION_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_TEXTSELECTION_AFFINITY_UPSTREAM = 0,
    NS_TEXTSELECTION_AFFINITY_DOWNSTREAM = 1
} ns_textselection_affinity;

typedef enum {
    NS_TEXTSELECTION_GRANULARITY_CHARACTER = 0,
    NS_TEXTSELECTION_GRANULARITY_WORD = 1,
    NS_TEXTSELECTION_GRANULARITY_SENTENCE = 2,
    NS_TEXTSELECTION_GRANULARITY_PARAGRAPH = 3,
    NS_TEXTSELECTION_GRANULARITY_LINE = 4,
    NS_TEXTSELECTION_GRANULARITY_DOCUMENT = 5
} ns_textselection_granularity;

uintptr_t ns_textselection_create_with_location(uintptr_t ns_text_location_ptr, int affinity);
uintptr_t ns_textselection_wrap(void *selection);
void ns_textselection_destroy(uintptr_t selection);
void *ns_textselection_nstextselection(uintptr_t selection);

int ns_textselection_get_granularity(uintptr_t selection);
int ns_textselection_get_affinity(uintptr_t selection);
int ns_textselection_is_transient(uintptr_t selection);
int ns_textselection_text_ranges_count(uintptr_t selection);
double ns_textselection_anchor_position_offset(uintptr_t selection);
void ns_textselection_set_anchor_position_offset(uintptr_t selection, double offset);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTSELECTION_H */
