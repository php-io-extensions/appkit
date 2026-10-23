<?php

declare(strict_types=1);

beforeEach(function (): void {
    $this->app = NSApplication::sharedApplication();
});

it('fires a button action into PHP and reads its state', function (): void {
    $hits = 0;
    $target = new ObjCTarget(function () use (&$hits): void {
        $hits++;
    });
    $button = NSButton::buttonWithTitleTargetAction('Go', $target, ObjCTarget::ACTION);
    $button->setButtonType(NSButtonType::PUSH_ON_PUSH_OFF);
    $button->setState(NSControlStateValue::ON);
    $button->performClick(null);

    expect($hits)->toBe(1)
        ->and($button->title())->toBe('Go')
        ->and($button->state())->toBe(NSControlStateValue::OFF)
        ->and($button->isEnabled())->toBeTrue()
        ->and($button->target())->toBe($target)
        ->and($button->action())->toBe('action:');

    $button->setTarget(null);
    $button->setAction(null);
    expect($button->target())->toBeNull()
        ->and($button->action())->toBeNull();
});

it('keeps a button key equivalent', function (): void {
    $button = NSButton::buttonWithTitleTargetAction('OK', null, null);
    $button->setKeyEquivalent("\r");

    expect($button->keyEquivalent())->toBe("\r");
});

it('reads whether a view or a view above it is hidden', function (): void {
    $outer = NSView::initWithFrame(new NSRect(0, 0, 100, 100));
    $inner = NSView::initWithFrame(new NSRect(0, 0, 10, 10));
    $outer->addSubview($inner);

    expect($inner->isHiddenOrHasHiddenAncestor())->toBeFalse();

    $outer->setHidden(true);
    expect($inner->isHiddenOrHasHiddenAncestor())->toBeTrue()
        ->and($inner->isHidden())->toBeFalse();
});

it('makes a checkbox that toggles its state', function (): void {
    $box = NSButton::checkboxWithTitleTargetAction('Tick', null, null);
    $box->setState(NSControlStateValue::ON);
    $box->setContentTintColor(NSColor::colorWithRedGreenBlueAlpha(0.0, 0.0, 1.0, 1.0));

    expect($box->state())->toBe(NSControlStateValue::ON)
        ->and(round($box->contentTintColor()->blueComponent(), 2))->toBe(1.0);
});

it('edits a text field and reads its control values', function (): void {
    $field = NSTextField::textFieldWithString('a');
    $field->setStringValue('b');
    $field->setPlaceholderString('type here');
    $field->setEditable(false);
    $field->setBezeled(false);
    $field->setDrawsBackground(false);
    $field->setTextColor(NSColor::colorWithRedGreenBlueAlpha(1.0, 0.0, 0.0, 1.0));
    $field->setBackgroundColor(NSColor::colorWithRedGreenBlueAlpha(0.0, 1.0, 0.0, 1.0));
    $field->setAlignment(NSTextAlignment::CENTER);
    $field->setFont(NSFont::systemFontOfSizeWeight(11.0, NSFont::WEIGHT_REGULAR));
    $field->setLineBreakMode(NSLineBreakMode::TRUNCATING_TAIL);
    $field->setMaximumNumberOfLines(2);
    $field->setPreferredMaxLayoutWidth(120.0);
    $field->setDelegate($delegate = new ObjCDelegate('NSTextFieldDelegate'));
    $field->sizeToFit();

    expect($field->stringValue())->toBe('b')
        ->and($field->placeholderString())->toBe('type here')
        ->and($field->isEditable())->toBeFalse()
        ->and($field->isBezeled())->toBeFalse()
        ->and($field->drawsBackground())->toBeFalse()
        ->and(round($field->textColor()->redComponent(), 2))->toBe(1.0)
        ->and(round($field->backgroundColor()->greenComponent(), 2))->toBe(1.0)
        ->and($field->alignment())->toBe(NSTextAlignment::CENTER)
        ->and($field->font()->pointSize())->toBe(11.0)
        ->and($field->lineBreakMode())->toBe(NSLineBreakMode::TRUNCATING_TAIL)
        ->and($field->maximumNumberOfLines())->toBe(2)
        ->and($field->preferredMaxLayoutWidth())->toBe(120.0)
        ->and($field->delegate())->toBe($delegate)
        ->and($field->frame()->width)->toBeGreaterThan(0.0);

    $label = NSTextField::labelWithString('read me');
    expect($label->stringValue())->toBe('read me')
        ->and($label->isEditable())->toBeFalse();
});

