#pragma once
#include <stdio.h>
#include <iostream>
#include "clp.h"
#include "cfc.h"

//input handling system, eventually spiraling into multi-arg support
 //shouldn't be hard, lol.
  //8/10/17 - valrym - zach
   //turf
    //update: it wasnt. lol.


int inputhandle(std::vector<std::string> input) {
	printf("\n");
	if (cmli.find(input.at(0)) != cmli.end()) {
		auto ceb = cmli.find(input.at(0));
		if (ceb->second >= 1) {
			if (ceb->second == 1) { 
				auto ce1 = cmf1.find(input.at(0));
				(ce1->second)(input.at(1));
			}
			else if (ceb->second == 2) { 
				auto ce2 = cmf2.find(input.at(0));
				(ce2->second)(input.at(1), input.at(2));
			}
			else if (ceb->second == 3) { 
				auto ce2 = cmf3.find(input.at(0));
				(ce2->second)(input.at(1), input.at(2), input.at(3));
			}
		}
		else {
			auto ce0 = cmf0.find(input.at(0));
			(ce0->second)();
		}
	}
	else{
		printf("OUT: error | incorrect command, type \"cmds\" for list of commands");
	}
	return 1;
}