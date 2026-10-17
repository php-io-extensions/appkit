<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
final class CFFileDescriptor extends CFType
{
    /**
     * @param callable $callout called as $callout(CFFileDescriptor $f, int $callBackTypes)
     */
    public static function create(?CFAllocator $allocator, int $fd, bool $closeOnInvalidate, callable $callout): ?CFFileDescriptor {}

    public function getNativeDescriptor(): int {}

    public function enableCallBacks(int $callBackTypes): void {}

    public function disableCallBacks(int $callBackTypes): void {}

    public function invalidate(): void {}

    public function isValid(): bool {}

    public function createRunLoopSource(?CFAllocator $allocator, int $order): ?CFRunLoopSource {}
}
