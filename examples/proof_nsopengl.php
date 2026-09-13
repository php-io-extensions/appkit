<?php
/**
 * proof_nsopengl.php — OpenGL in a real Mac window, two extensions, one frame
 * that is byte-checked and two seconds that are watched.
 *
 * ext-appkit puts up an NSApplication, an NSWindow and an NSOpenGLView on a
 * 4.1 core NSOpenGLPixelFormat, and makes the view's NSOpenGLContext current.
 * ext-opengl then draws into that context's default framebuffer with exactly
 * the recipe from ext-opengl's examples/proof_headless.php (VAO, VBO, a GLSL
 * 1.50 core shader pair, glDrawArrays), reads the frame back with
 * glReadPixels into an OpenGL Bridge buffer, and byte-checks the centre and
 * the corner. Then the window animates for ~2s through AppKit's pump, so the
 * proof is visible as well as numeric.
 *
 * The seam between the two extensions is raw pointer bits, never a registry
 * handle: NSOpenGLContext::CGLContextObj() and CGL::CGLGetCurrentContext()
 * are asserted to be the same address, which is what makes "AppKit owns the
 * drawable, ext-opengl draws into it" true rather than hopeful.
 *
 * NSOpenGLPixelFormat / NSOpenGLContext / NSOpenGLView are API_DEPRECATED in
 * their entirety since 10.14 and bound anyway, under the
 * `@audit deprecated-class` exemption in .okf/binding-rules.md: they remain
 * the only OS path from an NSWindow to OpenGL.
 *
 * Run: php examples/proof_nsopengl.php
 * Exit codes: 0 = PROOF_NSOPENGL_OK, 1 = failure.
 *
 * Constants are inline ints with a header:line citation, because constants
 * live in jovian/appkit and jovian/ogx, never in an extension.
 */

declare(strict_types=1);

use AppKit\Bridge\Bridge as AppKitBridge;
use AppKit\NS\NSApplication\NSApplication;
use AppKit\NS\NSOpenGLContext\NSOpenGLContext;
use AppKit\NS\NSOpenGLPixelFormat\NSOpenGLPixelFormat;
use AppKit\NS\NSOpenGLView\NSOpenGLView;
use AppKit\NS\NSWindow\NSWindow;
use OpenGL\Bridge\Bridge as GLBridge;
use OpenGL\CGL\CGL;
use OpenGL\GL\GL10\GL10;
use OpenGL\GL\GL11\GL11;
use OpenGL\GL\GL15\GL15;
use OpenGL\GL\GL20\GL20;
use OpenGL\GL\GL30\GL30;

/* ---- AppKit/NSOpenGL.h ---------------------------------------------- */
const NSOpenGLPFADoubleBuffer = 5;               // NSOpenGL.h:62
const NSOpenGLPFAColorSize = 8;                  // NSOpenGL.h:64
const NSOpenGLPFAAlphaSize = 11;                 // NSOpenGL.h:65
const NSOpenGLPFADepthSize = 12;                 // NSOpenGL.h:66
const NSOpenGLPFAAccelerated = 73;               // NSOpenGL.h:80
const NSOpenGLPFAOpenGLProfile = 99;             // NSOpenGL.h:86
const NSOpenGLProfileVersion4_1Core = 0x4100;    // NSOpenGL.h:107
const NSOpenGLContextParameterSwapInterval = 222; // NSOpenGL.h:165

/* ---- AppKit/NSRunningApplication.h, NSWindow.h, NSGraphics.h -------- */
const NSApplicationActivationPolicyRegular = 0;  // NSRunningApplication.h:36
const NSWindowStyleMaskTitled = 1 << 0;          // NSWindow.h:56
const NSWindowStyleMaskClosable = 1 << 1;        // NSWindow.h:57
const NSWindowStyleMaskMiniaturizable = 1 << 2;  // NSWindow.h:58
const NSWindowStyleMaskResizable = 1 << 3;       // NSWindow.h:59
const NSBackingStoreBuffered = 2;                // NSGraphics.h:99

