#ifndef PHP_APPKIT_NS_FONTDESCRIPTOR_H
#define PHP_APPKIT_NS_FONTDESCRIPTOR_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_FONT_DESIGN_DEFAULT = 0,
    NS_FONT_DESIGN_SERIF,
    NS_FONT_DESIGN_MONOSPACED,
    NS_FONT_DESIGN_ROUNDED
} ns_font_design_kind;

uintptr_t ns_fontdescriptor_wrap(void *descriptor);

void ns_fontdescriptor_destroy(uintptr_t descriptor);

void *ns_fontdescriptor_nsfontdescriptor(uintptr_t descriptor);

uintptr_t ns_fontdescriptor_with_name(const char *name, double size);

uintptr_t ns_fontdescriptor_preferred_for_text_style(int style_kind);

int ns_fontdescriptor_postscript_name(uintptr_t descriptor, char *out, int out_len);

double ns_fontdescriptor_point_size(uintptr_t descriptor);

unsigned ns_fontdescriptor_symbolic_traits(uintptr_t descriptor);

int ns_fontdescriptor_requires_font_asset_request(uintptr_t descriptor);

uintptr_t ns_fontdescriptor_with_symbolic_traits(uintptr_t descriptor, unsigned traits);

uintptr_t ns_fontdescriptor_with_size(uintptr_t descriptor, double size);

uintptr_t ns_fontdescriptor_with_family(uintptr_t descriptor, const char *family);

uintptr_t ns_fontdescriptor_with_face(uintptr_t descriptor, const char *face);

uintptr_t ns_fontdescriptor_with_design(uintptr_t descriptor, int design_kind);

int ns_fontdescriptor_matching_count(uintptr_t descriptor);

uintptr_t ns_fontdescriptor_matching_at(uintptr_t descriptor, int index);

uintptr_t ns_fontdescriptor_matching_first(uintptr_t descriptor);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_FONTDESCRIPTOR_H */
