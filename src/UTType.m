/*
 * Uniform types, as the save and open panels take them. Not a UI class: any thread may call it.
 */

#include "runtime.h"
#include "controls.h"
#import <UniformTypeIdentifiers/UniformTypeIdentifiers.h>
#include "../stubs/UTType_arginfo.h"

void appkit_register_UTType(void)
{
	APPKIT_MAP(UTType, appkit_ce_NSObject);
}

ANY_METHOD(UTType, typeWithFilenameExtension, PARSE_STR, appkit_box_objc(return_value, [UTType typeWithFilenameExtension:appkit_nsstring(v)]);)
ANY_STR_GET(UTType, UTType, identifier, identifier)
