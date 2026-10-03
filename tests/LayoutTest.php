<?php

declare(strict_types=1);

beforeEach(function (): void {
    $this->app = NSApplication::sharedApplication();
});

it('constrains a subview to its superview with anchors', function (): void {
    $host = NSView::initWithFrame(new NSRect(0, 0, 300, 200));
    $child = NSView::initWithFrame(new NSRect(0, 0, 10, 10));
    $child->setTranslatesAutoresizingMaskIntoConstraints(false);
    $host->addSubview($child);

    NSLayoutConstraint::activateConstraints([
        $child->leadingAnchor()->constraintEqualToAnchorConstant($host->leadingAnchor(), 20.0),
        $child->topAnchor()->constraintEqualToAnchor($host->topAnchor()),
        $child->widthAnchor()->constraintEqualToConstant(50.0),
        $child->heightAnchor()->constraintGreaterThanOrEqualToConstant(30.0),
    ]);
    $host->layoutSubtreeIfNeeded();

    expect($host->subviews())->toBe([$child])
        ->and($child->superview())->toBe($host)
        ->and($child->frame()->x)->toBe(20.0)
        ->and($child->frame()->width)->toBe(50.0)
        ->and(fn () => $child->leadingAnchor()->constraintEqualToConstant(1.0))->toThrow(AppKitException::class);

    $child->removeFromSuperview();
    expect($host->subviews())->toBe([]);
});

it('reads insets, colors and fonts back', function (): void {
    $insets = new NSEdgeInsets(1.0, 2.0, 3.0, 4.0);
    $color = NSColor::colorWithRedGreenBlueAlpha(0.25, 0.5, 0.75, 1.0);
    $font = NSFont::systemFontOfSizeWeight(13.0, NSFont::WEIGHT_BOLD);

    expect([$insets->top, $insets->left, $insets->bottom, $insets->right])->toBe([1.0, 2.0, 3.0, 4.0])
        ->and(round($color->greenComponent(), 2))->toBe(0.5)
        ->and($font->pointSize())->toBe(13.0)
        ->and(NSFont::fontWithNameSize('No Such Font 9000', 12.0))->toBeNull();
});

it('hides a view and paints its layer', function (): void {
    $view = NSView::initWithFrame(new NSRect(0, 0, 10, 10));
    $view->setHidden(true);
    expect($view->wantsLayer())->toBeFalse()
        ->and($view->layerBackgroundColor())->toBeNull();

    $view->setLayerBackgroundColor(NSColor::colorWithRedGreenBlueAlpha(1.0, 0.0, 0.0, 0.5));

    expect($view->isHidden())->toBeTrue()
        ->and($view->wantsLayer())->toBeTrue()
        ->and(round($view->layerBackgroundColor()->redComponent(), 2))->toBe(1.0)
        ->and(round($view->layerBackgroundColor()->alphaComponent(), 2))->toBe(0.5);

    $view->setLayerBackgroundColor(null);
    expect($view->layerBackgroundColor())->toBeNull();
});

it('reads and writes the view flags and sizes', function (): void {
    $view = NSView::initWithFrame(new NSRect(0, 0, 10, 10));
    $view->setFrame(new NSRect(5.0, 6.0, 70.0, 80.0));
    $label = NSTextField::labelWithString('hello');

    expect([$view->frame()->x, $view->frame()->y, $view->frame()->width, $view->frame()->height])->toBe([5.0, 6.0, 70.0, 80.0])
        ->and($view->translatesAutoresizingMaskIntoConstraints())->toBeTrue()
        ->and($view->postsFrameChangedNotifications())->toBeTrue()
        ->and($view->intrinsicContentSize()->width)->toBe(-1.0)
        ->and($label->intrinsicContentSize()->width)->toBeGreaterThan(0.0)
        ->and($label->fittingSize()->height)->toBeGreaterThan(0.0);

    $view->setTranslatesAutoresizingMaskIntoConstraints(false);
    $view->setPostsFrameChangedNotifications(false);
    $view->setWantsLayer(true);

    expect($view->translatesAutoresizingMaskIntoConstraints())->toBeFalse()
        ->and($view->postsFrameChangedNotifications())->toBeFalse()
        ->and($view->wantsLayer())->toBeTrue();
});

