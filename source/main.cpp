// This file was automatically generated using tools/process_csv.py
// Generated on Thu Jul 02 2020 16:52:34 UTC

#include <Zenova/Hook.h>


extern "C" {
	void* _getFov_LevelRendererPlayer__QEAAMM_N_Z_ptr;
}

void InitBedrockPointers() {
	_getFov_LevelRendererPlayer__QEAAMM_N_Z_ptr = reinterpret_cast<void*>(Zenova::Hook::SigscanCall("\xE8\x00\x00\x00\x00\x0F\x28\xF0\xF3\x44\x0F\x10\x3D\x00\x00\x00\x00", "x????xxxxxxxx????"));
}

#include <Windows.h>

BOOL APIENTRY DllMain(HMODULE hModule, DWORD fdwReason, LPVOID lpReserved) {
	if (fdwReason == DLL_PROCESS_ATTACH) InitBedrockPointers();
	return TRUE;
}