it('holds a secret in a secure text field', function (): void {
    $secret = NSSecureTextField::initWithFrame(new NSRect(0, 0, 100, 22));
    $secret->setStringValue('hunter2');

    expect($secret)->toBeInstanceOf(NSTextField::class)
        ->and($secret->stringValue())->toBe('hunter2');
});

it('flips a switch', function (): void {
    $switch = NSSwitch::initWithFrame(new NSRect(0, 0, 40, 20));
    $switch->setState(NSControlStateValue::ON);

    expect($switch->state())->toBe(NSControlStateValue::ON);
});

it('slides a value between its bounds', function (): void {
    $target = new ObjCTarget(fn () => null);
    $slider = NSSlider::sliderWithValueMinValueMaxValueTargetAction(5.0, 0.0, 10.0, $target, ObjCTarget::ACTION);
    $slider->setDoubleValue(7.5);
    $slider->setMinValue(1.0);
    $slider->setMaxValue(9.0);
    $slider->setContinuous(true);
    $slider->setIntegerValue(3);

    expect($slider->doubleValue())->toBe(3.0)
        ->and($slider->integerValue())->toBe(3)
        ->and($slider->minValue())->toBe(1.0)
        ->and($slider->maxValue())->toBe(9.0)
        ->and($slider->isContinuous())->toBeTrue();
});

it('lists and selects pop-up items', function (): void {
    $popup = NSPopUpButton::initWithFramePullsDown(new NSRect(0, 0, 100, 22), false);
    $popup->addItemWithTitle('a');
    $popup->addItemsWithTitles(['b', 'c']);
    $popup->selectItemAtIndex(1);

    expect($popup->numberOfItems())->toBe(3)
        ->and($popup->indexOfSelectedItem())->toBe(1)
        ->and($popup->titleOfSelectedItem())->toBe('b')
        ->and($popup->itemTitles())->toBe(['a', 'b', 'c']);

    $popup->removeAllItems();
    expect($popup->numberOfItems())->toBe(0)
        ->and($popup->titleOfSelectedItem())->toBeNull();
});

it('picks a date', function (): void {
    $picker = NSDatePicker::initWithFrame(new NSRect(0, 0, 200, 22));
    $picker->setDatePickerStyle(NSDatePickerStyle::TEXT_FIELD);
    $picker->setDatePickerElements(NSDatePicker::ELEMENT_YEAR_MONTH_DAY);
    $picker->setDatePickerMode(NSDatePickerMode::SINGLE);
    $picker->setDateValue(NSDate::dateWithTimeIntervalSince1970(86400.0));

    expect($picker->dateValue()->timeIntervalSince1970())->toBe(86400.0)
        ->and([NSDatePicker::ELEMENT_HOUR_MINUTE, NSDatePicker::ELEMENT_HOUR_MINUTE_SECOND, NSDatePicker::ELEMENT_TIME_ZONE, NSDatePicker::ELEMENT_YEAR_MONTH, NSDatePicker::ELEMENT_YEAR_MONTH_DAY, NSDatePicker::ELEMENT_ERA])
        ->toBe([0x000c, 0x000e, 0x0010, 0x00c0, 0x00e0, 0x0100]);
});

it('animates a progress indicator', function (): void {
    $bar = NSProgressIndicator::initWithFrame(new NSRect(0, 0, 100, 20));
    $bar->setStyle(NSProgressIndicatorStyle::BAR);
    $bar->setMinValue(0.0);
    $bar->setMaxValue(50.0);
    $bar->setDoubleValue(25.0);
    $bar->setIndeterminate(true);
    $bar->setDisplayedWhenStopped(false);
    $bar->startAnimation(null);
    $bar->stopAnimation(null);

    expect($bar->minValue())->toBe(0.0)
        ->and($bar->maxValue())->toBe(50.0)
        ->and($bar->doubleValue())->toBe(25.0)
        ->and($bar->isIndeterminate())->toBeTrue();

    $bar->setIndeterminate(false);
    expect($bar->isIndeterminate())->toBeFalse();
});