it('places a view by its trailing, bottom and center anchors', function (): void {
    $host = NSView::initWithFrame(new NSRect(0, 0, 300, 200));
    $centered = NSView::initWithFrame(new NSRect(0, 0, 1, 1));
    $corner = NSView::initWithFrame(new NSRect(0, 0, 1, 1));
    foreach ([$centered, $corner] as $child) {
        $child->setTranslatesAutoresizingMaskIntoConstraints(false);
        $host->addSubview($child);
    }

    NSLayoutConstraint::activateConstraints([
        $centered->centerXAnchor()->constraintEqualToAnchor($host->centerXAnchor()),
        $centered->centerYAnchor()->constraintEqualToAnchor($host->centerYAnchor()),
        $centered->widthAnchor()->constraintEqualToConstant(50.0),
        $centered->heightAnchor()->constraintEqualToConstant(30.0),
        $corner->trailingAnchor()->constraintEqualToAnchorConstant($host->trailingAnchor(), -10.0),
        $corner->bottomAnchor()->constraintEqualToAnchorConstant($host->bottomAnchor(), -5.0),
        $corner->widthAnchor()->constraintEqualToConstant(40.0),
        $corner->heightAnchor()->constraintEqualToConstant(20.0),
    ]);
    $host->layoutSubtreeIfNeeded();

    expect([$centered->frame()->x, $centered->frame()->y])->toBe([125.0, 85.0])
        ->and([$corner->frame()->x, $corner->frame()->y])->toBe([250.0, 5.0]);
});

it('changes, deactivates and reprioritises a constraint', function (): void {
    $host = NSView::initWithFrame(new NSRect(0, 0, 300, 200));
    $child = NSView::initWithFrame(new NSRect(0, 0, 1, 1));
    $child->setTranslatesAutoresizingMaskIntoConstraints(false);
    $host->addSubview($child);
    $width = $child->widthAnchor()->constraintEqualToConstant(50.0);
    $width->setPriority(750.0);

    expect($width->isActive())->toBeFalse()
        ->and($width->priority())->toBe(750.0)
        ->and($width->constant())->toBe(50.0);

    NSLayoutConstraint::activateConstraints([$width, $child->heightAnchor()->constraintEqualToConstant(10.0)]);
    $width->setConstant(60.0);
    $host->layoutSubtreeIfNeeded();
    expect($width->isActive())->toBeTrue()
        ->and($width->constant())->toBe(60.0)
        ->and($child->frame()->width)->toBe(60.0);

    NSLayoutConstraint::deactivateConstraints([$width]);
    expect($width->isActive())->toBeFalse();
    $width->setActive(true);
    expect($width->isActive())->toBeTrue();
});

it('makes the subclass it is called on', function (): void {
    expect(NSTextField::initWithFrame(new NSRect(0, 0, 10, 10)))->toBeInstanceOf(NSTextField::class)
        ->and(NSStackView::initWithFrame(new NSRect(0, 0, 10, 10)))->toBeInstanceOf(NSStackView::class)
        ->and(NSButton::initWithFrame(new NSRect(0, 0, 10, 10)))->toBeInstanceOf(NSButton::class)
        ->and(NSSecureTextField::labelWithString('x'))->toBeInstanceOf(NSSecureTextField::class)
        ->and(NSSecureTextField::textFieldWithString('x'))->toBeInstanceOf(NSSecureTextField::class)
        ->and(NSView::initWithFrame(new NSRect(0, 0, 10, 10))::class)->toBe(NSView::class);
});

it('reads a font family and a colour alpha', function (): void {
    expect(NSFont::systemFontOfSizeWeight(12.0, NSFont::WEIGHT_REGULAR)->familyName())->toBeString()->not->toBe('')
        ->and(NSColor::colorWithRedGreenBlueAlpha(0.0, 0.0, 0.0, 0.25)->alphaComponent())->toBe(0.25);
});

