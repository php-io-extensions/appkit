<?php

/** @generate-class-entries */

enum NSEventType: int
{
    case LEFT_MOUSE_DOWN = 1;
    case LEFT_MOUSE_UP = 2;
    case RIGHT_MOUSE_DOWN = 3;
    case RIGHT_MOUSE_UP = 4;
    case MOUSE_MOVED = 5;
    case LEFT_MOUSE_DRAGGED = 6;
    case RIGHT_MOUSE_DRAGGED = 7;
    case MOUSE_ENTERED = 8;
    case MOUSE_EXITED = 9;
    case KEY_DOWN = 10;
    case KEY_UP = 11;
    case FLAGS_CHANGED = 12;
    case APP_KIT_DEFINED = 13;
    case SYSTEM_DEFINED = 14;
    case APPLICATION_DEFINED = 15;
    case PERIODIC = 16;
    case CURSOR_UPDATE = 17;
    case SCROLL_WHEEL = 22;
    case TABLET_POINT = 23;
    case TABLET_PROXIMITY = 24;
    case OTHER_MOUSE_DOWN = 25;
    case OTHER_MOUSE_UP = 26;
    case OTHER_MOUSE_DRAGGED = 27;
    case GESTURE = 29;
    case MAGNIFY = 30;
    case SWIPE = 31;
    case ROTATE = 18;
    case BEGIN_GESTURE = 19;
    case END_GESTURE = 20;
    case SMART_MAGNIFY = 32;
    case QUICK_LOOK = 33;
    case PRESSURE = 34;
    case DIRECT_TOUCH = 37;
    case CHANGE_MODE = 38;
}

enum NSEventMask: int
{
    case LEFT_MOUSE_DOWN = 2;
    case LEFT_MOUSE_UP = 4;
    case RIGHT_MOUSE_DOWN = 8;
    case RIGHT_MOUSE_UP = 16;
    case MOUSE_MOVED = 32;
    case LEFT_MOUSE_DRAGGED = 64;
    case RIGHT_MOUSE_DRAGGED = 128;
    case MOUSE_ENTERED = 256;
    case MOUSE_EXITED = 512;
    case KEY_DOWN = 1024;
    case KEY_UP = 2048;
    case FLAGS_CHANGED = 4096;
    case APP_KIT_DEFINED = 8192;
    case SYSTEM_DEFINED = 16384;
    case APPLICATION_DEFINED = 32768;
    case PERIODIC = 65536;
    case CURSOR_UPDATE = 131072;
    case SCROLL_WHEEL = 4194304;
    case TABLET_POINT = 8388608;
    case TABLET_PROXIMITY = 16777216;
    case OTHER_MOUSE_DOWN = 33554432;
    case OTHER_MOUSE_UP = 67108864;
    case OTHER_MOUSE_DRAGGED = 134217728;
    case GESTURE = 536870912;
    case MAGNIFY = 1073741824;
    case SWIPE = 2147483648;
    case ROTATE = 262144;
    case BEGIN_GESTURE = 524288;
    case END_GESTURE = 1048576;
    case SMART_MAGNIFY = 4294967296;
    case PRESSURE = 17179869184;
    case DIRECT_TOUCH = 137438953472;
    case CHANGE_MODE = 274877906944;
    case ANY = -1;
}

enum NSEventModifierFlags: int
{
    case CAPS_LOCK = 65536;
    case SHIFT = 131072;
    case CONTROL = 262144;
    case OPTION = 524288;
    case COMMAND = 1048576;
    case NUMERIC_PAD = 2097152;
    case HELP = 4194304;
    case FUNCTION = 8388608;
    case DEVICE_INDEPENDENT_FLAGS_MASK = 4294901760;
}

/**
 * @not-serializable
 */
class NSEvent extends NSObject
{
    public static function otherEventWithTypeLocationModifierFlagsTimestampWindowNumberContextSubtypeData1Data2(NSEventType $type, NSPoint $location, NSEventModifierFlags|int $flags, float $time, int $wNum, ?NSGraphicsContext $context, int $subtype, int $d1, int $d2): ?NSEvent {}

    public static function mouseEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberClickCountPressure(NSEventType $type, NSPoint $location, NSEventModifierFlags|int $flags, float $time, int $wNum, ?NSGraphicsContext $context, int $eNum, int $cNum, float $pressure): ?NSEvent {}

    /** A KeyDown, KeyUp or FlagsChanged event; AppKit raises for any other type. */
    public static function keyEventWithTypeLocationModifierFlagsTimestampWindowNumberContextCharactersCharactersIgnoringModifiersIsARepeatKeyCode(NSEventType $type, NSPoint $location, NSEventModifierFlags|int $flags, float $time, int $wNum, ?NSGraphicsContext $context, string $keys, string $ukeys, bool $flag, int $code): ?NSEvent {}

    /** The NSEvent for a Quartz event: the only way to make a scroll-wheel or other-button event. */
    public static function eventWithCGEvent(CGEvent $cgEvent): ?NSEvent {}

