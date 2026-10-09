#include "runtime.h"
#include "controls.h"
#include "../stubs/NSGraphicsContext_arginfo.h"

void appkit_register_NSGraphicsContext(void)
{
	APPKIT_MAP(NSGraphicsContext, appkit_ce_NSObject);
}

METHOD(NSGraphicsContext, currentContext, PARSE_NONE, appkit_box_objc(return_value, [NSGraphicsContext currentContext]);)
METHOD(NSGraphicsContext, CGContext, PARSE_NONE, appkit_box_cf(return_value, [SELF(NSGraphicsContext) CGContext]);)
