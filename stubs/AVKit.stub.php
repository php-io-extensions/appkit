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
}

/**
 * CMTime as a value, field for field: $value / $timescale seconds when FLAG_VALID is set
 * and no infinity or indefinite flag is. Every property must be set where a binding reads it.
 */
final class CMTime
{
    /** CMTimeFlags */
    public const int FLAG_VALID = 1;
    public const int FLAG_HAS_BEEN_ROUNDED = 2;
    public const int FLAG_POSITIVE_INFINITY = 4;
    public const int FLAG_NEGATIVE_INFINITY = 8;
    public const int FLAG_INDEFINITE = 16;

    public int $value = 0;

    public int $timescale = 1;

    public int $flags = 1;

    public int $epoch = 0;

    /** The struct as given; with two arguments it is CMTimeMake(value, timescale). */
    public function __construct(int $value = 0, int $timescale = 1, int $flags = 1, int $epoch = 0) {}

    /** CMTimeMakeWithSeconds */
    public static function withSeconds(float $seconds, int $preferredTimescale): CMTime {}

    /** CMTimeGetSeconds: NaN for an invalid or indefinite time, ±INF for the infinities */
    public function seconds(): float {}
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

    /** The NSError when status is FAILED; description() carries the text. */
    public function error(): ?NSObject {}
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