it('stacks arranged subviews and reorders them', function (): void {
    $a = NSView::initWithFrame(new NSRect(0, 0, 10, 10));
    $b = NSView::initWithFrame(new NSRect(0, 0, 10, 10));
    $stack = NSStackView::stackViewWithViews([$a]);
    $stack->setOrientation(NSUserInterfaceLayoutOrientation::VERTICAL);
    $stack->setSpacing(8.0);
    $stack->setEdgeInsets(new NSEdgeInsets(4.0, 4.0, 4.0, 4.0));
    $stack->setAlignment(NSLayoutAttribute::CENTER_X);
    $stack->setDistribution(NSStackViewDistribution::FILL);
    $stack->insertArrangedSubviewAtIndex($b, 0);

    expect($stack->arrangedSubviews())->toBe([$b, $a])
        ->and($stack->orientation())->toBe(NSUserInterfaceLayoutOrientation::VERTICAL)
        ->and($stack->spacing())->toBe(8.0)
        ->and($stack->edgeInsets()->left)->toBe(4.0)
        ->and($stack->alignment())->toBe(NSLayoutAttribute::CENTER_X)
        ->and($stack->distribution())->toBe(NSStackViewDistribution::FILL)
        ->and(fn () => NSStackView::stackViewWithViews(['nope']))->toThrow(TypeError::class);

    $stack->removeArrangedSubview($b);
    expect($stack->arrangedSubviews())->toBe([$a]);

    $c = NSView::initWithFrame(new NSRect(0, 0, 10, 10));
    $stack->addArrangedSubview($c);
    $stack->setCustomSpacingAfterView(12.0, $a);
    $stack->setVisibilityPriorityForView(500.0, $c);
    $stack->setHuggingPriorityForOrientation(600.0, NSLayoutConstraintOrientation::VERTICAL);

    expect($stack->arrangedSubviews())->toBe([$a, $c])
        ->and($stack->customSpacingAfterView($a))->toBe(12.0)
        ->and($stack->visibilityPriorityForView($c))->toBe(500.0)
        ->and($stack->huggingPriorityForOrientation(NSLayoutConstraintOrientation::VERTICAL))->toBe(600.0);
});

it('fills grid cells and merges a range', function (): void {
    $grid = NSGridView::gridViewWithNumberOfColumnsRows(2, 0);
    $label = NSView::initWithFrame(new NSRect(0, 0, 10, 10));
    $row = $grid->addRowWithViews([$label, null]);
    $row->setHeight(24.0);
    $grid->addRowWithViews([null, null]);
    $grid->addRowWithViews([null, null]);
    $grid->mergeCellsInHorizontalRangeVerticalRange(new NSRange(0, 2), new NSRange(1, 1));
    $grid->cellAtColumnIndexRowIndex(1, 0)->setXPlacement(NSGridCellPlacement::TRAILING);

    expect($grid->numberOfRows())->toBe(3)
        ->and($grid->numberOfColumns())->toBe(2)
        ->and($grid->cellAtColumnIndexRowIndex(0, 0)->contentView())->toBe($label)
        ->and($grid->cellAtColumnIndexRowIndex(1, 0)->contentView())->toBeNull()
        ->and(fn () => $grid->removeRowAtIndex(1))->toThrow(AppKitException::class, 'merged cell');

    $grid->removeRowAtIndex(2);
    expect($grid->numberOfRows())->toBe(2);
});

