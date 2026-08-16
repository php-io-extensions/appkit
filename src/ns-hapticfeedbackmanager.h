#ifndef PHP_APPKIT_NS_HAPTICFEEDBACKMANAGER_H
#define PHP_APPKIT_NS_HAPTICFEEDBACKMANAGER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_hapticfeedbackmanager_default_performer(void);
void ns_hapticfeedbackmanager_destroy_performer(uintptr_t performer);
void ns_hapticfeedbackmanager_perform_feedback(uintptr_t performer, int pattern, int performance_time);
void ns_hapticfeedbackmanager_perform_default_feedback(int pattern, int performance_time);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_HAPTICFEEDBACKMANAGER_H */
