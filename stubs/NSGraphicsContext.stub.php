<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class NSGraphicsContext extends NSObject
{
    /** The context drawing happens in now: inside drawRect:, the view's. */
    public static function currentContext(): ?NSGraphicsContext {}

    public function CGContext(): CGContext {}
}
