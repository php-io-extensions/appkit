#import <AppKit/AppKit.h>
#import "ns-spellchecker.h"

static int ns_copy_nsstring(NSString *text, char *out, int out_len)
{
    if (!out || out_len <= 0) {
        return 0;
    }
    if (!text) {
        out[0] = '\0';
        return 1;
    }
    return [text getCString:out maxLength:(NSUInteger)out_len encoding:NSUTF8StringEncoding] ? 1 : 0;
}

static uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static void ns_release_handle(uintptr_t handle)
{
    if (handle) {
        CFRelease((void *)handle);
    }
}

static NSSpellChecker *ns_spellchecker_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSSpellChecker class]] ? (NSSpellChecker *)obj : nil;
}

uintptr_t ns_spellchecker_shared(void)
{
    @autoreleasepool {
        return ns_retain_obj([NSSpellChecker sharedSpellChecker]);
    }
}

void ns_spellchecker_destroy(uintptr_t checker)
{
    ns_release_handle(checker);
}

int ns_spellchecker_unique_spell_document_tag(void)
{
    return (int)[NSSpellChecker uniqueSpellDocumentTag];
}

void ns_spellchecker_check_spelling(uintptr_t checker, const char *string, int starting_at, int *location, int *length)
{
    if (location) {
        *location = 0;
    }
    if (length) {
        *length = 0;
    }
    @autoreleasepool {
        NSSpellChecker *obj = ns_spellchecker_from(checker);
        if (!obj) {
            return;
        }
        NSString *text = string ? [NSString stringWithUTF8String:string] : @"";
        NSRange range = [obj checkSpellingOfString:text startingAt:(NSInteger)starting_at];
        if (location) {
            *location = range.location == NSNotFound ? -1 : (int)range.location;
        }
        if (length) {
            *length = (int)range.length;
        }
    }
}

int ns_spellchecker_count_words_in_string(uintptr_t checker, const char *string, const char *language)
{
    @autoreleasepool {
        NSSpellChecker *obj = ns_spellchecker_from(checker);
        if (!obj) {
            return 0;
        }
        NSString *text = string ? [NSString stringWithUTF8String:string] : @"";
        NSString *lang = (language && language[0]) ? [NSString stringWithUTF8String:language] : nil;
        return (int)[obj countWordsInString:text language:lang];
    }
}

void ns_spellchecker_ignore_word(uintptr_t checker, const char *word, int tag)
{
    @autoreleasepool {
        NSSpellChecker *obj = ns_spellchecker_from(checker);
        if (obj && word) {
            [obj ignoreWord:[NSString stringWithUTF8String:word] inSpellDocumentWithTag:(NSInteger)tag];
        }
    }
}

int ns_spellchecker_ignored_words_count(uintptr_t checker, int tag)
{
    @autoreleasepool {
        NSSpellChecker *obj = ns_spellchecker_from(checker);
        if (!obj) {
            return 0;
        }
        return (int)[obj ignoredWordsInSpellDocumentWithTag:(NSInteger)tag].count;
    }
}

int ns_spellchecker_ignored_word_at(uintptr_t checker, int tag, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSSpellChecker *obj = ns_spellchecker_from(checker);
        if (!obj) {
            return 0;
        }
        NSArray<NSString *> *words = [obj ignoredWordsInSpellDocumentWithTag:(NSInteger)tag];
        if (index < 0 || index >= (int)words.count) {
            return 0;
        }
        return ns_copy_nsstring(words[(NSUInteger)index], out, out_len);
    }
}

void ns_spellchecker_update_spelling_panel_with_misspelled_word(uintptr_t checker, const char *word)
{
    @autoreleasepool {
        NSSpellChecker *obj = ns_spellchecker_from(checker);
        if (obj) {
            [obj updateSpellingPanelWithMisspelledWord:word ? [NSString stringWithUTF8String:word] : @""];
        }
    }
}

void ns_spellchecker_update_panels(uintptr_t checker)
{
    @autoreleasepool {
        NSSpellChecker *obj = ns_spellchecker_from(checker);
        if (obj) {
            [obj updatePanels];
        }
    }
}

int ns_spellchecker_is_automatic_spelling_correction_enabled(uintptr_t checker)
{
    (void)checker;
    return [NSSpellChecker isAutomaticSpellingCorrectionEnabled] ? 1 : 0;
}

void ns_spellchecker_set_automatic_spelling_correction_enabled(uintptr_t checker, int flag)
{
    (void)checker;
    (void)flag;
}
