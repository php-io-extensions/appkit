#ifndef PHP_APPKIT_NS_TEXTCONTAINER_H
#define PHP_APPKIT_NS_TEXTCONTAINER_H

/*
 * Faithful 1:1 binding of AppKit NSTextContainer.h. Every member of
 * the class (base interface + same-file class extension +
 * NSTextContainerDeprecated) is either bound or reserved. Nothing is
 * omitted. The adopted NSTextLayoutOrientationProvider protocol is
 * not a class member (layoutOrientation lives on that protocol in
 * NSLayoutManager.h). NSLineSweepDirection / NSLineMovementDirection
 * typedefs are not class members. Live construction is initWithSize
 * and the soft-deprecated initWithContainerSize (each alloc+init
 * glue). Inherited NSObject members stay on that class.
 *
 * The audit blanks preprocessor lines, so both sides of the
 * pre-10.12 / 10.12+ textView property are counted. The live weak
 * textView is bound; the older strong declaration is reserved as a
 * duplicate. initWithCoder: (NSCoder) and containsPoint:
 * (API_DEPRECATED) are reserved. Comment-only "soft deprecated"
 * containerSize / initWithContainerSize: /
 * lineFragmentRectForProposedRect:sweepDirection:movementDirection:remainingRect:
 * stay bound. remainingRect out-params are not inputs: the return
 * assoc array is the fragment rect (x/y/width/height) plus a
 * remainingRect key of the same shape. exclusionPaths is handles.
 * Nullable NSTextLayoutManager / NSLayoutManager / NSTextView /
 * NSBezierPath cross as int handles (0 = nil). NSLineBreakMode /
 * NSWritingDirection / NSUInteger / the soft-deprecated sweep and
 * movement enums cross as int. CGSize / NSSize / CGRect / NSRect
 * follow the struct convention.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Initialization ---- */

/*@zep NS\NSTextContainer initWithSize(double width, double height) -> int */
zend_long ns_nstextcontainer_init_with_size(zval *width, zval *height);
/*@reserved NS\NSTextContainer - (instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER; */

/*@zep NS\NSTextContainer textLayoutManager(int handle) -> int */
zend_long ns_nstextcontainer_text_layout_manager(zval *handle);

/* ---- Container shape ---- */

/*@zep NS\NSTextContainer size(int handle) -> array */
void ns_nstextcontainer_size(zval *return_value, zval *handle);
/*@zep NS\NSTextContainer setSize(int handle, double width, double height) -> void */
void ns_nstextcontainer_set_size(zval *handle, zval *width, zval *height);

/*@zep NS\NSTextContainer lineBreakMode(int handle) -> int */
zend_long ns_nstextcontainer_line_break_mode(zval *handle);
/*@zep NS\NSTextContainer setLineBreakMode(int handle, int lineBreakMode) -> void */
void ns_nstextcontainer_set_line_break_mode(zval *handle, zval *lineBreakMode);

/* ---- Layout constraint ---- */

/*@zep NS\NSTextContainer lineFragmentPadding(int handle) -> double */
double ns_nstextcontainer_line_fragment_padding(zval *handle);
/*@zep NS\NSTextContainer setLineFragmentPadding(int handle, double lineFragmentPadding) -> void */
void ns_nstextcontainer_set_line_fragment_padding(zval *handle, zval *lineFragmentPadding);

/*@zep NS\NSTextContainer maximumNumberOfLines(int handle) -> int */
zend_long ns_nstextcontainer_maximum_number_of_lines(zval *handle);
/*@zep NS\NSTextContainer setMaximumNumberOfLines(int handle, int maximumNumberOfLines) -> void */
void ns_nstextcontainer_set_maximum_number_of_lines(zval *handle, zval *maximumNumberOfLines);

/* ---- Line fragments ---- */

