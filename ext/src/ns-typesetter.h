#ifndef PHP_APPKIT_NS_TYPESETTER_H
#define PHP_APPKIT_NS_TYPESETTER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_TYPESETTER_BEHAVIOR_LATEST = -1,
    NS_TYPESETTER_BEHAVIOR_ORIGINAL = 0,
    NS_TYPESETTER_BEHAVIOR_10_2_WITH_COMPATIBILITY = 1,
    NS_TYPESETTER_BEHAVIOR_10_2 = 2,
    NS_TYPESETTER_BEHAVIOR_10_3 = 3,
    NS_TYPESETTER_BEHAVIOR_10_4 = 4
} ns_typesetter_behavior;

uintptr_t ns_typesetter_shared_system_typesetter(void);
uintptr_t ns_typesetter_shared_system_typesetter_for_behavior(int behavior);
int ns_typesetter_default_typesetter_behavior(void);
uintptr_t ns_typesetter_wrap(void *typesetter);
void ns_typesetter_destroy(uintptr_t typesetter);
void *ns_typesetter_nstypesetter(uintptr_t typesetter);

int ns_typesetter_uses_font_leading(uintptr_t typesetter);
void ns_typesetter_set_uses_font_leading(uintptr_t typesetter, int flag);
int ns_typesetter_typesetter_behavior(uintptr_t typesetter);
void ns_typesetter_set_typesetter_behavior(uintptr_t typesetter, int behavior);
float ns_typesetter_hyphenation_factor(uintptr_t typesetter);
void ns_typesetter_set_hyphenation_factor(uintptr_t typesetter, float factor);
double ns_typesetter_line_fragment_padding(uintptr_t typesetter);
void ns_typesetter_set_line_fragment_padding(uintptr_t typesetter, double padding);
int ns_typesetter_bidi_processing_enabled(uintptr_t typesetter);
void ns_typesetter_set_bidi_processing_enabled(uintptr_t typesetter, int flag);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TYPESETTER_H */
