<?php

declare(strict_types=1);

beforeEach(function (): void {
    $this->app = NSApplication::sharedApplication();
});

it('plays a clip to its end and reports failure for a missing file', function (): void {
    $url = NSURL::fileURLWithPath(__DIR__.'/fixtures/clip.mp4');
    $item = AVPlayerItem::playerItemWithURL($url);
    $player = AVPlayer::playerWithPlayerItem($item);
    $view = AVPlayerView::initWithFrame(new NSRect(0, 0, 64, 64));
    $view->setPlayer($player);
    $view->setControlsStyle(AVPlayerViewControlsStyle::NONE);
    $player->setMuted(true);
    $ended = 0;
    expect($item->duration()->flags & CMTime::FLAG_INDEFINITE)->toBe(CMTime::FLAG_INDEFINITE);
    $token = NSNotificationCenter::defaultCenter()->addObserverForNameObjectQueueUsingBlock(AVPlayerItemDidPlayToEndTimeNotification, $item, NSOperationQueue::mainQueue(), function () use (&$ended): void {
        $ended++;
    });

    $player->play();
    // A closure with use (&$ended): an arrow function would capture the counter by value and never see the increment.
    $finished = pumpUntil($this->app, function () use (&$ended): bool {
        return $ended > 0;
    }, 5.0);
    NSNotificationCenter::defaultCenter()->removeObserver($token);

    expect($finished)->toBeTrue()
        ->and($ended)->toBe(1)
        ->and($url->path())->toBe(__DIR__.'/fixtures/clip.mp4')
        ->and($view->player())->toBe($player)
        ->and($view->controlsStyle())->toBe(AVPlayerViewControlsStyle::NONE)
        ->and($player->currentItem())->toBe($item)
        ->and($player->isMuted())->toBeTrue()
        ->and($player->timeControlStatus())->toBe(AVPlayerTimeControlStatus::PAUSED)
        ->and($item->status())->toBe(AVPlayerItemStatus::READY_TO_PLAY)
        ->and($item->error())->toBeNull()
        ->and(round($item->duration()->getSeconds()))->toBe(1.0)
        ->and(round($player->currentTime()->getSeconds()))->toBe(1.0);

    $player->seekToTime(CMTime::makeWithSeconds(0.5, 600));
    $player->setRate(0.0);
    $player->pause();
    expect($player->rate())->toBe(0.0);

    $bad = AVPlayerItem::playerItemWithURL(NSURL::fileURLWithPath('/nope/clip.mp4'));
    $player->replaceCurrentItemWithPlayerItem($bad);
    pumpUntil($this->app, fn () => $bad->status() !== AVPlayerItemStatus::UNKNOWN, 5.0);
    expect($bad->status())->toBe(AVPlayerItemStatus::FAILED)
        ->and($bad->error())->not->toBeNull()
        ->and($bad->error()->description())->toContain('Error Domain=');

    $view->setPlayer(null);
    expect($view->player())->toBeNull();
});

it('converts between seconds and CMTime', function (): void {
    $time = CMTime::makeWithSeconds(1.5, 600);

    expect($time->value)->toBe(900)
        ->and($time->timescale)->toBe(600)
        ->and($time->getSeconds())->toBe(1.5)
        ->and($time->flags)->toBe(CMTime::FLAG_VALID)
        ->and($time->epoch)->toBe(0)
        ->and((new CMTime(3, 2, CMTime::FLAG_VALID, 0))->getSeconds())->toBe(1.5)
        ->and((new CMTime(0, 0, CMTime::FLAG_VALID | CMTime::FLAG_POSITIVE_INFINITY, 0))->getSeconds())->toBe(INF)
        ->and(is_nan((new CMTime(0, 0, 0, 0))->getSeconds()))->toBeTrue();

    $unset = new CMTime(1, 1, CMTime::FLAG_VALID, 0);
    unset($unset->timescale);
    expect(fn () => $unset->getSeconds())->toThrow(Error::class);
});

it('takes every CMTime field and binds the CMTimeFlags constants', function (): void {
    expect(fn () => new CMTime(1, 1))->toThrow(ArgumentCountError::class)
        ->and((new ReflectionProperty(CMTime::class, 'value'))->hasDefaultValue())->toBeFalse()
        ->and([CMTime::FLAG_VALID, CMTime::FLAG_HAS_BEEN_ROUNDED, CMTime::FLAG_POSITIVE_INFINITY, CMTime::FLAG_NEGATIVE_INFINITY, CMTime::FLAG_INDEFINITE])
        ->toBe([1, 2, 4, 8, 16]);
});

it('makes a CMTime from a value and a timescale', function (): void {
    $time = CMTime::make(900, 600);

    expect([$time->value, $time->timescale, $time->flags, $time->epoch])->toBe([900, 600, CMTime::FLAG_VALID, 0])
        ->and($time->getSeconds())->toBe(1.5);
});

it('reads the NSError a failed item reports', function (): void {
    $bad = AVPlayerItem::playerItemWithURL(NSURL::fileURLWithPath('/nope/clip.mp4'));
    $player = AVPlayer::playerWithPlayerItem($bad);
    pumpUntil($this->app, fn () => $bad->status() !== AVPlayerItemStatus::UNKNOWN, 5.0);
    $error = $bad->error();

    expect($error)->toBeInstanceOf(NSError::class)
        ->and((string) (new ReflectionMethod(AVPlayerItem::class, 'error'))->getReturnType())->toBe('?NSError')
        ->and($error->domain())->toBe('AVFoundationErrorDomain')
        ->and($error->code())->toBe(-11800)
        ->and($error->localizedDescription())->toBe('The operation could not be completed')
        ->and($error->userInfo()['NSLocalizedDescription'])->toBe('The operation could not be completed')
        ->and($error->userInfo()['NSUnderlyingError'])->toBeInstanceOf(NSError::class)
        ->and($player->currentItem())->toBe($bad);
});

it('keeps playing past the end when the end action is none', function (): void {
    $player = AVPlayer::playerWithPlayerItem(null);

    expect($player->actionAtItemEnd())->toBe(AVPlayerActionAtItemEnd::PAUSE);
    $player->setActionAtItemEnd(AVPlayerActionAtItemEnd::NONE);
    expect($player->actionAtItemEnd())->toBe(AVPlayerActionAtItemEnd::NONE);
});
