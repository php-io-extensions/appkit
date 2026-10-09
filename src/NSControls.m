/*
 * The AppKit controls: one method per native accessor, generated from the
 * macros below so each class reads as a list of its selectors.
 */

#include "runtime.h"
#include "controls.h"
#include "../stubs/NSControls_arginfo.h"

_Static_assert(NSLineBreakByWordWrapping == 0 && NSLineBreakByCharWrapping == 1 && NSLineBreakByClipping == 2
	&& NSLineBreakByTruncatingHead == 3 && NSLineBreakByTruncatingTail == 4 && NSLineBreakByTruncatingMiddle == 5, "NSLineBreakMode values moved");
_Static_assert(NSButtonTypeMomentaryLight == 0 && NSButtonTypePushOnPushOff == 1 && NSButtonTypeToggle == 2 && NSButtonTypeSwitch == 3
	&& NSButtonTypeRadio == 4 && NSButtonTypeMomentaryChange == 5 && NSButtonTypeOnOff == 6 && NSButtonTypeMomentaryPushIn == 7
	&& NSButtonTypeAccelerator == 8 && NSButtonTypeMultiLevelAccelerator == 9, "NSButtonType values moved");
_Static_assert(NSDatePickerStyleTextFieldAndStepper == 0 && NSDatePickerStyleClockAndCalendar == 1 && NSDatePickerStyleTextField == 2, "NSDatePickerStyle values moved");
_Static_assert(NSDatePickerModeSingle == 0 && NSDatePickerModeRange == 1, "NSDatePickerMode values moved");
_Static_assert(NSDatePickerElementFlagHourMinute == 0x000c && NSDatePickerElementFlagHourMinuteSecond == 0x000e && NSDatePickerElementFlagTimeZone == 0x0010
	&& NSDatePickerElementFlagYearMonth == 0x00c0 && NSDatePickerElementFlagYearMonthDay == 0x00e0 && NSDatePickerElementFlagEra == 0x0100, "NSDatePickerElementFlags values moved");
_Static_assert(NSProgressIndicatorStyleBar == 0 && NSProgressIndicatorStyleSpinning == 1, "NSProgressIndicatorStyle values moved");
_Static_assert(NSImageScaleProportionallyDown == 0 && NSImageScaleAxesIndependently == 1 && NSImageScaleNone == 2 && NSImageScaleProportionallyUpOrDown == 3, "NSImageScaling values moved");
_Static_assert(NSBoxPrimary == 0 && NSBoxSeparator == 2 && NSBoxCustom == 4, "NSBoxType values moved");

void appkit_register_NSControls(int module_number)
{
	register_NSControls_symbols(module_number);

	appkit_ce_NSTextAlignment = register_class_NSTextAlignment();
	appkit_ce_NSLineBreakMode = register_class_NSLineBreakMode();
	appkit_ce_NSButtonType = register_class_NSButtonType();
	appkit_ce_NSDatePickerStyle = register_class_NSDatePickerStyle();
	appkit_ce_NSDatePickerMode = register_class_NSDatePickerMode();
	appkit_ce_NSProgressIndicatorStyle = register_class_NSProgressIndicatorStyle();
	appkit_ce_NSImageScaling = register_class_NSImageScaling();
	appkit_ce_NSBoxType = register_class_NSBoxType();

	APPKIT_MAP(NSControl, appkit_ce_NSView);
	APPKIT_MAP(NSTextField, appkit_ce_NSControl);
	APPKIT_MAP(NSSecureTextField, appkit_ce_NSTextField);
	APPKIT_MAP(NSButton, appkit_ce_NSControl);
	APPKIT_MAP(NSSwitch, appkit_ce_NSControl);
	APPKIT_MAP(NSSlider, appkit_ce_NSControl);
	APPKIT_MAP(NSPopUpButton, appkit_ce_NSControl);
	APPKIT_MAP(NSTimeZone, appkit_ce_NSObject);
	APPKIT_MAP(NSDatePicker, appkit_ce_NSControl);
	APPKIT_MAP(NSProgressIndicator, appkit_ce_NSView);
	APPKIT_MAP(NSImage, appkit_ce_NSObject);
	APPKIT_MAP(NSImageView, appkit_ce_NSControl);
	APPKIT_MAP(NSBox, appkit_ce_NSView);
	APPKIT_MAP(NSScrollView, appkit_ce_NSView);
	APPKIT_MAP(NSTextView, appkit_ce_NSView);
	APPKIT_MAP(NSTextContainer, appkit_ce_NSObject);
	APPKIT_MAP(NSLayoutManager, appkit_ce_NSObject);
}

