#ifndef PHP_APPKIT_NS_SLIDER_H
#define PHP_APPKIT_NS_SLIDER_H

/*
 * Faithful 1:1 binding of AppKit NSSlider.h. Every member of the
 * class (base interface + same-file NSSliderVerticalGetter,
 * NSTickMarkSupport, NSSliderConvenience, and NSSliderDeprecated
 * categories) is either bound or reserved. API_DEPRECATED members
 * are reserved; nothing is omitted. The adopted NSAccessibilitySlider
 * protocol is not a class member. Inherited NSControl / NSView
 * members bind on those classes. No designated initializer is
 * declared here — construction is NSControl::initWithFrame or the
 * convenience factories. The NSSliderVerticalGetter readonly
 * isVertical is reserved as a duplicate of the 10.12 readwrite
 * property. Nullable SEL action on the factories crosses as var.
 * NSSliderType and NSTickMarkPosition cross as int. NSPoint in
 * and NSRect out follow the struct convention (component doubles
 * in, assoc arrays out).
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSSlider ---- */

/*@zep NS\NSSlider sliderType(int handle) -> int */
zend_long ns_nsslider_slider_type(zval *handle);
/*@zep NS\NSSlider setSliderType(int handle, int sliderType) -> void */
void ns_nsslider_set_slider_type(zval *handle, zval *sliderType);

/*@zep NS\NSSlider minValue(int handle) -> double */
double ns_nsslider_min_value(zval *handle);
/*@zep NS\NSSlider setMinValue(int handle, double minValue) -> void */
void ns_nsslider_set_min_value(zval *handle, zval *minValue);

/*@zep NS\NSSlider maxValue(int handle) -> double */
double ns_nsslider_max_value(zval *handle);
/*@zep NS\NSSlider setMaxValue(int handle, double maxValue) -> void */
void ns_nsslider_set_max_value(zval *handle, zval *maxValue);

/*@zep NS\NSSlider altIncrementValue(int handle) -> double */
double ns_nsslider_alt_increment_value(zval *handle);
/*@zep NS\NSSlider setAltIncrementValue(int handle, double altIncrementValue) -> void */
void ns_nsslider_set_alt_increment_value(zval *handle, zval *altIncrementValue);

/*@zep NS\NSSlider knobThickness(int handle) -> double */
double ns_nsslider_knob_thickness(zval *handle);

/*@zep NS\NSSlider acceptsFirstMouse(int handle, int event) -> bool */
zend_long ns_nsslider_accepts_first_mouse(zval *handle, zval *event);

/*@zep NS\NSSlider isVertical(int handle) -> bool */
zend_long ns_nsslider_is_vertical(zval *handle);
/*@zep NS\NSSlider setVertical(int handle, bool vertical) -> void */
void ns_nsslider_set_vertical(zval *handle, zval *vertical);

/*@zep NS\NSSlider trackFillColor(int handle) -> int */
zend_long ns_nsslider_track_fill_color(zval *handle);
/*@zep NS\NSSlider setTrackFillColor(int handle, int trackFillColor) -> void */
void ns_nsslider_set_track_fill_color(zval *handle, zval *trackFillColor);

/* ---- NSSliderVerticalGetter ---- */

/*@reserved NS\NSSlider @property (readonly, getter=isVertical) BOOL vertical — NSSliderVerticalGetter duplicate of the 10.12 readwrite property */

/* ---- NSTickMarkSupport ---- */

/*@zep NS\NSSlider numberOfTickMarks(int handle) -> int */
zend_long ns_nsslider_number_of_tick_marks(zval *handle);
/*@zep NS\NSSlider setNumberOfTickMarks(int handle, int numberOfTickMarks) -> void */
void ns_nsslider_set_number_of_tick_marks(zval *handle, zval *numberOfTickMarks);

/*@zep NS\NSSlider tickMarkPosition(int handle) -> int */
zend_long ns_nsslider_tick_mark_position(zval *handle);
/*@zep NS\NSSlider setTickMarkPosition(int handle, int tickMarkPosition) -> void */
void ns_nsslider_set_tick_mark_position(zval *handle, zval *tickMarkPosition);

/*@zep NS\NSSlider allowsTickMarkValuesOnly(int handle) -> bool */
zend_long ns_nsslider_allows_tick_mark_values_only(zval *handle);
/*@zep NS\NSSlider setAllowsTickMarkValuesOnly(int handle, bool allowsTickMarkValuesOnly) -> void */
void ns_nsslider_set_allows_tick_mark_values_only(zval *handle, zval *allowsTickMarkValuesOnly);

/*@zep NS\NSSlider tickMarkValueAtIndex(int handle, int index) -> double */
double ns_nsslider_tick_mark_value_at_index(zval *handle, zval *index);

/*@zep NS\NSSlider rectOfTickMarkAtIndex(int handle, int index) -> array */
void ns_nsslider_rect_of_tick_mark_at_index(zval *return_value, zval *handle, zval *index);

/*@zep NS\NSSlider indexOfTickMarkAtPoint(int handle, double x, double y) -> int */
zend_long ns_nsslider_index_of_tick_mark_at_point(zval *handle, zval *x, zval *y);

/*@zep NS\NSSlider closestTickMarkValueToValue(int handle, double value) -> double */
double ns_nsslider_closest_tick_mark_value_to_value(zval *handle, zval *value);

/* ---- NSSliderConvenience ---- */

/*@zep NS\NSSlider sliderWithTargetAction(int target, var action) -> int */
zend_long ns_nsslider_slider_with_target_action(zval *target, zval *action);
/*@zep NS\NSSlider sliderWithValueMinValueMaxValueTargetAction(double value, double minValue, double maxValue, int target, var action) -> int */
zend_long ns_nsslider_slider_with_value_min_value_max_value_target_action(zval *value, zval *minValue, zval *maxValue, zval *target, zval *action);

/* ---- NSSliderDeprecated ---- */

/*@reserved NS\NSSlider - (void)setTitleCell:(null_unspecified NSCell *)cell API_DEPRECATED */
/*@reserved NS\NSSlider - (null_unspecified id)titleCell API_DEPRECATED */
/*@reserved NS\NSSlider - (void)setTitleColor:(null_unspecified NSColor *)newColor API_DEPRECATED */
/*@reserved NS\NSSlider - (null_unspecified NSColor *)titleColor API_DEPRECATED */
/*@reserved NS\NSSlider - (void)setTitleFont:(null_unspecified NSFont *)fontObj API_DEPRECATED */
/*@reserved NS\NSSlider - (null_unspecified NSFont *)titleFont API_DEPRECATED */
/*@reserved NS\NSSlider - (null_unspecified NSString *)title API_DEPRECATED */
/*@reserved NS\NSSlider - (void)setTitle:(null_unspecified NSString *)string API_DEPRECATED */
/*@reserved NS\NSSlider - (void)setKnobThickness:(CGFloat)thickness API_DEPRECATED */
/*@reserved NS\NSSlider - (void)setImage:(null_unspecified NSImage *)backgroundImage API_DEPRECATED */
/*@reserved NS\NSSlider - (null_unspecified NSImage *)image API_DEPRECATED */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SLIDER_H */
