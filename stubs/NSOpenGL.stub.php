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

enum NSOpenGLContextParameter: int
{
    case SWAP_RECTANGLE = 200;
    case SWAP_RECTANGLE_ENABLE = 201;
    case RASTERIZATION_ENABLE = 221;
    case SWAP_INTERVAL = 222;
    case SURFACE_ORDER = 235;
    case SURFACE_OPACITY = 236;
    case STATE_VALIDATION = 301;
    case SURFACE_BACKING_SIZE = 304;
    case SURFACE_SURFACE_VOLATILE = 306;
    case RECLAIM_RESOURCES = 308;
    case CURRENT_RENDERER_ID = 309;
    case GPU_VERTEX_PROCESSING = 310;
    case GPU_FRAGMENT_PROCESSING = 311;
    case HAS_DRAWABLE = 314;
    case MP_SWAPS_IN_FLIGHT = 315;
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

    /**
     * setValues:forParameter: — $values is a list of as many ints as the parameter takes
     * (SWAP_INTERVAL: one; 0 = no vsync, 1 = sync to the display).
     */
    public function setValuesForParameter(array $values, NSOpenGLContextParameter $parameter): void {}

    /**
     * getValues:forParameter: — the $count ints the parameter holds.
     * @return list<int>
     */
    public function getValuesForParameter(NSOpenGLContextParameter $parameter, int $count): array {}
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
 * @cvalue NSOpenGLPFAColorFloat
 */
const NSOpenGLPFAColorFloat = UNKNOWN;

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
