<?php

/** @generate-class-entries */

/**
 * NSURLRequest.h:220 +requestWithURL:
 *
 * @not-serializable
 */
class NSURLRequest extends NSObject
{
    public static function requestWithURL(NSURL $URL): static {}

    public function URL(): ?NSURL {}
}

/**
 * A navigation WebKit started; opaque, the same object a WKNavigationDelegate method receives.
 *
 * @not-serializable
 */
class WKNavigation extends NSObject
{
}

/**
 * WKWebViewConfiguration.h:102
 *
 * @not-serializable
 */
class WKWebViewConfiguration extends NSObject
{
    /** [[<called class> alloc] init] */
    public static function init(): static {}
}

/**
 * WKWebView.h. Navigation reports go to a WKNavigationDelegate: an ObjCDelegate for the
 * protocol, set with setNavigationDelegate (weak in WebKit: keep it).
 *
 * @not-serializable
 */
class WKWebView extends NSView
{
    /** WKWebView.h:114 [[<called class> alloc] initWithFrame:configuration:] */
    public static function initWithFrameConfiguration(NSRect $frame, WKWebViewConfiguration $configuration): static {}

    /** WKWebView.h:94 */
    public function setNavigationDelegate(?NSObject $navigationDelegate): void {}

    /** WKWebView.h:122 */
    public function loadRequest(NSURLRequest $request): ?WKNavigation {}

    /** WKWebView.h:138 */
    public function loadHTMLStringBaseURL(string $string, ?NSURL $baseURL): ?WKNavigation {}

    /** WKWebView.h:163 */
    public function title(): ?string {}

    /** WKWebView.h:171 */
    public function URL(): ?NSURL {}

    /** WKWebView.h:178 */
    public function isLoading(): bool {}

    /** WKWebView.h:209 */
    public function canGoBack(): bool {}

    /** WKWebView.h:217 */
    public function canGoForward(): bool {}

    /** WKWebView.h:223 */
    public function goBack(): ?WKNavigation {}

    /** WKWebView.h:229 */
    public function goForward(): ?WKNavigation {}

    /** WKWebView.h:234 */
    public function reload(): ?WKNavigation {}

    /** WKWebView.h:244 */
    public function stopLoading(): void {}
}
