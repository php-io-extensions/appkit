<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class NSResponder extends NSObject
{
    public function nextResponder(): ?NSResponder {}

    public function setNextResponder(?NSResponder $nextResponder): void {}

    public function acceptsFirstResponder(): bool {}

    /** @param NSEvent[] $eventArray */
    public function interpretKeyEvents(array $eventArray): void {}
}
