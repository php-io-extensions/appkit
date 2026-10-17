<?php

/** @generate-class-entries */

/**
 * @var string
 * @cvalue appkit_cfstring_constant(kIOPMAssertionTypePreventUserIdleSystemSleep)
 */
const kIOPMAssertionTypePreventUserIdleSystemSleep = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant(kIOPMAssertionTypePreventUserIdleDisplaySleep)
 */
const kIOPMAssertionTypePreventUserIdleDisplaySleep = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant(kIOPMAssertionTypePreventSystemSleep)
 */
const kIOPMAssertionTypePreventSystemSleep = UNKNOWN;

/**
 * @var int
 * @cvalue kIOPMAssertionLevelOff
 */
const kIOPMAssertionLevelOff = UNKNOWN;

/**
 * @var int
 * @cvalue kIOPMAssertionLevelOn
 */
const kIOPMAssertionLevelOn = UNKNOWN;

/**
 * @var int
 * @cvalue kIOReturnSuccess
 */
const kIOReturnSuccess = UNKNOWN;

/**
 * The IOPMAssertion functions: power assertions named by their IOPMAssertionID (an int).
 *
 * @not-serializable
 */
final class IOPMAssertion
{
    private function __construct() {}

    /**
     * IOPMAssertionCreateWithName: a kIOPMAssertionType* string, an IOPMAssertionLevel and the name
     * Activity Monitor shows. Answers the IOReturn; $assertionID receives the IOPMAssertionID.
     */
    public static function createWithName(string $type, int $level, string $name, ?int &$assertionID = null): int {}

    /** IOPMAssertionRelease: the IOReturn. */
    public static function release(int $assertion): int {}
}