it('loads an image from disk into an image view', function (): void {
    $path = sys_get_temp_dir().'/appkit-one-pixel.png';
    file_put_contents($path, base64_decode('iVBORw0KGgoAAAANSUhEUgAAAAEAAAABCAYAAAAfFcSJAAAADUlEQVR42mNkYPhfDwAChwGA60e6kgAAAABJRU5ErkJggg=='));
    $image = NSImage::initWithContentsOfFile($path);
    $view = NSImageView::imageViewWithImage($image);
    $view->setImageScaling(NSImageScaling::PROPORTIONALLY_UP_OR_DOWN);
    $empty = NSImageView::initWithFrame(new NSRect(0, 0, 10, 10));
    $empty->setImage($image);
    $empty->setImage(null);

    expect($image->size()->width)->toBe(1.0)
        ->and($view->image())->toBe($image)
        ->and($view->imageScaling())->toBe(NSImageScaling::PROPORTIONALLY_UP_OR_DOWN)
        ->and($empty->image())->toBeNull()
        ->and(NSImage::initWithContentsOfFile('/nope.png'))->toBeNull();
    unlink($path);
});

it('draws a box as a separator', function (): void {
    $box = NSBox::initWithFrame(new NSRect(0, 0, 100, 1));
    $box->setBoxType(NSBoxType::SEPARATOR);

    expect($box->boxType())->toBe(NSBoxType::SEPARATOR);
});

it('scrolls a text view', function (): void {
    $scroll = NSTextView::scrollableTextView();
    $text = $scroll->documentView();
    $text->setString('hello');
    $text->setEditable(false);
    $text->setFont(NSFont::systemFontOfSizeWeight(14.0, NSFont::WEIGHT_MEDIUM));
    $text->setTextColor(NSColor::colorWithRedGreenBlueAlpha(0.0, 0.0, 1.0, 1.0));
    $text->setDelegate($delegate = new ObjCDelegate('NSTextViewDelegate'));
    $scroll->setHasVerticalScroller(true);
    $scroll->setHasHorizontalScroller(false);
    $scroll->setDrawsBackground(false);

    expect($text)->toBeInstanceOf(NSTextView::class)
        ->and($text->string())->toBe('hello')
        ->and($text->isEditable())->toBeFalse()
        ->and($text->font()->pointSize())->toBe(14.0)
        ->and(round($text->textColor()->blueComponent(), 2))->toBe(1.0)
        ->and($text->delegate())->toBe($delegate)
        ->and($scroll->hasVerticalScroller())->toBeTrue()
        ->and($scroll->hasHorizontalScroller())->toBeFalse()
        ->and($scroll->drawsBackground())->toBeFalse()
        ->and($scroll->contentSize()->width)->toBeGreaterThanOrEqual(0.0);

    $other = NSScrollView::initWithFrame(new NSRect(0, 0, 50, 50));
    $other->setDocumentView(NSTextView::initWithFrame(new NSRect(0, 0, 50, 50)));
    expect($other->documentView())->toBeInstanceOf(NSTextView::class);
});

it('sends a control action to a target', function (): void {
    $hits = 0;
    $target = new ObjCTarget(function () use (&$hits): void {
        $hits++;
    });
    $slider = NSSlider::sliderWithValueMinValueMaxValueTargetAction(1.0, 0.0, 2.0, $target, ObjCTarget::ACTION);

    expect($slider->sendActionTo(ObjCTarget::ACTION, $target))->toBeTrue()
        ->and($slider->sendActionTo($slider->action(), $slider->target()))->toBeTrue()
        ->and($hits)->toBe(2)
        ->and($slider->sendActionTo(null, $target))->toBeFalse();
});

