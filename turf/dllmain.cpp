#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include "rsc\entp.h"

void startup();

BOOL __stdcall DllMain(HINSTANCE Dll, DWORD  Reason, LPVOID lpReserved)
{
	if (Reason == DLL_PROCESS_ATTACH) {
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE)startup, 0, 0, 0);
	}
	return TRUE;
}