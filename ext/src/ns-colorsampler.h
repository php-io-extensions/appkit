#ifndef PHP_APPKIT_NS_COLORSAMPLER_H
#define PHP_APPKIT_NS_COLORSAMPLER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/** 0 = pending, 1 = selected (out_color set), 2 = cancelled */
#define NS_COLORSAMPLER_POLL_PENDING 0
#define NS_COLORSAMPLER_POLL_SELECTED 1
#define NS_COLORSAMPLER_POLL_CANCELLED 2

uintptr_t ns_colorsampler_create(void);

void ns_colorsampler_destroy(uintptr_t sampler);

void ns_colorsampler_show(uintptr_t sampler);

int ns_colorsampler_poll(uintptr_t sampler, uintptr_t *out_color);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COLORSAMPLER_H */