it('keeps duplicate titles when items go through the pop-up menu', function (): void {
    $popup = NSPopUpButton::initWithFramePullsDown(new NSRect(0, 0, 100, 22), false);
    foreach (['a', 'a', 'b'] as $title) {
        $popup->menu()->addItem(NSMenuItem::initWithTitleActionKeyEquivalent($title, null, ''));
    }
    $popup->selectItemAtIndex(1);

    expect($popup->numberOfItems())->toBe(3)
        ->and($popup->itemTitles())->toBe(['a', 'a', 'b'])
        ->and($popup->indexOfSelectedItem())->toBe(1);
});

it('shows a date picker in a named time zone', function (): void {
    $zone = NSTimeZone::timeZoneWithName('Pacific/Auckland');
    $picker = NSDatePicker::initWithFrame(new NSRect(0, 0, 200, 22));
    $picker->setTimeZone($zone);

    expect($zone->name())->toBe('Pacific/Auckland')
        ->and($picker->timeZone()->name())->toBe('Pacific/Auckland')
        ->and(NSTimeZone::timeZoneWithName('Nowhere/Nothing'))->toBeNull();
});

it('paints a text view and a table view background', function (): void {
    $text = NSTextView::initWithFrame(new NSRect(0, 0, 50, 50));
    $table = NSTableView::initWithFrame(new NSRect(0, 0, 50, 50));
    $red = NSColor::colorWithRedGreenBlueAlpha(1.0, 0.0, 0.0, 1.0);
    $text->setBackgroundColor($red);
    $text->setDrawsBackground(false);
    $table->setBackgroundColor($red);

    expect(round($text->backgroundColor()->redComponent(), 2))->toBe(1.0)
        ->and($text->drawsBackground())->toBeFalse()
        ->and(round($table->backgroundColor()->redComponent(), 2))->toBe(1.0);
});

it('measures laid-out text through the layout manager', function (): void {
    $text = NSTextView::initWithFrame(new NSRect(0, 0, 200, 10));
    $text->setString("one\ntwo\nthree");
    $manager = $text->layoutManager();
    $container = $text->textContainer();
    $manager->ensureLayoutForTextContainer($container);

    expect($manager)->toBeInstanceOf(NSLayoutManager::class)
        ->and($container)->toBeInstanceOf(NSTextContainer::class)
        ->and($manager->usedRectForTextContainer($container)->height)->toBeGreaterThan(30.0)
        ->and($text->textContainerInset()->height)->toBeGreaterThanOrEqual(0.0);
});

it('carries a link and a font in an attributed string that a selectable label shows', function (): void {
    $url = NSURL::URLWithString('https://example.com/docs');
    $font = NSFont::systemFontOfSizeWeight(15.0, NSFont::WEIGHT_REGULAR);
    $text = NSAttributedString::initWithStringAttributes('the docs', [NSLinkAttributeName => $url, NSFontAttributeName => $font]);
    $label = NSTextField::labelWithAttributedString($text);
    $before = [$label->isSelectable(), $label->allowsEditingTextAttributes()];
    $label->setSelectable(true);
    $label->setAllowsEditingTextAttributes(true);
    $label->setAttributedStringValue(NSAttributedString::initWithStringAttributes('docs', [NSLinkAttributeName => 'https://example.com/a b']));
    $shown = $label->attributedStringValue();

    expect([NSLinkAttributeName, NSFontAttributeName])->toBe(['NSLink', 'NSFont'])
        ->and($url->absoluteString())->toBe('https://example.com/docs')
        ->and([$text->string(), $text->length()])->toBe(['the docs', 8])
        ->and($text->attributeAtIndexEffectiveRange(NSLinkAttributeName, 0)[0]->absoluteString())->toBe('https://example.com/docs')
        ->and($text->attributeAtIndexEffectiveRange(NSFontAttributeName, 7)[0]->pointSize())->toBe(15.0)
        ->and($text->attributeAtIndexEffectiveRange('NSVenusianAbsent', 0)[0])->toBeNull()
        ->and(method_exists($text, 'attributeAtIndex'))->toBeFalse()
        ->and($before)->toBe([false, false])
        ->and([$label->isSelectable(), $label->allowsEditingTextAttributes(), $label->isEditable()])->toBe([true, true, false])
        ->and($shown->string())->toBe('docs')
        ->and($shown->attributeAtIndexEffectiveRange(NSLinkAttributeName, 0)[0])->toBe('https://example.com/a b')
        ->and(fn () => $text->attributeAtIndexEffectiveRange(NSLinkAttributeName, 99))->toThrow(AppKitException::class)
        ->and(fn () => NSAttributedString::initWithStringAttributes('x', ['NSLink' => []]))->toThrow(TypeError::class);
});

