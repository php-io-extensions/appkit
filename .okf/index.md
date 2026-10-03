---
okf_version: "0.2"
---

# ext-appkit

* [Binding surface](api/surface.md) - Classes, enums and constants bound so far (windows, menus, views, layout, controls, tables, observers, video), each method one native call.
* [Run-loop modes](api/run-loop-modes.md) - Mode strings map back to the framework's constant objects; common modes match by pointer.

# Architecture

* [Object model](architecture/object-model.md) - One PHP object per native object, retained while PHP holds it, boxed as its nearest bound class.
* [Callouts](architecture/callouts.md) - PHP callables native code calls back into; lifetime follows the native object, detached at request end.
* [Glue trampolines](architecture/glue.md) - ObjCDelegate answers a protocol's selectors by calling PHP; ObjCTarget answers action:.
* [Layout bindings](architecture/layout.md) - Stack, grid and Auto Layout anchors/constraints; translatesAutoresizingMaskIntoConstraints must be off.
* [Video bindings](architecture/video.md) - URL → item → player → view; async status; end-of-play notification.
* [Errors and threads](architecture/errors-and-threads.md) - NSException becomes AppKitException; main-thread AppKit calls refuse other threads.

# Runbooks

* [Build, install, test](runbooks/build.md) - `install-macos.sh` into php84 + zhp, Pest suite, smoke, clean tree.
* [Adding a binding](runbooks/adding-a-binding.md) - Stub, gen_stub, one `.m` per stub, config.m4 source list, surface test.
