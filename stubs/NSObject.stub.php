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
}
