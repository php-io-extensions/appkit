#ifndef PHP_APPKIT_NS_LAYOUTCONSTRAINT_H
#define PHP_APPKIT_NS_LAYOUTCONSTRAINT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_layoutconstraint_wrap(void *constraint);
void ns_layoutconstraint_destroy(uintptr_t constraint);
void *ns_layoutconstraint_nslayoutconstraint(uintptr_t constraint);
uintptr_t ns_layoutconstraint_constraint_with_item(uintptr_t view1, int attr1, int relation, uintptr_t view2, int attr2, double multiplier, double constant);
void ns_layoutconstraint_activate(const uintptr_t *constraints, int count);
void ns_layoutconstraint_deactivate(const uintptr_t *constraints, int count);
void ns_layoutconstraint_set_active(uintptr_t constraint, int active);
int ns_layoutconstraint_is_active(uintptr_t constraint);
void ns_layoutconstraint_set_priority(uintptr_t constraint, float priority);
float ns_layoutconstraint_priority(uintptr_t constraint);
void ns_layoutconstraint_set_constant(uintptr_t constraint, double constant);
double ns_layoutconstraint_constant(uintptr_t constraint);
void ns_layoutconstraint_set_identifier(uintptr_t constraint, const char *identifier);
int ns_layoutconstraint_identifier(uintptr_t constraint, char *out, int out_len);
int ns_layoutconstraint_first_attribute(uintptr_t constraint);
int ns_layoutconstraint_second_attribute(uintptr_t constraint);
int ns_layoutconstraint_relation(uintptr_t constraint);
double ns_layoutconstraint_multiplier(uintptr_t constraint);
uintptr_t ns_layoutconstraint_first_anchor(uintptr_t constraint);
uintptr_t ns_layoutconstraint_second_anchor(uintptr_t constraint);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_LAYOUTCONSTRAINT_H */
