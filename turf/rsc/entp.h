#pragma once

/*
		entry-point file,
		 used for making
		  dllmain as tiny
		   as possible.
		    valrym - zach
			 bork gang co
			  8/2/17 - 3:07 pm
									*/

#include "..\rsc\mdf.h"
#include "..\cdf.h"
#include "..\crsc\inh.h"
#include "..\crsc\clp.h"

void startup() {
	consoleinitialize(); //initialize turf
	do {
		printf("\n>");
		try {inputhandle(split(input().c_str()));} //error-handling try loop
		catch (...) {};
	} while (true);
}