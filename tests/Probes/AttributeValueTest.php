<?php

declare(strict_types=1);

// Site attribute-value-class (outcome 2): a colour attribute given a value of another class, drawn. Task 1
// probe 16. The site checks the two colour names only: a wrong-class paragraph style or font raises a
// translated NSInvalidArgumentException inside the PHP call, and a wrong-class link draws (both in ControlsTest).

beforeEach(fn () => requireProbeBuild());

it('refuses a wrong-class colour, which AppKit dies on when it draws without the refusal', function (string $name, string $value, int $signal): void {
    $code = <<<PHP
    \$text = NSAttributedString::initWithStringAttributes('x', [{$name} => {$value}]);
    \$label = NSTextField::labelWithAttributedString(\$text);
    \$window = newWindow();
    \$window->contentView()->addSubview(\$label);
    \$window->makeKeyAndOrderFront(null);
    pump(1.0);
    PHP;

    $kept = probeRun($code, null);
    $off = probeRun($code, 'attribute-value-class');

    expect($kept['signal'])->toBeNull()
        ->and($kept['stdout'])->toContain('REFUSED TypeError')
        ->and($off['signal'])->toBe($signal);
})->with([
    // AppKit traps drawing a string as the foreground colour.
    'a string as the foreground colour' => ['NSForegroundColorAttributeName', "'red'", PROBE_SIGTRAP],
    // AppKit's run loop leaves NSInvalidArgumentException (-[NSString set]) uncaught: abort().
    'a string as the background colour' => ['NSBackgroundColorAttributeName', "'red'", PROBE_SIGABRT],
]);