/* ---- khronos/glcorearb.h (ext-opengl scripts/khronos) --------------- */
const GL_COLOR_BUFFER_BIT = 0x00004000;          // glcorearb.h:74
const GL_TRIANGLES = 0x0004;                     // glcorearb.h:81
const GL_NO_ERROR = 0;                           // glcorearb.h:114
const GL_UNSIGNED_BYTE = 0x1401;                 // glcorearb.h:187
const GL_FLOAT = 0x1406;                         // glcorearb.h:192
const GL_RGBA = 0x1908;                          // glcorearb.h:222
const GL_RENDERER = 0x1F01;                      // glcorearb.h:231
const GL_VERSION = 0x1F02;                       // glcorearb.h:232
const GL_ARRAY_BUFFER = 0x8892;                  // glcorearb.h:606
const GL_STATIC_DRAW = 0x88E4;                   // glcorearb.h:620
const GL_FRAGMENT_SHADER = 0x8B30;               // glcorearb.h:709
const GL_VERTEX_SHADER = 0x8B31;                 // glcorearb.h:710
const GL_COMPILE_STATUS = 0x8B81;                // glcorearb.h:737
const GL_LINK_STATUS = 0x8B82;                   // glcorearb.h:738
const GL_INFO_LOG_LENGTH = 0x8B84;               // glcorearb.h:740
const GL_SHADING_LANGUAGE_VERSION = 0x8B8C;      // glcorearb.h:748

const VIEW_W = 480;
const VIEW_H = 320;
const ANIMATE_SECONDS = 2.0;

$allocated = [];

function fail(string $why): never
{
    fwrite(STDERR, "proof_nsopengl: {$why}\n");
    fwrite(STDERR, "PROOF_NSOPENGL_FAILED\n");
    exit(1);
}

function step(string $what): void
{
    echo "  {$what}\n";
}

function buffer(int $bytes): int
{
    global $allocated;

    $ptr = GLBridge::alloc($bytes);
    if ($ptr === 0) {
        fail("OpenGL Bridge::alloc({$bytes}) failed");
    }
    $allocated[] = $ptr;

    return $ptr;
}

function readInt(int $ptr, int $offset = 0): int
{
    return unpack('l', GLBridge::read($ptr, $offset, 4))[1];
}

function compileShader(int $stage, string $source, string $label): int
{
    $shader = GL20::glCreateShader($stage);
    if ($shader === 0) {
        fail("glCreateShader({$label}) returned 0");
    }
    GL20::glShaderSource($shader, 1, [$source], 0);
    GL20::glCompileShader($shader);

    $status = buffer(4);
    GL20::glGetShaderiv($shader, GL_COMPILE_STATUS, $status);
    if (readInt($status) === 1) {
        return $shader;
    }

    GL20::glGetShaderiv($shader, GL_INFO_LOG_LENGTH, $status);
    $len = max(1, readInt($status));
    $log = buffer($len);
    GL20::glGetShaderInfoLog($shader, $len, 0, $log);
    fail("{$label} shader did not compile:\n" . rtrim(GLBridge::read($log, 0, $len), "\0"));
}

// ---------------------------------------------------------------- main

echo "proof_nsopengl — " . PHP_OS_FAMILY . ' / ' . php_uname('m') . "\n\n";

foreach (['appkit', 'opengl'] as $ext) {
    if (!extension_loaded($ext)) {
        fail("the {$ext} extension is not loaded");
    }
}

echo "1. application\n";
$app = NSApplication::sharedApplication();
if ($app === 0) {
    fail('NSApplication::sharedApplication() returned 0');
}
NSApplication::setActivationPolicy($app, NSApplicationActivationPolicyRegular);
NSApplication::finishLaunching($app);
NSApplication::activate($app);
step('NSApplication is a regular, launched app');

