#pragma once
/*
	   easy way to impliment one-line commands, harder for mulitple params
		valrym - zach  
		 6/22/17 - 1:43 am
							*/

#include <map>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <functional>
#include "cfc.h"

/*
   cmd-parser header
    manually add cmds here
	 valrym - zach
	  bork gang
	   8/11/17	
					*/

typedef void(*cbase)(void);

//map definitions
typedef std::map < std::string, int > cmi;
typedef std::map <std::string, cbase> cmdfunc_0a;
typedef typename std::map < std::string, std::function<void(std::string)> > cmdfunc_1a;
typedef typename std::map < std::string, std::function<void(std::string, std::string)> > cmdfunc_2a;
typedef typename std::map < std::string, std::function<void(std::string, std::string, std::string)> > cmdfunc_3a;

//command info map
cmi cmli;

//command function maps
cmdfunc_0a cmf0;
cmdfunc_1a cmf1;
cmdfunc_2a cmf2;
cmdfunc_3a cmf3;




void commandsadd() { //adds commands to maps, lol.
	cmli.insert_or_assign(std::string("test"), 0);
	cmli.insert_or_assign(std::string("cmds"), 0);
	cmli.insert_or_assign(std::string("ret"), 1);

	cmf0.insert_or_assign("cmds", cfc::cmds);
	cmf0.insert_or_assign("test", cfc::test);

	cmf1.insert_or_assign("ret", cfc::ret);
}