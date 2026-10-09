#include "runtime.h"
#include "controls.h"
#include "../stubs/NSRunLoop_arginfo.h"

void appkit_register_NSRunLoop(void)
{
	APPKIT_MAP(NSRunLoop, appkit_ce_NSObject);
}

METHOD(NSRunLoop, mainRunLoop, PARSE_NONE, appkit_box_objc(return_value, [NSRunLoop mainRunLoop]);)
METHOD(NSRunLoop, currentRunLoop, PARSE_NONE, appkit_box_objc(return_value, [NSRunLoop currentRunLoop]);)
METHOD(NSRunLoop, getCFRunLoop, PARSE_NONE, appkit_box_cf(return_value, [SELF(NSRunLoop) getCFRunLoop]);)
