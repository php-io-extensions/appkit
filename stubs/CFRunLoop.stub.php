<?php

/** @generate-class-entries */

enum CFRunLoopRunResult: int
{
    case FINISHED = 1;
    case STOPPED = 2;
    case TIMED_OUT = 3;
    case HANDLED_SOURCE = 4;
}

/**
 * @not-serializable
 */
final class CFRunLoop extends CFType
{
    public static function getMain(): CFRunLoop {}

    public static function getCurrent(): CFRunLoop {}

    public static function run(): void {}

    public static function runInMode(string $mode, float $seconds, bool $returnAfterSourceHandled): CFRunLoopRunResult {}

    public function stop(): void {}

    public function wakeUp(): void {}

    public function isWaiting(): bool {}

    public function copyCurrentMode(): ?string {}

    public function addSource(CFRunLoopSource $source, string $mode): void {}

    public function removeSource(CFRunLoopSource $source, string $mode): void {}

    public function containsSource(CFRunLoopSource $source, string $mode): bool {}
}

/**
 * @not-serializable
 */
final class CFRunLoopSource extends CFType
{
    public function getOrder(): int {}

    public function invalidate(): void {}

    public function isValid(): bool {}

    public function signal(): void {}
}
