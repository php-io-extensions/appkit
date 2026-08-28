#ifndef PHP_APPKIT_NS_STACKVIEW_H
#define PHP_APPKIT_NS_STACKVIEW_H

/*
 * Faithful 1:1 binding of AppKit NSStackView.h. Every member of the
 * class (base interface + same-file NSStackViewGravityAreas and
 * NSStackViewDeprecated categories) is either bound or reserved.
 * Nothing is omitted. The adopted NSStackViewDelegate protocol is
 * not a class member (delegate methods belong to Bridge). The
 * NSStackViewGravity / NSStackViewDistribution typedefs,
 * NSStackViewVisibilityPriority constants, and
 * NSStackViewSpacingUseDefault are not class members. This header
 * declares no initializer — construction is synthesized
 * initWithFrame (allocs NSStackView) plus the
 * stackViewWithViews: class factory. Inherited NSView /
 * NSResponder members stay on those classes. hasEqualSpacing is
 * API_DEPRECATED and reserved. alignment and the clipping /
 * hugging priority pair live inside !TARGET_OS_IPHONE and are
 * bound (the audit blanks preprocessor lines, so those members
 * still count). Delegate / arranged / detached / gravity views
 * cross as int handles (0 = nil) or an array of handles.
 * NSUserInterfaceLayoutOrientation / NSLayoutAttribute /
 * NSStackViewDistribution / NSStackViewGravity /
 * NSLayoutConstraintOrientation cross as int. NSEdgeInsets
 * follows the struct convention (component doubles in, assoc
 * array out). CGFloat spacing, NSLayoutPriority, and
 * NSStackViewVisibilityPriority (float) cross as double.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- construction glue ---- */

/*@zep-construct NS\NSStackView initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nsstackview_init_with_frame(zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSStackView stackViewWithViews(array views) -> int */
zend_long ns_nsstackview_stack_view_with_views(zval *views);

/* ---- General properties ---- */

/*@zep NS\NSStackView delegate(int handle) -> int */
zend_long ns_nsstackview_delegate(zval *handle);
/*@zep NS\NSStackView setDelegate(int handle, int delegate) -> void */
void ns_nsstackview_set_delegate(zval *handle, zval *delegate);

/*@zep NS\NSStackView orientation(int handle) -> int */
zend_long ns_nsstackview_orientation(zval *handle);
/*@zep NS\NSStackView setOrientation(int handle, int orientation) -> void */
void ns_nsstackview_set_orientation(zval *handle, zval *orientation);

/*@zep NS\NSStackView alignment(int handle) -> int */
zend_long ns_nsstackview_alignment(zval *handle);
/*@zep NS\NSStackView setAlignment(int handle, int alignment) -> void */
void ns_nsstackview_set_alignment(zval *handle, zval *alignment);

/*@zep NS\NSStackView edgeInsets(int handle) -> array */
void ns_nsstackview_edge_insets(zval *return_value, zval *handle);
/*@zep NS\NSStackView setEdgeInsets(int handle, double top, double left, double bottom, double right) -> void */
void ns_nsstackview_set_edge_insets(zval *handle, zval *top, zval *left, zval *bottom, zval *right);

/*@zep NS\NSStackView distribution(int handle) -> int */
zend_long ns_nsstackview_distribution(zval *handle);
/*@zep NS\NSStackView setDistribution(int handle, int distribution) -> void */
void ns_nsstackview_set_distribution(zval *handle, zval *distribution);

/*@zep NS\NSStackView spacing(int handle) -> double */
double ns_nsstackview_spacing(zval *handle);
/*@zep NS\NSStackView setSpacing(int handle, double spacing) -> void */
void ns_nsstackview_set_spacing(zval *handle, zval *spacing);

/*@zep NS\NSStackView setCustomSpacingAfterView(int handle, double spacing, int view) -> void */
void ns_nsstackview_set_custom_spacing_after_view(zval *handle, zval *spacing, zval *view);
/*@zep NS\NSStackView customSpacingAfterView(int handle, int view) -> double */
double ns_nsstackview_custom_spacing_after_view(zval *handle, zval *view);

