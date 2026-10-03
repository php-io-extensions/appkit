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
    /** NSDatePickerElementFlags, combined with | */
    public const int ELEMENT_HOUR_MINUTE = 0x000c;
    public const int ELEMENT_HOUR_MINUTE_SECOND = 0x000e;
    public const int ELEMENT_TIME_ZONE = 0x0010;
    public const int ELEMENT_YEAR_MONTH = 0x00c0;
    public const int ELEMENT_YEAR_MONTH_DAY = 0x00e0;
    public const int ELEMENT_ERA = 0x0100;

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

    public function size(): NSSize {}
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
    /** The NSClipView showing the document view. */
    public function contentView(): NSView {}

    public function documentView(): ?NSView {}

    public function setDocumentView(?NSView $view): void {}

    public function hasVerticalScroller(): bool {}

    public function setHasVerticalScroller(bool $has): void {}

    public function hasHorizontalScroller(): bool {}

    public function setHasHorizontalScroller(bool $has): void {}

    public function drawsBackground(): bool {}

    public function setDrawsBackground(bool $draws): void {}

    public function contentSize(): NSSize {}
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
}

/**
 * @not-serializable
 */
class NSTextContainer extends NSObject
{
}

/**
 * @not-serializable
 */
class NSLayoutManager extends NSObject
{
    public function ensureLayoutForTextContainer(NSTextContainer $container): void {}

    /** The rect the laid-out glyphs occupy in the container. */
    public function usedRectForTextContainer(NSTextContainer $container): NSRect {}
}
