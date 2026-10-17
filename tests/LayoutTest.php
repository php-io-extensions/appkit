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
        ->and($child->widthAnchor())->toBeInstanceOf(NSLayoutDimension::class)
        ->and($child->heightAnchor())->toBeInstanceOf(NSLayoutDimension::class)
        ->and($child->leadingAnchor())->toBeInstanceOf(NSLayoutXAxisAnchor::class)
        ->and($child->trailingAnchor())->toBeInstanceOf(NSLayoutXAxisAnchor::class)
        ->and($child->centerXAnchor())->toBeInstanceOf(NSLayoutXAxisAnchor::class)
        ->and($child->topAnchor())->toBeInstanceOf(NSLayoutYAxisAnchor::class)
        ->and($child->bottomAnchor())->toBeInstanceOf(NSLayoutYAxisAnchor::class)
        ->and($child->centerYAnchor())->toBeInstanceOf(NSLayoutYAxisAnchor::class)
        ->and(array_map(fn (string $m): string => (string) (new ReflectionMethod(NSView::class, $m))->getReturnType(), ['widthAnchor', 'leadingAnchor', 'topAnchor']))
        ->toBe(['NSLayoutDimension', 'NSLayoutXAxisAnchor', 'NSLayoutYAxisAnchor'])
        ->and(method_exists(NSLayoutXAxisAnchor::class, 'constraintEqualToConstant'))->toBeFalse();

    $child->removeFromSuperview();
    expect($host->subviews())->toBe([]);
});

it('reads insets, colors and fonts back', function (): void {
    $insets = new NSEdgeInsets(1.0, 2.0, 3.0, 4.0);
    $color = NSColor::colorWithRedGreenBlueAlpha(0.25, 0.5, 0.75, 1.0);
    $font = NSFont::systemFontOfSizeWeight(13.0, NSFont::WEIGHT_BOLD);

    expect([$insets->top, $insets->left, $insets->bottom, $insets->right])->toBe([1.0, 2.0, 3.0, 4.0])
        ->and(fn () => new NSEdgeInsets(1.0, 2.0))->toThrow(ArgumentCountError::class)
        ->and((new ReflectionProperty(NSEdgeInsets::class, 'top'))->hasDefaultValue())->toBeFalse()
        ->and(round($color->greenComponent(), 2))->toBe(0.5)
        ->and($font->pointSize())->toBe(13.0)
        ->and(NSFont::fontWithNameSize('No Such Font 9000', 12.0))->toBeNull();
});

