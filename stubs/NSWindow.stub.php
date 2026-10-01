<?php

/** @generate-class-entries */

enum NSWindowStyleMask: int
{
    case BORDERLESS = 0;
    case TITLED = 1;
    case CLOSABLE = 2;
    case MINIATURIZABLE = 4;
    case RESIZABLE = 8;
    case UTILITY_WINDOW = 16;
    case DOC_MODAL_WINDOW = 64;
    case NONACTIVATING_PANEL = 128;
    case TEXTURED_BACKGROUND = 256;
    case UNIFIED_TITLE_AND_TOOLBAR = 4096;
    case HUD_WINDOW = 8192;
    case FULL_SCREEN = 16384;
    case FULL_SIZE_CONTENT_VIEW = 32768;
}

enum NSBackingStoreType: int
{
    case RETAINED = 0;
    case NONRETAINED = 1;
    case BUFFERED = 2;
}

/**
 * @not-serializable
 */
class NSWindow extends NSResponder
{
    /** alloc + initWithContentRect:styleMask:backing:defer: */
    public static function initWithContentRectStyleMaskBackingDefer(NSRect $contentRect, NSWindowStyleMask|int $style, NSBackingStoreType $backingStoreType, bool $flag): NSWindow {}

    public function title(): string {}

    public function setTitle(string $title): void {}

    public function makeKeyAndOrderFront(?NSObject $sender): void {}

    public function orderOut(?NSObject $sender): void {}

    public function close(): void {}

    public function performClose(?NSObject $sender): void {}

    public function miniaturize(?NSObject $sender): void {}

    public function isVisible(): bool {}

    public function isKeyWindow(): bool {}

    public function isMainWindow(): bool {}

    public function makeKeyWindow(): void {}

    public function delegate(): ?NSObject {}

    public function setDelegate(?NSObject $delegate): void {}

    public function isReleasedWhenClosed(): bool {}

    public function setReleasedWhenClosed(bool $releasedWhenClosed): void {}

    public function center(): void {}

    public function contentView(): ?NSView {}

    public function windowNumber(): int {}

    public function frame(): NSRect {}

    public function setContentSize(NSSize $size): void {}

    public function styleMask(): int {}
}
