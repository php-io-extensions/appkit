<?php

/** @generate-class-entries */

/**
 * NSTextAlignment case values depend on the ABI (TARGET_ABI_USES_IOS_VALUES swaps
 * Right and Center on arm64), so they come from the SDK, never from literals.
 *
 * @var int
 * @cvalue NSTextAlignmentLeft
 */
const NSTextAlignmentLeft = UNKNOWN;

/**
 * @var int
 * @cvalue NSTextAlignmentRight
 */
const NSTextAlignmentRight = UNKNOWN;

/**
 * @var int
 * @cvalue NSTextAlignmentCenter
 */
const NSTextAlignmentCenter = UNKNOWN;

/**
 * @var int
 * @cvalue NSTextAlignmentJustified
 */
const NSTextAlignmentJustified = UNKNOWN;

/**
 * @var int
 * @cvalue NSTextAlignmentNatural
 */
const NSTextAlignmentNatural = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) NSLinkAttributeName)
 */
const NSLinkAttributeName = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) NSFontAttributeName)
 */
const NSFontAttributeName = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) NSParagraphStyleAttributeName)
 */
const NSParagraphStyleAttributeName = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) NSForegroundColorAttributeName)
 */
const NSForegroundColorAttributeName = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) NSBackgroundColorAttributeName)
 */
const NSBackgroundColorAttributeName = UNKNOWN;

enum NSTextBlockValueType: int
{
    case ABSOLUTE_VALUE_TYPE = 0;
    case PERCENTAGE_VALUE_TYPE = 1;
}

enum NSTextBlockDimension: int
{
    case WIDTH = 0;
    case MINIMUM_WIDTH = 1;
    case MAXIMUM_WIDTH = 2;
    case HEIGHT = 4;
    case MINIMUM_HEIGHT = 5;
    case MAXIMUM_HEIGHT = 6;
}

enum NSTextAlignment: int
{
    case LEFT = NSTextAlignmentLeft;
    case RIGHT = NSTextAlignmentRight;
    case CENTER = NSTextAlignmentCenter;
    case JUSTIFIED = NSTextAlignmentJustified;
    case NATURAL = NSTextAlignmentNatural;
}

enum NSLineBreakMode: int
{
    case WORD_WRAPPING = 0;
    case CHAR_WRAPPING = 1;
    case CLIPPING = 2;
    case TRUNCATING_HEAD = 3;
    case TRUNCATING_TAIL = 4;
    case TRUNCATING_MIDDLE = 5;
}

/**
 * @not-serializable
 */
class NSControl extends NSView
{
    public function isEnabled(): bool {}

    public function setEnabled(bool $enabled): void {}

    public function target(): ?NSObject {}

    public function setTarget(?NSObject $target): void {}

    public function action(): ?string {}

    /** A selector name such as ObjCTarget::ACTION; null clears it. */
    public function setAction(?string $action): void {}

    public function stringValue(): string {}

    public function setStringValue(string $value): void {}

    public function doubleValue(): float {}

    public function setDoubleValue(float $value): void {}

    public function integerValue(): int {}

    public function setIntegerValue(int $value): void {}

    public function font(): ?NSFont {}

    public function setFont(?NSFont $font): void {}

    public function alignment(): NSTextAlignment {}

    public function setAlignment(NSTextAlignment $alignment): void {}

    public function sizeToFit(): void {}

    public function performClick(?NSObject $sender): void {}

    /** sendAction:to: — false when there is no action or nothing handled it. */
    public function sendActionTo(?string $action, ?NSObject $target): bool {}
}

/**
 * @not-serializable
 */
class NSTextField extends NSControl
{
    public static function labelWithString(string $string): static {}

    public static function labelWithAttributedString(NSAttributedString $attributedStringValue): static {}

    public function attributedStringValue(): NSAttributedString {}

    public function setAttributedStringValue(NSAttributedString $attributedStringValue): void {}

    /** With isSelectable, AppKit draws link attributes as links and opens them on a click. */
    public function allowsEditingTextAttributes(): bool {}

    public function setAllowsEditingTextAttributes(bool $allows): void {}

    public function isSelectable(): bool {}

    public function setSelectable(bool $selectable): void {}

    public static function textFieldWithString(string $string): static {}

    public function placeholderString(): ?string {}

    public function setPlaceholderString(?string $placeholder): void {}

    public function isEditable(): bool {}

    public function setEditable(bool $editable): void {}

    public function isBezeled(): bool {}

    public function setBezeled(bool $bezeled): void {}

    public function drawsBackground(): bool {}

    public function setDrawsBackground(bool $draws): void {}

    public function textColor(): ?NSColor {}

    public function setTextColor(?NSColor $color): void {}

    public function backgroundColor(): ?NSColor {}

