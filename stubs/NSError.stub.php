<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class NSError extends NSObject
{
    public function domain(): string {}

    public function code(): int {}

    public function localizedDescription(): string {}

    /** Each value as appkit marshals a Foundation value: string, int, float, bool, null, NSRect/NSSize/NSPoint, or the boxed object. */
    public function userInfo(): array {}
}
