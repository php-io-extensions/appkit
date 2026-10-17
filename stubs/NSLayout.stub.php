<?php

/** @generate-class-entries */

final class NSEdgeInsets
{
    public float $top;

    public float $left;

    public float $bottom;

    public float $right;

    public function __construct(float $top, float $left, float $bottom, float $right) {}
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
}

/**
 * @not-serializable
 */
class NSLayoutDimension extends NSLayoutAnchor
{
    public function constraintEqualToConstant(float $c): NSLayoutConstraint {}

    public function constraintGreaterThanOrEqualToConstant(float $c): NSLayoutConstraint {}

    public function constraintLessThanOrEqualToConstant(float $c): NSLayoutConstraint {}
}

/**
 * @not-serializable
 */
class NSLayoutXAxisAnchor extends NSLayoutAnchor
{
}

/**
 * @not-serializable
 */
class NSLayoutYAxisAnchor extends NSLayoutAnchor
{
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