    public function setBackgroundColor(?NSColor $color): void {}

    public function lineBreakMode(): NSLineBreakMode {}

    public function setLineBreakMode(NSLineBreakMode $mode): void {}

    public function maximumNumberOfLines(): int {}

    public function setMaximumNumberOfLines(int $lines): void {}

    public function preferredMaxLayoutWidth(): float {}

    public function setPreferredMaxLayoutWidth(float $width): void {}

    public function delegate(): ?NSObject {}

    public function setDelegate(?NSObject $delegate): void {}
}

/**
 * @not-serializable
 */
class NSSecureTextField extends NSTextField
{
}

enum NSButtonType: int
{
    case MOMENTARY_LIGHT = 0;
    case PUSH_ON_PUSH_OFF = 1;
    case TOGGLE = 2;
    case SWITCH = 3;
    case RADIO = 4;
    case MOMENTARY_CHANGE = 5;
    case ON_OFF = 6;
    case MOMENTARY_PUSH_IN = 7;
    case ACCELERATOR = 8;
    case MULTI_LEVEL_ACCELERATOR = 9;
}

/**
 * @not-serializable
 */
class NSButton extends NSControl
{
    public static function buttonWithTitleTargetAction(string $title, ?NSObject $target, ?string $action): static {}

    public static function checkboxWithTitleTargetAction(string $title, ?NSObject $target, ?string $action): static {}

    public function setButtonType(NSButtonType $type): void {}

    public function title(): string {}

    public function setTitle(string $title): void {}

    public function state(): NSControlStateValue|int {}

    public function setState(NSControlStateValue $state): void {}

    public function contentTintColor(): ?NSColor {}

    public function setContentTintColor(?NSColor $color): void {}
}

/**
 * @not-serializable
 */
class NSSwitch extends NSControl
{
    public function state(): NSControlStateValue|int {}

    public function setState(NSControlStateValue $state): void {}
}

/**
 * @not-serializable
 */
class NSSlider extends NSControl
{
    public static function sliderWithValueMinValueMaxValueTargetAction(float $value, float $minValue, float $maxValue, ?NSObject $target, ?string $action): static {}

    public function minValue(): float {}

    public function setMinValue(float $value): void {}

    public function maxValue(): float {}

    public function setMaxValue(float $value): void {}

    public function isContinuous(): bool {}

    public function setContinuous(bool $continuous): void {}
}

/**
 * @not-serializable
 */
class NSPopUpButton extends NSControl
{
    public static function initWithFramePullsDown(NSRect $frame, bool $pullsDown): static {}

    public function addItemWithTitle(string $title): void {}

    /** @param string[] $titles */
    public function addItemsWithTitles(array $titles): void {}

    public function removeAllItems(): void {}

    public function numberOfItems(): int {}

    public function indexOfSelectedItem(): int {}

    public function selectItemAtIndex(int $index): void {}

    public function titleOfSelectedItem(): ?string {}

    /** @return string[] */
    public function itemTitles(): array {}
}

enum NSDatePickerStyle: int
{
    case TEXT_FIELD_AND_STEPPER = 0;
    case CLOCK_AND_CALENDAR = 1;
    case TEXT_FIELD = 2;
}

enum NSDatePickerMode: int
{
    case SINGLE = 0;
    case RANGE = 1;
}

/**
 * @not-serializable
 */
class NSTimeZone extends NSObject
{
    /** An IANA name such as 'Europe/Paris'; null when the system does not know it. */
    public static function timeZoneWithName(string $name): ?NSTimeZone {}

    public function name(): string {}
}

/**
 * @not-serializable
 */
class NSDatePicker extends NSControl
{
    /** @cvalue NSDatePickerElementFlagHourMinute */
    public const int ELEMENT_HOUR_MINUTE = UNKNOWN;
    /** @cvalue NSDatePickerElementFlagHourMinuteSecond */
    public const int ELEMENT_HOUR_MINUTE_SECOND = UNKNOWN;
    /** @cvalue NSDatePickerElementFlagTimeZone */
    public const int ELEMENT_TIME_ZONE = UNKNOWN;
    /** @cvalue NSDatePickerElementFlagYearMonth */
    public const int ELEMENT_YEAR_MONTH = UNKNOWN;
    /** @cvalue NSDatePickerElementFlagYearMonthDay */
    public const int ELEMENT_YEAR_MONTH_DAY = UNKNOWN;
    /** @cvalue NSDatePickerElementFlagEra */
    public const int ELEMENT_ERA = UNKNOWN;

    public function dateValue(): NSDate {}

    public function setDateValue(NSDate $date): void {}

    public function timeZone(): ?NSTimeZone {}

    /** null = the system time zone */
    public function setTimeZone(?NSTimeZone $zone): void {}

