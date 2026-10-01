<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
final class CFFileDescriptor extends CFType
{
    /**
     * @param int|resource|Socket $fd
     * @param callable $callout called as $callout(CFFileDescriptor $f, int $callBackTypes)
     */
    public static function create(mixed $fd, bool $closeOnInvalidate, callable $callout): ?CFFileDescriptor {}

    public function getNativeDescriptor(): int {}

    public function enableCallBacks(int $callBackTypes): void {}

    public function disableCallBacks(int $callBackTypes): void {}

    public function invalidate(): void {}

    public function isValid(): bool {}

    public function createRunLoopSource(int $order): ?CFRunLoopSource {}
}
