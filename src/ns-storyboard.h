#ifndef PHP_APPKIT_NS_STORYBOARD_H
#define PHP_APPKIT_NS_STORYBOARD_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_storyboard_main(void);
uintptr_t ns_storyboard_with_name(const char *name, const char *bundle_path);
uintptr_t ns_storyboard_wrap(void *storyboard);
void ns_storyboard_destroy(uintptr_t storyboard);
void *ns_storyboard_nsstoryboard(uintptr_t storyboard);
uintptr_t ns_storyboard_instantiate_initial_controller(uintptr_t storyboard);
uintptr_t ns_storyboard_instantiate_controller_with_identifier(uintptr_t storyboard, const char *identifier);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_STORYBOARD_H */
