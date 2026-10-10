<?php

/** @generate-class-entries */

/**
 * @var int
 * @cvalue kCGMouseEventNumber
 */
const kCGMouseEventNumber = UNKNOWN;

/**
 * @var int
 * @cvalue kCGMouseEventClickState
 */
const kCGMouseEventClickState = UNKNOWN;

/**
 * @var int
 * @cvalue kCGMouseEventPressure
 */
const kCGMouseEventPressure = UNKNOWN;

/**
 * @var int
 * @cvalue kCGMouseEventButtonNumber
 */
const kCGMouseEventButtonNumber = UNKNOWN;

/**
 * @var int
 * @cvalue kCGMouseEventDeltaX
 */
const kCGMouseEventDeltaX = UNKNOWN;

/**
 * @var int
 * @cvalue kCGMouseEventDeltaY
 */
const kCGMouseEventDeltaY = UNKNOWN;

/**
 * @var int
 * @cvalue kCGMouseEventInstantMouser
 */
const kCGMouseEventInstantMouser = UNKNOWN;

/**
 * @var int
 * @cvalue kCGMouseEventSubtype
 */
const kCGMouseEventSubtype = UNKNOWN;

/**
 * @var int
 * @cvalue kCGMouseEventWindowUnderMousePointer
 */
const kCGMouseEventWindowUnderMousePointer = UNKNOWN;

/**
 * @var int
 * @cvalue kCGMouseEventWindowUnderMousePointerThatCanHandleThisEvent
 */
const kCGMouseEventWindowUnderMousePointerThatCanHandleThisEvent = UNKNOWN;

enum CGEventType: int
{
    case NULL = 0;
    case LEFT_MOUSE_DOWN = 1;
    case LEFT_MOUSE_UP = 2;
    case RIGHT_MOUSE_DOWN = 3;
    case RIGHT_MOUSE_UP = 4;
    case MOUSE_MOVED = 5;
    case LEFT_MOUSE_DRAGGED = 6;
    case RIGHT_MOUSE_DRAGGED = 7;
    case KEY_DOWN = 10;
    case KEY_UP = 11;
    case FLAGS_CHANGED = 12;
    case SCROLL_WHEEL = 22;
    case TABLET_POINTER = 23;
    case TABLET_PROXIMITY = 24;
    case OTHER_MOUSE_DOWN = 25;
    case OTHER_MOUSE_UP = 26;
    case OTHER_MOUSE_DRAGGED = 27;
    case TAP_DISABLED_BY_TIMEOUT = 4294967294;
    case TAP_DISABLED_BY_USER_INPUT = 4294967295;
}

enum CGMouseButton: int
{
    case LEFT = 0;
    case RIGHT = 1;
    case CENTER = 2;
}

enum CGScrollEventUnit: int
{
    case PIXEL = 0;
    case LINE = 1;
}

enum CGEventSourceStateID: int
{
    case PRIVATE = -1;
    case COMBINED_SESSION_STATE = 0;
    case HID_SYSTEM_STATE = 1;
}

/**
 * A Quartz event source. Only its state reads are bound, as statics: no source is created.
 *
 * @not-serializable
 */
final class CGEventSource extends CFType
{
    /** CGEventSourceKeyState: whether the key with macOS virtual key code $key is down in that state now. */
    public static function keyState(CGEventSourceStateID $stateID, int $key): bool {}
}

/**
 * A Quartz event, for the NSEvents AppKit has no constructor for (a scroll wheel, another
 * mouse button, motion deltas): NSEvent::eventWithCGEvent(). No CGEventSource is bound, so
 * the source is null. Locations are Quartz's: origin at the top left of the main screen.
 *
 * @not-serializable
 */
final class CGEvent extends CFType
{
    public static function createMouseEvent(?CFType $source, CGEventType $mouseType, NSPoint $mouseCursorPosition, CGMouseButton $mouseButton): ?CGEvent {}

    /** One to three wheels; $wheel1 is vertical, $wheel2 horizontal. */
    public static function createScrollWheelEvent2(?CFType $source, CGScrollEventUnit $units, int $wheelCount, int $wheel1, int $wheel2, int $wheel3): ?CGEvent {}

    public function getIntegerValueField(int $field): int {}

    public function setIntegerValueField(int $field, int $value): void {}

    public function getLocation(): NSPoint {}

    public function setLocation(NSPoint $location): void {}
}
