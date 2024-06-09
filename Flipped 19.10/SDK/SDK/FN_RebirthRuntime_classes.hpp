#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x480 - 0x3E0)
// Class RebirthRuntime.FortAthenaMutator_Rebirth
class AFortAthenaMutator_Rebirth : public AFortAthenaMutator_GameModeBase
{
public:
	uint8                                        Pad_2EDF[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortAthenaMutator_ItemPromotion*      ItemPromotionMutator;                              // 0x3F8(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class AFortPlayerStateAthena> ClientViewedPlayerState;                           // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FRebirthPlayerRarity>          PlayerRarities;                                    // 0x408(0x10)(Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate)
	TArray<struct FRebirthPlayerRarity>          CachedLocalPlayerRarities;                         // 0x418(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	enum class EFortRarity                       MaxItemRarity;                                     // 0x428(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFortRarity                       StartingItemRarity;                                // 0x429(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2EE2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EFortRarity, class FString>  KillFeedRarityStyles;                              // 0x430(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AFortAthenaMutator_Rebirth* GetDefaultObj();

	void OnRep_PlayerRarities();
	void OnClientSpectatorChanged(class AFortPlayerStateZone* SpectatingTarget);
};

// 0x0 (0x38 - 0x38)
// Class RebirthRuntime.FortCheatManager_Rebirth
class UFortCheatManager_Rebirth : public UFortCheatManager_Coupled
{
public:

	static class UClass* StaticClass();
	static class UFortCheatManager_Rebirth* GetDefaultObj();

	void PromoteItems();
};

}