/* NSControl */
BOOL_GET(NSControl, NSControl, isEnabled, isEnabled)
BOOL_SET(NSControl, NSControl, setEnabled, setEnabled)
OBJ_GET(NSControl, NSControl, target, target)
OBJ_SET_OR_NULL(NSControl, NSControl, setTarget, setTarget, appkit_ce_NSObject, id)
METHOD(NSControl, action, PARSE_NONE, SEL action = [SELF(NSControl) action]; if (action == NULL) { RETURN_NULL(); } RETURN_STRING(sel_getName(action));)
METHOD(NSControl, setAction, PARSE_STR_OR_NULL, [SELF(NSControl) setAction:SELECTOR_OR_NULL(v)];)
STR_GET(NSControl, NSControl, stringValue, stringValue)
STR_SET(NSControl, NSControl, setStringValue, setStringValue)
DOUBLE_GET(NSControl, NSControl, doubleValue, doubleValue)
DOUBLE_SET(NSControl, NSControl, setDoubleValue, setDoubleValue)
LONG_GET(NSControl, NSControl, integerValue, integerValue)
LONG_SET(NSControl, NSControl, setIntegerValue, setIntegerValue, NSInteger)
OBJ_GET(NSControl, NSControl, font, font)
OBJ_SET_OR_NULL(NSControl, NSControl, setFont, setFont, appkit_ce_NSFont, NSFont *)
ENUM_GET(NSControl, NSControl, alignment, alignment, appkit_ce_NSTextAlignment, false)
ENUM_SET(NSControl, NSControl, setAlignment, setAlignment, appkit_ce_NSTextAlignment, NSTextAlignment)
VOID_METHOD(NSControl, NSControl, sizeToFit, sizeToFit)
SENDER_METHOD(NSControl, NSControl, performClick, performClick)
ZEND_METHOD(NSControl, sendActionTo)
{
	zend_string *action = NULL;
	zend_object *target = NULL;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR_OR_NULL(action)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(target, appkit_ce_NSObject)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		RETURN_BOOL([SELF(NSControl) sendAction:SELECTOR_OR_NULL(action) to:OPTIONAL_ID(target)]);
	APPKIT_END
}

/* NSTextField */
METHOD(NSTextField, labelWithString, PARSE_STR, appkit_box_objc(return_value, [CALLED labelWithString:appkit_nsstring(v)]);)
METHOD(NSTextField, textFieldWithString, PARSE_STR, appkit_box_objc(return_value, [CALLED textFieldWithString:appkit_nsstring(v)]);)
STR_GET_OR_NULL(NSTextField, NSTextField, placeholderString, placeholderString)
STR_SET_OR_NULL(NSTextField, NSTextField, setPlaceholderString, setPlaceholderString)
BOOL_GET(NSTextField, NSTextField, isEditable, isEditable)
BOOL_SET(NSTextField, NSTextField, setEditable, setEditable)
BOOL_GET(NSTextField, NSTextField, isBezeled, isBezeled)
BOOL_SET(NSTextField, NSTextField, setBezeled, setBezeled)
BOOL_GET(NSTextField, NSTextField, drawsBackground, drawsBackground)
BOOL_SET(NSTextField, NSTextField, setDrawsBackground, setDrawsBackground)
OBJ_GET(NSTextField, NSTextField, textColor, textColor)
OBJ_SET_OR_NULL(NSTextField, NSTextField, setTextColor, setTextColor, appkit_ce_NSColor, NSColor *)
OBJ_GET(NSTextField, NSTextField, backgroundColor, backgroundColor)
OBJ_SET_OR_NULL(NSTextField, NSTextField, setBackgroundColor, setBackgroundColor, appkit_ce_NSColor, NSColor *)
ENUM_GET(NSTextField, NSTextField, lineBreakMode, lineBreakMode, appkit_ce_NSLineBreakMode, false)
ENUM_SET(NSTextField, NSTextField, setLineBreakMode, setLineBreakMode, appkit_ce_NSLineBreakMode, NSLineBreakMode)
LONG_GET(NSTextField, NSTextField, maximumNumberOfLines, maximumNumberOfLines)
LONG_SET(NSTextField, NSTextField, setMaximumNumberOfLines, setMaximumNumberOfLines, NSInteger)
DOUBLE_GET(NSTextField, NSTextField, preferredMaxLayoutWidth, preferredMaxLayoutWidth)
DOUBLE_SET(NSTextField, NSTextField, setPreferredMaxLayoutWidth, setPreferredMaxLayoutWidth)
OBJ_GET(NSTextField, NSTextField, delegate, delegate)
OBJ_SET_OR_NULL(NSTextField, NSTextField, setDelegate, setDelegate, appkit_ce_NSObject, id<NSTextFieldDelegate>)

