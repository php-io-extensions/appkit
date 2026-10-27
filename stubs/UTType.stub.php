<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
final class UTType extends NSObject
{
    /** The declared type for the extension, or a dynamic type (identifier "dyn.…") when none declares it. */
    public static function typeWithFilenameExtension(string $filenameExtension): ?UTType {}

    public function identifier(): string {}
}
