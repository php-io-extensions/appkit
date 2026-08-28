#include "ns-fontdescriptor.h"
#include "ns-value.h"

/* ====================================================================== */
/* Core attribute access                                                  */
/* ====================================================================== */

void ns_nsfontdescriptor_postscript_name(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSFontDescriptor *d = NS_ARG_AS(NSFontDescriptor, handle);
        ns_ret_string(return_value, d != nil ? [d postscriptName] : nil);
    }
}

double ns_nsfontdescriptor_point_size(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSFontDescriptor *d = NS_ARG_AS(NSFontDescriptor, handle);
        r = d != nil ? (double) [d pointSize] : 0.0;
    }
    return r;
}

zend_long ns_nsfontdescriptor_matrix(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSFontDescriptor *d = NS_ARG_AS(NSFontDescriptor, handle);
        h = ns_handle_for(d != nil ? [d matrix] : nil);
    }
    return h;
}

zend_long ns_nsfontdescriptor_symbolic_traits(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSFontDescriptor *d = NS_ARG_AS(NSFontDescriptor, handle);
        r = d != nil ? (zend_long) [d symbolicTraits] : 0;
    }
    return r;
}

zend_long ns_nsfontdescriptor_requires_font_asset_request(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSFontDescriptor *d = NS_ARG_AS(NSFontDescriptor, handle);
        r = d != nil && [d requiresFontAssetRequest] ? 1 : 0;
    }
    return r;
}

zend_long ns_nsfontdescriptor_object_for_key(zval *handle, zval *attribute)
{
    zend_long h = 0;
    @autoreleasepool {
        NSFontDescriptor *d = NS_ARG_AS(NSFontDescriptor, handle);
        h = ns_handle_for(d != nil ? [d objectForKey:ns_arg_string(attribute)] : nil);
    }
    return h;
}

zend_long ns_nsfontdescriptor_font_attributes(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSFontDescriptor *d = NS_ARG_AS(NSFontDescriptor, handle);
        h = ns_handle_for(d != nil ? [d fontAttributes] : nil);
    }
    return h;
}

/* ====================================================================== */
/* Instantiation                                                          */
/* ====================================================================== */

zend_long ns_nsfontdescriptor_font_descriptor_with_font_attributes(zval *attributes)
{
    @autoreleasepool {
        return ns_handle_for([NSFontDescriptor fontDescriptorWithFontAttributes:NS_ARG_AS(NSDictionary, attributes)]);
    }
}

zend_long ns_nsfontdescriptor_font_descriptor_with_name_size(zval *fontName, zval *size)
{
    @autoreleasepool {
        return ns_handle_for([NSFontDescriptor fontDescriptorWithName:ns_arg_string(fontName) size:ns_arg_double(size)]);
    }
}

zend_long ns_nsfontdescriptor_font_descriptor_with_name_matrix(zval *fontName, zval *matrix)
{
    @autoreleasepool {
        return ns_handle_for([NSFontDescriptor fontDescriptorWithName:ns_arg_string(fontName)
                                                              matrix:NS_ARG_AS(NSAffineTransform, matrix)]);
    }
}

zend_long ns_nsfontdescriptor_init_with_font_attributes(zval *attributes)
{
    @autoreleasepool {
        return ns_handle_for([[NSFontDescriptor alloc] initWithFontAttributes:NS_ARG_AS(NSDictionary, attributes)]);
    }
}

/* ====================================================================== */
/* Instance conversion                                                    */
/* ====================================================================== */

void ns_nsfontdescriptor_matching_font_descriptors_with_mandatory_keys(zval *return_value, zval *handle, zval *mandatoryKeys)
{
    @autoreleasepool {
        NSFontDescriptor *d = NS_ARG_AS(NSFontDescriptor, handle);
        ns_ret_object_array(return_value, d != nil ? [d matchingFontDescriptorsWithMandatoryKeys:NS_ARG_AS(NSSet, mandatoryKeys)] : nil);
    }
}

