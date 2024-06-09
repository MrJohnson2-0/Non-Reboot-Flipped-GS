#pragma once

namespace Hooks {

	static bool ReturnTrueHook() { return true; }
	static bool ReturnFalseHook() { return false; }
	static void YapitupHook() 
	{ 
		return;
	}

	static __int64 (*DispatchRequestOriginal)(__int64 a1, __int64* a2, int a3);

	static __int64 DispatchRequestHook(__int64 a1, __int64* a2, int a3)
	{
		return DispatchRequestOriginal(a1, a2, 3);
	}

	void NullAndReturnAddresses()
	{
	
		uint64 GameSessionId = BaseAddress() + 0x258d0dc;

		DWORD dwProtection;
		VirtualProtect((PVOID)GameSessionId, 1, PAGE_EXECUTE_READWRITE, &dwProtection);

		*(uint8_t*)GameSessionId = 0xC3;

		DWORD dwTemp;
		VirtualProtect((PVOID)GameSessionId, 1, dwProtection, &dwTemp);


		uint64 InitUI = BaseAddress() + 0x257CC1C;

		CREATEHOOK(InitUI, YapitupHook, nullptr);
	
		CREATEHOOK(BaseAddress() + 0x65cde18, ReturnTrueHook, nullptr); // no reserve

		
	}

	void InitServer()
	{
		CREATEHOOK(BaseAddress() + 0xc9eebc, GetNetModeWorld, nullptr);

		CREATEHOOK(BaseAddress() + 0x65c4390, KickPlayerHook, &KickPlayer);

		CREATEHOOK(BaseAddress() + 0xccbe68, GetNetModeActor, nullptr);

		CREATEHOOK(BaseAddress() + 0x106a3bc, ReturnTrueHook, nullptr); //NoMcp

		CREATEHOOK(BaseAddress() + 0x1674270, DispatchRequestHook, (void**)&DispatchRequestOriginal);

		CREATEHOOK(BaseAddress() + 0x4dd8528, ReturnTrueHook, nullptr); //CanActivateAbility

		// GIsClient
		*(bool*)(BaseAddress() + 0xb30cf9f) = false;

		UFortEngine::GetEngine()->GameInstance->LocalPlayers.Remove(0);

		UKismetSystemLibrary::GetDefaultObj()->ExecuteConsoleCommand(UWorld::GetWorld(), L"open Artemis_Terrain", nullptr);

		CREATEHOOK(BaseAddress() + Offsets::ProcessEvent, ProcessEventHook, (void**)&ProcessEventO);

		LOG("Opened Map, do NOT join!");

	//	CREATEHOOK(Memcury::Scanner::FindPattern("48 89 5C 24 10 48 89 6C 24 20 56 57 41 54 41 56 41 57 48 81 EC ? ? ? ? 65 48 8B 04 25 ? ? ? ? 4C 8B F9").Get(), ReturnFalseHook, nullptr); // random s16 crash

		NullAndReturnAddresses();

		uint64 ThingAddr = BaseAddress() + 0x677f0e4;

		DWORD dwProtection;
		VirtualProtect((PVOID)ThingAddr, 1, PAGE_EXECUTE_READWRITE, &dwProtection);

		*(uint8_t*)ThingAddr = 0xC3;

		DWORD dwTemp;
		VirtualProtect((PVOID)ThingAddr, 1, dwProtection, &dwTemp);

		Abilities::HookAll();

		GameMode::HookAll();

		Player::HookAll();

		CREATEHOOK(BaseAddress() + 0xbc72c0, TickFlushHook, &TickFlush);
		
		MH_EnableHook(MH_ALL_HOOKS);

	}
}
