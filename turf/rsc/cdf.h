#pragma once
#include <Windows.h>
#include <stdio.h>
#include <string>
#include "..\turf\crsc\clp.h"

/*
	console definition header
	 console functions go here.
	  valrym - zach
	   bork gang
	    8/11/17
								*/


void consolebypass()
{
	int *ad = (int*)GetProcAddress(GetModuleHandle("kernel32.dll"), "FreeConsole");
	DWORD adw;
	VirtualProtect(ad, 1, PAGE_EXECUTE_READWRITE, &adw);
	*ad = 0xC3;
	VirtualProtect(ad, 1, adw, &adw);
}

void hook() {
	/*
	add any hooked variables, possibly more bypasses
	just a general rule of thumb, don't fuck it up.
	*/
}

void consoleinitialize() {
	consolebypass();
	commandsadd();
	AllocConsole();
	freopen("conin$", "r", stdin);
	freopen("conout$", "w", stdout);
	freopen("conout$", "w", stderr);
	HWND cHnd = GetConsoleWindow();
	SetConsoleTitleA("turf -- beta -- bork gang");
	/*
	TODO:
	maybe a welcome message?
	*/
	hook();
}

