<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class NSArray extends NSObject
{
    public function count(): int {}

    /** An NSString element as a string, any other object boxed. */
    public function objectAtIndex(int $index): NSObject|string {}
}

/**
 * @not-serializable
 */
class NSMutableArray extends NSArray
{
    public static function array(): static {}

    /** A string is added as an NSString. */
    public function addObject(NSObject|string $anObject): void {}
}
