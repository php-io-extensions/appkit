#ifndef PHP_APPKIT_NS_ALIGNMENTFEEDBACKFILTER_H
#define PHP_APPKIT_NS_ALIGNMENTFEEDBACKFILTER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_alignmentfeedbackfilter_create(void);
uintptr_t ns_alignmentfeedbackfilter_wrap(void *filter);
void ns_alignmentfeedbackfilter_destroy(uintptr_t filter);
void *ns_alignmentfeedbackfilter_nsalignmentfeedbackfilter(uintptr_t filter);
unsigned long long ns_alignmentfeedbackfilter_input_event_mask(void);
void ns_alignmentfeedbackfilter_update_with_event(uintptr_t filter, void *event);
void ns_alignmentfeedbackfilter_update_with_pan_recognizer(uintptr_t filter, uintptr_t recognizer);
uintptr_t ns_alignmentfeedbackfilter_token_for_movement(uintptr_t filter, uintptr_t view, double prev_x, double prev_y, double aligned_x, double aligned_y, double default_x, double default_y);
uintptr_t ns_alignmentfeedbackfilter_token_for_horizontal_movement(uintptr_t filter, uintptr_t view, double previous_x, double aligned_x, double default_x);
uintptr_t ns_alignmentfeedbackfilter_token_for_vertical_movement(uintptr_t filter, uintptr_t view, double previous_y, double aligned_y, double default_y);
void ns_alignmentfeedbackfilter_perform_feedback(uintptr_t filter, const uintptr_t *tokens, int count, int performance_time);
void ns_alignmentfeedbackfilter_destroy_token(uintptr_t token);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_ALIGNMENTFEEDBACKFILTER_H */