it('aligns attributed text through a paragraph style', function (): void {
    $style = NSMutableParagraphStyle::init();
    $natural = $style->alignment();
    $style->setAlignment(NSTextAlignment::CENTER);
    $label = NSTextField::labelWithAttributedString(NSAttributedString::initWithStringAttributes('docs', [NSParagraphStyleAttributeName => $style]));
    $label->setSelectable(true);
    $label->setAllowsEditingTextAttributes(true);
    $shown = $label->attributedStringValue()->attributeAtIndexEffectiveRange(NSParagraphStyleAttributeName, 0)[0];

    expect(NSParagraphStyleAttributeName)->toBe('NSParagraphStyle')
        ->and($natural)->toBe(NSTextAlignment::NATURAL)
        ->and($style)->toBeInstanceOf(NSParagraphStyle::class)
        ->and($style->alignment())->toBe(NSTextAlignment::CENTER)
        ->and($shown)->toBeInstanceOf(NSParagraphStyle::class)
        ->and($shown->alignment())->toBe(NSTextAlignment::CENTER);
});

it('has the shared workspace, which opens URLs', function (): void {
    expect(NSWorkspace::sharedWorkspace())->toBeInstanceOf(NSWorkspace::class)
        ->and(NSWorkspace::sharedWorkspace())->toBe(NSWorkspace::sharedWorkspace())
        ->and(method_exists(NSWorkspace::class, 'openURL'))->toBeTrue();
});

it('styles a text view\'s storage with colour attributes and text blocks and reads them back', function (): void {
    $text = NSTextView::scrollableTextView()->documentView();
    $text->setString("one\ntwo\nthree");
    $storage = $text->textStorage();
    $red = NSColor::colorWithRedGreenBlueAlpha(1.0, 0.0, 0.0, 1.0);
    $block = NSTextBlock::init();
    $block->setBackgroundColor($red);
    $block->setValueTypeForDimension(100.0, NSTextBlockValueType::PERCENTAGE_VALUE_TYPE, NSTextBlockDimension::WIDTH);
    $style = NSMutableParagraphStyle::init();
    $style->setTextBlocks([$block]);

    $storage->beginEditing();
    $storage->addAttributeValueRange(NSForegroundColorAttributeName, $red, new NSRange(4, 3));
    $storage->addAttributeValueRange(NSBackgroundColorAttributeName, $red, new NSRange(0, 1));
    $storage->addAttributeValueRange(NSParagraphStyleAttributeName, $style, new NSRange(8, 5));
    $storage->endEditing();
    $blocks = $storage->attributeAtIndexEffectiveRange(NSParagraphStyleAttributeName, 8)[0]->textBlocks();

    expect($storage)->toBeInstanceOf(NSTextStorage::class)
        ->and($storage)->toBeInstanceOf(NSMutableAttributedString::class)
        ->and([NSForegroundColorAttributeName, NSBackgroundColorAttributeName])->toBe(['NSColor', 'NSBackgroundColor'])
        ->and(round($storage->attributeAtIndexEffectiveRange(NSForegroundColorAttributeName, 5)[0]->redComponent(), 2))->toBe(1.0)
        ->and($storage->attributeAtIndexEffectiveRange(NSBackgroundColorAttributeName, 1)[0])->toBeNull()
        ->and($blocks)->toHaveCount(1)
        ->and(round($blocks[0]->backgroundColor()->redComponent(), 2))->toBe(1.0)
        ->and($blocks[0]->valueForDimension(NSTextBlockDimension::WIDTH))->toBe(100.0)
        ->and($blocks[0]->valueTypeForDimension(NSTextBlockDimension::WIDTH))->toBe(NSTextBlockValueType::PERCENTAGE_VALUE_TYPE)
        ->and(NSTextBlockValueType::ABSOLUTE_VALUE_TYPE->value)->toBe(0);

    $storage->removeAttributeRange(NSBackgroundColorAttributeName, new NSRange(0, $storage->length()));
    $storage->setAttributedString(NSAttributedString::initWithStringAttributes('plain', []));
    expect($storage->attributeAtIndexEffectiveRange(NSBackgroundColorAttributeName, 0)[0])->toBeNull()
        ->and($storage->attributeAtIndexEffectiveRange(NSParagraphStyleAttributeName, 0)[0])->toBeNull()
        ->and($text->string())->toBe('plain')
        ->and(fn () => $storage->addAttributeValueRange(NSForegroundColorAttributeName, $red, new NSRange(3, 9)))->toThrow(AppKitException::class, 'NSRangeException')
        ->and(fn () => $style->setTextBlocks(['x']))->toThrow(TypeError::class, 'NSTextBlock');
});