    /** The pointer on screen: origin at the bottom left of the main screen. */
    public static function mouseLocation(): NSPoint {}

    /** The mouse buttons down now, whatever event reported them: bit 0 left, 1 right, 2 and up the others. */
    public static function pressedMouseButtons(): int {}

    /**
     * +addLocalMonitorForEventsMatchingMask:handler:. AppKit calls $handler(NSEvent $event): ?NSEvent
     * for each matching event this app dispatches through sendEvent:, not those a nested tracking loop
     * takes: AppKit gets the returned NSEvent, or nil (the event swallowed) for null; any other return,
     * or a handler that did not run, hands AppKit its own event. The monitor keeps $handler until
     * removeMonitor(); after request end the handler no longer runs.
     */
    public static function addLocalMonitorForEventsMatchingMaskHandler(NSEventMask|int $mask, callable $handler): NSObject {}

    /** +removeMonitor:. ValueError for a monitor already removed (AppKit crashes on a second removal); AppKit raises for an object that is no monitor. */
    public static function removeMonitor(NSObject $monitor): void {}

    public function type(): NSEventType|int {}

    /** The mouse button: 0 left, 1 right, 2 and up the others. */
    public function buttonNumber(): int {}

    public function subtype(): int {}

    public function modifierFlags(): int {}

    public function timestamp(): float {}

    public function windowNumber(): int {}

    public function locationInWindow(): NSPoint {}

    public function data1(): int {}

    public function data2(): int {}

    public function keyCode(): int {}

    /** Key events only: AppKit raises for any other type. */
    public function characters(): ?string {}

    /** Key events only: AppKit raises for any other type. */
    public function charactersIgnoringModifiers(): ?string {}

    public function isARepeat(): bool {}

    public function clickCount(): int {}

    public function deltaX(): float {}

    public function deltaY(): float {}

    public function scrollingDeltaX(): float {}

    public function scrollingDeltaY(): float {}

    public function hasPreciseScrollingDeltas(): bool {}

    public function isDirectionInvertedFromDevice(): bool {}

    public function window(): ?NSWindow {}
}

/**
 * The characters a function-key event carries: a menu item's key equivalent takes them too.
 *
 * @var int
 * @cvalue NSUpArrowFunctionKey
 */
const NSUpArrowFunctionKey = UNKNOWN;

/**
 * @var int
 * @cvalue NSDownArrowFunctionKey
 */
const NSDownArrowFunctionKey = UNKNOWN;

/**
 * @var int
 * @cvalue NSLeftArrowFunctionKey
 */
const NSLeftArrowFunctionKey = UNKNOWN;

/**
 * @var int
 * @cvalue NSRightArrowFunctionKey
 */
const NSRightArrowFunctionKey = UNKNOWN;

/**
 * @var int
 * @cvalue NSF1FunctionKey
 */
const NSF1FunctionKey = UNKNOWN;

/**
 * @var int
 * @cvalue NSF2FunctionKey
 */
const NSF2FunctionKey = UNKNOWN;

/**
 * @var int
 * @cvalue NSF3FunctionKey
 */
const NSF3FunctionKey = UNKNOWN;

/**
 * @var int
 * @cvalue NSF4FunctionKey
 */
const NSF4FunctionKey = UNKNOWN;

/**
 * @var int
 * @cvalue NSF5FunctionKey
 */
const NSF5FunctionKey = UNKNOWN;

/**
 * @var int
 * @cvalue NSF6FunctionKey
 */
const NSF6FunctionKey = UNKNOWN;

/**
 * @var int
 * @cvalue NSF7FunctionKey
 */
const NSF7FunctionKey = UNKNOWN;

/**
 * @var int
 * @cvalue NSF8FunctionKey
 */
const NSF8FunctionKey = UNKNOWN;

/**
 * @var int
 * @cvalue NSF9FunctionKey
 */
const NSF9FunctionKey = UNKNOWN;

/**
 * @var int
 * @cvalue NSF10FunctionKey
 */
const NSF10FunctionKey = UNKNOWN;

/**
 * @var int
 * @cvalue NSF11FunctionKey
 */
const NSF11FunctionKey = UNKNOWN;

/**
 * @var int
 * @cvalue NSF12FunctionKey
 */
const NSF12FunctionKey = UNKNOWN;

/**
 * @var int
 * @cvalue NSDeleteFunctionKey
 */
const NSDeleteFunctionKey = UNKNOWN;

/**
 * @var int
 * @cvalue NSHomeFunctionKey
 */
const NSHomeFunctionKey = UNKNOWN;

/**
 * @var int
 * @cvalue NSEndFunctionKey
 */
const NSEndFunctionKey = UNKNOWN;

/**
 * @var int
 * @cvalue NSPageUpFunctionKey
 */
const NSPageUpFunctionKey = UNKNOWN;

/**
 * @var int
 * @cvalue NSPageDownFunctionKey
 */
const NSPageDownFunctionKey = UNKNOWN;
