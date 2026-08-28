#ifndef PHP_APPKIT_NS_SEGMENTEDCONTROL_H
#define PHP_APPKIT_NS_SEGMENTEDCONTROL_H

/*
 * Faithful 1:1 binding of AppKit NSSegmentedControl.h. Every member of
 * the class (base interface + same-file NSSegmentedControlConvenience
 * category) is either bound or reserved. Nothing is reserved — the
 * header has no blocks, NSCoder, NSAttributedString, NSData, Class,
 * or API_DEPRECATED members. The adopted NSUserInterfaceCompression
 * protocol is not a class member; the three compression methods are
 * declared on this class and bind here. The NSSegmentSwitchTracking /
 * NSSegmentStyle / NSSegmentDistribution typedefs are not class
 * members. Inherited NSControl / NSView members stay on those
 * classes. No designated initializer is declared here —
 * construction is synthesized initWithFrame (allocs
 * NSSegmentedControl) plus the two convenience factories.
 * getter=isSpringLoaded emits isSpringLoaded. Nullable SEL action
 * on the factories crosses as var. NSImage / NSMenu / NSColor /
 * NSUserInterfaceCompressionOptions and factory targets cross as
 * handles (0 = nil). labels is NSArray<NSString *> (strings);
 * images and prioritizedOptions are arrays of handles.
 * minimumSizeWithPrioritizedCompressionOptions: returns an assoc
 * array (NSSize). Enums (style / tracking / distribution /
 * imageScaling / alignment) cross as int. The !TARGET_OS_IPHONE
 * alignment pair binds — the audit blanks preprocessor lines.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSSegmentedControl ---- */

/*@zep-construct NS\NSSegmentedControl initWithFrame(double x, double y, double width, double height) -> int */
zend_long ns_nssegmentedcontrol_init_with_frame(zval *x, zval *y, zval *width, zval *height);

/*@zep NS\NSSegmentedControl segmentCount(int handle) -> int */
zend_long ns_nssegmentedcontrol_segment_count(zval *handle);
/*@zep NS\NSSegmentedControl setSegmentCount(int handle, int segmentCount) -> void */
void ns_nssegmentedcontrol_set_segment_count(zval *handle, zval *segmentCount);

/*@zep NS\NSSegmentedControl selectedSegment(int handle) -> int */
zend_long ns_nssegmentedcontrol_selected_segment(zval *handle);
/*@zep NS\NSSegmentedControl setSelectedSegment(int handle, int selectedSegment) -> void */
void ns_nssegmentedcontrol_set_selected_segment(zval *handle, zval *selectedSegment);

/*@zep NS\NSSegmentedControl selectSegmentWithTag(int handle, int tag) -> bool */
zend_long ns_nssegmentedcontrol_select_segment_with_tag(zval *handle, zval *tag);

/*@zep NS\NSSegmentedControl setWidthForSegment(int handle, double width, int segment) -> void */
void ns_nssegmentedcontrol_set_width_for_segment(zval *handle, zval *width, zval *segment);
/*@zep NS\NSSegmentedControl widthForSegment(int handle, int segment) -> double */
double ns_nssegmentedcontrol_width_for_segment(zval *handle, zval *segment);

/*@zep NS\NSSegmentedControl setImageForSegment(int handle, int image, int segment) -> void */
void ns_nssegmentedcontrol_set_image_for_segment(zval *handle, zval *image, zval *segment);
/*@zep NS\NSSegmentedControl imageForSegment(int handle, int segment) -> int */
zend_long ns_nssegmentedcontrol_image_for_segment(zval *handle, zval *segment);

/*@zep NS\NSSegmentedControl setImageScalingForSegment(int handle, int scaling, int segment) -> void */
void ns_nssegmentedcontrol_set_image_scaling_for_segment(zval *handle, zval *scaling, zval *segment);
/*@zep NS\NSSegmentedControl imageScalingForSegment(int handle, int segment) -> int */
zend_long ns_nssegmentedcontrol_image_scaling_for_segment(zval *handle, zval *segment);

/*@zep NS\NSSegmentedControl setLabelForSegment(int handle, string label, int segment) -> void */
void ns_nssegmentedcontrol_set_label_for_segment(zval *handle, zval *label, zval *segment);
/*@zep NS\NSSegmentedControl labelForSegment(int handle, int segment) -> var */
void ns_nssegmentedcontrol_label_for_segment(zval *return_value, zval *handle, zval *segment);

/*@zep NS\NSSegmentedControl setMenuForSegment(int handle, int menu, int segment) -> void */
void ns_nssegmentedcontrol_set_menu_for_segment(zval *handle, zval *menu, zval *segment);
/*@zep NS\NSSegmentedControl menuForSegment(int handle, int segment) -> int */
zend_long ns_nssegmentedcontrol_menu_for_segment(zval *handle, zval *segment);

/*@zep NS\NSSegmentedControl setSelectedForSegment(int handle, bool selected, int segment) -> void */
void ns_nssegmentedcontrol_set_selected_for_segment(zval *handle, zval *selected, zval *segment);
/*@zep NS\NSSegmentedControl isSelectedForSegment(int handle, int segment) -> bool */
zend_long ns_nssegmentedcontrol_is_selected_for_segment(zval *handle, zval *segment);

/*@zep NS\NSSegmentedControl setEnabledForSegment(int handle, bool enabled, int segment) -> void */
void ns_nssegmentedcontrol_set_enabled_for_segment(zval *handle, zval *enabled, zval *segment);
/*@zep NS\NSSegmentedControl isEnabledForSegment(int handle, int segment) -> bool */
zend_long ns_nssegmentedcontrol_is_enabled_for_segment(zval *handle, zval *segment);

