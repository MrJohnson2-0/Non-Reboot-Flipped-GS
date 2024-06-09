#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x2B0 - 0x2B0)
// Class VKEditUI.VKDebugMessagesBase
class UVKDebugMessagesBase : public UFortHUDElementWidget
{
public:

	static class UClass* StaticClass();
	static class UVKDebugMessagesBase* GetDefaultObj();

	void HandleGameStateInitialized(class AFortGameState* GameState);
	void BP_OnGameStateInitialized(class AFortGameState* GameState);
};

}