    public function setDatePickerStyle(NSDatePickerStyle $style): void {}

    public function setDatePickerElements(int $flags): void {}

    public function setDatePickerMode(NSDatePickerMode $mode): void {}
}

enum NSProgressIndicatorStyle: int
{
    case BAR = 0;
    case SPINNING = 1;
}

/**
 * @not-serializable
 */
class NSProgressIndicator extends NSView
{
    public function setStyle(NSProgressIndicatorStyle $style): void {}

    public function minValue(): float {}

    public function setMinValue(float $value): void {}

    public function maxValue(): float {}

    public function setMaxValue(float $value): void {}

    public function doubleValue(): float {}

    public function setDoubleValue(float $value): void {}

    public function isIndeterminate(): bool {}

    public function setIndeterminate(bool $indeterminate): void {}

    public function startAnimation(?NSObject $sender): void {}

    public function stopAnimation(?NSObject $sender): void {}

    public function setDisplayedWhenStopped(bool $displayed): void {}
}

/**
 * @not-serializable
 */
class NSImage extends NSObject
{
    /** null when the file cannot be read as an image */
    public static function initWithContentsOfFile(string $path): ?static {}

    /** initWithCGImage:size:, $size in points. */
    public static function initWithCGImageSize(CGImage $image, NSSize $size): static {}

    public function size(): NSSize {}
}

/**
 * @not-serializable
 */
class NSAttributedString extends NSObject
{
    /**
     * initWithString:attributes:. Keys are attribute names (NSLinkAttributeName, NSFontAttributeName);
     * values are strings, numbers, booleans or ext objects (an NSURL, an NSFont). A foreground or
     * background colour that is no NSColor is a TypeError: AppKit kills the process drawing it.
     */
    public static function initWithStringAttributes(string $string, array $attributes): static {}

    public function string(): string {}

    public function length(): int {}

    /**
     * attribute:atIndex:effectiveRange:: [the value boxed (a string or number, or null when absent
     * there), the NSRange that value runs over]. The index converts to NSUInteger; one past the
     * string's end (a negative one included) raises AppKitException (NSRangeException).
     *
     * @return array{0: mixed, 1: NSRange}
     */
    public function attributeAtIndexEffectiveRange(string $name, int $index): array {}
}

/**
 * @not-serializable
 */
class NSMutableAttributedString extends NSAttributedString
{
    /**
     * addAttribute:value:range:. A range past the string's end raises AppKitException (NSRangeException). A
     * foreground or background colour that is no NSColor is a TypeError: AppKit kills the process
     * drawing it.
     */
    public function addAttributeValueRange(string $name, NSObject $value, NSRange $range): void {}

    /** removeAttribute:range:. A range past the string's end raises AppKitException (NSRangeException). */
    public function removeAttributeRange(string $name, NSRange $range): void {}

    /** setAttributedString:: the characters and attributes replaced by another string's. */
    public function setAttributedString(NSAttributedString $string): void {}

    public function beginEditing(): void {}

    public function endEditing(): void {}
}

/**
 * A text view's storage (textStorage); its edits are the view's.
 *
 * @not-serializable
 */
class NSTextStorage extends NSMutableAttributedString
{
}

/**
 * A block a paragraph is laid out in (NSParagraphStyle textBlocks); its background fills the
 * block, which spans the container at 100 % width. Drawn by TextKit 1 only.
 *
 * @not-serializable
 */
class NSTextBlock extends NSObject
{
    /** [[NSTextBlock alloc] init] */
    public static function init(): static {}

    public function backgroundColor(): ?NSColor {}

    public function setBackgroundColor(?NSColor $color): void {}

    /** setValue:type:forDimension: */
    public function setValueTypeForDimension(float $value, NSTextBlockValueType $type, NSTextBlockDimension $dimension): void {}

    public function valueForDimension(NSTextBlockDimension $dimension): float {}

    public function valueTypeForDimension(NSTextBlockDimension $dimension): NSTextBlockValueType {}
}

/**
 * @not-serializable
 */
class NSParagraphStyle extends NSObject
{
    public function alignment(): NSTextAlignment {}

    /** The blocks the paragraph is laid out in, outermost first. */
    public function textBlocks(): array {}
}

/**
 * @not-serializable
 */
class NSMutableParagraphStyle extends NSParagraphStyle
{
    /** [[NSMutableParagraphStyle alloc] init]: the default style, to change and set as NSParagraphStyleAttributeName. */
    public static function init(): static {}

    public function setAlignment(NSTextAlignment $alignment): void {}

    /** @param NSTextBlock[] $blocks */
    public function setTextBlocks(array $blocks): void {}
}

/**
 * @not-serializable
 */
class NSWorkspace extends NSObject
{
    public static function sharedWorkspace(): NSWorkspace {}

