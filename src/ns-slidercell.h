#ifndef PHP_APPKIT_NS_SLIDERCELL_H
#define PHP_APPKIT_NS_SLIDERCELL_H

/*
 * Faithful 1:1 binding of AppKit NSSliderCell.h. Every member of
 * the class (base interface + same-file NSSliderCellVerticalGetter,
 * NSTickMarkSupport, and NSDeprecated categories) is either bound
 * or reserved. API_DEPRECATED members are reserved; nothing is
 * omitted. Inherited NSActionCell / NSCell members bind on those
 * classes. No designated initializer is declared here —
 * construction is synthesized initTextCell / initImageCell
 * (allocs NSSliderCell).
 * The NSSliderCellVerticalGetter readonly isVertical is reserved
 * as a duplicate of the 10.11 readwrite property. -drawKnob: is
 * emitted as drawKnobRect so it does not collide with -drawKnob.
 * NSSliderType and NSTickMarkPosition cross as int. NSPoint in
 * and NSRect out follow the struct convention (component doubles
 * in, assoc arrays out). The typedef aliases
 * (NSTickMarkBelow / NSLinearSlider / …) are not class members.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSSliderCell ---- */

/*@zep-construct NS\NSSliderCell initTextCell(string string_) -> int */
zend_long ns_nsslidercell_init_text_cell(zval *string_);
/*@zep-construct NS\NSSliderCell initImageCell(int image) -> int */
zend_long ns_nsslidercell_init_image_cell(zval *image);

/*@zep NS\NSSliderCell prefersTrackingUntilMouseUp() -> bool */
zend_long ns_nsslidercell_prefers_tracking_until_mouse_up(void);

/*@zep NS\NSSliderCell minValue(int handle) -> double */
double ns_nsslidercell_min_value(zval *handle);
/*@zep NS\NSSliderCell setMinValue(int handle, double minValue) -> void */
void ns_nsslidercell_set_min_value(zval *handle, zval *minValue);

/*@zep NS\NSSliderCell maxValue(int handle) -> double */
double ns_nsslidercell_max_value(zval *handle);
/*@zep NS\NSSliderCell setMaxValue(int handle, double maxValue) -> void */
void ns_nsslidercell_set_max_value(zval *handle, zval *maxValue);

/*@zep NS\NSSliderCell altIncrementValue(int handle) -> double */
double ns_nsslidercell_alt_increment_value(zval *handle);
/*@zep NS\NSSliderCell setAltIncrementValue(int handle, double altIncrementValue) -> void */
void ns_nsslidercell_set_alt_increment_value(zval *handle, zval *altIncrementValue);

/*@zep NS\NSSliderCell sliderType(int handle) -> int */
zend_long ns_nsslidercell_slider_type(zval *handle);
/*@zep NS\NSSliderCell setSliderType(int handle, int sliderType) -> void */
void ns_nsslidercell_set_slider_type(zval *handle, zval *sliderType);

/*@zep NS\NSSliderCell isVertical(int handle) -> bool */
zend_long ns_nsslidercell_is_vertical(zval *handle);
/*@zep NS\NSSliderCell setVertical(int handle, bool vertical) -> void */
void ns_nsslidercell_set_vertical(zval *handle, zval *vertical);

/*@zep NS\NSSliderCell trackRect(int handle) -> array */
void ns_nsslidercell_track_rect(zval *return_value, zval *handle);

/*@zep NS\NSSliderCell knobThickness(int handle) -> double */
double ns_nsslidercell_knob_thickness(zval *handle);

/*@zep NS\NSSliderCell knobRectFlipped(int handle, bool flipped) -> array */
void ns_nsslidercell_knob_rect_flipped(zval *return_value, zval *handle, zval *flipped);

/*@zep NS\NSSliderCell barRectFlipped(int handle, bool flipped) -> array */
void ns_nsslidercell_bar_rect_flipped(zval *return_value, zval *handle, zval *flipped);