it('selects in a text view, finds a glyph\'s rect and scrolls its clip view', function (): void {
    $scroll = NSTextView::scrollableTextView();
    $scroll->setFrame(new NSRect(0, 0, 200, 100));
    $text = $scroll->documentView();
    $text->setString(implode("\n", array_map(fn (int $i): string => "line {$i}", range(1, 200))));
    $text->setSelectedRange(new NSRange(5, 3));
    $manager = $text->layoutManager();
    $container = $text->textContainer();
    $manager->ensureLayoutForTextContainer($container);
    [$glyphs, $actual] = $manager->glyphRangeForCharacterRangeActualCharacterRange(new NSRange(700, 1));
    $rect = $manager->boundingRectForGlyphRangeInTextContainer($glyphs, $container);
    $clip = $scroll->contentView();
    $clip->setPostsBoundsChangedNotifications(true);
    $moved = 0;
    $token = NSNotificationCenter::defaultCenter()->addObserverForNameObjectQueueUsingBlock(NSViewBoundsDidChangeNotification, $clip, null, function () use (&$moved): void { $moved++; });
    $clip->scrollToPoint(new NSPoint(0.0, 300.0));
    $scroll->reflectScrolledClipView($clip);
    NSNotificationCenter::defaultCenter()->removeObserver($token);

    expect([$text->selectedRange()->location, $text->selectedRange()->length])->toBe([5, 3])
        ->and($glyphs)->toBeInstanceOf(NSRange::class)
        ->and([$actual->location, $actual->length])->toBe([700, 1])
        ->and(fn () => new NSRange(1))->toThrow(ArgumentCountError::class)
        ->and((new ReflectionProperty(NSRange::class, 'location'))->hasDefaultValue())->toBeFalse()
        ->and($rect->y)->toBeGreaterThan(100.0)
        ->and($clip)->toBeInstanceOf(NSClipView::class)
        ->and($clip->postsBoundsChangedNotifications())->toBeTrue()
        ->and($clip->bounds()->y)->toBeGreaterThan(0.0)
        ->and($scroll->documentVisibleRect()->y)->toBe($clip->bounds()->y)
        ->and($moved)->toBeGreaterThan(0)
        ->and(NSViewBoundsDidChangeNotification)->toBe('NSViewBoundsDidChangeNotification');

    // AppKit clamps a selection past the end to the end of the text.
    $length = strlen($text->string());
    $text->setSelectedRange(new NSRange(5000, 1));
    expect([$text->selectedRange()->location, $text->selectedRange()->length])->toBe([$length, 0]);
    $text->scrollRangeToVisible(new NSRange(0, 1));
});

it('turns a text view\'s wrapping off through its container and resizing, and makes the monospaced system font', function (): void {
    $text = NSTextView::scrollableTextView()->documentView();
    $container = $text->textContainer();
    $container->setWidthTracksTextView(false);
    $container->setSize(new NSSize(1.0e7, 1.0e7));
    $text->setHorizontallyResizable(true);
    $text->setMaxSize(new NSSize(1.0e7, 1.0e7));
    $font = NSFont::monospacedSystemFontOfSizeWeight(12.0, NSFont::WEIGHT_REGULAR);
    $text->layoutManager()->setAllowsNonContiguousLayout(true);

    expect($container->widthTracksTextView())->toBeFalse()
        ->and($text->layoutManager()->allowsNonContiguousLayout())->toBeTrue()
        ->and($container->size()->width)->toBe(1.0e7)
        ->and($text->isHorizontallyResizable())->toBeTrue()
        ->and($text->maxSize()->height)->toBe(1.0e7)
        ->and($font->pointSize())->toBe(12.0)
        ->and($font->familyName())->not->toBeNull();
});

