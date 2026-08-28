#ifndef PHP_APPKIT_NS_SCREEN_H
#define PHP_APPKIT_NS_SCREEN_H

/*
 * Faithful 1:1 binding of AppKit NSScreen.h. Every member of the
 * class (base interface + the two same-file anonymous class
 * extensions + NSDisplayLink + NSDeprecated) is either bound or
 * reserved. Nothing is omitted. Adopted NSObject members stay on
 * that class. This header declares no initializer — screens are
 * obtained from the class properties (screens / mainScreen /
 * deepestScreen), not alloc+init. The
 * NSScreenColorSpaceDidChangeNotification name is an
 * APPKIT_EXTERN constant, not a class member.
 *
 * Reserved: supportedWindowDepths (const NSWindowDepth * /
 * NS_RETURNS_INNER_POINTER, no C-buffer registry) and
 * userSpaceScaleFactor (API_DEPRECATED). CADisplayLink from
 * displayLinkWithTarget:selector: crosses as a handle.
 *
 * NSWindowDepth / NSDisplayGamut / NSAlignmentOptions /
 * NSInteger cross as int. CGFloat / NSTimeInterval cross as
 * double. NSRect / NSEdgeInsets follow the struct convention.
 * NSArray<NSScreen *> (screens) marshals as an array of
 * handles. deviceDescription (NSDictionary) and colorSpace
 * cross as int handles (0 = nil).
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Class screens ---- */

/*@zep NS\NSScreen screens() -> array */
void ns_nsscreen_screens(zval *return_value);
/*@zep NS\NSScreen mainScreen() -> int */
zend_long ns_nsscreen_main_screen(void);
/*@zep NS\NSScreen deepestScreen() -> int */
zend_long ns_nsscreen_deepest_screen(void);
/*@zep NS\NSScreen screensHaveSeparateSpaces() -> bool */
zend_long ns_nsscreen_screens_have_separate_spaces(void);

/* ---- Geometry and device ---- */

/*@zep NS\NSScreen depth(int handle) -> int */
zend_long ns_nsscreen_depth(zval *handle);
/*@zep NS\NSScreen frame(int handle) -> array */
void ns_nsscreen_frame(zval *return_value, zval *handle);
/*@zep NS\NSScreen visibleFrame(int handle) -> array */
void ns_nsscreen_visible_frame(zval *return_value, zval *handle);
/*@zep NS\NSScreen deviceDescription(int handle) -> int */
zend_long ns_nsscreen_device_description(zval *handle);
/*@zep NS\NSScreen colorSpace(int handle) -> int */
zend_long ns_nsscreen_color_space(zval *handle);

/*@reserved NS\NSScreen @property (readonly) const NSWindowDepth *supportedWindowDepths NS_RETURNS_INNER_POINTER — C depth-list pointer */

/*@zep NS\NSScreen canRepresentDisplayGamut(int handle, int displayGamut) -> bool */
zend_long ns_nsscreen_can_represent_display_gamut(zval *handle, zval *displayGamut);

/*@zep NS\NSScreen convertRectToBacking(int handle, double x, double y, double width, double height) -> array */
void ns_nsscreen_convert_rect_to_backing(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSScreen convertRectFromBacking(int handle, double x, double y, double width, double height) -> array */
void ns_nsscreen_convert_rect_from_backing(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height);
/*@zep NS\NSScreen backingAlignedRectOptions(int handle, double x, double y, double width, double height, int options) -> array */
void ns_nsscreen_backing_aligned_rect_options(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *options);

/*@zep NS\NSScreen backingScaleFactor(int handle) -> double */
double ns_nsscreen_backing_scale_factor(zval *handle);
/*@zep NS\NSScreen localizedName(int handle) -> string */
void ns_nsscreen_localized_name(zval *return_value, zval *handle);

/*@zep NS\NSScreen safeAreaInsets(int handle) -> array */
void ns_nsscreen_safe_area_insets(zval *return_value, zval *handle);
/*@zep NS\NSScreen auxiliaryTopLeftArea(int handle) -> array */
void ns_nsscreen_auxiliary_top_left_area(zval *return_value, zval *handle);
/*@zep NS\NSScreen auxiliaryTopRightArea(int handle) -> array */
void ns_nsscreen_auxiliary_top_right_area(zval *return_value, zval *handle);

/* ---- Extended Dynamic Range ---- */

/*@zep NS\NSScreen maximumExtendedDynamicRangeColorComponentValue(int handle) -> double */
double ns_nsscreen_maximum_extended_dynamic_range_color_component_value(zval *handle);
/*@zep NS\NSScreen maximumPotentialExtendedDynamicRangeColorComponentValue(int handle) -> double */
double ns_nsscreen_maximum_potential_extended_dynamic_range_color_component_value(zval *handle);
/*@zep NS\NSScreen maximumReferenceExtendedDynamicRangeColorComponentValue(int handle) -> double */
double ns_nsscreen_maximum_reference_extended_dynamic_range_color_component_value(zval *handle);

/* ---- Variable Rate Refresh ---- */

/*@zep NS\NSScreen maximumFramesPerSecond(int handle) -> int */
zend_long ns_nsscreen_maximum_frames_per_second(zval *handle);
/*@zep NS\NSScreen minimumRefreshInterval(int handle) -> double */
double ns_nsscreen_minimum_refresh_interval(zval *handle);
/*@zep NS\NSScreen maximumRefreshInterval(int handle) -> double */
double ns_nsscreen_maximum_refresh_interval(zval *handle);
/*@zep NS\NSScreen displayUpdateGranularity(int handle) -> double */
double ns_nsscreen_display_update_granularity(zval *handle);
/*@zep NS\NSScreen lastDisplayUpdateTimestamp(int handle) -> double */
double ns_nsscreen_last_display_update_timestamp(zval *handle);

/* ---- NSDisplayLink ---- */

/*@zep NS\NSScreen displayLinkWithTargetSelector(int handle, int target, string selector) -> int */
zend_long ns_nsscreen_display_link_with_target_selector(zval *handle, zval *target, zval *selector);

/* ---- NSDeprecated ---- */

/*@reserved NS\NSScreen - (CGFloat)userSpaceScaleFactor API_DEPRECATED — Use -convertRectToBacking: or -backingScaleFactor instead */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SCREEN_H */
