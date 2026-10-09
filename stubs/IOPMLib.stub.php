<?php

/** @generate-class-entries */

/** @var string */
const kIOPMAssertionTypePreventUserIdleSystemSleep = "PreventUserIdleSystemSleep";

/** @var string */
const kIOPMAssertionTypePreventUserIdleDisplaySleep = "PreventUserIdleDisplaySleep";

/** @var string */
const kIOPMAssertionTypePreventSystemSleep = "PreventSystemSleep";

/** @var int */
const kIOPMAssertionLevelOff = 0;

/** @var int */
const kIOPMAssertionLevelOn = 255;

/**
 * The IOPMAssertion functions: power assertions named by their IOPMAssertionID (an int).
 *
 * @not-serializable
 */
final class IOPMAssertion
{
    private function __construct() {}

    /**
     * IOPMAssertionCreateWithName: a kIOPMAssertionType* string, kIOPMAssertionLevelOn or Off, and
     * the name Activity Monitor shows. Answers the IOPMAssertionID; throws on an IOReturn error.
     */
    public static function createWithName(string $type, int $level, string $name): int {}

    /** IOPMAssertionRelease. Throws on an IOReturn error. */
    public static function release(int $assertion): void {}
}
