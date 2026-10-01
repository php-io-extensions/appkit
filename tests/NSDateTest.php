<?php

declare(strict_types=1);

it('measures intervals from now', function (): void {
    expect(NSDate::dateWithTimeIntervalSinceNow(10.0)->timeIntervalSinceNow())->toBeGreaterThan(9.9)->toBeLessThanOrEqual(10.0)
        ->and(NSDate::date()->timeIntervalSince1970())->toEqualWithDelta(microtime(true), 1.0)
        ->and(NSDate::distantPast()->timeIntervalSinceNow())->toBeLessThan(0.0)
        ->and(NSDate::distantFuture()->timeIntervalSinceNow())->toBeGreaterThan(0.0);
});

it('compares by value through isEqual', function (): void {
    expect(NSDate::distantFuture()->isEqual(NSDate::distantFuture()))->toBeTrue()
        ->and(NSDate::distantFuture()->isEqual(NSDate::distantPast()))->toBeFalse()
        ->and(NSDate::distantFuture()->isEqual(null))->toBeFalse();
});
