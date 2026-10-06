<?php

/** @generate-class-entries */

enum NSApplicationActivationPolicy: int
{
    case REGULAR = 0;
    case ACCESSORY = 1;
    case PROHIBITED = 2;
}

/**
 * @not-serializable
 */
class NSApplication extends NSResponder
{
    public static function sharedApplication(): NSApplication {}

    public function finishLaunching(): void {}

    public function run(): void {}

    public function stop(?NSObject $sender): void {}

    public function isRunning(): bool {}

    public function isActive(): bool {}

    public function activationPolicy(): NSApplicationActivationPolicy {}

    public function setActivationPolicy(NSApplicationActivationPolicy $activationPolicy): bool {}

    public function activate(): void {}

    public function activateIgnoringOtherApps(bool $ignoreOtherApps): void {}

    public function deactivate(): void {}

    public function nextEventMatchingMaskUntilDateInModeDequeue(NSEventMask|int $mask, ?NSDate $expiration, string $mode, bool $deqFlag): ?NSEvent {}

    public function discardEventsMatchingMaskBeforeEvent(NSEventMask|int $mask, ?NSEvent $lastEvent): void {}

    public function sendEvent(NSEvent $event): void {}

    public function postEventAtStart(NSEvent $event, bool $atStart): void {}

    public function currentEvent(): ?NSEvent {}

    public function updateWindows(): void {}

    public function delegate(): ?NSObject {}

    public function setDelegate(?NSObject $delegate): void {}

    public function mainMenu(): ?NSMenu {}

    public function setMainMenu(?NSMenu $mainMenu): void {}

    public function keyWindow(): ?NSWindow {}

    public function mainWindow(): ?NSWindow {}

    /** @return array a list of NSWindow */
    public function windows(): array {}

    public function orderFrontStandardAboutPanel(?NSObject $sender): void {}

    /** @param array $optionsDictionary string keys; string, int, float or bool values; marshalled to an NSDictionary */
    public function orderFrontStandardAboutPanelWithOptions(array $optionsDictionary): void {}
}