    /** The URL in its handler (the browser for http and https). */
    public function openURL(NSURL $url): bool {}
}

enum NSImageScaling: int
{
    case PROPORTIONALLY_DOWN = 0;
    case AXES_INDEPENDENTLY = 1;
    case NONE = 2;
    case PROPORTIONALLY_UP_OR_DOWN = 3;
}

/**
 * @not-serializable
 */
class NSImageView extends NSControl
{
    public static function imageViewWithImage(NSImage $image): static {}

    public function image(): ?NSImage {}

    public function setImage(?NSImage $image): void {}

    public function imageScaling(): NSImageScaling {}

    public function setImageScaling(NSImageScaling $scaling): void {}
}

enum NSBoxType: int
{
    case PRIMARY = 0;
    case SEPARATOR = 2;
    case CUSTOM = 4;
}

/**
 * @not-serializable
 */
class NSBox extends NSView
{
    public function boxType(): NSBoxType {}

    public function setBoxType(NSBoxType $type): void {}
}

/**
 * @not-serializable
 */
class NSScrollView extends NSView
{
    /** The clip view showing the document view. */
    public function contentView(): NSClipView {}

    public function documentView(): ?NSView {}

    public function setDocumentView(?NSView $view): void {}

    public function hasVerticalScroller(): bool {}

    public function setHasVerticalScroller(bool $has): void {}

    public function hasHorizontalScroller(): bool {}

    public function setHasHorizontalScroller(bool $has): void {}

    public function drawsBackground(): bool {}

    public function setDrawsBackground(bool $draws): void {}

    public function contentSize(): NSSize {}

    public function reflectScrolledClipView(NSClipView $clipView): void {}

    public function documentVisibleRect(): NSRect {}
}

/**
 * @not-serializable
 */
class NSClipView extends NSView
{
    /** scrollToPoint:: the bounds origin, in the document view's coordinates. */
    public function scrollToPoint(NSPoint $point): void {}
}

/**
 * @not-serializable
 */
class NSTextView extends NSView
{
    /** An NSScrollView whose documentView is a new NSTextView. */
    public static function scrollableTextView(): NSScrollView {}

    public function string(): string {}

    public function setString(string $string): void {}

    public function isEditable(): bool {}

    public function setEditable(bool $editable): void {}

    public function font(): ?NSFont {}

    public function setFont(?NSFont $font): void {}

    public function textColor(): ?NSColor {}

    public function setTextColor(?NSColor $color): void {}

    public function backgroundColor(): NSColor {}

    public function setBackgroundColor(NSColor $color): void {}

    public function drawsBackground(): bool {}

    public function setDrawsBackground(bool $draws): void {}

    public function layoutManager(): ?NSLayoutManager {}

    public function textContainer(): ?NSTextContainer {}

    public function textContainerInset(): NSSize {}

    public function delegate(): ?NSObject {}

    public function setDelegate(?NSObject $delegate): void {}

    public function textStorage(): ?NSTextStorage {}

    /** The selection in UTF-16 units; length 0 is the insertion point. */
    public function selectedRange(): NSRange {}

    /** setSelectedRange:; AppKit clamps a range past the text's end. */
    public function setSelectedRange(NSRange $range): void {}

    public function scrollRangeToVisible(NSRange $range): void {}

    public function isHorizontallyResizable(): bool {}

    public function setHorizontallyResizable(bool $resizable): void {}

    public function maxSize(): NSSize {}

    public function setMaxSize(NSSize $size): void {}
}

/**
 * @not-serializable
 */
class NSTextContainer extends NSObject
{
    public function widthTracksTextView(): bool {}

    public function setWidthTracksTextView(bool $tracks): void {}

    public function size(): NSSize {}

    public function setSize(NSSize $size): void {}
}

/**
 * @not-serializable
 */
class NSLayoutManager extends NSObject
{
    public function ensureLayoutForTextContainer(NSTextContainer $container): void {}

    /** The rect the laid-out glyphs occupy in the container. */
    public function usedRectForTextContainer(NSTextContainer $container): NSRect {}

    /**
     * glyphRangeForCharacterRange:actualCharacterRange:: the glyph range and the actual character range.
     *
     * @return array{0: NSRange, 1: NSRange}
     */
    public function glyphRangeForCharacterRangeActualCharacterRange(NSRange $charRange): array {}

    /** The glyphs' bounding rect in the container's coordinates. */
    public function boundingRectForGlyphRangeInTextContainer(NSRange $glyphRange, NSTextContainer $container): NSRect {}

    public function allowsNonContiguousLayout(): bool {}

    /** Lay out only what is shown or asked for, not the whole text first. */
    public function setAllowsNonContiguousLayout(bool $allows): void {}
}
