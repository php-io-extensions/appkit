<?php

/** @generate-class-entries */

final class NSEdgeInsets
{
    public float $top = 0.0;

    public float $left = 0.0;

    public float $bottom = 0.0;

    public float $right = 0.0;

    public function __construct(float $top = 0.0, float $left = 0.0, float $bottom = 0.0, float $right = 0.0) {}
}

/**
 * @not-serializable
 */
class NSLayoutAnchor extends NSObject
{
    public function constraintEqualToAnchor(NSLayoutAnchor $anchor): NSLayoutConstraint {}

    public function constraintEqualToAnchorConstant(NSLayoutAnchor $anchor, float $constant): NSLayoutConstraint {}

    public function constraintGreaterThanOrEqualToAnchor(NSLayoutAnchor $anchor): NSLayoutConstraint {}

    public function constraintGreaterThanOrEqualToAnchorConstant(NSLayoutAnchor $anchor, float $constant): NSLayoutConstraint {}

    public function constraintLessThanOrEqualToAnchor(NSLayoutAnchor $anchor): NSLayoutConstraint {}

    public function constraintLessThanOrEqualToAnchorConstant(NSLayoutAnchor $anchor, float $constant): NSLayoutConstraint {}

    /** NSLayoutDimension only; throws AppKitException on an axis anchor */
    public function constraintEqualToConstant(float $constant): NSLayoutConstraint {}

    /** NSLayoutDimension only */
    public function constraintGreaterThanOrEqualToConstant(float $constant): NSLayoutConstraint {}

    /** NSLayoutDimension only */
    public function constraintLessThanOrEqualToConstant(float $constant): NSLayoutConstraint {}
}

/**
 * @not-serializable
 */
class NSLayoutConstraint extends NSObject
{
    /** @param NSLayoutConstraint[] $constraints */
    public static function activateConstraints(array $constraints): void {}

    /** @param NSLayoutConstraint[] $constraints */
    public static function deactivateConstraints(array $constraints): void {}

    public function isActive(): bool {}

    public function setActive(bool $active): void {}

    public function constant(): float {}

    public function setConstant(float $constant): void {}

    public function priority(): float {}

    public function setPriority(float $priority): void {}
}