/*@zep NS\NSSliderCell drawKnobRect(int handle, double x, double y, double width, double height) -> void */
void ns_nsslidercell_draw_knob_rect(zval *handle, zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSSliderCell drawKnob(int handle) -> void */
void ns_nsslidercell_draw_knob(zval *handle);

/*@zep NS\NSSliderCell drawBarInsideFlipped(int handle, double x, double y, double width, double height, bool flipped) -> void */
void ns_nsslidercell_draw_bar_inside_flipped(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *flipped);

/* ---- NSSliderCellVerticalGetter ---- */

/*@reserved NS\NSSliderCell @property (readonly, getter=isVertical) BOOL vertical — NSSliderCellVerticalGetter duplicate of the 10.11 readwrite property */

/* ---- NSTickMarkSupport ---- */

/*@zep NS\NSSliderCell numberOfTickMarks(int handle) -> int */
zend_long ns_nsslidercell_number_of_tick_marks(zval *handle);
/*@zep NS\NSSliderCell setNumberOfTickMarks(int handle, int numberOfTickMarks) -> void */
void ns_nsslidercell_set_number_of_tick_marks(zval *handle, zval *numberOfTickMarks);

/*@zep NS\NSSliderCell tickMarkPosition(int handle) -> int */
zend_long ns_nsslidercell_tick_mark_position(zval *handle);
/*@zep NS\NSSliderCell setTickMarkPosition(int handle, int tickMarkPosition) -> void */
void ns_nsslidercell_set_tick_mark_position(zval *handle, zval *tickMarkPosition);

/*@zep NS\NSSliderCell allowsTickMarkValuesOnly(int handle) -> bool */
zend_long ns_nsslidercell_allows_tick_mark_values_only(zval *handle);
/*@zep NS\NSSliderCell setAllowsTickMarkValuesOnly(int handle, bool allowsTickMarkValuesOnly) -> void */
void ns_nsslidercell_set_allows_tick_mark_values_only(zval *handle, zval *allowsTickMarkValuesOnly);

/*@zep NS\NSSliderCell tickMarkValueAtIndex(int handle, int index) -> double */
double ns_nsslidercell_tick_mark_value_at_index(zval *handle, zval *index);

/*@zep NS\NSSliderCell rectOfTickMarkAtIndex(int handle, int index) -> array */
void ns_nsslidercell_rect_of_tick_mark_at_index(zval *return_value, zval *handle, zval *index);

/*@zep NS\NSSliderCell indexOfTickMarkAtPoint(int handle, double x, double y) -> int */
zend_long ns_nsslidercell_index_of_tick_mark_at_point(zval *handle, zval *x, zval *y);

/*@zep NS\NSSliderCell closestTickMarkValueToValue(int handle, double value) -> double */
double ns_nsslidercell_closest_tick_mark_value_to_value(zval *handle, zval *value);

/*@zep NS\NSSliderCell drawTickMarks(int handle) -> void */
void ns_nsslidercell_draw_tick_marks(zval *handle);

/* ---- NSDeprecated ---- */

/*@reserved NS\NSSliderCell - (void)setTitleCell:(null_unspecified NSCell *)cell API_DEPRECATED */
/*@reserved NS\NSSliderCell - (null_unspecified id)titleCell API_DEPRECATED */
/*@reserved NS\NSSliderCell - (void)setTitleColor:(null_unspecified NSColor *)newColor API_DEPRECATED */
/*@reserved NS\NSSliderCell - (null_unspecified NSColor *)titleColor API_DEPRECATED */
/*@reserved NS\NSSliderCell - (void)setTitleFont:(null_unspecified NSFont *)fontObj API_DEPRECATED */
/*@reserved NS\NSSliderCell - (null_unspecified NSFont *)titleFont API_DEPRECATED */
/*@reserved NS\NSSliderCell - (null_unspecified NSString *)title API_DEPRECATED */
/*@reserved NS\NSSliderCell - (void)setTitle:(null_unspecified NSString *)string API_DEPRECATED */
/*@reserved NS\NSSliderCell - (void)setKnobThickness:(CGFloat)thickness API_DEPRECATED */
/*@reserved NS\NSSliderCell - (void)setImage:(null_unspecified NSImage *)backgroundImage API_DEPRECATED */
/*@reserved NS\NSSliderCell - (null_unspecified NSImage *)image API_DEPRECATED */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SLIDERCELL_H */
