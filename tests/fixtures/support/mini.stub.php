<?php

class NSButton extends NSControl
{
    public function setTitle(string $title): void {}

    public function title(): string {}

    public function notAMember(): void {}
}

class NSMiniButton extends NSButton
{
    /** -[NSButton highlight:], declared on the subclass. */
    public function highlight(bool $flag): void {}
}