it('inserts rows and columns and reads back spacing, sizes, padding and placement', function (): void {
    $grid = NSGridView::gridViewWithNumberOfColumnsRows(2, 0);
    [$a, $b, $c, $d] = array_map(fn () => NSView::initWithFrame(new NSRect(0, 0, 10, 10)), range(1, 4));
    $grid->addRowWithViews([$a, null]);
    $grid->insertRowAtIndexWithViews(0, [$b, null]);
    $grid->addColumnWithViews([null, $c]);
    $grid->setRowSpacing(4.0);
    $grid->setColumnSpacing(6.0);

    $row = $grid->rowAtIndex(0);
    $row->setHeight(30.0);
    $row->setTopPadding(2.0);
    $row->setBottomPadding(3.0);
    $row->setYPlacement(NSGridCellPlacement::CENTER);
    $column = $grid->columnAtIndex(0);
    $column->setWidth(90.0);
    $column->setLeadingPadding(5.0);
    $column->setTrailingPadding(7.0);
    $column->setXPlacement(NSGridCellPlacement::FILL);
    $cell = $grid->cellAtColumnIndexRowIndex(1, 0);
    $cell->setContentView($d);
    $cell->setXPlacement(NSGridCellPlacement::LEADING);
    $cell->setYPlacement(NSGridCellPlacement::TRAILING);

    expect($grid->numberOfRows())->toBe(2)
        ->and($grid->numberOfColumns())->toBe(3)
        ->and($grid->cellAtColumnIndexRowIndex(0, 0)->contentView())->toBe($b)
        ->and($grid->cellAtColumnIndexRowIndex(0, 1)->contentView())->toBe($a)
        ->and($grid->cellAtColumnIndexRowIndex(2, 1)->contentView())->toBe($c)
        ->and($cell->contentView())->toBe($d)
        ->and($cell->xPlacement())->toBe(NSGridCellPlacement::LEADING)
        ->and($cell->yPlacement())->toBe(NSGridCellPlacement::TRAILING)
        ->and([$grid->rowSpacing(), $grid->columnSpacing()])->toBe([4.0, 6.0])
        ->and([$row->height(), $row->topPadding(), $row->bottomPadding()])->toBe([30.0, 2.0, 3.0])
        ->and($row->yPlacement())->toBe(NSGridCellPlacement::CENTER)
        ->and([$column->width(), $column->leadingPadding(), $column->trailingPadding()])->toBe([90.0, 5.0, 7.0])
        ->and($column->xPlacement())->toBe(NSGridCellPlacement::FILL);

    $cell->setContentView(null);
    expect($cell->contentView())->toBeNull();
});

it('refuses a negative or unset range', function (): void {
    $grid = NSGridView::gridViewWithNumberOfColumnsRows(2, 2);
    $unset = new NSRange(0, 1);
    unset($unset->length);

    expect(fn () => $grid->mergeCellsInHorizontalRangeVerticalRange(new NSRange(-1, 1), new NSRange(0, 1)))->toThrow(ValueError::class)
        ->and(fn () => $grid->mergeCellsInHorizontalRangeVerticalRange(new NSRange(0, 1), $unset))->toThrow(ValueError::class);
});

it('reads and writes content hugging and compression resistance', function (): void {
    $label = NSTextField::labelWithString('x');
    $label->setContentHuggingPriorityForOrientation(1.0, NSLayoutConstraintOrientation::HORIZONTAL);
    $label->setContentCompressionResistancePriorityForOrientation(999.0, NSLayoutConstraintOrientation::VERTICAL);

    expect($label->contentHuggingPriorityForOrientation(NSLayoutConstraintOrientation::HORIZONTAL))->toBe(1.0)
        ->and($label->contentCompressionResistancePriorityForOrientation(NSLayoutConstraintOrientation::VERTICAL))->toBe(999.0);
});

it('gives a scroll view its clip view', function (): void {
    $scroll = NSScrollView::initWithFrame(new NSRect(0, 0, 50, 50));

    expect($scroll->contentView())->toBeInstanceOf(NSView::class)
        ->and($scroll->contentView()->className())->toBe('NSClipView')
        ->and($scroll->contentView()->superview())->toBe($scroll);
});

