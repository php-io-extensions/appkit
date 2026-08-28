#ifndef PHP_APPKIT_NS_SEGMENTEDCELL_H
#define PHP_APPKIT_NS_SEGMENTEDCELL_H

/*
 * Faithful 1:1 binding of AppKit NSSegmentedCell.h. Every member of
 * the class (base interface + same-file NSSegmentBackgroundStyle
 * category) is either bound or reserved. Nothing is reserved — the
 * header has no blocks, NSCoder, NSAttributedString, NSData, Class,
 * or API_DEPRECATED members. Inherited NSActionCell / NSCell
 * members stay on those classes. No designated initializer is
 * declared here — construction is synthesized initTextCell /
 * initImageCell (allocs NSSegmentedCell). NSImage / NSMenu /
 * NSView cross as handles (0 = nil). Nullable label / toolTip
 * getters cross as var; setLabel:forSegment: takes a non-null
 * string. Enums (tracking / style / imageScaling /
 * backgroundStyle) and tags / counts cross as int.
 * drawSegment:inFrame:withView: follows the NSRect convention
 * (component doubles in).
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSSegmentedCell ---- */

/*@zep-construct NS\NSSegmentedCell initTextCell(string string_) -> int */
zend_long ns_nssegmentedcell_init_text_cell(zval *string_);
/*@zep-construct NS\NSSegmentedCell initImageCell(int image) -> int */
zend_long ns_nssegmentedcell_init_image_cell(zval *image);

/*@zep NS\NSSegmentedCell segmentCount(int handle) -> int */
zend_long ns_nssegmentedcell_segment_count(zval *handle);
/*@zep NS\NSSegmentedCell setSegmentCount(int handle, int segmentCount) -> void */
void ns_nssegmentedcell_set_segment_count(zval *handle, zval *segmentCount);

/*@zep NS\NSSegmentedCell selectedSegment(int handle) -> int */
zend_long ns_nssegmentedcell_selected_segment(zval *handle);
/*@zep NS\NSSegmentedCell setSelectedSegment(int handle, int selectedSegment) -> void */
void ns_nssegmentedcell_set_selected_segment(zval *handle, zval *selectedSegment);

/*@zep NS\NSSegmentedCell selectSegmentWithTag(int handle, int tag) -> bool */
zend_long ns_nssegmentedcell_select_segment_with_tag(zval *handle, zval *tag);

/*@zep NS\NSSegmentedCell makeNextSegmentKey(int handle) -> void */
void ns_nssegmentedcell_make_next_segment_key(zval *handle);
/*@zep NS\NSSegmentedCell makePreviousSegmentKey(int handle) -> void */
void ns_nssegmentedcell_make_previous_segment_key(zval *handle);

/*@zep NS\NSSegmentedCell trackingMode(int handle) -> int */
zend_long ns_nssegmentedcell_tracking_mode(zval *handle);
/*@zep NS\NSSegmentedCell setTrackingMode(int handle, int trackingMode) -> void */
void ns_nssegmentedcell_set_tracking_mode(zval *handle, zval *trackingMode);

/*@zep NS\NSSegmentedCell setWidthForSegment(int handle, double width, int segment) -> void */
void ns_nssegmentedcell_set_width_for_segment(zval *handle, zval *width, zval *segment);
/*@zep NS\NSSegmentedCell widthForSegment(int handle, int segment) -> double */
double ns_nssegmentedcell_width_for_segment(zval *handle, zval *segment);

/*@zep NS\NSSegmentedCell setImageForSegment(int handle, int image, int segment) -> void */
void ns_nssegmentedcell_set_image_for_segment(zval *handle, zval *image, zval *segment);
/*@zep NS\NSSegmentedCell imageForSegment(int handle, int segment) -> int */
zend_long ns_nssegmentedcell_image_for_segment(zval *handle, zval *segment);

