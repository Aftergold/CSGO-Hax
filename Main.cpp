#include <Windows.h>
#include <iostream>

void Main() {
	/*
	This is reserved...
	*/
}

BOOL APIENTRY DllMain(HINSTANCE hModule, DWORD dwReason, LPVOID lpArgs) {
	switch (dwReason) {
	case DLL_PROCESS_ATTACH:
		MessageBoxA(NULL, "Aye", "Aye", MB_OK);
	default:
		break;
	}
	return TRUE;
}