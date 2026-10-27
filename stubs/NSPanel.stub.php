<?php

/** @generate-class-entries */

/**
 * @var int
 * @cvalue NSAlertFirstButtonReturn
 */
const NSAlertFirstButtonReturn = UNKNOWN;

/**
 * @var int
 * @cvalue NSModalResponseOK
 */
const NSModalResponseOK = UNKNOWN;

/**
 * @var int
 * @cvalue NSModalResponseCancel
 */
const NSModalResponseCancel = UNKNOWN;

enum NSAlertStyle: int
{
    case WARNING = 0;
    case INFORMATIONAL = 1;
    case CRITICAL = 2;
}

/**
 * @not-serializable
 */
class NSPanel extends NSWindow
{
}

/**
 * @not-serializable
 */
class NSAlert extends NSObject
{
    /** [[NSAlert alloc] init] */
    public static function init(): static {}

    public function messageText(): string {}

    public function setMessageText(string $messageText): void {}

    public function informativeText(): string {}

    public function setInformativeText(string $informativeText): void {}

    public function alertStyle(): NSAlertStyle {}

    public function setAlertStyle(NSAlertStyle $alertStyle): void {}

    public function showsSuppressionButton(): bool {}

    public function setShowsSuppressionButton(bool $showsSuppressionButton): void {}

    /** The "Do not show this message again" checkbox; its title can be set. Read its state() once the sheet ends. */
    public function suppressionButton(): ?NSButton {}

    /** AppKit gives the first button the key equivalent Return, and a button titled Cancel Esc. */
    public function addButtonWithTitle(string $title): NSButton {}

    /** @return NSButton[] in the order they were added */
    public function buttons(): array {}

    /**
     * Shows the alert as a sheet on $sheetWindow and returns at once.
     * @param Closure|null $handler called as $handler(int $returnCode) when the sheet ends; the
     *     button at index i returns NSAlertFirstButtonReturn + i
     */
    public function beginSheetModalForWindowCompletionHandler(NSWindow $sheetWindow, ?Closure $handler): void {}

    /** The alert's panel: end the sheet with NSWindow::endSheetReturnCode() on it. */
    public function window(): NSWindow {}
}

/**
 * @not-serializable
 */
class NSSavePanel extends NSPanel
{
    public static function savePanel(): NSSavePanel {}

    /** The chosen file once the panel ends with NSModalResponseOK. */
    public function URL(): ?NSURL {}

    public function directoryURL(): ?NSURL {}

    public function setDirectoryURL(?NSURL $directoryURL): void {}

    public function nameFieldStringValue(): string {}

    public function setNameFieldStringValue(string $nameFieldStringValue): void {}

    public function message(): string {}

    public function setMessage(?string $message): void {}

    /** @return UTType[] the types the panel allows; [] allows every type */
    public function allowedContentTypes(): array {}

    /** @param UTType[] $allowedContentTypes entries that are not UTType objects are skipped */
    public function setAllowedContentTypes(array $allowedContentTypes): void {}

    public function showsHiddenFiles(): bool {}

    public function setShowsHiddenFiles(bool $showsHiddenFiles): void {}

    /**
     * Shows the panel as a sheet on $window and returns at once.
     * @param callable $handler called as $handler(int $result) with NSModalResponseOK or NSModalResponseCancel
     */
    public function beginSheetModalForWindowCompletionHandler(NSWindow $window, callable $handler): void {}
}

/**
 * @not-serializable
 */
class NSOpenPanel extends NSSavePanel
{
    public static function openPanel(): NSOpenPanel {}

    /** @return NSURL[] the chosen items once the panel ends with NSModalResponseOK */
    public function URLs(): array {}

    public function canChooseFiles(): bool {}

    public function setCanChooseFiles(bool $canChooseFiles): void {}

    public function canChooseDirectories(): bool {}

    public function setCanChooseDirectories(bool $canChooseDirectories): void {}

    public function allowsMultipleSelection(): bool {}

    public function setAllowsMultipleSelection(bool $allowsMultipleSelection): void {}
}
