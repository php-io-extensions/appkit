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

    expect($picker->dateValue()->timeIntervalSince1970())->toBe(86400.0);
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
