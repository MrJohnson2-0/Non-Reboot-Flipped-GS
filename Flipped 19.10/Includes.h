#pragma once
#include <Windows.h>
#include <string>
#include <vector>
#include <cstdio>
#pragma comment(lib,"minhook/minhook.lib")
#include "minhook/MinHook.h"
using namespace std;

#define CREATEHOOK(Address, Hook, Og) \
MH_CreateHook((void*)(Address), Hook, (void**)(Og));


static void VirtualHook(void** vft, uintptr_t idx, void* newfunc, void** OG = nullptr)
{
	if (OG)
		*OG = vft[idx];

	DWORD dwProt;
	VirtualProtect(&vft[idx], 8, PAGE_EXECUTE_READWRITE, &dwProt);
	vft[idx] = newfunc;
	DWORD dwTemp;
	VirtualProtect(&vft[idx], 8, dwProt, &dwTemp);
}

#include "SDK/SDK.hpp"
using namespace SDK;