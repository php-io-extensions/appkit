<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class CALayer extends NSObject
{
    /** [CALayer layer] */
    public static function layer(): CALayer {}

    public function contentsScale(): float {}

    public function setContentsScale(float $contentsScale): void {}

    /** @return list<CALayer> */
    public function sublayers(): array {}

    public function addSublayer(CALayer $layer): void {}
}
