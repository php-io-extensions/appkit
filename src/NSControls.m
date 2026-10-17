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
_Static_assert(NSProgressIndicatorStyleBar == 0 && NSProgressIndicatorStyleSpinning == 1, "NSProgressIndicatorStyle values moved");
_Static_assert(NSImageScaleProportionallyDown == 0 && NSImageScaleAxesIndependently == 1 && NSImageScaleNone == 2 && NSImageScaleProportionallyUpOrDown == 3, "NSImageScaling values moved");
_Static_assert(NSTextBlockAbsoluteValueType == 0 && NSTextBlockPercentageValueType == 1, "NSTextBlockValueType values moved");
_Static_assert(NSTextBlockWidth == 0 && NSTextBlockMinimumWidth == 1 && NSTextBlockMaximumWidth == 2
	&& NSTextBlockHeight == 4 && NSTextBlockMinimumHeight == 5 && NSTextBlockMaximumHeight == 6, "NSTextBlockDimension values moved");
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
	appkit_ce_NSTextBlockValueType = register_class_NSTextBlockValueType();
	appkit_ce_NSTextBlockDimension = register_class_NSTextBlockDimension();

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
	APPKIT_MAP(NSAttributedString, appkit_ce_NSObject);
	APPKIT_MAP(NSMutableAttributedString, appkit_ce_NSAttributedString);
	APPKIT_MAP(NSTextStorage, appkit_ce_NSMutableAttributedString);
	APPKIT_MAP(NSParagraphStyle, appkit_ce_NSObject);
	APPKIT_MAP(NSMutableParagraphStyle, appkit_ce_NSParagraphStyle);
	APPKIT_MAP(NSTextBlock, appkit_ce_NSObject);
	APPKIT_MAP(NSWorkspace, appkit_ce_NSObject);
	APPKIT_MAP(NSImageView, appkit_ce_NSControl);
	APPKIT_MAP(NSBox, appkit_ce_NSView);
	APPKIT_MAP(NSScrollView, appkit_ce_NSView);
	APPKIT_MAP(NSClipView, appkit_ce_NSView);
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
METHOD(NSTextField, labelWithAttributedString, PARSE_OBJ(appkit_ce_NSAttributedString), appkit_box_objc(return_value, [CALLED labelWithAttributedString:(NSAttributedString *) APPKIT_ID(v)]);)
OBJ_GET(NSTextField, NSTextField, attributedStringValue, attributedStringValue)
OBJ_SET(NSTextField, NSTextField, setAttributedStringValue, setAttributedStringValue, appkit_ce_NSAttributedString, NSAttributedString *)
BOOL_GET(NSTextField, NSTextField, allowsEditingTextAttributes, allowsEditingTextAttributes)
BOOL_SET(NSTextField, NSTextField, setAllowsEditingTextAttributes, setAllowsEditingTextAttributes)
BOOL_GET(NSTextField, NSTextField, isSelectable, isSelectable)
BOOL_SET(NSTextField, NSTextField, setSelectable, setSelectable)

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
ANY_METHOD(NSTimeZone, timeZoneWithName, PARSE_STR, appkit_box_objc(return_value, [NSTimeZone timeZoneWithName:appkit_nsstring(v)]);)
ANY_STR_GET(NSTimeZone, NSTimeZone, name, name)

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
ANY_METHOD(NSImage, initWithContentsOfFile, PARSE_STR,
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

	APPKIT_BEGIN
		NSImage *made = [[CALLED alloc] initWithCGImage:(CGImageRef) APPKIT_CF(image) size:size];
		appkit_box_objc(return_value, made);
		[made release];
	APPKIT_END
}
ANY_SIZE_GET(NSImage, NSImage, size, size)

/* NSAttributedString */
ZEND_METHOD(NSAttributedString, initWithStringAttributes)
{
	zend_string *string;
	HashTable *attributes;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(string)
		Z_PARAM_ARRAY_HT(attributes)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		NSDictionary *dictionary = appkit_nsdictionary(attributes, 2);
		if (dictionary == nil) {
			RETURN_THROWS();
		}
		zend_string *key;
		zval *entry;
		ZEND_HASH_FOREACH_STR_KEY_VAL(attributes, key, entry) {
			NSString *name = appkit_nsstring(key);
			if (!appkit_attribute_value_fits(name, dictionary[name], 2, zend_zval_value_name(entry))) {
				RETURN_THROWS();
			}
		} ZEND_HASH_FOREACH_END();
		NSAttributedString *attributed = [[CALLED alloc] initWithString:appkit_nsstring(string) attributes:dictionary];
		appkit_box_objc(return_value, attributed);
		[attributed release];
	APPKIT_END
}

