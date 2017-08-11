#pragma once
#include <Windows.h>
#include <stdio.h>
#define WIN32_LEAN_AND_MEAN

/* command function  */	

namespace cfc
{
		void test() {
			SetConsoleTitleA("something random to test");
			printf("OUT: changed console name to something random to test\n");
		}

		void cmds() {
				std::cout << "[[ command list ]]\n" << "[[ name : arg ]]\n" << "[cmds : nil]\n" << "[test : nil]\n" << "[ret : string]\n";
		}

		void ret(std::string inp) {
			std::cout << "OUT: " << inp.c_str() << "\n";
		}
};