it('reads an attribute with the run it covers', function (): void {
    $storage = NSTextView::scrollableTextView()->documentView()->textStorage();
    $storage->setAttributedString(NSAttributedString::initWithStringAttributes('one two three', []));
    $blue = NSColor::colorWithRedGreenBlueAlpha(0.0, 0.0, 1.0, 1.0);
    $storage->addAttributeValueRange('VenusianMark', $blue, new NSRange(4, 3));

    [$value, $run] = $storage->attributeAtIndexEffectiveRange('VenusianMark', 5);
    [$before, $gap] = $storage->attributeAtIndexEffectiveRange('VenusianMark', 0);

    expect(round($value->blueComponent(), 2))->toBe(1.0)
        ->and([$run->location, $run->length])->toBe([4, 3])
        ->and($before)->toBeNull()
        ->and([$gap->location, $gap->length])->toBe([0, 4])
        ->and(fn () => $storage->attributeAtIndexEffectiveRange('VenusianMark', 13))->toThrow(AppKitException::class, 'NSRangeException')
        // -1 reaches AppKit as NSUIntegerMax, past the end.
        ->and(fn () => $storage->attributeAtIndexEffectiveRange('VenusianMark', -1))->toThrow(AppKitException::class, 'NSRangeException');
});

it('refuses a colour attribute value of another class, and passes the other attributes through', function (): void {
    $storage = NSTextView::scrollableTextView()->documentView()->textStorage();
    $storage->setAttributedString(NSAttributedString::initWithStringAttributes('styled', []));
    $red = NSColor::colorWithRedGreenBlueAlpha(1.0, 0.0, 0.0, 1.0);
    $font = NSFont::systemFontOfSizeWeight(12.0, NSFont::WEIGHT_REGULAR);
    $storage->addAttributeValueRange('VenusianAnything', $font, new NSRange(0, 1));
    $plain = NSAttributedString::initWithStringAttributes('x', ['VenusianAnything' => $red]);

    expect(fn () => $storage->addAttributeValueRange(NSForegroundColorAttributeName, $font, new NSRange(0, 1)))
        ->toThrow(TypeError::class, 'value for NSForegroundColorAttributeName must be an NSColor, NSFont given')
        ->and(NSAttributedString::initWithStringAttributes('x', [NSParagraphStyleAttributeName => $red])->attributeAtIndexEffectiveRange(NSParagraphStyleAttributeName, 0)[0])
        ->toBe($red)
        ->and(NSAttributedString::initWithStringAttributes('x', [NSFontAttributeName => $red])->attributeAtIndexEffectiveRange(NSFontAttributeName, 0)[0])
        ->toBe($red)
        ->and(NSAttributedString::initWithStringAttributes('x', [NSLinkAttributeName => $red])->attributeAtIndexEffectiveRange(NSLinkAttributeName, 0)[0])
        ->toBe($red)
        ->and(fn () => NSAttributedString::initWithStringAttributes('x', [NSForegroundColorAttributeName => 'red']))
        ->toThrow(TypeError::class, 'must be an NSColor, string given')
        ->and(fn () => NSAttributedString::initWithStringAttributes('x', [NSBackgroundColorAttributeName => 'red']))
        ->toThrow(TypeError::class, 'value for NSBackgroundColorAttributeName must be an NSColor, string given')
        ->and($storage->attributeAtIndexEffectiveRange('VenusianAnything', 0)[0]->pointSize())->toBe(12.0)
        ->and(round($plain->attributeAtIndexEffectiveRange('VenusianAnything', 0)[0]->redComponent(), 2))->toBe(1.0);
});