echo "\n2. pixel format (4.1 core, double buffered)\n";
$attribs = [
    NSOpenGLPFAOpenGLProfile, NSOpenGLProfileVersion4_1Core,
    NSOpenGLPFADoubleBuffer,
    NSOpenGLPFAAccelerated,
    NSOpenGLPFAColorSize, 24,
    NSOpenGLPFAAlphaSize, 8,
    NSOpenGLPFADepthSize, 24,
];
// The attribute list crosses as a PHP list of ints marshalled into the
// const NSOpenGLPixelFormatAttribute * the selector takes; the binding
// writes the terminating 0 the C ABI requires (src/ns-openglpixelformat.h).
$pixelFormat = NSOpenGLPixelFormat::initWithAttributes($attribs);
if ($pixelFormat === 0) {
    fail('NSOpenGLPixelFormat::initWithAttributes returned 0 for a 4.1 core format');
}
$screens = NSOpenGLPixelFormat::numberOfVirtualScreens($pixelFormat);
$profile = NSOpenGLPixelFormat::getValuesForAttributeForVirtualScreen($pixelFormat, NSOpenGLPFAOpenGLProfile, 0);
step("pixel format {$pixelFormat}, virtual screens {$screens}");
step(sprintf('getValues(NSOpenGLPFAOpenGLProfile) = 0x%04X', $profile['vals'][0]));
if ($profile['vals'][0] !== NSOpenGLProfileVersion4_1Core) {
    fail(sprintf('the pixel format is not 4.1 core (0x%04X)', $profile['vals'][0]));
}
$cglPixelFormat = NSOpenGLPixelFormat::CGLPixelFormatObj($pixelFormat);
if ($cglPixelFormat === 0) {
    fail('CGLPixelFormatObj() is NULL');
}
step(sprintf('CGLPixelFormatObj = 0x%X (pointer bits, ext-opengl currency)', $cglPixelFormat));

echo "\n3. window + NSOpenGLView\n";
$view = NSOpenGLView::initWithFramePixelFormat(0.0, 0.0, (float) VIEW_W, (float) VIEW_H, $pixelFormat);
if ($view === 0) {
    fail('NSOpenGLView::initWithFramePixelFormat returned 0');
}
$style = NSWindowStyleMaskTitled | NSWindowStyleMaskClosable
    | NSWindowStyleMaskMiniaturizable | NSWindowStyleMaskResizable;
$window = NSWindow::initWithContentRectStyleMaskBackingDefer(
    200.0,
    200.0,
    (float) VIEW_W,
    (float) VIEW_H,
    $style,
    NSBackingStoreBuffered,
    false
);
if ($window === 0) {
    fail('NSWindow::initWithContentRectStyleMaskBackingDefer returned 0');
}
// The bridge registry owns the handle; AppKit must not also release on close.
NSWindow::setReleasedWhenClosed($window, false);
NSWindow::setTitle($window, 'appkit + opengl — NSOpenGLView');
NSWindow::setContentView($window, $view);
NSWindow::makeKeyAndOrderFront($window, 0);
AppKitBridge::pump(0.05);
step("window {$window}, NSOpenGLView {$view} as its content view");

echo "\n4. context\n";
$context = NSOpenGLView::openGLContext($view);
if ($context === 0) {
    fail('NSOpenGLView::openGLContext returned 0');
}
$attached = NSOpenGLContext::view($context);
if ($attached !== $view) {
    // NSOpenGLView attaches its own context when the view joins a window;
    // if it has not yet, the same selector does it explicitly.
    NSOpenGLContext::setView($context, $view);
    AppKitBridge::pump(0.05);
    $attached = NSOpenGLContext::view($context);
}
if ($attached !== $view) {
    fail('the context has no view: it has no drawable to render into');
}
step("context {$context} is attached to view {$attached}");

NSOpenGLContext::makeCurrentContext($context);

// One send each way through the GLint-array marshalling.
NSOpenGLContext::setValuesForParameter($context, [1], NSOpenGLContextParameterSwapInterval);
$swap = NSOpenGLContext::getValuesForParameter($context, NSOpenGLContextParameterSwapInterval);
step("swap interval set to 1, read back as {$swap['vals'][0]}");
if ($swap['vals'][0] !== 1) {
    fail('the swap interval did not read back as it was set');
}