ANY_STR_GET(NSAttributedString, NSAttributedString, string, string)
ANY_LONG_GET(NSAttributedString, NSAttributedString, length, length)

ZEND_METHOD(NSAttributedString, attributeAtIndexEffectiveRange)
{
	zend_string *name;
	zend_long index;
	NSRange effective;
	zval value, range;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();

	/* The index converts to NSUInteger as C converts it; AppKit raises NSRangeException past the end. */
	APPKIT_BEGIN
		appkit_zval_from_id(&value, [SELF(NSAttributedString) attribute:appkit_nsstring(name) atIndex:(NSUInteger) index effectiveRange:&effective]);
		appkit_return_range(&range, effective);
		array_init_size(return_value, 2);
		add_next_index_zval(return_value, &value);
		add_next_index_zval(return_value, &range);
	APPKIT_END
}

/* NSMutableAttributedString */
ZEND_METHOD(NSMutableAttributedString, addAttributeValueRange)
{
	zend_string *name;
	zend_object *value, *range_obj;
	NSRange range;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(name)
		Z_PARAM_OBJ_OF_CLASS(value, appkit_ce_NSObject)
		Z_PARAM_OBJ_OF_CLASS(range_obj, appkit_ce_NSRange)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		if (!appkit_attribute_value_fits(appkit_nsstring(name), APPKIT_ID(value), 2, ZSTR_VAL(value->ce->name))) {
			RETURN_THROWS();
		}
		if (!appkit_range_from(range_obj, 3, &range)) {
			RETURN_THROWS();
		}
		[SELF(NSMutableAttributedString) addAttribute:appkit_nsstring(name) value:APPKIT_ID(value) range:range];
	APPKIT_END
}

ZEND_METHOD(NSMutableAttributedString, removeAttributeRange)
{
	zend_string *name;
	zend_object *range_obj;
	NSRange range;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(name)
		Z_PARAM_OBJ_OF_CLASS(range_obj, appkit_ce_NSRange)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		if (!appkit_range_from(range_obj, 2, &range)) {
			RETURN_THROWS();
		}
		[SELF(NSMutableAttributedString) removeAttribute:appkit_nsstring(name) range:range];
	APPKIT_END
}

ANY_METHOD(NSMutableAttributedString, setAttributedString, PARSE_OBJ(appkit_ce_NSAttributedString),
	[SELF(NSMutableAttributedString) setAttributedString:(NSAttributedString *) APPKIT_ID(v)];)
ANY_VOID_METHOD(NSMutableAttributedString, NSMutableAttributedString, beginEditing, beginEditing)
ANY_VOID_METHOD(NSMutableAttributedString, NSMutableAttributedString, endEditing, endEditing)

/* NSTextBlock */
ANY_METHOD(NSTextBlock, init, PARSE_NONE,
	NSTextBlock *block = [[CALLED alloc] init];
	appkit_box_objc(return_value, block);
	[block release];
)
ANY_OBJ_GET(NSTextBlock, NSTextBlock, backgroundColor, backgroundColor)
ANY_OBJ_SET_OR_NULL(NSTextBlock, NSTextBlock, setBackgroundColor, setBackgroundColor, appkit_ce_NSColor, NSColor *)

ZEND_METHOD(NSTextBlock, setValueTypeForDimension)
{
	double value;
	zend_object *type, *dimension;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_DOUBLE(value)
		Z_PARAM_OBJ_OF_CLASS(type, appkit_ce_NSTextBlockValueType)
		Z_PARAM_OBJ_OF_CLASS(dimension, appkit_ce_NSTextBlockDimension)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		[SELF(NSTextBlock) setValue:value type:(NSTextBlockValueType) appkit_enum_value(type, 0) forDimension:(NSTextBlockDimension) appkit_enum_value(dimension, 0)];
	APPKIT_END
}

