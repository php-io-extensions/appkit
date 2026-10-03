<?php

/** @generate-class-entries */

enum NSUserInterfaceLayoutOrientation: int
{
    case HORIZONTAL = 0;
    case VERTICAL = 1;
}

enum NSLayoutConstraintOrientation: int
{
    case HORIZONTAL = 0;
    case VERTICAL = 1;
}

enum NSStackViewGravity: int
{
    case TOP = 1;
    case CENTER = 2;
    case BOTTOM = 3;
}

enum NSLayoutAttribute: int
{
    case NOT_AN_ATTRIBUTE = 0;
    case LEFT = 1;
    case RIGHT = 2;
    case TOP = 3;
    case BOTTOM = 4;
    case LEADING = 5;
    case TRAILING = 6;
    case WIDTH = 7;
    case HEIGHT = 8;
    case CENTER_X = 9;
    case CENTER_Y = 10;
    case LAST_BASELINE = 11;
    case FIRST_BASELINE = 12;
}

enum NSStackViewDistribution: int
{
    case GRAVITY_AREAS = -1;
    case FILL = 0;
    case FILL_EQUALLY = 1;
    case FILL_PROPORTIONALLY = 2;
    case EQUAL_SPACING = 3;
    case EQUAL_CENTERING = 4;
}

/**
 * @not-serializable
 */
class NSStackView extends NSView
{
    /** @param NSView[] $views */
    public static function stackViewWithViews(array $views): static {}

    public function orientation(): NSUserInterfaceLayoutOrientation {}

    public function setOrientation(NSUserInterfaceLayoutOrientation $orientation): void {}

    public function spacing(): float {}

    public function setSpacing(float $spacing): void {}

    public function edgeInsets(): NSEdgeInsets {}

    public function setEdgeInsets(NSEdgeInsets $insets): void {}

    public function alignment(): NSLayoutAttribute {}

    public function setAlignment(NSLayoutAttribute $alignment): void {}

    public function distribution(): NSStackViewDistribution {}

    public function setDistribution(NSStackViewDistribution $distribution): void {}

    public function addArrangedSubview(NSView $view): void {}

    public function insertArrangedSubviewAtIndex(NSView $view, int $index): void {}

    public function removeArrangedSubview(NSView $view): void {}

    /** @return NSView[] */
    public function arrangedSubviews(): array {}

    public function customSpacingAfterView(NSView $view): float {}

    public function setCustomSpacingAfterView(float $spacing, NSView $view): void {}

    /** NSStackViewVisibilityPriority as float (1000 = must hold, 900 = detach only if necessary, 0 = not visible) */
    public function visibilityPriorityForView(NSView $view): float {}

    public function setVisibilityPriorityForView(float $priority, NSView $view): void {}

    /** NSLayoutPriority as float (250 = low, 750 = high, 1000 = required) */
    public function huggingPriorityForOrientation(NSLayoutConstraintOrientation $orientation): float {}

    public function setHuggingPriorityForOrientation(float $priority, NSLayoutConstraintOrientation $orientation): void {}
}
