#ifndef PHP_APPKIT_NS_SEGMENTEDCELL_H
#define PHP_APPKIT_NS_SEGMENTEDCELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_segmentedcell_create_text(const char *string);
uintptr_t ns_segmentedcell_wrap(void *cell);
void ns_segmentedcell_destroy(uintptr_t cell);
void *ns_segmentedcell_nssegmentedcell(uintptr_t cell);

void ns_segmentedcell_set_title(uintptr_t cell, const char *title);
int ns_segmentedcell_get_title(uintptr_t cell, char *out, int out_len);
void ns_segmentedcell_set_state(uintptr_t cell, int state);
int ns_segmentedcell_get_state(uintptr_t cell);
void ns_segmentedcell_set_enabled(uintptr_t cell, int enabled);
int ns_segmentedcell_is_enabled(uintptr_t cell);
void ns_segmentedcell_set_tag(uintptr_t cell, int tag);
int ns_segmentedcell_get_tag(uintptr_t cell);

void ns_segmentedcell_set_segment_count(uintptr_t cell, int count);
int ns_segmentedcell_get_segment_count(uintptr_t cell);
void ns_segmentedcell_set_selected_segment(uintptr_t cell, int index);
int ns_segmentedcell_get_selected_segment(uintptr_t cell);
int ns_segmentedcell_select_segment_with_tag(uintptr_t cell, int tag);
void ns_segmentedcell_set_tracking_mode(uintptr_t cell, int mode);
int ns_segmentedcell_get_tracking_mode(uintptr_t cell);
void ns_segmentedcell_set_segment_style(uintptr_t cell, int style);
int ns_segmentedcell_get_segment_style(uintptr_t cell);
void ns_segmentedcell_set_width_for_segment(uintptr_t cell, double width, int segment);
double ns_segmentedcell_width_for_segment(uintptr_t cell, int segment);
void ns_segmentedcell_set_label_for_segment(uintptr_t cell, const char *label, int segment);
int ns_segmentedcell_label_for_segment(uintptr_t cell, int segment, char *out, int out_len);
void ns_segmentedcell_set_selected_for_segment(uintptr_t cell, int selected, int segment);
int ns_segmentedcell_is_selected_for_segment(uintptr_t cell, int segment);
void ns_segmentedcell_set_enabled_for_segment(uintptr_t cell, int enabled, int segment);
int ns_segmentedcell_is_enabled_for_segment(uintptr_t cell, int segment);
void ns_segmentedcell_set_tag_for_segment(uintptr_t cell, int tag, int segment);
int ns_segmentedcell_tag_for_segment(uintptr_t cell, int segment);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SEGMENTEDCELL_H */
