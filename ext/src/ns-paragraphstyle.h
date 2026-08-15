#ifndef PHP_APPKIT_NS_PARAGRAPHSTYLE_H
#define PHP_APPKIT_NS_PARAGRAPHSTYLE_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_PARAGRAPH_LINE_BREAK_BY_WORD_WRAPPING = 0,
    NS_PARAGRAPH_LINE_BREAK_BY_CHAR_WRAPPING = 1,
    NS_PARAGRAPH_LINE_BREAK_BY_CLIPPING = 2,
    NS_PARAGRAPH_LINE_BREAK_BY_TRUNCATING_HEAD = 3,
    NS_PARAGRAPH_LINE_BREAK_BY_TRUNCATING_TAIL = 4,
    NS_PARAGRAPH_LINE_BREAK_BY_TRUNCATING_MIDDLE = 5
} ns_paragraph_line_break_mode;

typedef enum {
    NS_PARAGRAPH_LINE_BREAK_STRATEGY_NONE = 0,
    NS_PARAGRAPH_LINE_BREAK_STRATEGY_PUSH_OUT = 1,
    NS_PARAGRAPH_LINE_BREAK_STRATEGY_HANGUL_WORD_PRIORITY = 2,
    NS_PARAGRAPH_LINE_BREAK_STRATEGY_STANDARD = 65535
} ns_paragraph_line_break_strategy;

uintptr_t ns_paragraphstyle_default(void);
uintptr_t ns_paragraphstyle_create(void);
uintptr_t ns_paragraphstyle_wrap(void *style);
void ns_paragraphstyle_destroy(uintptr_t style);
void *ns_paragraphstyle_nsparagraphstyle(uintptr_t style);

double ns_paragraphstyle_line_spacing(uintptr_t style);
double ns_paragraphstyle_paragraph_spacing(uintptr_t style);
double ns_paragraphstyle_head_indent(uintptr_t style);
double ns_paragraphstyle_tail_indent(uintptr_t style);
double ns_paragraphstyle_first_line_head_indent(uintptr_t style);
double ns_paragraphstyle_minimum_line_height(uintptr_t style);
double ns_paragraphstyle_maximum_line_height(uintptr_t style);
int ns_paragraphstyle_line_break_mode(uintptr_t style);
int ns_paragraphstyle_base_writing_direction(uintptr_t style);
double ns_paragraphstyle_line_height_multiple(uintptr_t style);
double ns_paragraphstyle_paragraph_spacing_before(uintptr_t style);
float ns_paragraphstyle_hyphenation_factor(uintptr_t style);
int ns_paragraphstyle_uses_default_hyphenation(uintptr_t style);
double ns_paragraphstyle_default_tab_interval(uintptr_t style);
int ns_paragraphstyle_allows_default_tightening_for_truncation(uintptr_t style);
int ns_paragraphstyle_line_break_strategy(uintptr_t style);
int ns_paragraphstyle_alignment(uintptr_t style);

void ns_paragraphstyle_set_line_spacing(uintptr_t style, double value);
void ns_paragraphstyle_set_paragraph_spacing(uintptr_t style, double value);
void ns_paragraphstyle_set_head_indent(uintptr_t style, double value);
void ns_paragraphstyle_set_tail_indent(uintptr_t style, double value);
void ns_paragraphstyle_set_first_line_head_indent(uintptr_t style, double value);
void ns_paragraphstyle_set_minimum_line_height(uintptr_t style, double value);
void ns_paragraphstyle_set_maximum_line_height(uintptr_t style, double value);
void ns_paragraphstyle_set_line_break_mode(uintptr_t style, int mode);
void ns_paragraphstyle_set_base_writing_direction(uintptr_t style, int direction);
void ns_paragraphstyle_set_line_height_multiple(uintptr_t style, double value);
void ns_paragraphstyle_set_paragraph_spacing_before(uintptr_t style, double value);
void ns_paragraphstyle_set_hyphenation_factor(uintptr_t style, float value);
void ns_paragraphstyle_set_uses_default_hyphenation(uintptr_t style, int flag);
void ns_paragraphstyle_set_default_tab_interval(uintptr_t style, double value);
void ns_paragraphstyle_set_allows_default_tightening_for_truncation(uintptr_t style, int flag);
void ns_paragraphstyle_set_line_break_strategy(uintptr_t style, int strategy);
void ns_paragraphstyle_set_alignment(uintptr_t style, int alignment);
void ns_paragraphstyle_set_paragraph_style(uintptr_t style, uintptr_t source);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PARAGRAPHSTYLE_H */
