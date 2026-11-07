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

    /**
     * The CF object at $pointer (another extension's pointer()), boxed as the class its CFTypeID names; 0 is null.
     * The address is trusted to hold a CF object.
     */
    public static function fromPointer(int $pointer): ?CFType {}
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
