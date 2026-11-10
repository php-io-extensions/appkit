<?php

/** @generate-class-entries */

/**
 * AppKit's animation group. beginGrouping() opens a group on the current thread, currentContext() is that
 * group's context, endGrouping() closes it and starts what changed inside it. With allowsImplicitAnimation
 * set, changes to layer-backed views' properties made inside the group animate over its duration.
 *
 * @not-serializable
 */
class NSAnimationContext extends NSObject
{
    public static function beginGrouping(): void {}

    public static function endGrouping(): void {}

    public static function currentContext(): NSAnimationContext {}

    public function duration(): float {}

    public function setDuration(float $duration): void {}

    public function allowsImplicitAnimation(): bool {}

    public function setAllowsImplicitAnimation(bool $allowsImplicitAnimation): void {}
}
