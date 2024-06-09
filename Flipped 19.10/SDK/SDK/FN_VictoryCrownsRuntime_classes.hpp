#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x188 (0x238 - 0xB0)
// Class VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns
class UFortControllerComponent_VictoryCrowns : public UFortControllerComponent
{
public:
	FMulticastInlineDelegateProperty_            OnVictoryCrownStatusChanged;                       // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHasWonCrownInMatch;                              // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHasWonRoyalRoyale;                               // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DB9[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFortWorldItemDefinition> CrownInventoryItemClass;                           // 0xF8(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWonCrownInMatch;                                  // 0x120(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWonRoyalRoyale;                                   // 0x121(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3DBC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortVictoryCrownAccountItemDefinition* VictoryCrownAccountItemDefinition;                 // 0x128(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UFortMontageItemDefinitionBase> RoyalRoyaleEmoteItemDefinition;                    // 0x130(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDataTable*                            VictoryCrownPlaylistData;                          // 0x158(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 SourceTagsForRoyalRoyale;                          // 0x160(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FVictoryCrownAccountData              VictoryCrownAccountData;                           // 0x180(0x10)(Net, Transient, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DBD[0xA0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bKillFeedBroadcastReady;                           // 0x230(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DBE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortControllerComponent_VictoryCrowns* GetDefaultObj();

	void OnRep_WonRoyalRoyale();
	void OnRep_WonCrownInMatch();
	void OnAthenaProfileInitialized();
	bool IsCrownInPlayerInventory();
	bool HasWonRoyalRoyale();
	bool HasWonCrownInMatch();
	void HandlePawnChanged(class APawn* OldPawn, class APawn* NewPawn);
	void HandleEnterAircraft();
	int32 GetVictoryCrownsBestowedCount();
	int32 GetRoyalRoyaleAchievedCount();
	class UFortWorldItem* GetCrownInPlayerInventory();
	void DebugForceSetRoyalRoyaleAchievedCount(int32 NewRoyalRoyaleCount);
	void CacheAccountItemData();
	bool AuthoritySquadHasSeenCrownItem(class UFortItem* CrownItem, bool bDropped);
	bool AuthorityHasSquadHeldCrownItem(class UFortItem* CrownItem);
	bool AuthorityHasSquadDroppedCrownItem(class UFortItem* CrownItem);
	bool AuthorityHasHeldCrownItem(class UFortItem* CrownItem);
	bool AuthorityHasDroppedCrownItem(class UFortItem* CrownItem);
};

// 0x18 (0xA8 - 0x90)
// Class VictoryCrownsRuntime.FortCosmeticStatObject_TotalRoyalRoyales
class UFortCosmeticStatObject_TotalRoyalRoyales : public UFortCosmeticStatObject
{
public:
	class UFortVictoryCrownAccountItemDefinition* VictoryCrownAccountItemDefinition;                 // 0x90(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortControllerComponent_VictoryCrowns*> CachedCrownComponents;                             // 0x98(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCosmeticStatObject_TotalRoyalRoyales* GetDefaultObj();

};

// 0x8 (0x98 - 0x90)
// Class VictoryCrownsRuntime.FortCosmeticStatObject_TotalVictoryCrowns
class UFortCosmeticStatObject_TotalVictoryCrowns : public UFortCosmeticStatObject
{
public:
	class UFortVictoryCrownAccountItemDefinition* VictoryCrownAccountItemDefinition;                 // 0x90(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCosmeticStatObject_TotalVictoryCrowns* GetDefaultObj();

};

// 0x58 (0x108 - 0xB0)
// Class VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns
class UFortGameStateComponent_VictoryCrowns : public UFortGameStateComponent
{
public:
	TArray<class AFortPlayerStateAthena*>        CrownBearerPlayerStates;                           // 0xB0(0x10)(Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	class FText                                  KillFeedFormat_Dropped;                            // 0xC0(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  KillFeedFormat_PickedUp;                           // 0xD8(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3DC7[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortGameStateComponent_VictoryCrowns* GetDefaultObj();

	void OnRep_CrownBearerPlayerStates();
	bool IsCrownBearer(class AFortPlayerStateAthena* FortPSA);
	void HandleCrownStatusChanged(class AFortPlayerControllerAthena* FortPlayerControllerAthena, class UFortItem* CrownItem);
	void ClientKillFeedMessage(class AFortPlayerStateAthena* FortPSA, bool bAdded);
};

// 0x8 (0xB8 - 0xB0)
// Class VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns
class UFortPlayerStateComponent_VictoryCrowns : public UFortPlayerStateComponent
{
public:
	bool                                         bHasWonRoyalRoyale;                                // 0xB0(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DC9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPlayerStateComponent_VictoryCrowns* GetDefaultObj();

	bool GetWonRoyalRoyale();
};

}


