#ifndef PHP_APPKIT_NS_FONTDESCRIPTOR_H
#define PHP_APPKIT_NS_FONTDESCRIPTOR_H

/*
 * Faithful 1:1 binding of AppKit NSFontDescriptor.h. Every member of
 * the class (base interface + same-file NSFontDescriptor_TextStyles
 * category) is either bound or reserved. Nothing is omitted.
 * Adopted NSCopying / NSSecureCoding are not class members. The
 * NSFontDescriptorAttributeName / TraitKey / VariationKey /
 * FeatureKey / SystemDesign / TextStyle typedefs, the
 * NSFontDescriptorSymbolicTraits options, the NSFontWeight /
 * NSFontWidth constants, the attribute / trait / variation /
 * feature / design / text-style APPKIT_EXTERN names, and the
 * comment-only deprecated NSFontFamilyClass / NSFont*Trait
 * enums are not class members. NSFontColorAttribute is an
 * APPKIT_EXTERN constant (API_DEPRECATED), not a member.
 * Live construction is initWithFontAttributes: (alloc+init
 * glue) plus the fontDescriptorWith* factories. Inherited
 * NSObject members stay on that class. Nothing is reserved —
 * no blocks, NSCoder, NSAttributedString, NSData, or
 * API_DEPRECATED members. Nullable postscriptName crosses as
 * var. NSFontDescriptorSymbolicTraits crosses as int.
 * NSFontDescriptorSystemDesign / NSFontTextStyle /
 * NSFontDescriptorAttributeName are NSString typedefs and
 * cross as string. Font-attribute / options dictionaries,
 * affine transforms, mandatory-key sets, and objectForKey:
 * values cross as int handles (0 = nil).
 * matchingFontDescriptorsWithMandatoryKeys: is
 * NSArray<NSFontDescriptor *> (handles).
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Core attribute access ---- */

/*@zep NS\NSFontDescriptor postscriptName(int handle) -> var */
void ns_nsfontdescriptor_postscript_name(zval *return_value, zval *handle);
/*@zep NS\NSFontDescriptor pointSize(int handle) -> double */
double ns_nsfontdescriptor_point_size(zval *handle);
/*@zep NS\NSFontDescriptor matrix(int handle) -> int */
zend_long ns_nsfontdescriptor_matrix(zval *handle);
/*@zep NS\NSFontDescriptor symbolicTraits(int handle) -> int */
zend_long ns_nsfontdescriptor_symbolic_traits(zval *handle);
/*@zep NS\NSFontDescriptor requiresFontAssetRequest(int handle) -> bool */
zend_long ns_nsfontdescriptor_requires_font_asset_request(zval *handle);

/*@zep NS\NSFontDescriptor objectForKey(int handle, string attribute) -> int */
zend_long ns_nsfontdescriptor_object_for_key(zval *handle, zval *attribute);

/*@zep NS\NSFontDescriptor fontAttributes(int handle) -> int */
zend_long ns_nsfontdescriptor_font_attributes(zval *handle);

/* ---- Instantiation ---- */

/*@zep NS\NSFontDescriptor fontDescriptorWithFontAttributes(int attributes) -> int */
zend_long ns_nsfontdescriptor_font_descriptor_with_font_attributes(zval *attributes);
/*@zep NS\NSFontDescriptor fontDescriptorWithNameSize(string fontName, double size) -> int */
zend_long ns_nsfontdescriptor_font_descriptor_with_name_size(zval *fontName, zval *size);
/*@zep NS\NSFontDescriptor fontDescriptorWithNameMatrix(string fontName, int matrix) -> int */
zend_long ns_nsfontdescriptor_font_descriptor_with_name_matrix(zval *fontName, zval *matrix);

/*@zep NS\NSFontDescriptor initWithFontAttributes(int attributes) -> int */
zend_long ns_nsfontdescriptor_init_with_font_attributes(zval *attributes);

/* ---- Instance conversion ---- */

/*@zep NS\NSFontDescriptor matchingFontDescriptorsWithMandatoryKeys(int handle, int mandatoryKeys) -> array */
void ns_nsfontdescriptor_matching_font_descriptors_with_mandatory_keys(zval *return_value, zval *handle, zval *mandatoryKeys);
/*@zep NS\NSFontDescriptor matchingFontDescriptorWithMandatoryKeys(int handle, int mandatoryKeys) -> int */
zend_long ns_nsfontdescriptor_matching_font_descriptor_with_mandatory_keys(zval *handle, zval *mandatoryKeys);

/*@zep NS\NSFontDescriptor fontDescriptorByAddingAttributes(int handle, int attributes) -> int */
zend_long ns_nsfontdescriptor_font_descriptor_by_adding_attributes(zval *handle, zval *attributes);
/*@zep NS\NSFontDescriptor fontDescriptorWithSymbolicTraits(int handle, int symbolicTraits) -> int */
zend_long ns_nsfontdescriptor_font_descriptor_with_symbolic_traits(zval *handle, zval *symbolicTraits);
/*@zep NS\NSFontDescriptor fontDescriptorWithSize(int handle, double newPointSize) -> int */
zend_long ns_nsfontdescriptor_font_descriptor_with_size(zval *handle, zval *newPointSize);
/*@zep NS\NSFontDescriptor fontDescriptorWithMatrix(int handle, int matrix) -> int */
zend_long ns_nsfontdescriptor_font_descriptor_with_matrix(zval *handle, zval *matrix);
/*@zep NS\NSFontDescriptor fontDescriptorWithFace(int handle, string newFace) -> int */
zend_long ns_nsfontdescriptor_font_descriptor_with_face(zval *handle, zval *newFace);
/*@zep NS\NSFontDescriptor fontDescriptorWithFamily(int handle, string newFamily) -> int */
zend_long ns_nsfontdescriptor_font_descriptor_with_family(zval *handle, zval *newFamily);
/*@zep NS\NSFontDescriptor fontDescriptorWithDesign(int handle, string design) -> int */
zend_long ns_nsfontdescriptor_font_descriptor_with_design(zval *handle, zval *design);

/* ---- NSFontDescriptor_TextStyles ---- */

/*@zep NS\NSFontDescriptor preferredFontDescriptorForTextStyleOptions(string style, int options) -> int */
zend_long ns_nsfontdescriptor_preferred_font_descriptor_for_text_style_options(zval *style, zval *options);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_FONTDESCRIPTOR_H */
