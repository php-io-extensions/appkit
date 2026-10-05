<?php

declare(strict_types=1);

/*
 * Every stub declaration is what the loaded extension exposes: the stubs are
 * the source of truth, so a binding missing from the build fails here.
 */

function stubDeclarations(): array
{
    $declared = [];

    foreach (glob(__DIR__ . '/../stubs/*.stub.php') as $stub) {
        $class = null;
        foreach (file($stub) as $line) {
            if (preg_match('/^(?:final\s+)?(?:class|enum)\s+(\w+)/', $line, $m)) {
                $class = $m[1];
                $declared[$class] ??= [];
            } elseif ($class !== null && preg_match('/^\s+(?:public|private)\s+(?:static\s+)?function\s+(\w+)/', $line, $m)) {
                $declared[$class][] = $m[1];
            }
        }
    }

    return $declared;
}

it('exposes every class, enum and method the stubs declare', function (): void {
    foreach (stubDeclarations() as $class => $methods) {
        expect(class_exists($class) || enum_exists($class))->toBeTrue("{$class} is missing");

        foreach ($methods as $method) {
            expect(method_exists($class, $method))->toBeTrue("{$class}::{$method}() is missing");
        }
    }
});

it('reports its version', function (): void {
    expect(phpversion('appkit'))->toBe('0.10.1');
});

it('keeps the native class hierarchy', function (): void {
    expect(get_parent_class(NSApplication::class))->toBe(NSResponder::class)
        ->and(get_parent_class(NSResponder::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSEvent::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSDate::class))->toBe(NSObject::class)
        ->and(get_parent_class(CFRunLoop::class))->toBe(CFType::class)
        ->and(get_parent_class(CFRunLoopSource::class))->toBe(CFType::class)
        ->and(get_parent_class(CFFileDescriptor::class))->toBe(CFType::class)
        ->and(get_parent_class(NSWindow::class))->toBe(NSResponder::class)
        ->and(get_parent_class(NSView::class))->toBe(NSResponder::class)
        ->and(get_parent_class(NSLayoutAnchor::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSLayoutConstraint::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSColor::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSFont::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSFontManager::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSStackView::class))->toBe(NSView::class)
        ->and(get_parent_class(NSGridView::class))->toBe(NSView::class)
        ->and(get_parent_class(NSGridCell::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSGridRow::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSGridColumn::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSControl::class))->toBe(NSView::class)
        ->and(get_parent_class(NSTextField::class))->toBe(NSControl::class)
        ->and(get_parent_class(NSSecureTextField::class))->toBe(NSTextField::class)
        ->and(get_parent_class(NSButton::class))->toBe(NSControl::class)
        ->and(get_parent_class(NSSwitch::class))->toBe(NSControl::class)
        ->and(get_parent_class(NSSlider::class))->toBe(NSControl::class)
        ->and(get_parent_class(NSPopUpButton::class))->toBe(NSControl::class)
        ->and(get_parent_class(NSDatePicker::class))->toBe(NSControl::class)
        ->and(get_parent_class(NSTimeZone::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSProgressIndicator::class))->toBe(NSView::class)
        ->and(get_parent_class(NSImage::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSImageView::class))->toBe(NSControl::class)
        ->and(get_parent_class(NSBox::class))->toBe(NSView::class)
        ->and(get_parent_class(NSScrollView::class))->toBe(NSView::class)
        ->and(get_parent_class(NSTextView::class))->toBe(NSView::class)
        ->and(get_parent_class(NSTextContainer::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSLayoutManager::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSIndexSet::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSTableColumn::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSTableHeaderView::class))->toBe(NSView::class)
        ->and(get_parent_class(NSTableView::class))->toBe(NSControl::class)
        ->and(get_parent_class(NSMenu::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSMenuItem::class))->toBe(NSObject::class)
        ->and(get_parent_class(ObjCDelegate::class))->toBe(NSObject::class)
        ->and(get_parent_class(ObjCObserver::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSNotification::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSNotificationCenter::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSOperationQueue::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSCell::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSURL::class))->toBe(NSObject::class)
        ->and(get_parent_class(AVPlayerItem::class))->toBe(NSObject::class)
        ->and(get_parent_class(AVPlayer::class))->toBe(NSObject::class)
        ->and(get_parent_class(AVPlayerView::class))->toBe(NSView::class)
        ->and(get_parent_class(AppKitException::class))->toBe(RuntimeException::class);
});

it('cannot construct native wrappers from PHP', function (string $class): void {
    expect(fn () => new $class())->toThrow(Error::class);
})->with([NSObject::class, NSApplication::class, NSEvent::class, NSDate::class, CFType::class, CFRunLoop::class, CFFileDescriptor::class, NSWindow::class, NSView::class, NSMenu::class, NSMenuItem::class, NSLayoutAnchor::class, NSLayoutConstraint::class, NSColor::class, NSFont::class, NSStackView::class, NSGridView::class, NSGridCell::class, NSGridRow::class, NSGridColumn::class, NSControl::class, NSTextField::class, NSButton::class, NSImage::class, NSScrollView::class, NSTextView::class, NSTableView::class, NSTableColumn::class, NSIndexSet::class, NSNotification::class, NSNotificationCenter::class, NSURL::class, AVPlayerItem::class, AVPlayer::class, AVPlayerView::class, NSOperationQueue::class, NSCell::class]);

it('refuses to clone or serialize a native wrapper', function (): void {
    $date = NSDate::date();

    expect(fn () => clone $date)->toThrow(Error::class)
        ->and(fn () => serialize($date))->toThrow(Exception::class);
});