// The cross-extension seam: the same address, seen from both extensions.
// ext-opengl resolves its entry points on Bridge::load(), so the loader
// runs before anything is asked of CGL.
if (!GLBridge::load()) {
    fail('OpenGL Bridge::load() could not open an OpenGL library');
}
$cglFromAppKit = NSOpenGLContext::CGLContextObj($context);
$cglFromGL = CGL::CGLGetCurrentContext();
step(sprintf('NSOpenGLContext::CGLContextObj = 0x%X', $cglFromAppKit));
step(sprintf('CGL::CGLGetCurrentContext      = 0x%X', $cglFromGL));
if ($cglFromAppKit === 0 || $cglFromAppKit !== $cglFromGL) {
    fail('the context AppKit made current is not the one ext-opengl sees');
}

$pf = NSOpenGLContext::pixelFormat($context);
step('NSOpenGLContext::pixelFormat = ' . $pf . ($pf === $pixelFormat ? ' (the format we built)' : ''));

echo "\n5. ext-opengl on the window's framebuffer\n";
// Re-load so the version gate samples the context that is now current.
GLBridge::load();
$version = GLBridge::contextVersion();
step("Bridge::contextVersion() = {$version['major']}.{$version['minor']}");
if ($version['major'] < 4 || ($version['major'] === 4 && $version['minor'] < 1)) {
    fail("this proof asked for a 4.1 core context; GL reports {$version['major']}.{$version['minor']}");
}
step('GL_VERSION                  = ' . GL10::glGetString(GL_VERSION));
step('GL_RENDERER                 = ' . GL10::glGetString(GL_RENDERER));
$glsl = GL10::glGetString(GL_SHADING_LANGUAGE_VERSION);
step("GL_SHADING_LANGUAGE_VERSION = {$glsl}");

$vaoOut = buffer(4);
GL30::glGenVertexArrays(1, $vaoOut);
$vao = readInt($vaoOut);
GL30::glBindVertexArray($vao);

$vertices = pack('f*', 0.0, 0.8, -0.8, -0.8, 0.8, -0.8);
$vboOut = buffer(4);
GL15::glGenBuffers(1, $vboOut);
$vbo = readInt($vboOut);
GL15::glBindBuffer(GL_ARRAY_BUFFER, $vbo);
$vertexData = buffer(strlen($vertices));
GLBridge::write($vertexData, 0, $vertices);
GL15::glBufferData(GL_ARRAY_BUFFER, strlen($vertices), $vertexData, GL_STATIC_DRAW);
step("VAO {$vao}, VBO {$vbo} (" . strlen($vertices) . ' bytes)');

$vs = compileShader(GL_VERTEX_SHADER, <<<'GLSL'
#version 150 core
in vec2 aPos;
void main()
{
    gl_Position = vec4(aPos, 0.0, 1.0);
}
GLSL, 'vertex');

$fs = compileShader(GL_FRAGMENT_SHADER, <<<'GLSL'
#version 150 core
out vec4 fragColour;
void main()
{
    fragColour = vec4(1.0, 0.5, 0.25, 1.0);
}
GLSL, 'fragment');

$program = GL20::glCreateProgram();
GL20::glAttachShader($program, $vs);
GL20::glAttachShader($program, $fs);
GL20::glBindAttribLocation($program, 0, 'aPos');
GL20::glLinkProgram($program);
$status = buffer(4);
GL20::glGetProgramiv($program, GL_LINK_STATUS, $status);
if (readInt($status) !== 1) {
    GL20::glGetProgramiv($program, GL_INFO_LOG_LENGTH, $status);
    $len = max(1, readInt($status));
    $log = buffer($len);
    GL20::glGetProgramInfoLog($program, $len, 0, $log);
    fail("program did not link:\n" . rtrim(GLBridge::read($log, 0, $len), "\0"));
}
GL20::glUseProgram($program);
GL20::glEnableVertexAttribArray(0);
GL20::glVertexAttribPointer(0, 2, GL_FLOAT, false, 0, 0);
step("program {$program} linked (vs {$vs}, fs {$fs})");

