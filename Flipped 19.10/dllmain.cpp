#include "Includes.h"
#include "Memory.h"
#include "Memcury.h"

#include "Util.h"
#include "Globals.h"

#include "Abilities.h"
#include "Inventory.h"
#include "Net.h"

#include "Player.h"
#include "Gamemode.h"

#include "Hooks.h"

DWORD WINAPI Main(LPVOID)
{
    AllocConsole();
    FILE* fptr;
    freopen_s(&fptr, "CONOUT$", "w+", stdout);

    SetConsoleTitleA("Flipped 19.10");

    MH_Initialize();

    InitGObjects();

    Hooks::InitServer();

    return 0;
}
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, Main, 0, 0, 0);
    }
    return TRUE;
}

