#ifndef PHP_APPKIT_NS_TEXTFINDER_H
#define PHP_APPKIT_NS_TEXTFINDER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_TEXTFINDER_ACTION_SHOW_FIND_INTERFACE = 1,
    NS_TEXTFINDER_ACTION_NEXT_MATCH = 2,
    NS_TEXTFINDER_ACTION_PREVIOUS_MATCH = 3,
    NS_TEXTFINDER_ACTION_REPLACE_ALL = 4,
    NS_TEXTFINDER_ACTION_REPLACE = 5,
    NS_TEXTFINDER_ACTION_REPLACE_AND_FIND = 6,
    NS_TEXTFINDER_ACTION_SET_SEARCH_STRING = 7,
    NS_TEXTFINDER_ACTION_REPLACE_ALL_IN_SELECTION = 8,
    NS_TEXTFINDER_ACTION_SELECT_ALL = 9,
    NS_TEXTFINDER_ACTION_SELECT_ALL_IN_SELECTION = 10,
    NS_TEXTFINDER_ACTION_HIDE_FIND_INTERFACE = 11,
    NS_TEXTFINDER_ACTION_SHOW_REPLACE_INTERFACE = 12,
    NS_TEXTFINDER_ACTION_HIDE_REPLACE_INTERFACE = 13
} ns_textfinder_action;

uintptr_t ns_textfinder_create(void);
uintptr_t ns_textfinder_wrap(void *finder);
void ns_textfinder_destroy(uintptr_t finder);
void *ns_textfinder_nstextfinder(uintptr_t finder);

void ns_textfinder_perform_action(uintptr_t finder, int action);
int ns_textfinder_validate_action(uintptr_t finder, int action);
void ns_textfinder_set_incremental_searching_enabled(uintptr_t finder, int flag);
int ns_textfinder_incremental_searching_enabled(uintptr_t finder);
void ns_textfinder_set_find_indicator_needs_update(uintptr_t finder, int flag);
int ns_textfinder_find_indicator_needs_update(uintptr_t finder);
void ns_textfinder_cancel_find_indicator(uintptr_t finder);
void ns_textfinder_note_client_string_will_change(uintptr_t finder);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTFINDER_H */