ANY_METHOD(NSTextBlock, valueForDimension, PARSE_OBJ(appkit_ce_NSTextBlockDimension),
	RETURN_DOUBLE([SELF(NSTextBlock) valueForDimension:(NSTextBlockDimension) appkit_enum_value(v, 0)]);)
ANY_METHOD(NSTextBlock, valueTypeForDimension, PARSE_OBJ(appkit_ce_NSTextBlockDimension),
	appkit_return_enum(return_value, appkit_ce_NSTextBlockValueType, (zend_long) [SELF(NSTextBlock) valueTypeForDimension:(NSTextBlockDimension) appkit_enum_value(v, 0)], false);)

/* NSParagraphStyle */
ANY_ENUM_GET(NSParagraphStyle, NSParagraphStyle, alignment, alignment, appkit_ce_NSTextAlignment, false)

ZEND_METHOD(NSParagraphStyle, textBlocks)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		NSArray *blocks = [SELF(NSParagraphStyle) textBlocks];
		array_init_size(return_value, (uint32_t) [blocks count]);
		for (NSTextBlock *block in blocks) {
			zval boxed;
			appkit_box_objc(&boxed, block);
			add_next_index_zval(return_value, &boxed);
		}
	APPKIT_END
}

/* NSMutableParagraphStyle */
ANY_METHOD(NSMutableParagraphStyle, init, PARSE_NONE,
	NSMutableParagraphStyle *style = [[CALLED alloc] init];
	appkit_box_objc(return_value, style);
	[style release];
)
ANY_ENUM_SET(NSMutableParagraphStyle, NSMutableParagraphStyle, setAlignment, setAlignment, appkit_ce_NSTextAlignment, NSTextAlignment)

ZEND_METHOD(NSMutableParagraphStyle, setTextBlocks)
{
	HashTable *blocks;
	zval *entry;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY_HT(blocks)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		NSMutableArray *list = [NSMutableArray arrayWithCapacity:zend_hash_num_elements(blocks)];
		ZEND_HASH_FOREACH_VAL(blocks, entry) {
			ZVAL_DEREF(entry);
			if (Z_TYPE_P(entry) != IS_OBJECT || !instanceof_function(Z_OBJCE_P(entry), appkit_ce_NSTextBlock)) {
				zend_argument_type_error(1, "must contain only NSTextBlock, %s given", zend_zval_value_name(entry));
				RETURN_THROWS();
			}
			[list addObject:APPKIT_ID(Z_OBJ_P(entry))];
		} ZEND_HASH_FOREACH_END();
		[SELF(NSMutableParagraphStyle) setTextBlocks:list];
	APPKIT_END
}

/* NSWorkspace */
ANY_METHOD(NSWorkspace, sharedWorkspace, PARSE_NONE, appkit_box_objc(return_value, [NSWorkspace sharedWorkspace]);)
ANY_METHOD(NSWorkspace, openURL, PARSE_OBJ(appkit_ce_NSURL), RETURN_BOOL([SELF(NSWorkspace) openURL:(NSURL *) APPKIT_ID(v)]);)

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
METHOD(NSScrollView, reflectScrolledClipView, PARSE_OBJ(appkit_ce_NSClipView), [SELF(NSScrollView) reflectScrolledClipView:(NSClipView *) APPKIT_ID(v)];)
METHOD(NSScrollView, documentVisibleRect, PARSE_NONE, appkit_return_rect(return_value, [SELF(NSScrollView) documentVisibleRect]);)

