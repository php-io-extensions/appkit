<?php

/** @generate-class-entries */

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) AVPlayerItemDidPlayToEndTimeNotification)
 */
const AVPlayerItemDidPlayToEndTimeNotification = UNKNOWN;

/**
 * @not-serializable
 */
class NSURL extends NSObject
{
    public static function fileURLWithPath(string $path): NSURL {}

    public function path(): ?string {}

    /** null when the string is not a URL NSURL accepts */
    public static function URLWithString(string $string): ?NSURL {}

    public function absoluteString(): ?string {}
}

/**
 * CMTime as a value, field for field: $value / $timescale seconds when FLAG_VALID is set
 * and no infinity or indefinite flag is.
 */
final class CMTime
{
    /** @cvalue kCMTimeFlags_Valid */
    public const int FLAG_VALID = UNKNOWN;
    /** @cvalue kCMTimeFlags_HasBeenRounded */
    public const int FLAG_HAS_BEEN_ROUNDED = UNKNOWN;
    /** @cvalue kCMTimeFlags_PositiveInfinity */
    public const int FLAG_POSITIVE_INFINITY = UNKNOWN;
    /** @cvalue kCMTimeFlags_NegativeInfinity */
    public const int FLAG_NEGATIVE_INFINITY = UNKNOWN;
    /** @cvalue kCMTimeFlags_Indefinite */
    public const int FLAG_INDEFINITE = UNKNOWN;

    public int $value;

    public int $timescale;

    public int $flags;

    public int $epoch;

    /** The struct as given, field for field. */
    public function __construct(int $value, int $timescale, int $flags, int $epoch) {}

    /** CMTimeMake */
    public static function make(int $value, int $timescale): CMTime {}

    /** CMTimeMakeWithSeconds */
    public static function makeWithSeconds(float $seconds, int $preferredTimescale): CMTime {}

    /** CMTimeGetSeconds: NaN for an invalid or indefinite time, ±INF for the infinities */
    public function getSeconds(): float {}
}

enum AVPlayerItemStatus: int
{
    case UNKNOWN = 0;
    case READY_TO_PLAY = 1;
    case FAILED = 2;
}

/**
 * @not-serializable
 */
class AVPlayerItem extends NSObject
{
    public static function playerItemWithURL(NSURL $url): static {}

    public function status(): AVPlayerItemStatus {}

    public function duration(): CMTime {}

    /** The NSError when status is FAILED. */
    public function error(): ?NSError {}
}

enum AVPlayerTimeControlStatus: int
{
    case PAUSED = 0;
    case WAITING_TO_PLAY_AT_SPECIFIED_RATE = 1;
    case PLAYING = 2;
}

enum AVPlayerActionAtItemEnd: int
{
    case ADVANCE = 0;
    case PAUSE = 1;
    case NONE = 2;
}

/**
 * @not-serializable
 */
class AVPlayer extends NSObject
{
    public static function playerWithPlayerItem(?AVPlayerItem $item): static {}

    public function play(): void {}

    public function pause(): void {}

    public function rate(): float {}

    public function setRate(float $rate): void {}

    public function currentTime(): CMTime {}

    public function seekToTime(CMTime $time): void {}

    public function isMuted(): bool {}

    public function setMuted(bool $muted): void {}

    public function timeControlStatus(): AVPlayerTimeControlStatus {}

    public function actionAtItemEnd(): AVPlayerActionAtItemEnd {}

    public function setActionAtItemEnd(AVPlayerActionAtItemEnd $action): void {}

    public function currentItem(): ?AVPlayerItem {}

    public function replaceCurrentItemWithPlayerItem(?AVPlayerItem $item): void {}
}

/** AVPlayerViewControlsStyleDefault is INLINE. */
enum AVPlayerViewControlsStyle: int
{
    case NONE = 0;
    case INLINE = 1;
    case FLOATING = 2;
    case MINIMAL = 3;
}

/**
 * @not-serializable
 */
class AVPlayerView extends NSView
{
    public function player(): ?AVPlayer {}

    public function setPlayer(?AVPlayer $player): void {}

    public function controlsStyle(): AVPlayerViewControlsStyle {}

    public function setControlsStyle(AVPlayerViewControlsStyle $style): void {}
}
