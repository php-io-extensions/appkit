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
    public static function otherEventWithTypeLocationModifierFlagsTimestampWindowNumberContextSubtypeData1Data2(NSEventType $type, NSPoint $location, NSEventModifierFlags|int $flags, float $time, int $wNum, ?NSObject $unusedPassNil, int $subtype, int $d1, int $d2): ?NSEvent {}

    public static function mouseEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberClickCountPressure(NSEventType $type, NSPoint $location, NSEventModifierFlags|int $flags, float $time, int $wNum, ?NSObject $unusedPassNil, int $eNum, int $cNum, float $pressure): ?NSEvent {}

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
}
