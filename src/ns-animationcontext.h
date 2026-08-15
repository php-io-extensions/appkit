#ifndef PHP_APPKIT_NS_ANIMATIONCONTEXT_H
#define PHP_APPKIT_NS_ANIMATIONCONTEXT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void ns_animationcontext_begin_grouping(void);

void ns_animationcontext_end_grouping(void);

uintptr_t ns_animationcontext_current(void);

void ns_animationcontext_set_duration(uintptr_t context, double duration);

double ns_animationcontext_get_duration(uintptr_t context);

void ns_animationcontext_set_allows_implicit_animation(uintptr_t context, int enabled);

int ns_animationcontext_get_allows_implicit_animation(uintptr_t context);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_ANIMATIONCONTEXT_H */