/*@zep NS\NSStackView detachesHiddenViews(int handle) -> bool */
zend_long ns_nsstackview_detaches_hidden_views(zval *handle);
/*@zep NS\NSStackView setDetachesHiddenViews(int handle, bool detachesHiddenViews) -> void */
void ns_nsstackview_set_detaches_hidden_views(zval *handle, zval *detachesHiddenViews);

/* ---- Arranged subviews ---- */

/*@zep NS\NSStackView arrangedSubviews(int handle) -> array */
void ns_nsstackview_arranged_subviews(zval *return_value, zval *handle);

/*@zep NS\NSStackView addArrangedSubview(int handle, int view) -> void */
void ns_nsstackview_add_arranged_subview(zval *handle, zval *view);

/*@zep NS\NSStackView insertArrangedSubviewAtIndex(int handle, int view, int index) -> void */
void ns_nsstackview_insert_arranged_subview_at_index(zval *handle, zval *view, zval *index);

/*@zep NS\NSStackView removeArrangedSubview(int handle, int view) -> void */
void ns_nsstackview_remove_arranged_subview(zval *handle, zval *view);

/*@zep NS\NSStackView detachedViews(int handle) -> array */
void ns_nsstackview_detached_views(zval *return_value, zval *handle);

/* ---- Custom priorities ---- */

/*@zep NS\NSStackView setVisibilityPriorityForView(int handle, double priority, int view) -> void */
void ns_nsstackview_set_visibility_priority_for_view(zval *handle, zval *priority, zval *view);
/*@zep NS\NSStackView visibilityPriorityForView(int handle, int view) -> double */
double ns_nsstackview_visibility_priority_for_view(zval *handle, zval *view);

/*@zep NS\NSStackView clippingResistancePriorityForOrientation(int handle, int orientation) -> double */
double ns_nsstackview_clipping_resistance_priority_for_orientation(zval *handle, zval *orientation);
/*@zep NS\NSStackView setClippingResistancePriorityForOrientation(int handle, double clippingResistancePriority, int orientation) -> void */
void ns_nsstackview_set_clipping_resistance_priority_for_orientation(zval *handle, zval *clippingResistancePriority, zval *orientation);

/*@zep NS\NSStackView huggingPriorityForOrientation(int handle, int orientation) -> double */
double ns_nsstackview_hugging_priority_for_orientation(zval *handle, zval *orientation);
/*@zep NS\NSStackView setHuggingPriorityForOrientation(int handle, double huggingPriority, int orientation) -> void */
void ns_nsstackview_set_hugging_priority_for_orientation(zval *handle, zval *huggingPriority, zval *orientation);

/* ---- NSStackViewGravityAreas ---- */

/*@zep NS\NSStackView addViewInGravity(int handle, int view, int gravity) -> void */
void ns_nsstackview_add_view_in_gravity(zval *handle, zval *view, zval *gravity);

/*@zep NS\NSStackView insertViewAtIndexInGravity(int handle, int view, int index, int gravity) -> void */
void ns_nsstackview_insert_view_at_index_in_gravity(zval *handle, zval *view, zval *index, zval *gravity);

/*@zep NS\NSStackView removeView(int handle, int view) -> void */
void ns_nsstackview_remove_view(zval *handle, zval *view);

/*@zep NS\NSStackView viewsInGravity(int handle, int gravity) -> array */
void ns_nsstackview_views_in_gravity(zval *return_value, zval *handle, zval *gravity);

/*@zep NS\NSStackView setViewsInGravity(int handle, array views, int gravity) -> void */
void ns_nsstackview_set_views_in_gravity(zval *handle, zval *views, zval *gravity);

/*@zep NS\NSStackView views(int handle) -> array */
void ns_nsstackview_views(zval *return_value, zval *handle);

/* ---- NSStackViewDeprecated ---- */

/*@reserved NS\NSStackView @property BOOL hasEqualSpacing API_DEPRECATED — getter */
/*@reserved NS\NSStackView @property BOOL hasEqualSpacing API_DEPRECATED — setter */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_STACKVIEW_H */
