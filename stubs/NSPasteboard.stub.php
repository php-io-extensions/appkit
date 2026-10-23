<?php

/** @generate-class-entries */

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) NSPasteboardTypeString)
 */
const NSPasteboardTypeString = UNKNOWN;

/**
 * @not-serializable
 */
class NSPasteboard extends NSObject
{
    public static function generalPasteboard(): NSPasteboard {}

    /** Empties the pasteboard and returns its new change count. */
    public function clearContents(): int {}

    public function setStringForType(string $string, string $dataType): bool {}

    public function stringForType(string $dataType): ?string {}
}
