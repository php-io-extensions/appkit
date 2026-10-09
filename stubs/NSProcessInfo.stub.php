<?php

/** @generate-class-entries */

enum NSActivityOptions: int
{
    case BACKGROUND = 0xFF;
    case IDLE_SYSTEM_SLEEP_DISABLED = 0x100000;
    case SUDDEN_TERMINATION_DISABLED = 0x4000;
    case AUTOMATIC_TERMINATION_DISABLED = 0x8000;
    case USER_INITIATED_ALLOWING_IDLE_SYSTEM_SLEEP = 0xEFFFFF;
    case USER_INITIATED = 0xFFFFFF;
    case LATENCY_CRITICAL = 0xFF00000000;
    case USER_INTERACTIVE = 0xFF00FFFFFF;
    case IDLE_DISPLAY_SLEEP_DISABLED = 0x10000000000;
    case ANIMATION_TRACKING_ENABLED = 0x200000000000;
    case TRACKING_ENABLED = 0x400000000000;
}

/**
 * @not-serializable
 */
class NSProcessInfo extends NSObject
{
    public static function processInfo(): NSProcessInfo {}

    /**
     * beginActivityWithOptions:reason: — the activity token to hand to endActivity(). While it is
     * held, App Nap stays off, and display or system sleep as the options say.
     */
    public function beginActivityWithOptionsReason(NSActivityOptions|int $options, string $reason): NSObject {}

    public function endActivity(NSObject $activity): void {}
}
