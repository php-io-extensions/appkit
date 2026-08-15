namespace AppKit\NS\NSColorSampler;

%{
#include "ns-colorsampler.h"
#include <stdint.h>
}%

/**
 * NSColorSampler — screen color sampling UI (macOS 10.15+).
 */
class NSColorSampler
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_colorsampler_create();
        }%
        return handle;
    }

    public static function destroy(int sampler) -> void
    {
        %{
            ns_colorsampler_destroy((uintptr_t) sampler);
        }%
    }

    public static function show(int sampler) -> void
    {
        %{
            ns_colorsampler_show((uintptr_t) sampler);
        }%
    }

    /**
     * Poll async result as [status, colorHandle].
     * status: 0 pending, 1 selected, 2 cancelled. colorHandle is 0 unless selected.
     */
    public static function poll(int sampler) -> array
    {
        array out = [];
        %{
            uintptr_t color = 0;
            int status = ns_colorsampler_poll((uintptr_t) sampler, &color);
            add_next_index_long(&out, status);
            add_next_index_long(&out, (zend_long) color);
        }%
        return out;
    }
}
