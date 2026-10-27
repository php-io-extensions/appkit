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

it('sets and reads back an alert\'s style', function (): void {
    $alert = NSAlert::init();
    expect($alert->alertStyle())->toBe(NSAlertStyle::WARNING);

    $alert->setAlertStyle(NSAlertStyle::CRITICAL);
    expect($alert->alertStyle())->toBe(NSAlertStyle::CRITICAL);
});

it('shows an alert\'s suppression button and reads it back', function (): void {
    $alert = NSAlert::init();
    expect($alert->showsSuppressionButton())->toBeFalse();

    $alert->setShowsSuppressionButton(true);
    $button = $alert->suppressionButton();
    $button->setTitle('Don\'t ask again');

    expect($alert->showsSuppressionButton())->toBeTrue()
        ->and($button)->toBeInstanceOf(NSButton::class)
        ->and($button->title())->toBe('Don\'t ask again')
        ->and($button->state())->toBe(NSControlStateValue::OFF);
});

it('sets and reads back a save panel\'s content types', function (): void {
    $panel = NSSavePanel::savePanel();
    $panel->setAllowedContentTypes([UTType::typeWithFilenameExtension('txt')]);
    $types = $panel->allowedContentTypes();

    expect($types)->toHaveCount(1)
        ->and($types[0])->toBeInstanceOf(UTType::class)
        ->and($types[0]->identifier())->toBe('public.plain-text');

    $panel->setAllowedContentTypes([]);
    expect($panel->allowedContentTypes())->toBe([]);
});

it('sets and reads back a save panel\'s hidden files', function (): void {
    $panel = NSSavePanel::savePanel();
    $panel->setShowsHiddenFiles(true);

    expect($panel->showsHiddenFiles())->toBeTrue();
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