/* NSButton */
TITLE_TARGET_ACTION(NSButton, NSButton, buttonWithTitleTargetAction, buttonWithTitle)
TITLE_TARGET_ACTION(NSButton, NSButton, checkboxWithTitleTargetAction, checkboxWithTitle)
ENUM_SET(NSButton, NSButton, setButtonType, setButtonType, appkit_ce_NSButtonType, NSButtonType)
STR_GET(NSButton, NSButton, title, title)
STR_SET(NSButton, NSButton, setTitle, setTitle)
ENUM_GET(NSButton, NSButton, state, state, appkit_ce_NSControlStateValue, true)
ENUM_SET(NSButton, NSButton, setState, setState, appkit_ce_NSControlStateValue, NSControlStateValue)
OBJ_GET(NSButton, NSButton, contentTintColor, contentTintColor)
OBJ_SET_OR_NULL(NSButton, NSButton, setContentTintColor, setContentTintColor, appkit_ce_NSColor, NSColor *)

/* NSSwitch */
ENUM_GET(NSSwitch, NSSwitch, state, state, appkit_ce_NSControlStateValue, true)
ENUM_SET(NSSwitch, NSSwitch, setState, setState, appkit_ce_NSControlStateValue, NSControlStateValue)

/* NSSlider */
ZEND_METHOD(NSSlider, sliderWithValueMinValueMaxValueTargetAction)
{
	double value, min, max;
	zend_object *target = NULL;
	zend_string *action = NULL;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_DOUBLE(value)
		Z_PARAM_DOUBLE(min)
		Z_PARAM_DOUBLE(max)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(target, appkit_ce_NSObject)
		Z_PARAM_STR_OR_NULL(action)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [CALLED sliderWithValue:value minValue:min maxValue:max target:OPTIONAL_ID(target) action:SELECTOR_OR_NULL(action)]);
	APPKIT_END
}
DOUBLE_GET(NSSlider, NSSlider, minValue, minValue)
DOUBLE_SET(NSSlider, NSSlider, setMinValue, setMinValue)
DOUBLE_GET(NSSlider, NSSlider, maxValue, maxValue)
DOUBLE_SET(NSSlider, NSSlider, setMaxValue, setMaxValue)
BOOL_GET(NSSlider, NSSlider, isContinuous, isContinuous)
BOOL_SET(NSSlider, NSSlider, setContinuous, setContinuous)

