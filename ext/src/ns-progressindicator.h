#ifndef PHP_APPKIT_NS_PROGRESSINDICATOR_H
#define PHP_APPKIT_NS_PROGRESSINDICATOR_H

/*
 * Faithful 1:1 binding of AppKit NSProgressIndicator.h. Every member of
 * the class (base interface + same-file NSProgressIndicatorDeprecated
 * category) is either bound or reserved. API_DEPRECATED members are
 * reserved; nothing is omitted. The adopted
 * NSAccessibilityProgressIndicator protocol is not a class member.
 * No same-file companion class and no designated initializer —
 * construction is synthesized initWithFrame (allocs NSProgressIndicator).
 * Inherited NSView members stay on that class. NSProgressIndicator is an NSView, not an NSControl.
 * observedProgress is a nullable Foundation NSProgress and crosses as
 * an int handle (0 = nil). NSProgressIndicatorStyle and NSControlSize
 * cross as int.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSProgressIndicator ---- */

/*@zep-construct NS\NSProgressIndicator initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nsprogressindicator_init_with_frame(zval *x, zval *y, zval *width, zval *height);


/*@zep NS\NSProgressIndicator isIndeterminate(int handle) -> bool */
zend_long ns_nsprogressindicator_is_indeterminate(zval *handle);
/*@zep NS\NSProgressIndicator setIndeterminate(int handle, bool indeterminate) -> void */
void ns_nsprogressindicator_set_indeterminate(zval *handle, zval *indeterminate);

/*@zep NS\NSProgressIndicator controlSize(int handle) -> int */
zend_long ns_nsprogressindicator_control_size(zval *handle);
/*@zep NS\NSProgressIndicator setControlSize(int handle, int controlSize) -> void */
void ns_nsprogressindicator_set_control_size(zval *handle, zval *controlSize);

/*@zep NS\NSProgressIndicator doubleValue(int handle) -> double */
double ns_nsprogressindicator_double_value(zval *handle);
/*@zep NS\NSProgressIndicator setDoubleValue(int handle, double doubleValue) -> void */
void ns_nsprogressindicator_set_double_value(zval *handle, zval *doubleValue);

/*@zep NS\NSProgressIndicator incrementBy(int handle, double delta) -> void */
void ns_nsprogressindicator_increment_by(zval *handle, zval *delta);

/*@zep NS\NSProgressIndicator minValue(int handle) -> double */
double ns_nsprogressindicator_min_value(zval *handle);
/*@zep NS\NSProgressIndicator setMinValue(int handle, double minValue) -> void */
void ns_nsprogressindicator_set_min_value(zval *handle, zval *minValue);

/*@zep NS\NSProgressIndicator maxValue(int handle) -> double */
double ns_nsprogressindicator_max_value(zval *handle);
/*@zep NS\NSProgressIndicator setMaxValue(int handle, double maxValue) -> void */
void ns_nsprogressindicator_set_max_value(zval *handle, zval *maxValue);

/*@zep NS\NSProgressIndicator observedProgress(int handle) -> int */
zend_long ns_nsprogressindicator_observed_progress(zval *handle);
/*@zep NS\NSProgressIndicator setObservedProgress(int handle, int observedProgress) -> void */
void ns_nsprogressindicator_set_observed_progress(zval *handle, zval *observedProgress);

/*@zep NS\NSProgressIndicator usesThreadedAnimation(int handle) -> bool */
zend_long ns_nsprogressindicator_uses_threaded_animation(zval *handle);
/*@zep NS\NSProgressIndicator setUsesThreadedAnimation(int handle, bool usesThreadedAnimation) -> void */
void ns_nsprogressindicator_set_uses_threaded_animation(zval *handle, zval *usesThreadedAnimation);

/*@zep NS\NSProgressIndicator startAnimation(int handle, int sender) -> void */
void ns_nsprogressindicator_start_animation(zval *handle, zval *sender);
/*@zep NS\NSProgressIndicator stopAnimation(int handle, int sender) -> void */
void ns_nsprogressindicator_stop_animation(zval *handle, zval *sender);

/*@zep NS\NSProgressIndicator style(int handle) -> int */
zend_long ns_nsprogressindicator_style(zval *handle);
/*@zep NS\NSProgressIndicator setStyle(int handle, int style) -> void */
void ns_nsprogressindicator_set_style(zval *handle, zval *style);

/*@zep NS\NSProgressIndicator sizeToFit(int handle) -> void */
void ns_nsprogressindicator_size_to_fit(zval *handle);

/*@zep NS\NSProgressIndicator isDisplayedWhenStopped(int handle) -> bool */
zend_long ns_nsprogressindicator_is_displayed_when_stopped(zval *handle);
/*@zep NS\NSProgressIndicator setDisplayedWhenStopped(int handle, bool displayedWhenStopped) -> void */
void ns_nsprogressindicator_set_displayed_when_stopped(zval *handle, zval *displayedWhenStopped);

/* ---- NSProgressIndicatorDeprecated ---- */

/*@reserved NS\NSProgressIndicator - (NSTimeInterval)animationDelay API_DEPRECATED */
/*@reserved NS\NSProgressIndicator - (void)setAnimationDelay:(NSTimeInterval)delay API_DEPRECATED */
/*@reserved NS\NSProgressIndicator - (void)animate:(nullable id)sender API_DEPRECATED */
/*@reserved NS\NSProgressIndicator @property (getter=isBezeled) BOOL bezeled API_DEPRECATED — getter */
/*@reserved NS\NSProgressIndicator @property (getter=isBezeled) BOOL bezeled API_DEPRECATED — setter */
/*@reserved NS\NSProgressIndicator @property NSControlTint controlTint API_DEPRECATED — getter */
/*@reserved NS\NSProgressIndicator @property NSControlTint controlTint API_DEPRECATED — setter */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PROGRESSINDICATOR_H */
