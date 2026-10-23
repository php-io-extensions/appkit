<?php

declare(strict_types=1);

require_once __DIR__ . '/../scripts/support.php';

$fixtures = __DIR__ . '/fixtures/support';

it('counts the live methods and accessors AppKit headers declare, on classes and categories', function () use ($fixtures): void {
    expect(support_counted("{$fixtures}/mini.ast"))->toBe([
        'NSButton' => [
            '+[NSButton buttonWithTitle:image:target:action:]',
            '-[NSButton highlight:]',
            '-[NSButton setButtonType:]',
            '-[NSButton setTitle:]',
            '-[NSButton title]',
        ],
        'NSString' => ['-[NSString sizeWithAttributes:]'],
    ]);
});

it('reads each class parent from the dump', function () use ($fixtures): void {
    expect(support_parents("{$fixtures}/mini.ast"))->toBe(['NSButton' => 'NSControl', 'NSMiniButton' => 'NSButton', 'NSString' => 'NSObject']);
});

it('names a member as its binding: the selector parts joined', function (): void {
    expect(support_php_name('NSTabView', '-[NSTabView insertTabViewItem:atIndex:]'))->toBe(['NSTabView', 'insertTabViewItemAtIndex'])
        ->and(support_php_name('NSButton', '+[NSButton buttonWithTitle:image:target:action:]'))->toBe(['NSButton', 'buttonWithTitleImageTargetAction'])
        ->and(support_php_name('NSButton', '-[NSButton title]'))->toBe(['NSButton', 'title']);
});

it('renders the members, counts a subclass method for its ancestor, and lists the bindings that match none', function () use ($fixtures): void {
    $md = support_render(support_counted("{$fixtures}/mini.ast"), support_bound($fixtures), 'AppKit, macOS SDK 15.0', '2026-10-22', support_parents("{$fixtures}/mini.ast"));

    expect($md)->toContain('- [x] `-[NSButton setTitle:]`')
        ->toContain('- [x] `-[NSButton highlight:]`')
        ->toContain('- [ ] `-[NSButton setButtonType:]`')
        ->toContain('## NSString (0 / 1)')
        ->toContain('3 / 6')
        ->toContain('- `NSButton::notAMember`')
        ->not->toContain('`NSMiniButton::highlight`');
});

it('computes the badge from the counts', function (): void {
    expect(support_badge('AppKit API', 604, 7361))
        ->toBe('[![AppKit API](https://img.shields.io/badge/AppKit_API-8.2%25_%28604%2F7361%29-blue?style=flat-square)](SUPPORT.md)');
});