/* NSClipView */
ZEND_METHOD(NSClipView, scrollToPoint)
{
	zend_object *point_obj;
	NSPoint point;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(point_obj, appkit_ce_NSPoint)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();
	if (!appkit_point_from(point_obj, 1, &point)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		[SELF(NSClipView) scrollToPoint:point];
	APPKIT_END
}

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
OBJ_GET(NSTextView, NSTextView, textStorage, textStorage)
METHOD(NSTextView, selectedRange, PARSE_NONE, appkit_return_range(return_value, [SELF(NSTextView) selectedRange]);)

#define APPKIT_TEXT_RANGE_METHOD(name, sel) \
ZEND_METHOD(NSTextView, name) \
{ \
	zend_object *range_obj; \
	NSRange range; \
	ZEND_PARSE_PARAMETERS_START(1, 1) \
		Z_PARAM_OBJ_OF_CLASS(range_obj, appkit_ce_NSRange) \
	ZEND_PARSE_PARAMETERS_END(); \
	APPKIT_REQUIRE_MAIN_THREAD(); \
	APPKIT_BEGIN \
		if (!appkit_range_from(range_obj, 1, &range)) { \
			RETURN_THROWS(); \
		} \
		[SELF(NSTextView) sel:range]; \
	APPKIT_END \
}

APPKIT_TEXT_RANGE_METHOD(setSelectedRange, setSelectedRange)
APPKIT_TEXT_RANGE_METHOD(scrollRangeToVisible, scrollRangeToVisible)
BOOL_GET(NSTextView, NSTextView, isHorizontallyResizable, isHorizontallyResizable)
BOOL_SET(NSTextView, NSTextView, setHorizontallyResizable, setHorizontallyResizable)
SIZE_GET(NSTextView, NSTextView, maxSize, maxSize)

ZEND_METHOD(NSTextView, setMaxSize)
{
	zend_object *size_obj;
	NSSize size;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(size_obj, appkit_ce_NSSize)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();
	if (!appkit_size_from(size_obj, 1, &size)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		[SELF(NSTextView) setMaxSize:size];
	APPKIT_END
}

/* NSTextContainer */
ANY_BOOL_GET(NSTextContainer, NSTextContainer, widthTracksTextView, widthTracksTextView)
ANY_BOOL_SET(NSTextContainer, NSTextContainer, setWidthTracksTextView, setWidthTracksTextView)
ANY_SIZE_GET(NSTextContainer, NSTextContainer, size, size)

ZEND_METHOD(NSTextContainer, setSize)
{
	zend_object *size_obj;
	NSSize size;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(size_obj, appkit_ce_NSSize)
	ZEND_PARSE_PARAMETERS_END();
	if (!appkit_size_from(size_obj, 1, &size)) {
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		[SELF(NSTextContainer) setSize:size];
	APPKIT_END
}

/* NSLayoutManager */
ANY_METHOD(NSLayoutManager, ensureLayoutForTextContainer, PARSE_OBJ(appkit_ce_NSTextContainer), [SELF(NSLayoutManager) ensureLayoutForTextContainer:(NSTextContainer *) APPKIT_ID(v)];)
ANY_METHOD(NSLayoutManager, usedRectForTextContainer, PARSE_OBJ(appkit_ce_NSTextContainer), appkit_return_rect(return_value, [SELF(NSLayoutManager) usedRectForTextContainer:(NSTextContainer *) APPKIT_ID(v)]);)

ANY_BOOL_GET(NSLayoutManager, NSLayoutManager, allowsNonContiguousLayout, allowsNonContiguousLayout)
ANY_BOOL_SET(NSLayoutManager, NSLayoutManager, setAllowsNonContiguousLayout, setAllowsNonContiguousLayout)

ZEND_METHOD(NSLayoutManager, glyphRangeForCharacterRangeActualCharacterRange)
{
	zend_object *range_obj;
	NSRange range, actual;
	zval glyphs, actual_zv;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(range_obj, appkit_ce_NSRange)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		if (!appkit_range_from(range_obj, 1, &range)) {
			RETURN_THROWS();
		}
		appkit_return_range(&glyphs, [SELF(NSLayoutManager) glyphRangeForCharacterRange:range actualCharacterRange:&actual]);
		appkit_return_range(&actual_zv, actual);
		array_init_size(return_value, 2);
		add_next_index_zval(return_value, &glyphs);
		add_next_index_zval(return_value, &actual_zv);
	APPKIT_END
}

ZEND_METHOD(NSLayoutManager, boundingRectForGlyphRangeInTextContainer)
{
	zend_object *range_obj, *container;
	NSRange range;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(range_obj, appkit_ce_NSRange)
		Z_PARAM_OBJ_OF_CLASS(container, appkit_ce_NSTextContainer)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		if (!appkit_range_from(range_obj, 1, &range)) {
			RETURN_THROWS();
		}
		appkit_return_rect(return_value, [SELF(NSLayoutManager) boundingRectForGlyphRange:range inTextContainer:(NSTextContainer *) APPKIT_ID(container)]);
	APPKIT_END
}
OBJ_SET_OR_NULL(NSTextView, NSTextView, setDelegate, setDelegate, appkit_ce_NSObject, id<NSTextViewDelegate>)