/*@zep NS\NSSegmentedControl setToolTipForSegment(int handle, var toolTip, int segment) -> void */
void ns_nssegmentedcontrol_set_tool_tip_for_segment(zval *handle, zval *toolTip, zval *segment);
/*@zep NS\NSSegmentedControl toolTipForSegment(int handle, int segment) -> var */
void ns_nssegmentedcontrol_tool_tip_for_segment(zval *return_value, zval *handle, zval *segment);

/*@zep NS\NSSegmentedControl setTagForSegment(int handle, int tag, int segment) -> void */
void ns_nssegmentedcontrol_set_tag_for_segment(zval *handle, zval *tag, zval *segment);
/*@zep NS\NSSegmentedControl tagForSegment(int handle, int segment) -> int */
zend_long ns_nssegmentedcontrol_tag_for_segment(zval *handle, zval *segment);

/*@zep NS\NSSegmentedControl setShowsMenuIndicatorForSegment(int handle, bool showsMenuIndicator, int segment) -> void */
void ns_nssegmentedcontrol_set_shows_menu_indicator_for_segment(zval *handle, zval *showsMenuIndicator, zval *segment);
/*@zep NS\NSSegmentedControl showsMenuIndicatorForSegment(int handle, int segment) -> bool */
zend_long ns_nssegmentedcontrol_shows_menu_indicator_for_segment(zval *handle, zval *segment);

/*@zep NS\NSSegmentedControl segmentStyle(int handle) -> int */
zend_long ns_nssegmentedcontrol_segment_style(zval *handle);
/*@zep NS\NSSegmentedControl setSegmentStyle(int handle, int segmentStyle) -> void */
void ns_nssegmentedcontrol_set_segment_style(zval *handle, zval *segmentStyle);

/*@zep NS\NSSegmentedControl isSpringLoaded(int handle) -> bool */
zend_long ns_nssegmentedcontrol_is_spring_loaded(zval *handle);
/*@zep NS\NSSegmentedControl setSpringLoaded(int handle, bool springLoaded) -> void */
void ns_nssegmentedcontrol_set_spring_loaded(zval *handle, zval *springLoaded);

/*@zep NS\NSSegmentedControl trackingMode(int handle) -> int */
zend_long ns_nssegmentedcontrol_tracking_mode(zval *handle);
/*@zep NS\NSSegmentedControl setTrackingMode(int handle, int trackingMode) -> void */
void ns_nssegmentedcontrol_set_tracking_mode(zval *handle, zval *trackingMode);

/*@zep NS\NSSegmentedControl doubleValueForSelectedSegment(int handle) -> double */
double ns_nssegmentedcontrol_double_value_for_selected_segment(zval *handle);

/*@zep NS\NSSegmentedControl selectedSegmentBezelColor(int handle) -> int */
zend_long ns_nssegmentedcontrol_selected_segment_bezel_color(zval *handle);
/*@zep NS\NSSegmentedControl setSelectedSegmentBezelColor(int handle, int selectedSegmentBezelColor) -> void */
void ns_nssegmentedcontrol_set_selected_segment_bezel_color(zval *handle, zval *selectedSegmentBezelColor);

/*@zep NS\NSSegmentedControl indexOfSelectedItem(int handle) -> int */
zend_long ns_nssegmentedcontrol_index_of_selected_item(zval *handle);

/*@zep NS\NSSegmentedControl setAlignmentForSegment(int handle, int alignment, int segment) -> void */
void ns_nssegmentedcontrol_set_alignment_for_segment(zval *handle, zval *alignment, zval *segment);
/*@zep NS\NSSegmentedControl alignmentForSegment(int handle, int segment) -> int */
zend_long ns_nssegmentedcontrol_alignment_for_segment(zval *handle, zval *segment);

/*@zep NS\NSSegmentedControl segmentDistribution(int handle) -> int */
zend_long ns_nssegmentedcontrol_segment_distribution(zval *handle);
/*@zep NS\NSSegmentedControl setSegmentDistribution(int handle, int segmentDistribution) -> void */
void ns_nssegmentedcontrol_set_segment_distribution(zval *handle, zval *segmentDistribution);

/*@zep NS\NSSegmentedControl compressWithPrioritizedCompressionOptions(int handle, array prioritizedOptions) -> void */
void ns_nssegmentedcontrol_compress_with_prioritized_compression_options(zval *handle, zval *prioritizedOptions);
/*@zep NS\NSSegmentedControl minimumSizeWithPrioritizedCompressionOptions(int handle, array prioritizedOptions) -> array */
void ns_nssegmentedcontrol_minimum_size_with_prioritized_compression_options(zval *return_value, zval *handle, zval *prioritizedOptions);
/*@zep NS\NSSegmentedControl activeCompressionOptions(int handle) -> int */
zend_long ns_nssegmentedcontrol_active_compression_options(zval *handle);

/* ---- NSSegmentedControlConvenience ---- */

/*@zep NS\NSSegmentedControl segmentedControlWithLabelsTrackingModeTargetAction(array labels, int trackingMode, int target, var action) -> int */
zend_long ns_nssegmentedcontrol_segmented_control_with_labels_tracking_mode_target_action(zval *labels, zval *trackingMode, zval *target, zval *action);
/*@zep NS\NSSegmentedControl segmentedControlWithImagesTrackingModeTargetAction(array images, int trackingMode, int target, var action) -> int */
zend_long ns_nssegmentedcontrol_segmented_control_with_images_tracking_mode_target_action(zval *images, zval *trackingMode, zval *target, zval *action);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SEGMENTEDCONTROL_H */
