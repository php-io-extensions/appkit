#ifndef PHP_APPKIT_NS_LAYOUTANCHOR_H
#define PHP_APPKIT_NS_LAYOUTANCHOR_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_layoutanchor_wrap(void *anchor);
void ns_layoutanchor_destroy(uintptr_t anchor);
void *ns_layoutanchor_nslayoutanchor(uintptr_t anchor);
uintptr_t ns_layoutanchor_constraint_equal_to_anchor(uintptr_t anchor, uintptr_t other, int has_constant, double constant);
uintptr_t ns_layoutanchor_constraint_greater_than_or_equal_to_anchor(uintptr_t anchor, uintptr_t other, int has_constant, double constant);
uintptr_t ns_layoutanchor_constraint_less_than_or_equal_to_anchor(uintptr_t anchor, uintptr_t other, int has_constant, double constant);
int ns_layoutanchor_name(uintptr_t anchor, char *out, int out_len);
void *ns_layoutanchor_item(uintptr_t anchor);
int ns_layoutanchor_has_ambiguous_layout(uintptr_t anchor);
int ns_layoutanchor_constraints_affecting_layout_count(uintptr_t anchor);
uintptr_t ns_layoutanchor_constraint_affecting_layout_at(uintptr_t anchor, int index);
uintptr_t ns_layoutxaxisanchor_anchor_with_offset_to_anchor(uintptr_t anchor, uintptr_t other);
uintptr_t ns_layoutxaxisanchor_constraint_equal_to_system_spacing_after(uintptr_t anchor, uintptr_t other, double multiplier);
uintptr_t ns_layoutxaxisanchor_constraint_greater_than_or_equal_to_system_spacing_after(uintptr_t anchor, uintptr_t other, double multiplier);
uintptr_t ns_layoutxaxisanchor_constraint_less_than_or_equal_to_system_spacing_after(uintptr_t anchor, uintptr_t other, double multiplier);
uintptr_t ns_layoutyaxisanchor_anchor_with_offset_to_anchor(uintptr_t anchor, uintptr_t other);
uintptr_t ns_layoutyaxisanchor_constraint_equal_to_system_spacing_below(uintptr_t anchor, uintptr_t other, double multiplier);
uintptr_t ns_layoutyaxisanchor_constraint_greater_than_or_equal_to_system_spacing_below(uintptr_t anchor, uintptr_t other, double multiplier);
uintptr_t ns_layoutyaxisanchor_constraint_less_than_or_equal_to_system_spacing_below(uintptr_t anchor, uintptr_t other, double multiplier);
uintptr_t ns_layoutdimension_constraint_equal_to_constant(uintptr_t anchor, double constant);
uintptr_t ns_layoutdimension_constraint_greater_than_or_equal_to_constant(uintptr_t anchor, double constant);
uintptr_t ns_layoutdimension_constraint_less_than_or_equal_to_constant(uintptr_t anchor, double constant);
uintptr_t ns_layoutdimension_constraint_equal_to_anchor_multiplier(uintptr_t anchor, uintptr_t other, double multiplier);
uintptr_t ns_layoutdimension_constraint_greater_than_or_equal_to_anchor_multiplier(uintptr_t anchor, uintptr_t other, double multiplier);
uintptr_t ns_layoutdimension_constraint_less_than_or_equal_to_anchor_multiplier(uintptr_t anchor, uintptr_t other, double multiplier);
uintptr_t ns_layoutdimension_constraint_equal_to_anchor_multiplier_constant(uintptr_t anchor, uintptr_t other, double multiplier, double constant);
uintptr_t ns_layoutdimension_constraint_greater_than_or_equal_to_anchor_multiplier_constant(uintptr_t anchor, uintptr_t other, double multiplier, double constant);
uintptr_t ns_layoutdimension_constraint_less_than_or_equal_to_anchor_multiplier_constant(uintptr_t anchor, uintptr_t other, double multiplier, double constant);
uintptr_t ns_view_leading_anchor(uintptr_t view);
uintptr_t ns_view_trailing_anchor(uintptr_t view);
uintptr_t ns_view_left_anchor(uintptr_t view);
uintptr_t ns_view_right_anchor(uintptr_t view);
uintptr_t ns_view_top_anchor(uintptr_t view);
uintptr_t ns_view_bottom_anchor(uintptr_t view);
uintptr_t ns_view_width_anchor(uintptr_t view);
uintptr_t ns_view_height_anchor(uintptr_t view);
uintptr_t ns_view_center_x_anchor(uintptr_t view);
uintptr_t ns_view_center_y_anchor(uintptr_t view);
uintptr_t ns_view_first_baseline_anchor(uintptr_t view);
uintptr_t ns_view_last_baseline_anchor(uintptr_t view);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_LAYOUTANCHOR_H */