zend_long ns_nsfontdescriptor_matching_font_descriptor_with_mandatory_keys(zval *handle, zval *mandatoryKeys)
{
    zend_long h = 0;
    @autoreleasepool {
        NSFontDescriptor *d = NS_ARG_AS(NSFontDescriptor, handle);
        h = ns_handle_for(d != nil ? [d matchingFontDescriptorWithMandatoryKeys:NS_ARG_AS(NSSet, mandatoryKeys)] : nil);
    }
    return h;
}

zend_long ns_nsfontdescriptor_font_descriptor_by_adding_attributes(zval *handle, zval *attributes)
{
    zend_long h = 0;
    @autoreleasepool {
        NSFontDescriptor *d = NS_ARG_AS(NSFontDescriptor, handle);
        h = ns_handle_for(d != nil ? [d fontDescriptorByAddingAttributes:NS_ARG_AS(NSDictionary, attributes)] : nil);
    }
    return h;
}

zend_long ns_nsfontdescriptor_font_descriptor_with_symbolic_traits(zval *handle, zval *symbolicTraits)
{
    zend_long h = 0;
    @autoreleasepool {
        NSFontDescriptor *d = NS_ARG_AS(NSFontDescriptor, handle);
        h = ns_handle_for(d != nil ? [d fontDescriptorWithSymbolicTraits:(NSFontDescriptorSymbolicTraits) ns_arg_long(symbolicTraits)] : nil);
    }
    return h;
}

zend_long ns_nsfontdescriptor_font_descriptor_with_size(zval *handle, zval *newPointSize)
{
    zend_long h = 0;
    @autoreleasepool {
        NSFontDescriptor *d = NS_ARG_AS(NSFontDescriptor, handle);
        h = ns_handle_for(d != nil ? [d fontDescriptorWithSize:ns_arg_double(newPointSize)] : nil);
    }
    return h;
}

zend_long ns_nsfontdescriptor_font_descriptor_with_matrix(zval *handle, zval *matrix)
{
    zend_long h = 0;
    @autoreleasepool {
        NSFontDescriptor *d = NS_ARG_AS(NSFontDescriptor, handle);
        h = ns_handle_for(d != nil ? [d fontDescriptorWithMatrix:NS_ARG_AS(NSAffineTransform, matrix)] : nil);
    }
    return h;
}

zend_long ns_nsfontdescriptor_font_descriptor_with_face(zval *handle, zval *newFace)
{
    zend_long h = 0;
    @autoreleasepool {
        NSFontDescriptor *d = NS_ARG_AS(NSFontDescriptor, handle);
        h = ns_handle_for(d != nil ? [d fontDescriptorWithFace:ns_arg_string(newFace)] : nil);
    }
    return h;
}

zend_long ns_nsfontdescriptor_font_descriptor_with_family(zval *handle, zval *newFamily)
{
    zend_long h = 0;
    @autoreleasepool {
        NSFontDescriptor *d = NS_ARG_AS(NSFontDescriptor, handle);
        h = ns_handle_for(d != nil ? [d fontDescriptorWithFamily:ns_arg_string(newFamily)] : nil);
    }
    return h;
}

zend_long ns_nsfontdescriptor_font_descriptor_with_design(zval *handle, zval *design)
{
    zend_long h = 0;
    @autoreleasepool {
        NSFontDescriptor *d = NS_ARG_AS(NSFontDescriptor, handle);
        h = ns_handle_for(d != nil ? [d fontDescriptorWithDesign:ns_arg_string(design)] : nil);
    }
    return h;
}

/* ====================================================================== */
/* NSFontDescriptor_TextStyles                                            */
/* ====================================================================== */

zend_long ns_nsfontdescriptor_preferred_font_descriptor_for_text_style_options(zval *style, zval *options)
{
    @autoreleasepool {
        return ns_handle_for([NSFontDescriptor preferredFontDescriptorForTextStyle:ns_arg_string(style)
                                                                          options:NS_ARG_AS(NSDictionary, options)]);
    }
}
