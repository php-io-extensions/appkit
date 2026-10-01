<?php

declare(strict_types=1);

it('registers run-loop modes with the strings the frameworks define', function (): void {
    expect(kCFRunLoopDefaultMode)->toBe('kCFRunLoopDefaultMode')
        ->and(kCFRunLoopCommonModes)->toBe('kCFRunLoopCommonModes')
        ->and(NSDefaultRunLoopMode)->toBe('kCFRunLoopDefaultMode')
        ->and(NSRunLoopCommonModes)->toBe('kCFRunLoopCommonModes')
        ->and(NSEventTrackingRunLoopMode)->toBe('NSEventTrackingRunLoopMode')
        ->and(NSModalPanelRunLoopMode)->toBe('NSModalPanelRunLoopMode');
});

it('registers the CFFileDescriptor callback types', function (): void {
    expect(kCFFileDescriptorReadCallBack)->toBe(1)
        ->and(kCFFileDescriptorWriteCallBack)->toBe(2);
});

it('backs enums with the SDK values', function (): void {
    expect(NSApplicationActivationPolicy::REGULAR->value)->toBe(0)
        ->and(NSApplicationActivationPolicy::ACCESSORY->value)->toBe(1)
        ->and(NSApplicationActivationPolicy::PROHIBITED->value)->toBe(2)
        ->and(NSEventType::APPLICATION_DEFINED->value)->toBe(15)
        ->and(NSEventType::CHANGE_MODE->value)->toBe(38)
        ->and(NSEventMask::APPLICATION_DEFINED->value)->toBe(1 << 15)
        ->and(NSEventMask::CHANGE_MODE->value)->toBe(1 << 38)
        ->and(NSEventMask::ANY->value)->toBe(-1)
        ->and(NSEventModifierFlags::COMMAND->value)->toBe(1 << 20)
        ->and(NSEventModifierFlags::DEVICE_INDEPENDENT_FLAGS_MASK->value)->toBe(0xffff0000)
        ->and(CFRunLoopRunResult::TIMED_OUT->value)->toBe(3);
});

it('puts every NSEventMask bit at the value of the NSEventType it names', function (): void {
    foreach (NSEventMask::cases() as $mask) {
        if ($mask === NSEventMask::ANY) {
            continue;
        }

        expect(NSEventType::from((int) log($mask->value, 2))->name)->toBe($mask->name);
    }
});
