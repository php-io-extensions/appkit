<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class CFType
{
    private function __construct() {}

    public function getTypeID(): int {}

    public function hash(): int {}

    public function copyDescription(): string {}

    /** The object's address, for handing it to another extension. */
    public function pointer(): int {}
}

/**
 * A CFAllocatorRef.
 *
 * @not-serializable
 */
final class CFAllocator extends CFType
{
    /** CFAllocatorGetDefault */
    public static function getDefault(): CFAllocator {}
}
