<?php

declare(strict_types=1);

beforeEach(function (): void {
    $this->app = NSApplication::sharedApplication();
});

it('loads HTML with a base URL, reports the finish to its navigation delegate, and reads title and URL', function (): void {
    $window = newWindow(320, 200);
    $view = WKWebView::initWithFrameConfiguration(new NSRect(0, 0, 320, 200), WKWebViewConfiguration::init());
    $window->setContentView($view);
    $finished = [];
    $delegate = new ObjCDelegate('WKNavigationDelegate');
    $delegate->on('webView:didFinishNavigation:', function (WKWebView $web, ?NSObject $navigation) use (&$finished): void {
        $finished[] = $navigation;
    });
    $view->setNavigationDelegate($delegate);

    $navigation = $view->loadHTMLStringBaseURL('<title>Hello</title><p>hi</p>', NSURL::URLWithString('https://example.test/page'));
    $done = pumpUntil($this->app, function () use (&$finished): bool {
        return $finished !== [];
    }, 10.0);

    expect($navigation)->toBeInstanceOf(WKNavigation::class)
        ->and($done)->toBeTrue()
        ->and($finished[0])->toBe($navigation)
        ->and($view->title())->toBe('Hello')
        ->and($view->URL()?->absoluteString())->toBe('https://example.test/page')
        ->and($view->isLoading())->toBeFalse()
        ->and($view->canGoBack())->toBeFalse()
        ->and($view->canGoForward())->toBeFalse();

    $view->stopLoading();
    $view->setNavigationDelegate(null);
    $window->close();
});

it('reports a request it cannot load to its navigation delegate', function (): void {
    $view = WKWebView::initWithFrameConfiguration(new NSRect(0, 0, 64, 64), WKWebViewConfiguration::init());
    $failed = null;
    $delegate = new ObjCDelegate('WKNavigationDelegate');
    $delegate->on('webView:didFailProvisionalNavigation:withError:', function (WKWebView $web, ?NSObject $navigation, NSError $error) use (&$failed): void {
        $failed = $error;
    });
    $view->setNavigationDelegate($delegate);
    $request = NSURLRequest::requestWithURL(NSURL::URLWithString('file:///nonexistent/stargazer-webkit-test.html'));

    expect($request->URL()?->absoluteString())->toBe('file:///nonexistent/stargazer-webkit-test.html');
    $view->loadRequest($request);
    pumpUntil($this->app, function () use (&$failed): bool {
        return $failed !== null;
    }, 10.0);

    expect($failed)->toBeInstanceOf(NSError::class)
        ->and($failed->localizedDescription())->not->toBe('');
    $view->setNavigationDelegate(null);
});
