#ifndef PHP_APPKIT_NS_SLIDERCELL_H
#define PHP_APPKIT_NS_SLIDERCELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_slidercell_create_text(const char *string);
uintptr_t ns_slidercell_wrap(void *cell);
void ns_slidercell_destroy(uintptr_t cell);
void *ns_slidercell_nsslidercell(uintptr_t cell);

void ns_slidercell_set_title(uintptr_t cell, const char *title);
int ns_slidercell_get_title(uintptr_t cell, char *out, int out_len);
void ns_slidercell_set_state(uintptr_t cell, int state);
int ns_slidercell_get_state(uintptr_t cell);
void ns_slidercell_set_enabled(uintptr_t cell, int enabled);
int ns_slidercell_is_enabled(uintptr_t cell);
void ns_slidercell_set_tag(uintptr_t cell, int tag);
int ns_slidercell_get_tag(uintptr_t cell);

void ns_slidercell_set_min_value(uintptr_t cell, double value);
double ns_slidercell_get_min_value(uintptr_t cell);
void ns_slidercell_set_max_value(uintptr_t cell, double value);
double ns_slidercell_get_max_value(uintptr_t cell);
void ns_slidercell_set_alt_increment_value(uintptr_t cell, double value);
double ns_slidercell_get_alt_increment_value(uintptr_t cell);
void ns_slidercell_set_slider_type(uintptr_t cell, int type);
int ns_slidercell_get_slider_type(uintptr_t cell);
void ns_slidercell_set_vertical(uintptr_t cell, int flag);
int ns_slidercell_is_vertical(uintptr_t cell);
void ns_slidercell_set_number_of_tick_marks(uintptr_t cell, int count);
int ns_slidercell_get_number_of_tick_marks(uintptr_t cell);
void ns_slidercell_set_tick_mark_position(uintptr_t cell, int position);
int ns_slidercell_get_tick_mark_position(uintptr_t cell);
void ns_slidercell_set_allows_tick_mark_values_only(uintptr_t cell, int flag);
int ns_slidercell_allows_tick_mark_values_only(uintptr_t cell);
double ns_slidercell_tick_mark_value_at_index(uintptr_t cell, int index);
double ns_slidercell_closest_tick_mark_value_to_value(uintptr_t cell, double value);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SLIDERCELL_H */
