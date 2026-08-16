#ifndef PHP_APPKIT_NS_STORYBOARDSEGUE_H
#define PHP_APPKIT_NS_STORYBOARDSEGUE_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_storyboardsegue_create(const char *identifier, void *source_controller, void *destination_controller);
uintptr_t ns_storyboardsegue_wrap(void *segue);
void ns_storyboardsegue_destroy(uintptr_t segue);
void *ns_storyboardsegue_nsstoryboardsegue(uintptr_t segue);
int ns_storyboardsegue_identifier(uintptr_t segue, char *out, int out_len);
void *ns_storyboardsegue_source_controller(uintptr_t segue);
void *ns_storyboardsegue_destination_controller(uintptr_t segue);
void ns_storyboardsegue_perform(uintptr_t segue);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_STORYBOARDSEGUE_H */