GL10::glViewport(0, 0, VIEW_W, VIEW_H);
GL10::glClearColor(0.0, 0.0, 0.0, 1.0);
GL10::glClear(GL_COLOR_BUFFER_BIT);
GL11::glDrawArrays(GL_TRIANGLES, 0, 3);
GL10::glFinish();
$err = GL10::glGetError();
if ($err !== GL_NO_ERROR) {
    fail(sprintf('glGetError() = 0x%X after the draw', $err));
}
step('cleared and drew 3 vertices into the view, glGetError() = GL_NO_ERROR');

echo "\n6. read back and byte-check (before the swap: the back buffer is the frame)\n";
$pixels = buffer(VIEW_W * VIEW_H * 4);
GL10::glReadPixels(0, 0, VIEW_W, VIEW_H, GL_RGBA, GL_UNSIGNED_BYTE, $pixels);

$centre = GLBridge::read($pixels, (intdiv(VIEW_H, 2) * VIEW_W + intdiv(VIEW_W, 2)) * 4, 4);
$corner = GLBridge::read($pixels, 0, 4);
if (is_null($centre) || is_null($corner)) {
    fail('Bridge::read of the pixel buffer returned null');
}
$c = array_values(unpack('C4', $centre));
$k = array_values(unpack('C4', $corner));
step(sprintf('centre RGBA = %d,%d,%d,%d', $c[0], $c[1], $c[2], $c[3]));
step(sprintf('corner RGBA = %d,%d,%d,%d', $k[0], $k[1], $k[2], $k[3]));
if ($c[0] < 240 || $c[1] < 100 || $c[1] > 155 || $c[2] < 48 || $c[2] > 80 || $c[3] !== 255) {
    fail('the centre pixel is not the shader colour — nothing was drawn into the window');
}
if ($k[0] !== 0 || $k[1] !== 0 || $k[2] !== 0 || $k[3] !== 255) {
    fail('the corner pixel is not the clear colour');
}
step('centre is the shader colour and the corner is the clear colour');

NSOpenGLContext::flushBuffer($context);
step('flushBuffer: the frame is on screen');

echo "\n7. animate for ~" . ANIMATE_SECONDS . "s through the AppKit pump\n";
$start = microtime(true);
$frames = 0;
while (($elapsed = microtime(true) - $start) < ANIMATE_SECONDS) {
    NSOpenGLContext::makeCurrentContext($context);
    $t = $elapsed / ANIMATE_SECONDS;
    GL10::glClearColor(0.10 + 0.25 * sin($t * 6.283), 0.12, 0.35 - 0.25 * sin($t * 6.283), 1.0);
    GL10::glClear(GL_COLOR_BUFFER_BIT);
    GL11::glDrawArrays(GL_TRIANGLES, 0, 3);
    NSOpenGLContext::flushBuffer($context);
    AppKitBridge::pump(0.001);
    $frames++;
}
step(sprintf('%d frames in %.2fs', $frames, microtime(true) - $start));
if ($frames < 10) {
    fail('the animation did not produce frames');
}
$err = GL10::glGetError();
if ($err !== GL_NO_ERROR) {
    fail(sprintf('glGetError() = 0x%X after the animation', $err));
}

echo "\n8. teardown\n";
foreach ($allocated as $ptr) {
    GLBridge::free($ptr);
}
NSOpenGLContext::clearCurrentContext();
if (NSOpenGLContext::currentContext() !== 0) {
    fail('clearCurrentContext left a current context');
}
NSOpenGLView::clearGLContext($view);
NSWindow::orderOut($window, 0);
NSWindow::close($window);
AppKitBridge::pump(0.05);
step('context cleared, window closed');

echo "\nPROOF_NSOPENGL_OK\n";
exit(0);
