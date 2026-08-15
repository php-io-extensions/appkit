#ifndef PHP_APPKIT_NS_FONTMANAGER_H
#define PHP_APPKIT_NS_FONTMANAGER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_fontmanager_shared(void);

void ns_fontmanager_destroy(uintptr_t manager);

void *ns_fontmanager_nsfontmanager(uintptr_t manager);

int ns_fontmanager_is_multiple(uintptr_t manager);

uintptr_t ns_fontmanager_selected_font(uintptr_t manager);

void ns_fontmanager_set_selected_font(uintptr_t manager, uintptr_t font, int is_multiple);

uintptr_t ns_fontmanager_font_with_family(uintptr_t manager, const char *family, unsigned traits, int weight, double size);

unsigned ns_fontmanager_traits_of_font(uintptr_t manager, uintptr_t font);

int ns_fontmanager_weight_of_font(uintptr_t manager, uintptr_t font);

int ns_fontmanager_available_fonts_count(uintptr_t manager);

int ns_fontmanager_available_font_at(uintptr_t manager, int index, char *out, int out_len);

int ns_fontmanager_available_font_families_count(uintptr_t manager);

int ns_fontmanager_available_font_family_at(uintptr_t manager, int index, char *out, int out_len);

uintptr_t ns_fontmanager_convert_font(uintptr_t manager, uintptr_t font);

uintptr_t ns_fontmanager_convert_font_to_size(uintptr_t manager, uintptr_t font, double size);

uintptr_t ns_fontmanager_convert_font_to_face(uintptr_t manager, uintptr_t font, const char *face);

uintptr_t ns_fontmanager_convert_font_to_family(uintptr_t manager, uintptr_t font, const char *family);

uintptr_t ns_fontmanager_convert_font_to_have_trait(uintptr_t manager, uintptr_t font, unsigned trait);

uintptr_t ns_fontmanager_convert_font_to_not_have_trait(uintptr_t manager, uintptr_t font, unsigned trait);

uintptr_t ns_fontmanager_convert_weight(uintptr_t manager, uintptr_t font, int up);

int ns_fontmanager_is_enabled(uintptr_t manager);

void ns_fontmanager_set_enabled(uintptr_t manager, int enabled);

unsigned ns_fontmanager_current_font_action(uintptr_t manager);

uintptr_t ns_fontmanager_font_panel(uintptr_t manager, int create);

void ns_fontmanager_order_front_font_panel(uintptr_t manager);

int ns_fontmanager_font_named_has_traits(uintptr_t manager, const char *name, unsigned traits);

int ns_fontmanager_available_font_names_with_traits_count(uintptr_t manager, unsigned traits);

int ns_fontmanager_available_font_name_with_traits_at(uintptr_t manager, unsigned traits, int index, char *out, int out_len);

int ns_fontmanager_localized_name_for_family(uintptr_t manager, const char *family, const char *face, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_FONTMANAGER_H */
