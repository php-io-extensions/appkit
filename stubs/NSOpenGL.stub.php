<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class NSOpenGLPixelFormat extends NSObject
{
    /**
     * initWithAttributes:; null when no renderer matches. $attribs holds
     * NSOpenGLPixelFormatAttribute values ending in 0; a list not ending in 0
     * is a ValueError.
     *
     * @param array $attribs
     */
    public static function initWithAttributes(array $attribs): ?static {}
}

/**
 * @not-serializable
 */
class NSOpenGLContext extends NSObject
{
    /** initWithFormat:shareContext:; null when AppKit makes none. */
    public static function initWithFormatShareContext(NSOpenGLPixelFormat $format, ?NSOpenGLContext $share): ?static {}

    public function makeCurrentContext(): void {}

    public static function clearCurrentContext(): void {}

    public static function currentContext(): ?NSOpenGLContext {}

    /** The CGLContextObj address: ext-opengl's CGLContextObj::fromPointer() takes it. */
    public function CGLContextObj(): int {}

    public function flushBuffer(): void {}

    public function update(): void {}

    public function view(): ?NSView {}

    public function setView(?NSView $view): void {}
}

/**
 * @not-serializable
 */
class NSOpenGLView extends NSView
{
    /** initWithFrame:pixelFormat:; a null format is AppKit's default. */
    public static function initWithFramePixelFormat(NSRect $frame, ?NSOpenGLPixelFormat $format): static {}

    public function openGLContext(): ?NSOpenGLContext {}

    public function setOpenGLContext(?NSOpenGLContext $context): void {}

    public function pixelFormat(): ?NSOpenGLPixelFormat {}

    public function wantsBestResolutionOpenGLSurface(): bool {}

    public function setWantsBestResolutionOpenGLSurface(bool $flag): void {}
}

/**
 * @var int
 * @cvalue NSOpenGLPFAOpenGLProfile
 */
const NSOpenGLPFAOpenGLProfile = UNKNOWN;

/**
 * @var int
 * @cvalue NSOpenGLProfileVersionLegacy
 */
const NSOpenGLProfileVersionLegacy = UNKNOWN;

/**
 * @var int
 * @cvalue NSOpenGLProfileVersion3_2Core
 */
const NSOpenGLProfileVersion3_2Core = UNKNOWN;

/**
 * @var int
 * @cvalue NSOpenGLProfileVersion4_1Core
 */
const NSOpenGLProfileVersion4_1Core = UNKNOWN;

/**
 * @var int
 * @cvalue NSOpenGLPFAAccelerated
 */
const NSOpenGLPFAAccelerated = UNKNOWN;

/**
 * @var int
 * @cvalue NSOpenGLPFAColorSize
 */
const NSOpenGLPFAColorSize = UNKNOWN;

/**
 * @var int
 * @cvalue NSOpenGLPFAAlphaSize
 */
const NSOpenGLPFAAlphaSize = UNKNOWN;

/**
 * @var int
 * @cvalue NSOpenGLPFADoubleBuffer
 */
const NSOpenGLPFADoubleBuffer = UNKNOWN;

/**
 * @var int
 * @cvalue NSOpenGLPFADepthSize
 */
const NSOpenGLPFADepthSize = UNKNOWN;

/**
 * @var int
 * @cvalue NSOpenGLPFAStencilSize
 */
const NSOpenGLPFAStencilSize = UNKNOWN;
