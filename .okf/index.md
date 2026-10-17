---
okf_version: "0.2"
---

# ext-appkit

* [Binding surface](api/surface.md) - Classes, enums and constants bound (app, windows, screens, display modes, views, layers, OpenGL views, layout, controls, text, tables, observers, video, events, game controllers, power, menus), each method one native call under its native name and signature; AppKit's behaviour passes through.
* [Run-loop modes](api/run-loop-modes.md) - Mode strings map back to the framework's constant objects; common modes match by pointer.

# Architecture

* [Object model](architecture/object-model.md) - One PHP object per native object, retained while PHP holds it, boxed as its nearest bound class.
* [Callouts](architecture/callouts.md) - PHP callables native code calls back into; lifetime follows the native object, detached at request end.
* [Glue](architecture/glue.md) - Native subclasses, blocks and CF callbacks PHP cannot write, plus marshalling and the pointer hand-off; each forwards the native arguments to PHP and PHP's result back, nothing else.
* [Layout bindings](architecture/layout.md) - Stack, grid and Auto Layout anchors/constraints; translatesAutoresizingMaskIntoConstraints must be off.
* [Video bindings](architecture/video.md) - URL → item → player → view; async status; end-of-play notification.
* [Errors and threads](architecture/errors-and-threads.md) - NSException becomes AppKitException after the call; results pass through; kept refusals only at probed crash sites, the main-thread gate on AppKit UI classes among them; the probe build.

# Runbooks

* [Build, install, test](runbooks/build.md) - `install-macos.sh` into php84 + zhp, Pest, probe build, smoke, clean tree.
* [Adding a binding](runbooks/adding-a-binding.md) - Stub, gen_stub, one `.m` per stub, config.m4 source list, surface test; no refusal without a probe.
