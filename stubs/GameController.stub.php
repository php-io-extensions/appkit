<?php

/** @generate-class-entries */

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) GCControllerDidConnectNotification)
 */
const GCControllerDidConnectNotification = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) GCControllerDidDisconnectNotification)
 */
const GCControllerDidDisconnectNotification = UNKNOWN;

enum GCControllerPlayerIndex: int
{
    case UNSET = -1;
    case INDEX_1 = 0;
    case INDEX_2 = 1;
    case INDEX_3 = 2;
    case INDEX_4 = 3;
}

/**
 * A game controller GameController.framework lists. Its elements' values update on the main run
 * loop, and reach the process only while it is the active app, unless
 * shouldMonitorBackgroundEvents is granted (macOS 11.3+). macOS 15.4.x reads that flag back
 * false after it is set.
 *
 * @not-serializable
 */
class GCController extends NSObject
{
    /** @return list<GCController> */
    public static function controllers(): array {}

    /** Look for wireless controllers in pairing mode; $completionHandler runs on the main run loop once discovery ends (a stop, or its timeout). */
    public static function startWirelessControllerDiscoveryWithCompletionHandler(?Closure $completionHandler): void {}

    public static function stopWirelessControllerDiscovery(): void {}

    /** False before macOS 11.3, where the property does not exist. */
    public static function shouldMonitorBackgroundEvents(): bool {}

    /** Does nothing before macOS 11.3. Set it once a controller connected: SDL found earlier crashes on macOS 12.3. */
    public static function setShouldMonitorBackgroundEvents(bool $shouldMonitorBackgroundEvents): void {}

    public function vendorName(): ?string {}

    public function extendedGamepad(): ?GCExtendedGamepad {}

    public function microGamepad(): ?GCMicroGamepad {}

    public function playerIndex(): GCControllerPlayerIndex {}

    /** Lights the pad's player LEDs where it has them (a DualSense's). */
    public function setPlayerIndex(GCControllerPlayerIndex $playerIndex): void {}
}

/**
 * @not-serializable
 */
class GCPhysicalInputProfile extends NSObject
{
}

/**
 * The full gamepad profile; a DualSense or DualShock profile boxes as this class.
 *
 * @not-serializable
 */
class GCExtendedGamepad extends GCPhysicalInputProfile
{
    public function dpad(): GCControllerDirectionPad {}

    public function buttonA(): GCControllerButtonInput {}

    public function buttonB(): GCControllerButtonInput {}

    public function buttonX(): GCControllerButtonInput {}

    public function buttonY(): GCControllerButtonInput {}

    public function leftThumbstick(): GCControllerDirectionPad {}

    public function rightThumbstick(): GCControllerDirectionPad {}

    public function leftShoulder(): GCControllerButtonInput {}

    public function rightShoulder(): GCControllerButtonInput {}

    public function leftTrigger(): GCControllerButtonInput {}

    public function rightTrigger(): GCControllerButtonInput {}

    public function buttonMenu(): GCControllerButtonInput {}

    public function buttonOptions(): ?GCControllerButtonInput {}

    public function buttonHome(): ?GCControllerButtonInput {}

    public function leftThumbstickButton(): ?GCControllerButtonInput {}

    public function rightThumbstickButton(): ?GCControllerButtonInput {}
}

/**
 * @not-serializable
 */
class GCMicroGamepad extends GCPhysicalInputProfile
{
    public function dpad(): GCControllerDirectionPad {}

    public function buttonA(): GCControllerButtonInput {}

    public function buttonX(): GCControllerButtonInput {}

    public function buttonMenu(): GCControllerButtonInput {}
}

/**
 * @not-serializable
 */
class GCControllerElement extends NSObject
{
}

/**
 * @not-serializable
 */
class GCControllerButtonInput extends GCControllerElement
{
    public function isPressed(): bool {}

    /** 0.0 released to 1.0 fully pressed; analog for triggers. */
    public function value(): float {}
}

/**
 * @not-serializable
 */
class GCControllerAxisInput extends GCControllerElement
{
    /** -1.0 to 1.0; a stick's y is +1.0 pushed up. */
    public function value(): float {}
}

/**
 * @not-serializable
 */
class GCControllerDirectionPad extends GCControllerElement
{
    public function xAxis(): GCControllerAxisInput {}

    public function yAxis(): GCControllerAxisInput {}

    public function up(): GCControllerButtonInput {}

    public function down(): GCControllerButtonInput {}

    public function left(): GCControllerButtonInput {}

    public function right(): GCControllerButtonInput {}
}
