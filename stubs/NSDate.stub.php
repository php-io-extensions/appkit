<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class NSDate extends NSObject
{
    public static function date(): NSDate {}

    public static function dateWithTimeIntervalSinceNow(float $secs): NSDate {}

    public static function distantPast(): NSDate {}

    public static function distantFuture(): NSDate {}

    public function timeIntervalSinceNow(): float {}

    public function timeIntervalSince1970(): float {}
}
