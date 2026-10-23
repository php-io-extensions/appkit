<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class NSObject
{
    private function __construct() {}

    public function className(): string {}

    public function isKindOfClass(string $className): bool {}

    public function respondsToSelector(string $selector): bool {}

    public function isEqual(?NSObject $object): bool {}

    public function hash(): int {}

    public function description(): string {}

    /** The object's address, for handing it to another extension. */
    public function pointer(): int {}

    /**
     * The object at $pointer (another extension's pointer(), such as ext-metal's CAMetalLayer, or a
     * toolkit's native view handle). The address is trusted to hold an Objective-C object; it must be
     * a kind of the class this is called on, which is what comes back (CALayer::fromPointer() of a
     * CAMetalLayer is a CALayer).
     */
    public static function fromPointer(int $pointer): static {}
}

/**
 * Any string object AppKit hands back (a class cluster: __NSCFString, tagged pointers) boxes as this.
 *
 * @not-serializable
 */
class NSString extends NSObject
{
    public static function stringWithString(string $string): static {}

    /** null when the string has no UTF-8 form */
    public function UTF8String(): ?string {}
}