it('hides a view and paints its layer', function (): void {
    $view = NSView::initWithFrame(new NSRect(0, 0, 10, 10));
    $view->setHidden(true);
    expect($view->wantsLayer())->toBeFalse()
        ->and($view->layer())->toBeNull();

    $view->setWantsLayer(true);
    $view->layer()->setBackgroundColor(NSColor::colorWithRedGreenBlueAlpha(1.0, 0.0, 0.0, 0.5)->CGColor());
    $painted = NSColor::colorWithCGColor($view->layer()->backgroundColor());

    expect($view->isHidden())->toBeTrue()
        ->and($view->wantsLayer())->toBeTrue()
        ->and(round($painted->redComponent(), 2))->toBe(1.0)
        ->and(round($painted->alphaComponent(), 2))->toBe(0.5)
        ->and(method_exists($view, 'setLayerBackgroundColor'))->toBeFalse();

    $view->layer()->setBackgroundColor(null);
    expect($view->layer()->backgroundColor())->toBeNull();
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

it('reads the components of a colour as it is, and of a catalog colour once converted', function (): void {
    // A label's default text colour is the catalog colour labelColor, which has no RGB components of its own.
    $catalog = NSTextField::labelWithString('x')->textColor();

    expect(fn () => $catalog->redComponent())->toThrow(AppKitException::class, 'NSInvalidArgumentException')
        ->and($catalog->colorUsingColorSpace(NSColorSpace::sRGBColorSpace())->redComponent())->toBeFloat();
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
    $empty = NSGridCell::emptyContentView();
    $row = $grid->addRowWithViews([$label, $empty]);
    $row->setHeight(24.0);
    $grid->addRowWithViews([$empty, $empty]);
    $grid->addRowWithViews([$empty, $empty]);
    $grid->mergeCellsInHorizontalRangeVerticalRange(new NSRange(0, 2), new NSRange(1, 1));
    $grid->cellAtColumnIndexRowIndex(1, 0)->setXPlacement(NSGridCellPlacement::TRAILING);

    expect($grid->numberOfRows())->toBe(3)
        ->and($grid->numberOfColumns())->toBe(2)
        ->and($grid->cellAtColumnIndexRowIndex(0, 0)->contentView())->toBe($label)
        // AppKit itself reads a cell given emptyContentView back as nil.
        ->and($grid->cellAtColumnIndexRowIndex(1, 0)->contentView())->toBeNull()
        ->and(fn () => $grid->addRowWithViews([$label, null]))->toThrow(TypeError::class, 'must contain only NSView objects')
        ->and(fn () => $grid->removeRowAtIndex(1))->toThrow(AppKitException::class, 'merged cell');

    $grid->removeRowAtIndex(2);
    expect($grid->numberOfRows())->toBe(2);
});

it('answers the view an empty grid cell holds', function (): void {
    $empty = NSGridCell::emptyContentView();

    expect($empty)->toBeInstanceOf(NSView::class)
        ->and(NSGridCell::emptyContentView())->toBe($empty);
});

it('boxes each anchor as its native subclass', function (): void {
    $view = NSView::initWithFrame(new NSRect(0, 0, 10, 10));

    expect($view->widthAnchor())->toBeInstanceOf(NSLayoutDimension::class)
        ->and($view->heightAnchor())->toBeInstanceOf(NSLayoutDimension::class)
        ->and($view->leadingAnchor())->toBeInstanceOf(NSLayoutXAxisAnchor::class)
        ->and($view->centerXAnchor())->toBeInstanceOf(NSLayoutXAxisAnchor::class)
        ->and($view->topAnchor())->toBeInstanceOf(NSLayoutYAxisAnchor::class)
        ->and($view->bottomAnchor())->toBeInstanceOf(NSLayoutYAxisAnchor::class)
        ->and(array_map('get_parent_class', [NSLayoutDimension::class, NSLayoutXAxisAnchor::class, NSLayoutYAxisAnchor::class]))
        ->toBe([NSLayoutAnchor::class, NSLayoutAnchor::class, NSLayoutAnchor::class]);
});

it('hands a colour to Core Graphics and back', function (): void {
    $red = NSColor::colorWithRedGreenBlueAlpha(1.0, 0.0, 0.0, 1.0);
    $back = NSColor::colorWithCGColor($red->CGColor());

    expect($red->CGColor())->toBeInstanceOf(CGColor::class)
        ->and($back)->toBeInstanceOf(NSColor::class)
        ->and([$back->redComponent(), $back->greenComponent(), $back->blueComponent(), $back->alphaComponent()])->toBe([1.0, 0.0, 0.0, 1.0]);
});

it('converts a colour to another colour space', function (): void {
    $red = NSColor::colorWithRedGreenBlueAlpha(1.0, 0.0, 0.0, 1.0);
    $p3 = $red->colorUsingColorSpace(NSColorSpace::displayP3ColorSpace());

    expect($p3)->toBeInstanceOf(NSColor::class)
        ->and($p3->description())->toBe('Display P3 colorspace 0.91747 0.200369 0.138521 1');
});

it('inserts rows and columns and reads back spacing, sizes, padding and placement', function (): void {
    $grid = NSGridView::gridViewWithNumberOfColumnsRows(2, 0);
    [$a, $b, $c, $d] = array_map(fn () => NSView::initWithFrame(new NSRect(0, 0, 10, 10)), range(1, 4));
    $empty = NSGridCell::emptyContentView();
    $grid->addRowWithViews([$a, $empty]);
    $grid->insertRowAtIndexWithViews(0, [$b, $empty]);
    $grid->addColumnWithViews([$empty, $c]);
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

    $cell->setContentView($empty);
    expect($cell->contentView())->toBeNull();
    $cell->setContentView($d);
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
        ->and((new ReflectionMethod(NSLayoutDimension::class, 'constraintLessThanOrEqualToConstant'))->getDeclaringClass()->getName())->toBe('NSLayoutDimension')
        ->and(method_exists(NSLayoutAnchor::class, 'constraintGreaterThanOrEqualToConstant'))->toBeFalse();
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
    $view->setWantsLayer(true);
    $layer = $view->layer();
    $layer->setContents($image);
    $layer->setContentsGravity(kCAGravityResizeAspectFill);
    $layer->setMasksToBounds(true);

    expect($view->wantsLayer())->toBeTrue()
        ->and($layer->contents())->toBe($image)
        ->and($layer->contentsGravity())->toBe(kCAGravityResizeAspectFill)
        ->and($layer->masksToBounds())->toBeTrue()
        ->and([kCAGravityResize, kCAGravityResizeAspect, kCAGravityCenter])->toBe(['resize', 'resizeAspect', 'center']);

    $layer->setContents(null);
    expect($layer->contents())->toBeNull();
    unlink($path);
});

it('splits views, places dividers and reads them back', function (): void {
    $split = NSSplitView::initWithFrame(new NSRect(0, 0, 400, 100));
    $split->setVertical(true);
    $split->setDividerStyle(NSSplitViewDividerStyle::THIN);
    foreach ([1, 2, 3] as $i) {
        $split->addArrangedSubview(NSView::initWithFrame(new NSRect(0, 0, 100, 100)));
    }
    $split->adjustSubviews();
    $split->setPositionOfDividerAtIndex(120.0, 0);
    $views = $split->arrangedSubviews();
    $split->setHoldingPriorityForSubviewAtIndex(260.0, 0);

    expect($split->isVertical())->toBeTrue()
        ->and($split->arrangesAllSubviews())->toBeTrue()
        ->and($split->dividerStyle())->toBe(NSSplitViewDividerStyle::THIN)
        ->and($views)->toHaveCount(3)
        ->and($views[0]->frame()->width)->toBe(120.0)
        ->and($split->dividerThickness())->toBeGreaterThan(0.0)
        ->and($split->isSubviewCollapsed($views[1]))->toBeFalse()
        ->and($split->holdingPriorityForSubviewAtIndex(0))->toBe(260.0)
        ->and(fn () => $split->insertArrangedSubviewAtIndex(NSView::initWithFrame(new NSRect(0, 0, 1, 1)), 4))->toThrow(AppKitException::class, 'NSRangeException')
        ->and(NSSplitViewDidResizeSubviewsNotification)->toBe('NSSplitViewDidResizeSubviewsNotification');

    $split->removeArrangedSubview($views[2]);
    $first = NSView::initWithFrame(new NSRect(0, 0, 50, 100));
    $split->insertArrangedSubviewAtIndex($first, 0);
    expect($split->arrangedSubviews())->toHaveCount(3)
        ->and($split->arrangedSubviews()[0])->toBe($first);
});

it('holds tab view items by identifier, labels them and selects them', function (): void {
    $tabs = NSTabView::initWithFrame(new NSRect(0, 0, 200, 100));
    foreach (['one' => 'First', 'two' => 'Second'] as $id => $label) {
        $item = NSTabViewItem::initWithIdentifier($id);
        $item->setLabel($label);
        $item->setView(NSView::initWithFrame(new NSRect(0, 0, 10, 10)));
        $tabs->addTabViewItem($item);
    }
    $tabs->selectTabViewItemWithIdentifier('two');

    expect($tabs->numberOfTabViewItems())->toBe(2)
        ->and($tabs->selectedTabViewItem()->identifier())->toBe('two')
        ->and($tabs->indexOfTabViewItemWithIdentifier('two'))->toBe(1)
        ->and($tabs->indexOfTabViewItemWithIdentifier('nope'))->toBe(-1)
        ->and($tabs->tabViewItems()[0]->label())->toBe('First')
        ->and($tabs->tabViewItems()[0]->tabView())->toBe($tabs)
        ->and($tabs->tabViewItems()[0]->view())->toBeInstanceOf(NSView::class)
        ->and(fn () => $tabs->selectTabViewItemWithIdentifier('nope'))->toThrow(AppKitException::class, 'No such item');
    $tabs->removeTabViewItem(NSTabViewItem::initWithIdentifier('stray'));
    expect($tabs->numberOfTabViewItems())->toBe(2);

    $delegate = new ObjCDelegate('NSTabViewDelegate');
    $seen = [];
    $delegate->on('tabView:didSelectTabViewItem:', function (NSTabView $view, NSTabViewItem $item) use (&$seen): void { $seen[] = $item->identifier(); });
    $tabs->setDelegate($delegate);
    $tabs->selectTabViewItemWithIdentifier('one');
    $tabs->removeTabViewItem($tabs->tabViewItems()[1]);

    expect($seen)->toBe(['one'])
        ->and($tabs->numberOfTabViewItems())->toBe(1)
        ->and($tabs->delegate())->toBe($delegate);
    $tabs->setDelegate(null);
});

it('runs a local event monitor on dispatched events until it is removed', function (): void {
    $seen = 0;
    $monitor = NSEvent::addLocalMonitorForEventsMatchingMaskHandler(NSEventMask::APPLICATION_DEFINED, function (NSEvent $event) use (&$seen): ?NSEvent {
        $seen++;

        return $event;
    });
    $dispatch = function (): void {
        $this->app->postEventAtStart(NSEvent::otherEventWithTypeLocationModifierFlagsTimestampWindowNumberContextSubtypeData1Data2(NSEventType::APPLICATION_DEFINED, new NSPoint(0, 0), 0, 0.0, 0, null, 0, 0, 0), false);
        $event = $this->app->nextEventMatchingMaskUntilDateInModeDequeue(NSEventMask::APPLICATION_DEFINED, NSDate::distantFuture(), NSDefaultRunLoopMode, true);
        if ($event !== null) {
            $this->app->sendEvent($event);
        }
    };

    $dispatch();
    expect($seen)->toBe(1);

    NSEvent::removeMonitor($monitor);
    $dispatch();
    expect($seen)->toBe(1)
        ->and(fn () => NSEvent::removeMonitor($monitor))->toThrow(ValueError::class, 'already removed')
        ->and(fn () => NSEvent::removeMonitor(NSView::initWithFrame(new NSRect(0, 0, 1, 1))))->toThrow(AppKitException::class)
        ->and(fn () => NSEvent::addLocalMonitorForEventsMatchingMaskHandler(NSEventMask::LEFT_MOUSE_UP, 'no_such_function'))->toThrow(TypeError::class);
});

it('hands AppKit a monitor\'s null as nil and its own event for a return with no NSEvent form', function (): void {
    // Two monitors answering alike: the one AppKit asks first decides whether the other is asked at all.
    $answer = null;
    $calls = 0;
    $monitor = function (NSEvent $event) use (&$answer, &$calls): mixed {
        $calls++;

        return $answer;
    };
    $first = NSEvent::addLocalMonitorForEventsMatchingMaskHandler(NSEventMask::APPLICATION_DEFINED, $monitor);
    $second = NSEvent::addLocalMonitorForEventsMatchingMaskHandler(NSEventMask::APPLICATION_DEFINED, $monitor);
    $dispatch = function (): void {
        $this->app->postEventAtStart(NSEvent::otherEventWithTypeLocationModifierFlagsTimestampWindowNumberContextSubtypeData1Data2(NSEventType::APPLICATION_DEFINED, new NSPoint(0, 0), 0, 0.0, 0, null, 0, 0, 0), false);
        $event = $this->app->nextEventMatchingMaskUntilDateInModeDequeue(NSEventMask::APPLICATION_DEFINED, NSDate::distantFuture(), NSDefaultRunLoopMode, true);
        if ($event !== null) {
            $this->app->sendEvent($event);
        }
    };

    // A return with no NSEvent form hands AppKit its own event, so the second monitor is asked too; nil stops there.
    $answer = 'not an event';
    $dispatch();
    $withOwnEvent = $calls;
    $calls = 0;
    $answer = null;
    $dispatch();
    $withNil = $calls;

    NSEvent::removeMonitor($first);
    NSEvent::removeMonitor($second);

    expect([$withOwnEvent, $withNil])->toBe([2, 1]);
});