it('bounds a view with inequality constraints', function (): void {
    $host = NSView::initWithFrame(new NSRect(0, 0, 300, 200));
    $child = NSView::initWithFrame(new NSRect(0, 0, 1, 1));
    $child->setTranslatesAutoresizingMaskIntoConstraints(false);
    $host->addSubview($child);
    $wide = $child->widthAnchor()->constraintEqualToConstant(1000.0);
    $wide->setPriority(500.0);
    $tall = $child->heightAnchor()->constraintEqualToConstant(10.0);

    NSLayoutConstraint::activateConstraints([
        $host->widthAnchor()->constraintEqualToConstant(300.0),
        $host->heightAnchor()->constraintEqualToConstant(200.0),
        $child->leadingAnchor()->constraintGreaterThanOrEqualToAnchorConstant($host->leadingAnchor(), 30.0),
        $child->leadingAnchor()->constraintLessThanOrEqualToAnchorConstant($host->leadingAnchor(), 30.0),
        $child->trailingAnchor()->constraintLessThanOrEqualToAnchorConstant($host->trailingAnchor(), -20.0),
        $child->topAnchor()->constraintGreaterThanOrEqualToAnchor($host->topAnchor()),
        $child->topAnchor()->constraintLessThanOrEqualToAnchor($host->topAnchor()),
        $child->widthAnchor()->constraintLessThanOrEqualToConstant(400.0),
        $wide,
        $tall,
    ]);
    $host->layoutSubtreeIfNeeded();

    expect([$child->frame()->x, $child->frame()->width, $child->frame()->y])->toBe([30.0, 250.0, 190.0])
        ->and(fn () => $child->leadingAnchor()->constraintLessThanOrEqualToConstant(1.0))->toThrow(AppKitException::class);
});

it('scrolls a document view and reports what is visible', function (): void {
    $scroll = NSScrollView::initWithFrame(new NSRect(0, 0, 100, 100));
    $document = NSView::initWithFrame(new NSRect(0, 0, 100, 400));
    $scroll->setDocumentView($document);
    $document->scrollPoint(new NSPoint(0.0, 150.0));

    expect($document->visibleRect()->y)->toBe(150.0)
        ->and($document->visibleRect()->height)->toBe($scroll->contentSize()->height);
});

it('finds a font by family, traits and weight', function (): void {
    $manager = NSFontManager::sharedFontManager();
    $bold = $manager->fontWithFamilyTraitsWeightSize('Helvetica', 0, 9, 14.0);

    expect($manager)->toBe(NSFontManager::sharedFontManager())
        ->and($bold->familyName())->toBe('Helvetica')
        ->and($bold->pointSize())->toBe(14.0)
        ->and($manager->weightOfFont($bold))->toBeGreaterThanOrEqual(8)
        ->and($manager->fontWithFamilyTraitsWeightSize('No Such Family 9000', 0, 5, 12.0))->toBeNull();
});

it('draws an image as layer contents with a gravity and clipping', function (): void {
    $path = sys_get_temp_dir().'/appkit-layer-pixel.png';
    file_put_contents($path, base64_decode('iVBORw0KGgoAAAANSUhEUgAAAAEAAAABCAYAAAAfFcSJAAAADUlEQVR42mNkYPhfDwAChwGA60e6kgAAAABJRU5ErkJggg=='));
    $image = NSImage::initWithContentsOfFile($path);
    $view = NSView::initWithFrame(new NSRect(0, 0, 10, 10));
    $view->setLayerContents($image);
    $view->setLayerContentsGravity(kCAGravityResizeAspectFill);
    $view->setLayerMasksToBounds(true);

    expect($view->wantsLayer())->toBeTrue()
        ->and($view->layerContents())->toBe($image)
        ->and($view->layerContentsGravity())->toBe(kCAGravityResizeAspectFill)
        ->and($view->layerMasksToBounds())->toBeTrue()
        ->and([kCAGravityResize, kCAGravityResizeAspect, kCAGravityCenter])->toBe(['resize', 'resizeAspect', 'center']);

    $view->setLayerContents(null);
    expect($view->layerContents())->toBeNull();
    unlink($path);
});
