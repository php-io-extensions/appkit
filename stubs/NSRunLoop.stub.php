<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class NSRunLoop extends NSObject
{
    public static function mainRunLoop(): NSRunLoop {}

    public static function currentRunLoop(): NSRunLoop {}

    /** getCFRunLoop */
    public function getCFRunLoop(): CFRunLoop {}
}