/*@zep NS\NSSegmentedCell setImageScalingForSegment(int handle, int scaling, int segment) -> void */
void ns_nssegmentedcell_set_image_scaling_for_segment(zval *handle, zval *scaling, zval *segment);
/*@zep NS\NSSegmentedCell imageScalingForSegment(int handle, int segment) -> int */
zend_long ns_nssegmentedcell_image_scaling_for_segment(zval *handle, zval *segment);

/*@zep NS\NSSegmentedCell setLabelForSegment(int handle, string label, int segment) -> void */
void ns_nssegmentedcell_set_label_for_segment(zval *handle, zval *label, zval *segment);
/*@zep NS\NSSegmentedCell labelForSegment(int handle, int segment) -> var */
void ns_nssegmentedcell_label_for_segment(zval *return_value, zval *handle, zval *segment);

/*@zep NS\NSSegmentedCell setSelectedForSegment(int handle, bool selected, int segment) -> void */
void ns_nssegmentedcell_set_selected_for_segment(zval *handle, zval *selected, zval *segment);
/*@zep NS\NSSegmentedCell isSelectedForSegment(int handle, int segment) -> bool */
zend_long ns_nssegmentedcell_is_selected_for_segment(zval *handle, zval *segment);

/*@zep NS\NSSegmentedCell setEnabledForSegment(int handle, bool enabled, int segment) -> void */
void ns_nssegmentedcell_set_enabled_for_segment(zval *handle, zval *enabled, zval *segment);
/*@zep NS\NSSegmentedCell isEnabledForSegment(int handle, int segment) -> bool */
zend_long ns_nssegmentedcell_is_enabled_for_segment(zval *handle, zval *segment);

/*@zep NS\NSSegmentedCell setMenuForSegment(int handle, int menu, int segment) -> void */
void ns_nssegmentedcell_set_menu_for_segment(zval *handle, zval *menu, zval *segment);
/*@zep NS\NSSegmentedCell menuForSegment(int handle, int segment) -> int */
zend_long ns_nssegmentedcell_menu_for_segment(zval *handle, zval *segment);

/*@zep NS\NSSegmentedCell setToolTipForSegment(int handle, var toolTip, int segment) -> void */
void ns_nssegmentedcell_set_tool_tip_for_segment(zval *handle, zval *toolTip, zval *segment);
/*@zep NS\NSSegmentedCell toolTipForSegment(int handle, int segment) -> var */
void ns_nssegmentedcell_tool_tip_for_segment(zval *return_value, zval *handle, zval *segment);

/*@zep NS\NSSegmentedCell setTagForSegment(int handle, int tag, int segment) -> void */
void ns_nssegmentedcell_set_tag_for_segment(zval *handle, zval *tag, zval *segment);
/*@zep NS\NSSegmentedCell tagForSegment(int handle, int segment) -> int */
zend_long ns_nssegmentedcell_tag_for_segment(zval *handle, zval *segment);

/*@zep NS\NSSegmentedCell segmentStyle(int handle) -> int */
zend_long ns_nssegmentedcell_segment_style(zval *handle);
/*@zep NS\NSSegmentedCell setSegmentStyle(int handle, int segmentStyle) -> void */
void ns_nssegmentedcell_set_segment_style(zval *handle, zval *segmentStyle);

/*@zep NS\NSSegmentedCell drawSegmentInFrameWithView(int handle, int segment, double x, double y, double width, double height, int controlView) -> void */
void ns_nssegmentedcell_draw_segment_in_frame_with_view(zval *handle, zval *segment, zval *x, zval *y, zval *width, zval *height, zval *controlView);

/* ---- NSSegmentBackgroundStyle ---- */

/*@zep NS\NSSegmentedCell interiorBackgroundStyleForSegment(int handle, int segment) -> int */
zend_long ns_nssegmentedcell_interior_background_style_for_segment(zval *handle, zval *segment);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SEGMENTEDCELL_H */
