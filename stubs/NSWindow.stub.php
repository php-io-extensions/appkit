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

/**
 * @var int
 * @cvalue NSNormalWindowLevel
 */
const NSNormalWindowLevel = UNKNOWN;

/**
 * @var int
 * @cvalue NSFloatingWindowLevel
 */
const NSFloatingWindowLevel = UNKNOWN;

/**
 * @var int
 * @cvalue NSSubmenuWindowLevel
 */
const NSSubmenuWindowLevel = UNKNOWN;

/**
 * @var int
 * @cvalue NSTornOffMenuWindowLevel
 */
const NSTornOffMenuWindowLevel = UNKNOWN;

/**
 * @var int
 * @cvalue NSMainMenuWindowLevel
 */
const NSMainMenuWindowLevel = UNKNOWN;

/**
 * @var int
 * @cvalue NSStatusWindowLevel
 */
const NSStatusWindowLevel = UNKNOWN;

/**
 * @var int
 * @cvalue NSModalPanelWindowLevel
 */
const NSModalPanelWindowLevel = UNKNOWN;

/**
 * @var int
 * @cvalue NSPopUpMenuWindowLevel
 */
const NSPopUpMenuWindowLevel = UNKNOWN;

/**
 * @var int
 * @cvalue NSScreenSaverWindowLevel
 */
const NSScreenSaverWindowLevel = UNKNOWN;

enum NSWindowCollectionBehavior: int
{
    case DEFAULT = 0;
    case CAN_JOIN_ALL_SPACES = 1;
    case MOVE_TO_ACTIVE_SPACE = 2;
    case MANAGED = 4;
    case TRANSIENT = 8;
    case STATIONARY = 16;
    case PARTICIPATES_IN_CYCLE = 32;
    case IGNORES_CYCLE = 64;
    case FULL_SCREEN_PRIMARY = 128;
    case FULL_SCREEN_AUXILIARY = 256;
    case FULL_SCREEN_NONE = 512;
    case FULL_SCREEN_ALLOWS_TILING = 2048;
    case FULL_SCREEN_DISALLOWS_TILING = 4096;
    case PRIMARY = 65536;
    case AUXILIARY = 131072;
    case CAN_JOIN_ALL_APPLICATIONS = 262144;
}

enum NSWindowTitleVisibility: int
{
    case VISIBLE = 0;
    case HIDDEN = 1;
}

enum NSWindowOcclusionState: int
{
    case VISIBLE = 2;
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
    /** Allocates the class it is called on. */
    public static function initWithContentRectStyleMaskBackingDefer(NSRect $contentRect, NSWindowStyleMask|int $style, NSBackingStoreType $backingStoreType, bool $flag): NSWindow {}

    public function title(): string {}

    /** Pixels per point of the screen the window is on: 2.0 on a Retina display. */
    public function backingScaleFactor(): float {}

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

    public function colorSpace(): ?NSColorSpace {}

    /** setColorSpace:; null puts back the screen's. */
    public function setColorSpace(?NSColorSpace $space): void {}

    public function setContentView(?NSView $view): void {}

    public function windowNumber(): int {}

    public function frame(): NSRect {}

    public function setContentSize(NSSize $size): void {}

    public function styleMask(): int {}

    public function setStyleMask(NSWindowStyleMask|int $styleMask): void {}

    public function contentMinSize(): NSSize {}

    public function setContentMinSize(NSSize $size): void {}

    public function contentMaxSize(): NSSize {}

    public function setContentMaxSize(NSSize $size): void {}

    public function contentAspectRatio(): NSSize {}

    public function setContentAspectRatio(NSSize $ratio): void {}

    /** setFrameOrigin: — the window's bottom-left corner, in screen coordinates. */
    public function setFrameOrigin(NSPoint $point): void {}

    /** setFrame:display: */
    public function setFrameDisplay(NSRect $frame, bool $display): void {}

    public function contentRectForFrameRect(NSRect $frame): NSRect {}

    public function frameRectForContentRect(NSRect $content): NSRect {}

    public function convertRectToBacking(NSRect $rect): NSRect {}

    public function orderFront(?NSObject $sender): void {}

    public function zoom(?NSObject $sender): void {}

    public function isZoomed(): bool {}

    public function deminiaturize(?NSObject $sender): void {}

    public function isMiniaturized(): bool {}

    public function toggleFullScreen(?NSObject $sender): void {}

    public function collectionBehavior(): int {}

    public function setCollectionBehavior(NSWindowCollectionBehavior|int $behavior): void {}

    /** An NSWindowLevel: one of the NS*WindowLevel constants, or CGDisplay::shieldingWindowLevel(). */
    public function level(): int {}

    public function setLevel(int $level): void {}

    public function screen(): ?NSScreen {}

    public function isOpaque(): bool {}

    public function setOpaque(bool $opaque): void {}

    public function backgroundColor(): ?NSColor {}

    public function setBackgroundColor(?NSColor $color): void {}

    public function hasShadow(): bool {}

    public function setHasShadow(bool $hasShadow): void {}

    public function titlebarAppearsTransparent(): bool {}

    public function setTitlebarAppearsTransparent(bool $transparent): void {}

    public function titleVisibility(): NSWindowTitleVisibility {}

    public function setTitleVisibility(NSWindowTitleVisibility $visibility): void {}

    public function ignoresMouseEvents(): bool {}

    public function setIgnoresMouseEvents(bool $ignores): void {}

    public function isMovableByWindowBackground(): bool {}

    public function setMovableByWindowBackground(bool $movable): void {}

    /** NSWindowOcclusionState bits: VISIBLE set while any part of the window is on screen. */
    public function occlusionState(): int {}

    public function alphaValue(): float {}

    public function setAlphaValue(float $alphaValue): void {}
}