/* NSPopUpButton */
ZEND_METHOD(NSPopUpButton, initWithFramePullsDown)
{
	zend_object *frame;
	bool pulls_down;
	NSRect rect;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(frame, appkit_ce_NSRect)
		Z_PARAM_BOOL(pulls_down)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();
	if (!appkit_rect_from(frame, 1, &rect)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		NSPopUpButton *button = [[CALLED alloc] initWithFrame:rect pullsDown:pulls_down];
		appkit_box_objc(return_value, button);
		[button release];
	APPKIT_END
}
STR_SET(NSPopUpButton, NSPopUpButton, addItemWithTitle, addItemWithTitle)
ZEND_METHOD(NSPopUpButton, addItemsWithTitles)
{
	HashTable *ht;
	zval *entry;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY_HT(ht)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		NSMutableArray *titles = [NSMutableArray arrayWithCapacity:zend_hash_num_elements(ht)];
		ZEND_HASH_FOREACH_VAL(ht, entry) {
			ZVAL_DEREF(entry);
			if (Z_TYPE_P(entry) != IS_STRING) {
				zend_argument_type_error(1, "must contain only strings, %s given", zend_zval_value_name(entry));
				RETURN_THROWS();
			}
			[titles addObject:appkit_nsstring(Z_STR_P(entry))];
		} ZEND_HASH_FOREACH_END();
		[SELF(NSPopUpButton) addItemsWithTitles:titles];
	APPKIT_END
}
VOID_METHOD(NSPopUpButton, NSPopUpButton, removeAllItems, removeAllItems)
LONG_GET(NSPopUpButton, NSPopUpButton, numberOfItems, numberOfItems)
LONG_GET(NSPopUpButton, NSPopUpButton, indexOfSelectedItem, indexOfSelectedItem)
LONG_SET(NSPopUpButton, NSPopUpButton, selectItemAtIndex, selectItemAtIndex, NSInteger)
STR_GET_OR_NULL(NSPopUpButton, NSPopUpButton, titleOfSelectedItem, titleOfSelectedItem)
METHOD(NSPopUpButton, itemTitles, PARSE_NONE,
	array_init(return_value);
	for (NSString *title in [SELF(NSPopUpButton) itemTitles]) {
		add_next_index_str(return_value, appkit_zend_string((CFStringRef) title));
	}
)

/* NSTimeZone */
METHOD(NSTimeZone, timeZoneWithName, PARSE_STR, appkit_box_objc(return_value, [NSTimeZone timeZoneWithName:appkit_nsstring(v)]);)
STR_GET(NSTimeZone, NSTimeZone, name, name)

/* NSDatePicker */
OBJ_GET(NSDatePicker, NSDatePicker, dateValue, dateValue)
OBJ_SET(NSDatePicker, NSDatePicker, setDateValue, setDateValue, appkit_ce_NSDate, NSDate *)
OBJ_GET(NSDatePicker, NSDatePicker, timeZone, timeZone)
OBJ_SET_OR_NULL(NSDatePicker, NSDatePicker, setTimeZone, setTimeZone, appkit_ce_NSTimeZone, NSTimeZone *)
ENUM_SET(NSDatePicker, NSDatePicker, setDatePickerStyle, setDatePickerStyle, appkit_ce_NSDatePickerStyle, NSDatePickerStyle)
LONG_SET(NSDatePicker, NSDatePicker, setDatePickerElements, setDatePickerElements, NSDatePickerElementFlags)
ENUM_SET(NSDatePicker, NSDatePicker, setDatePickerMode, setDatePickerMode, appkit_ce_NSDatePickerMode, NSDatePickerMode)

/* NSProgressIndicator */
ENUM_SET(NSProgressIndicator, NSProgressIndicator, setStyle, setStyle, appkit_ce_NSProgressIndicatorStyle, NSProgressIndicatorStyle)
DOUBLE_GET(NSProgressIndicator, NSProgressIndicator, minValue, minValue)
DOUBLE_SET(NSProgressIndicator, NSProgressIndicator, setMinValue, setMinValue)
DOUBLE_GET(NSProgressIndicator, NSProgressIndicator, maxValue, maxValue)
DOUBLE_SET(NSProgressIndicator, NSProgressIndicator, setMaxValue, setMaxValue)
DOUBLE_GET(NSProgressIndicator, NSProgressIndicator, doubleValue, doubleValue)
DOUBLE_SET(NSProgressIndicator, NSProgressIndicator, setDoubleValue, setDoubleValue)
BOOL_GET(NSProgressIndicator, NSProgressIndicator, isIndeterminate, isIndeterminate)
BOOL_SET(NSProgressIndicator, NSProgressIndicator, setIndeterminate, setIndeterminate)
SENDER_METHOD(NSProgressIndicator, NSProgressIndicator, startAnimation, startAnimation)
SENDER_METHOD(NSProgressIndicator, NSProgressIndicator, stopAnimation, stopAnimation)
BOOL_SET(NSProgressIndicator, NSProgressIndicator, setDisplayedWhenStopped, setDisplayedWhenStopped)

/* NSImage */
METHOD(NSImage, initWithContentsOfFile, PARSE_STR,
	NSImage *image = [[CALLED alloc] initWithContentsOfFile:appkit_nsstring(v)];
	appkit_box_objc(return_value, image);
	[image release];
)
ZEND_METHOD(NSImage, initWithCGImageSize)
{
	zend_object *image, *size_obj;
	NSSize size;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(image, appkit_ce_CGImage)
		Z_PARAM_OBJ_OF_CLASS(size_obj, appkit_ce_NSSize)
	ZEND_PARSE_PARAMETERS_END();
	if (!appkit_size_from(size_obj, 2, &size)) {
		RETURN_THROWS();
	}
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		NSImage *made = [[CALLED alloc] initWithCGImage:(CGImageRef) APPKIT_CF(image) size:size];
		appkit_box_objc(return_value, made);
		[made release];
	APPKIT_END
}
SIZE_GET(NSImage, NSImage, size, size)

/* NSImageView */
METHOD(NSImageView, imageViewWithImage, PARSE_OBJ(appkit_ce_NSImage), appkit_box_objc(return_value, [CALLED imageViewWithImage:(NSImage *) APPKIT_ID(v)]);)
OBJ_GET(NSImageView, NSImageView, image, image)
OBJ_SET_OR_NULL(NSImageView, NSImageView, setImage, setImage, appkit_ce_NSImage, NSImage *)
ENUM_GET(NSImageView, NSImageView, imageScaling, imageScaling, appkit_ce_NSImageScaling, false)
ENUM_SET(NSImageView, NSImageView, setImageScaling, setImageScaling, appkit_ce_NSImageScaling, NSImageScaling)

/* NSBox */
ENUM_GET(NSBox, NSBox, boxType, boxType, appkit_ce_NSBoxType, false)
ENUM_SET(NSBox, NSBox, setBoxType, setBoxType, appkit_ce_NSBoxType, NSBoxType)

/* NSScrollView */
OBJ_GET(NSScrollView, NSScrollView, contentView, contentView)
OBJ_GET(NSScrollView, NSScrollView, documentView, documentView)
OBJ_SET_OR_NULL(NSScrollView, NSScrollView, setDocumentView, setDocumentView, appkit_ce_NSView, NSView *)
BOOL_GET(NSScrollView, NSScrollView, hasVerticalScroller, hasVerticalScroller)
BOOL_SET(NSScrollView, NSScrollView, setHasVerticalScroller, setHasVerticalScroller)
BOOL_GET(NSScrollView, NSScrollView, hasHorizontalScroller, hasHorizontalScroller)
BOOL_SET(NSScrollView, NSScrollView, setHasHorizontalScroller, setHasHorizontalScroller)
BOOL_GET(NSScrollView, NSScrollView, drawsBackground, drawsBackground)
BOOL_SET(NSScrollView, NSScrollView, setDrawsBackground, setDrawsBackground)
SIZE_GET(NSScrollView, NSScrollView, contentSize, contentSize)

/* NSTextView */
METHOD(NSTextView, scrollableTextView, PARSE_NONE, appkit_box_objc(return_value, [NSTextView scrollableTextView]);)
STR_GET(NSTextView, NSTextView, string, string)
STR_SET(NSTextView, NSTextView, setString, setString)
BOOL_GET(NSTextView, NSTextView, isEditable, isEditable)
BOOL_SET(NSTextView, NSTextView, setEditable, setEditable)
OBJ_GET(NSTextView, NSTextView, font, font)
OBJ_SET_OR_NULL(NSTextView, NSTextView, setFont, setFont, appkit_ce_NSFont, NSFont *)
OBJ_GET(NSTextView, NSTextView, textColor, textColor)
OBJ_SET_OR_NULL(NSTextView, NSTextView, setTextColor, setTextColor, appkit_ce_NSColor, NSColor *)
OBJ_GET(NSTextView, NSTextView, backgroundColor, backgroundColor)
OBJ_SET(NSTextView, NSTextView, setBackgroundColor, setBackgroundColor, appkit_ce_NSColor, NSColor *)
BOOL_GET(NSTextView, NSTextView, drawsBackground, drawsBackground)
BOOL_SET(NSTextView, NSTextView, setDrawsBackground, setDrawsBackground)
OBJ_GET(NSTextView, NSTextView, layoutManager, layoutManager)
OBJ_GET(NSTextView, NSTextView, textContainer, textContainer)
SIZE_GET(NSTextView, NSTextView, textContainerInset, textContainerInset)
OBJ_GET(NSTextView, NSTextView, delegate, delegate)

/* NSLayoutManager */
METHOD(NSLayoutManager, ensureLayoutForTextContainer, PARSE_OBJ(appkit_ce_NSTextContainer), [SELF(NSLayoutManager) ensureLayoutForTextContainer:(NSTextContainer *) APPKIT_ID(v)];)
METHOD(NSLayoutManager, usedRectForTextContainer, PARSE_OBJ(appkit_ce_NSTextContainer), appkit_return_rect(return_value, [SELF(NSLayoutManager) usedRectForTextContainer:(NSTextContainer *) APPKIT_ID(v)]);)
OBJ_SET_OR_NULL(NSTextView, NSTextView, setDelegate, setDelegate, appkit_ce_NSObject, id<NSTextViewDelegate>)
