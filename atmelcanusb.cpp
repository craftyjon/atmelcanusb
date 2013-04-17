// atmelcanusb.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "atmelcanusb.h"


// This is an example of an exported variable
ATMELCANUSB_API int natmelcanusb=0;

// This is an example of an exported function.
ATMELCANUSB_API int fnatmelcanusb(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see atmelcanusb.h for the class definition
Catmelcanusb::Catmelcanusb()
{
	return;
}
