<?php

declare(strict_types=1);

// The spec's rule for ext tests: dialogs and panels are made and set, but not shown.

beforeEach(function (): void {
    NSApplication::sharedApplication();
});

it('sets and reads back the text of an alert', function (): void {
    $alert = NSAlert::init();
    $alert->setMessageText('Save changes?');
    $alert->setInformativeText('Two files');

    expect($alert)->toBeInstanceOf(NSAlert::class)
        ->and($alert->messageText())->toBe('Save changes?')
        ->and($alert->informativeText())->toBe('Two files');
});

it('adds alert buttons in order', function (): void {
    $alert = NSAlert::init();
    $save = $alert->addButtonWithTitle('Save');
    $alert->addButtonWithTitle('Cancel');
    $buttons = $alert->buttons();

    expect($save)->toBeInstanceOf(NSButton::class)
        ->and($save->title())->toBe('Save')
        ->and($buttons)->toHaveCount(2)
        ->and($buttons[0])->toBe($save)
        ->and($buttons[1]->title())->toBe('Cancel')
        ->and($alert->window())->toBeInstanceOf(NSPanel::class);
});

it('sets and reads back a save panel', function (): void {
    $dir = realpath(__DIR__);
    $panel = NSSavePanel::savePanel();
    $panel->setDirectoryURL(NSURL::fileURLWithPath($dir));
    $panel->setNameFieldStringValue('a.txt');
    $panel->setMessage('Save the log');

    expect($panel)->toBeInstanceOf(NSSavePanel::class)
        ->and($panel->directoryURL()->path())->toBe($dir)
        ->and($panel->nameFieldStringValue())->toBe('a.txt')
        ->and($panel->message())->toBe('Save the log');
});

it('sets and reads back an open panel', function (bool $on): void {
    $panel = NSOpenPanel::openPanel();
    $panel->setCanChooseFiles($on);
    $panel->setCanChooseDirectories($on);
    $panel->setAllowsMultipleSelection($on);

    expect($panel)->toBeInstanceOf(NSOpenPanel::class)
        ->and($panel)->toBeInstanceOf(NSSavePanel::class)
        ->and($panel->canChooseFiles())->toBe($on)
        ->and($panel->canChooseDirectories())->toBe($on)
        ->and($panel->allowsMultipleSelection())->toBe($on)
        ->and($panel->URLs())->toBe([]);
})->with([true, false]);
