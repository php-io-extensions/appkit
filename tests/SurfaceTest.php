<?php

declare(strict_types=1);

/*
 * Every stub declaration is what the loaded extension exposes: the stubs are
 * the source of truth, so a binding missing from the build fails here.
 */

function stubDeclarations(): array
{
    $declared = [];

    foreach (glob(__DIR__ . '/../stubs/*.stub.php') as $stub) {
        $class = null;
        foreach (file($stub) as $line) {
            if (preg_match('/^(?:final\s+)?(?:class|enum)\s+(\w+)/', $line, $m)) {
                $class = $m[1];
                $declared[$class] ??= [];
            } elseif ($class !== null && preg_match('/^\s+(?:public|private)\s+(?:static\s+)?function\s+(\w+)/', $line, $m)) {
                $declared[$class][] = $m[1];
            }
        }
    }

    return $declared;
}

it('exposes every class, enum and method the stubs declare', function (): void {
    foreach (stubDeclarations() as $class => $methods) {
        expect(class_exists($class) || enum_exists($class))->toBeTrue("{$class} is missing");

        foreach ($methods as $method) {
            expect(method_exists($class, $method))->toBeTrue("{$class}::{$method}() is missing");
        }
    }
});

it('reports its version', function (): void {
    expect(phpversion('appkit'))->toBe('0.10.0');
});

it('keeps the native class hierarchy', function (): void {
    expect(get_parent_class(NSApplication::class))->toBe(NSResponder::class)
        ->and(get_parent_class(NSResponder::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSEvent::class))->toBe(NSObject::class)
        ->and(get_parent_class(NSDate::class))->toBe(NSObject::class)
        ->and(get_parent_class(CFRunLoop::class))->toBe(CFType::class)
        ->and(get_parent_class(CFRunLoopSource::class))->toBe(CFType::class)
        ->and(get_parent_class(CFFileDescriptor::class))->toBe(CFType::class)
        ->and(get_parent_class(AppKitException::class))->toBe(RuntimeException::class);
});

it('cannot construct native wrappers from PHP', function (string $class): void {
    expect(fn () => new $class())->toThrow(Error::class);
})->with([NSObject::class, NSApplication::class, NSEvent::class, NSDate::class, CFType::class, CFRunLoop::class, CFFileDescriptor::class]);

it('refuses to clone or serialize a native wrapper', function (): void {
    $date = NSDate::date();

    expect(fn () => clone $date)->toThrow(Error::class)
        ->and(fn () => serialize($date))->toThrow(Exception::class);
});
