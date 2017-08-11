#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include <string>
#include <iterator>
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string.h>
#include <stdlib.h>


//input definitions
std::string input() {
	std::string ret;	
	std::getline(std::cin, ret);
	return ret;
}
std::vector<std::string> split(std::string ztr)
{
	std::vector<std::string> elems;
	std::stringstream strsem(ztr);
	std::istream_iterator<std::string> begin(strsem);
	std::istream_iterator<std::string> end;
	std::vector<std::string> splstr(begin, end);
	return splstr;
}