/*@zep NS\NSTextContainer lineFragmentRectForProposedRectAtIndexWritingDirectionRemainingRect(int handle, double x, double y, double width, double height, int characterIndex, int baseWritingDirection) -> array */
void ns_nstextcontainer_line_fragment_rect_for_proposed_rect_at_index_writing_direction_remaining_rect(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *characterIndex, zval *baseWritingDirection);

/*@zep NS\NSTextContainer isSimpleRectangularTextContainer(int handle) -> bool */
zend_long ns_nstextcontainer_is_simple_rectangular_text_container(zval *handle);

/* ---- View synchronization ---- */

/*@zep NS\NSTextContainer widthTracksTextView(int handle) -> bool */
zend_long ns_nstextcontainer_width_tracks_text_view(zval *handle);
/*@zep NS\NSTextContainer setWidthTracksTextView(int handle, bool widthTracksTextView) -> void */
void ns_nstextcontainer_set_width_tracks_text_view(zval *handle, zval *widthTracksTextView);

/*@zep NS\NSTextContainer heightTracksTextView(int handle) -> bool */
zend_long ns_nstextcontainer_height_tracks_text_view(zval *handle);
/*@zep NS\NSTextContainer setHeightTracksTextView(int handle, bool heightTracksTextView) -> void */
void ns_nstextcontainer_set_height_tracks_text_view(zval *handle, zval *heightTracksTextView);

/* ---- Class extension (layout manager, exclusion, text view) ---- */

/*@zep NS\NSTextContainer layoutManager(int handle) -> int */
zend_long ns_nstextcontainer_layout_manager(zval *handle);
/*@zep NS\NSTextContainer setLayoutManager(int handle, int layoutManager) -> void */
void ns_nstextcontainer_set_layout_manager(zval *handle, zval *layoutManager);

/*@zep NS\NSTextContainer replaceLayoutManager(int handle, int newLayoutManager) -> void */
void ns_nstextcontainer_replace_layout_manager(zval *handle, zval *newLayoutManager);

/*@zep NS\NSTextContainer exclusionPaths(int handle) -> array */
void ns_nstextcontainer_exclusion_paths(zval *return_value, zval *handle);
/*@zep NS\NSTextContainer setExclusionPaths(int handle, array exclusionPaths) -> void */
void ns_nstextcontainer_set_exclusion_paths(zval *handle, zval *exclusionPaths);

/*@zep NS\NSTextContainer textView(int handle) -> int */
zend_long ns_nstextcontainer_text_view(zval *handle);
/*@zep NS\NSTextContainer setTextView(int handle, int textView) -> void */
void ns_nstextcontainer_set_text_view(zval *handle, zval *textView);
/*@reserved NS\NSTextContainer @property (nullable, strong) NSTextView *textView — pre-10.12 duplicate getter */
/*@reserved NS\NSTextContainer @property (nullable, strong) NSTextView *textView — pre-10.12 duplicate setter */

/* ---- NSTextContainerDeprecated (soft-deprecated stay bound) ---- */

/*@zep NS\NSTextContainer initWithContainerSize(double width, double height) -> int */
zend_long ns_nstextcontainer_init_with_container_size(zval *width, zval *height);

/*@zep NS\NSTextContainer containerSize(int handle) -> array */
void ns_nstextcontainer_container_size(zval *return_value, zval *handle);
/*@zep NS\NSTextContainer setContainerSize(int handle, double width, double height) -> void */
void ns_nstextcontainer_set_container_size(zval *handle, zval *width, zval *height);

/*@zep NS\NSTextContainer lineFragmentRectForProposedRectSweepDirectionMovementDirectionRemainingRect(int handle, double x, double y, double width, double height, int sweepDirection, int movementDirection) -> array */
void ns_nstextcontainer_line_fragment_rect_for_proposed_rect_sweep_direction_movement_direction_remaining_rect(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *sweepDirection, zval *movementDirection);

/*@reserved NS\NSTextContainer - (BOOL)containsPoint:(NSPoint)point API_DEPRECATED("", macos(10.0,10.11)); */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTCONTAINER_H */
