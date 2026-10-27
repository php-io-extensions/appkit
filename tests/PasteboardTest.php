<?php

declare(strict_types=1);

// The test writes the user's clipboard: it keeps the text there and puts it back.

beforeEach(function (): void {
    $this->kept = NSPasteboard::generalPasteboard()->stringForType(NSPasteboardTypeString);
});

afterEach(function (): void {
    $board = NSPasteboard::generalPasteboard();
    $board->clearContents();
    if (! is_null($this->kept)) {
        $board->setStringForType($this->kept, NSPasteboardTypeString);
    }
});

it('puts text on the general pasteboard and reads it back', function (): void {
    $board = NSPasteboard::generalPasteboard();
    $before = $board->clearContents();
    $text = 'c7 ' . uniqid();

    expect($board->setStringForType($text, NSPasteboardTypeString))->toBeTrue()
        ->and($board->stringForType(NSPasteboardTypeString))->toBe($text)
        ->and($board->clearContents())->toBeGreaterThan($before);
});

it('reports the type it holds and counts each change', function (): void {
    $board = NSPasteboard::generalPasteboard();
    $before = $board->changeCount();
    $board->clearContents();
    $board->setStringForType('x', NSPasteboardTypeString);

    expect($board->availableTypeFromArray([NSPasteboardTypeString]))->toBe(NSPasteboardTypeString)
        ->and($board->changeCount())->toBeGreaterThan($before);

    $board->clearContents();
    expect($board->availableTypeFromArray([NSPasteboardTypeString]))->toBeNull();
});
