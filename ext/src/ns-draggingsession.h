#ifndef PHP_APPKIT_NS_DRAGGINGSESSION_H
#define PHP_APPKIT_NS_DRAGGINGSESSION_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_draggingsession_wrap(void *session);
void ns_draggingsession_destroy(uintptr_t session);
void *ns_draggingsession_nsdraggingsession(uintptr_t session);
int ns_draggingsession_get_dragging_formation(uintptr_t session);
void ns_draggingsession_set_dragging_formation(uintptr_t session, int formation);
int ns_draggingsession_get_animates_to_starting_positions(uintptr_t session);
void ns_draggingsession_set_animates_to_starting_positions(uintptr_t session, int value);
long long ns_draggingsession_get_dragging_leader_index(uintptr_t session);
void ns_draggingsession_set_dragging_leader_index(uintptr_t session, long long index);
uintptr_t ns_draggingsession_dragging_pasteboard(uintptr_t session);
long long ns_draggingsession_dragging_sequence_number(uintptr_t session);
void ns_draggingsession_dragging_location(uintptr_t session, double *x, double *y);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_DRAGGINGSESSION_H */
