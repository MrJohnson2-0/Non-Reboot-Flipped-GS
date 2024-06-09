#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x180 (0x3A0 - 0x220)
// Class CampsiteRuntime.AbandonedCampsiteManager
class AAbandonedCampsiteManager : public AActor
{
public:
	struct FScalableFloat                        MinNumAbandonedCampsites;                          // 0x220(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxNumAbandonedCampsites;                          // 0x248(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AbandonedCampsitesEnabled;                         // 0x270(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	TMap<enum class EAbandonedCampsiteSpawnType, struct FScalableFloat> SpawnTypeWeights;                                  // 0x298(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UEnvQuery>              Spawn_EnvironmentalQuery;                          // 0x2E8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class AActor>                  AbandonedCampsiteAsset;                            // 0x310(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AAbandonedCampsitePlacedSpawner*> PreplacedCampsiteSpawnPoints;                      // 0x338(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class AAbandonedCampsitePlacedSpawner*> DeferredPreplacedCampsiteSpawns;                   // 0x348(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_174E[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCampsiteAnalytics*                    Analytics;                                         // 0x368(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_174F[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAbandonedCampsiteManager* GetDefaultObj();

	void OnGamePhaseStepChanged(TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep);
};

// 0x28 (0x248 - 0x220)
// Class CampsiteRuntime.AbandonedCampsitePlacedSpawner
class AAbandonedCampsitePlacedSpawner : public AActor
{
public:
	TSoftClassPtr<class ABuildingGameplayActor>  AbandonedTentAsset;                                // 0x220(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAbandonedCampsitePlacedSpawner* GetDefaultObj();

	void SpawnCampsite();
};

// 0x30 (0x510 - 0x4E0)
// Class CampsiteRuntime.AbandonedTentSpawnPointComponent
class UAbandonedTentSpawnPointComponent : public UStaticMeshComponent
{
public:
	struct FScalableFloat                        SpawnChance;                                       // 0x4E0(0x28)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_175A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbandonedTentSpawnPointComponent* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class CampsiteRuntime.CampsiteAnalytics
class UCampsiteAnalytics : public UObject
{
public:
	uint8                                        Pad_175B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCampsiteAnalytics* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class CampsiteRuntime.CampsiteConversationComponent
class UCampsiteConversationComponent : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UCampsiteConversationComponent* GetDefaultObj();

	void StartConversation(class AFortPlayerController* InstigatingController);
};

// 0x0 (0x28 - 0x28)
// Class CampsiteRuntime.CampsiteFunctionLibraryNative
class UCampsiteFunctionLibraryNative : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCampsiteFunctionLibraryNative* GetDefaultObj();

	bool IsItemEntryAvailable(class UObject* WorldContextObject, struct FFortItemEntry& FortItem);
	bool IsItemDefinitionAvailable(class UObject* WorldContextObject, class UFortItemDefinition* FortItem);
	bool IsItemAvailable(class UObject* WorldContextObject, class UFortItem* FortItem);
};

// 0xC0 (0x170 - 0xB0)
// Class CampsiteRuntime.CampsiteImprovementComponent
class UCampsiteImprovementComponent : public UActorComponent
{
public:
	struct FSlateBrush                           MiniMapIconBrush;                                  // 0xB0(0xB0)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	int32                                        ImprovementOwnerSquadId;                           // 0x160(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1797[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSimpleMiniMapIndicator*           MinimapIndicator;                                  // 0x168(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCampsiteImprovementComponent* GetDefaultObj();

	void SetImprovementOwnerSquadId(int32 SquadId);
	void RemoveIndicator();
	void OnRep_ImprovementOwnerSquadId();
	void CreateIndicator();
};

// 0x40 (0xF0 - 0xB0)
// Class CampsiteRuntime.FortControllerComponent_CampsiteAccountItem
class UFortControllerComponent_CampsiteAccountItem : public UActorComponent
{
public:
	class UFortCampsiteAccountItemDefinition*    CampsiteAccountItemDefinition;                     // 0xB0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FCampsiteAccountData                  CampsiteAccountData;                               // 0xB8(0x28)(Transient, NativeAccessSpecifierPrivate)
	TArray<struct FFortItemEntry>                CurrentlyStashedItemEntries;                       // 0xE0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortControllerComponent_CampsiteAccountItem* GetDefaultObj();

	void WriteStashedItemFromEntry(struct FFortItemEntry& ItemEntry, int32 StashedItemIndex);
	void WriteStashedItem(class UFortWorldItem* Item, int32 StashedItemIndex);
	bool SwapStashedItem(class AActor* SourceActor, int32 StashedItemIndex);
	bool StashCurrentlyHeldItemAndRemoveFromInventory(int32 StashedItemIndex);
	void OnAthenaProfileInitialized();
	bool HasCurrentlyStashedItem(int32 StashedItemIndex);
	struct FFortItemEntry GetCurrentlyStashedItemAsItemEntry(int32 StashedItemIndex);
	void ClearStoredCampsiteLocations();
	bool ClearStashedItemAndGiveToPlayer(class AActor* SourceActor, int32 StashedItemIndex);
	void ClearStashedItem(int32 StashedItemIndex);
	void CacheAccountItemData();
};

// 0x118 (0x1C8 - 0xB0)
// Class CampsiteRuntime.FortGameStateComponent_Campsite
class UFortGameStateComponent_Campsite : public UFortGameStateComponent
{
public:
	TSet<class UFortItemDefinition*>             AllowedItemDefinitions;                            // 0xB0(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<TSoftObjectPtr<class UFortItemDefinition>> BlacklistedItemDefinitions;                        // 0x100(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FSoftObjectPath>               BlacklistedItemPaths;                              // 0x110(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<class AAbandonedCampsitePlacedSpawner*> PlacedCampsiteSpawnPoints;                         // 0x120(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_17DE[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFortAthenaAIBotNameDataAsset> BotNameDataAsset;                                  // 0x148(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17E1[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            BotNameDataTable;                                  // 0x1C0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortGameStateComponent_Campsite* GetDefaultObj();

	void RegisterPreplacedCampsite(class AAbandonedCampsitePlacedSpawner* PreplacedCampsiteSpawnPoint);
	void RegisterCampsiteLocation(struct FVector& NewCampsiteLocation);
	void ClaimUnusedBotName(class FString* OutBotName);
};

// 0x48 (0x240 - 0x1F8)
// Class CampsiteRuntime.FortQueryTest_AbandonedCampsite
class UFortQueryTest_AbandonedCampsite : public UEnvQueryTest
{
public:
	float                                        TraceRadius;                                       // 0x1F8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TraceStartOffset;                                  // 0x1FC(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TraceEndOffset;                                    // 0x208(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollisionChannel                 BlockingChannel;                                   // 0x214(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UPhysicalMaterial>      BlockingMaterial;                                  // 0x218(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortQueryTest_AbandonedCampsite* GetDefaultObj();

};

}


