#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A8 (0x1D8 - 0x30)
// Class LagerRuntime.FortAthenaLivingWorldConfigData
class UFortAthenaLivingWorldConfigData : public UDataAsset
{
public:
	TSoftObjectPtr<class UDataTable>             CategoryTable;                                     // 0x30(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxActorCount;                                     // 0x58(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxEventSpawnPerTick;                              // 0x80(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxActorDespawnPerTick;                            // 0xA8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MinimumEventGenerationInterval;                    // 0xD0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxActorDensity;                                   // 0xF8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxActorUpdatesPerTick;                            // 0x120(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        ActorDensityGridCellSize;                          // 0x148(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        PointClusterSize;                                  // 0x170(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MinNumberOfPlayerForAggressiveSpawning;            // 0x198(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FFortAthenaLivingWorldTagDensityGridData> TagDensityGridData;                                // 0x1C0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TSubclassOf<class AActor>                    EQSActorHelperClass;                               // 0x1D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldConfigData* GetDefaultObj();

};

// 0x40 (0x158 - 0x118)
// Class LagerRuntime.FortAthenaLivingWorldDebugDensityMiniMapIndicator
class UFortAthenaLivingWorldDebugDensityMiniMapIndicator : public UFortMiniMapIndicator
{
public:
	TArray<struct FFortAthenaActorDensityDebugInfo> ActorDebugInfos;                                   // 0x118(0x10)(Net, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<float>                                DensityGridValues;                                 // 0x128(0x10)(Net, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FVector                               GridOrigin;                                        // 0x138(0xC)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FIntVector                            MaxGridSize;                                       // 0x144(0xC)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CellSize;                                          // 0x150(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxDensity;                                        // 0x154(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class LagerRuntime.FortAthenaLivingWorldEncounter
class UFortAthenaLivingWorldEncounter : public UDataAsset
{
public:
	struct FScalableFloat                        IntervalBetweenEventGeneration;                    // 0x30(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FFortAthenaLivingWorldEncounterStage> Stages;                                            // 0x58(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldEncounter* GetDefaultObj();

};

// 0xD8 (0x100 - 0x28)
// Class LagerRuntime.FortAthenaLivingWorldEncounterInstance
class UFortAthenaLivingWorldEncounterInstance : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnActorSpawned;                                    // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnActorDestroyed;                                  // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B3[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> OriginalPointProviders;                            // 0x98(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> RegisteredPointProviders;                          // 0xA8(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> EncounterDefinition;                               // 0xB8(0x28)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                ActorDensityReservoir;                             // 0xE0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13B4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentStageIndex;                                 // 0xF0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsPaused;                                         // 0xF8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13B8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldEncounterInstance* GetDefaultObj();

	void ResumeEncounter();
	void RequestEventGeneration();
	void PauseEncounter();
	void OnActorSpawned__DelegateSignature(class AActor* SpawnedActor);
	void OnActorDestroyed__DelegateSignature(class AActor* DestroyedActor);
	int32 GetTotalActorCount();
	void AdvanceEncounterStage();
};

// 0xD8 (0x108 - 0x30)
// Class LagerRuntime.FortAthenaLivingWorldEventData
class UFortAthenaLivingWorldEventData : public UDataAsset
{
public:
	int32                                        TimeOfDayFilters;                                  // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        WaterLevelIndexMin;                                // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        WaterLevelIndexMax;                                // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagQuery                     ProviderFiltersTagQuery;                           // 0x40(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FPointProviderFilterEntry>     ProviderFiltersEntries;                            // 0x88(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FFortAthenaLivingWorldTaggedSpawnActionClass> SpawnActions;                                      // 0x98(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MinActorCountToSpawn;                              // 0xA8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxActorCountToSpawn;                              // 0xD0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FFortAthenaLivingWorldEventDataActorSpawnDescription> ActorDescriptions;                                 // 0xF8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldEventData* GetDefaultObj();

};

// 0x790 (0x840 - 0xB0)
// Class LagerRuntime.FortAthenaLivingWorldManager
class UFortAthenaLivingWorldManager : public UGameStateComponent
{
public:
	TSoftObjectPtr<class UFortAthenaLivingWorldConfigData> DefaultLagerConfig;                                // 0xB0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FFortLivingWorldConfigOverride> LagerConfigOverrides;                              // 0xD8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LagerEnabled;                                      // 0xE8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TMap<struct FGameplayTag, TSubclassOf<class UFortAthenaLivingWorldSpawnAction>> TaggedSpawnActionClassMap;                         // 0x110(0x50)(Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> PointProviders;                                    // 0x160(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           SpecialActorMinimapIconBrush;                      // 0x170(0xB0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FVector2D                             SpecialActorMinimapIconScale;                      // 0x220(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13DB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           SpecialActorCompassIconBrush;                      // 0x230(0xB0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FVector2D                             SpecialActorCompassIconScale;                      // 0x2E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UFortAthenaSpawnerDataBase>> LoadedSpawnerDataClass;                            // 0x2E8(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class AActor>>            LoadedActorDataClass;                              // 0x2F8(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UWorld*                                CachedWorld;                                       // 0x308(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaLivingWorldConfigData*      CachedConfig;                                      // 0x310(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortAthenaLivingWorldEncounterInstance*> RunningEncounterInstances;                         // 0x318(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class UFortSeasonalEventManager*             CachedSeasonalEventManager;                        // 0x328(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TSoftClassPtr<class AActor>>          ActorClassToPreloadOnClient;                       // 0x330(0x10)(Net, ZeroConstructor, RepNotify, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FFortAthenaLivingWorldPlayerTracker   PlayerTracker;                                     // 0x340(0xB0)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13DE[0x1E8];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        RuntimePointProviderList;                          // 0x5D8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TSet<class AActor*>                          RuntimePointProviderOwners;                        // 0x5E8(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13DF[0x1A0];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<TSubclassOf<class UFortAthenaLivingWorldSpawnAction>, class UFortAthenaLivingWorldSpawnAction*> SpawnActionCache;                                  // 0x7D8(0x50)(Transient, NativeAccessSpecifierPrivate)
	class AActor*                                EQSHelper;                                         // 0x828(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* DebugDensityMinimapIndicator;                      // 0x830(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13E0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldManager* GetDefaultObj();

	bool TrySpawnEvent(const struct FDataTableRowHandle& EventEntry, const struct FTransform& SpawnLocation, FDelegateProperty_& OnRequestFinished);
	class UFortAthenaLivingWorldEncounterInstance* StartEncounter(TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> EncounterType, TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>>& EncounterPointProviders, class AActor* ActorDensityReservoir);
	void RequestEventGeneration();
	int32 QueryEventBudget(const struct FDataTableRowHandle& EventEntry, class AActor* SpawnLocation);
	void OnWorldFinishedInitialization(struct FGameplayTagContainer& ContextTags);
	void OnUnmanagedDensityReservoirActorDestroy(class AActor* DestroyedActor);
	void OnSpawnedActorDestroy(class AActor* DestroyedActor);
	void OnRep_DebugDensityMinimapIndicator(class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* OldMapIndicator);
	void OnRep_ActorClassToPreloadOnClient();
	void OnPatrolPathAdded(class AFortAthenaPatrolPath* PatrolPath);
	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	void OnActorSpawned(class AActor* Actor, int32 RequestID);
	void LivingWorldManagerUnregisterPointProvider(class AActor* PointProvider);
	void LivingWorldManagerToggleVerboseLogging();
	void LivingWorldManagerToggleGenerateEvents();
	void LivingWorldManagerToggleDensityDisplay();
	void LivingWorldManagerToggleActorMinimap();
	void LivingWorldManagerRegisterPointProvider(class AActor* PointProvider);
	void LivingWorldManagerProviderDebugActor(int32 ProviderIndex);
	void LivingWorldManagerGenerateEvents();
	void LivingWorldManagerFlush();
	void EndEncounter(class UFortAthenaLivingWorldEncounterInstance* EncounterInstance);
};

// 0x0 (0x28 - 0x28)
// Class LagerRuntime.FortAthenaLivingWorldPointProviderInterface
class IFortAthenaLivingWorldPointProviderInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFortAthenaLivingWorldPointProviderInterface* GetDefaultObj();

	void OnSpawnedActorFailed();
	void OnSpawnedActorDestroyed(class AActor* DestroyedActor);
	void OnSpawnedActor(class AActor* SpawnedActor, struct FVector& PositionFromProvider);
	void OnEventRequested();
	bool IsEnabled(struct FFortAthenaLivingWorldPointProviderFilterRules& PointFilter);
	bool GetValidLocation(struct FFortAthenaLivingWorldPointProviderFilterRules& PointFilter, struct FVector* OutPosition, struct FRotator* OutRotation);
	struct FVector GetPointProviderLocation();
	void GetFiltersTags(struct FGameplayTagContainer* FilterTags);
	void EnablePointProvider();
	void DisablePointProvider();
};

// 0xB8 (0x2D8 - 0x220)
// Class LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler
class AFortAthenaLivingWorldPointProvidersEnabler : public AActor
{
public:
	TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> EnabledLinkedPointProviders;                       // 0x220(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> AvailableLinkedPointProviders;                     // 0x230(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 EnablerTags;                                       // 0x240(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate)
	TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> LinkedPointProviders;                              // 0x260(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        PointProvidersToEnable;                            // 0x270(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        EvaluateAutomatically;                             // 0x298(0x28)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1406[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCompletedEvaluationDelegate;                     // 0x2C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AFortAthenaLivingWorldPointProvidersEnabler* GetDefaultObj();

	void RemoveClosestPointProvidersToPoint(struct FVector& Point, float MaximumDistance, int32 PointsToDisable);
	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	void OnCompletedEvaluation__DelegateSignature(TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>>& EnabledPointProviders);
	bool HasCompletedEvaluation();
	struct FGameplayTagContainer GetEnablerTags();
	TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> GetEnabledLinkedPointProviders();
	void EvaluateAndEnablePointProviders();
	bool DoesStartEnabled();
};

// 0x0 (0x2D8 - 0x2D8)
// Class LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride
class AFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride : public AFortAthenaLivingWorldPointProvidersEnabler
{
public:

	static class UClass* StaticClass();
	static class AFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LagerRuntime.FortAthenaLivingWorldSpawnAction
class UFortAthenaLivingWorldSpawnAction : public UObject
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldSpawnAction* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint
class UFortAthenaLivingWorldSpawnActionBlueprint : public UFortAthenaLivingWorldSpawnAction
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldSpawnActionBlueprint* GetDefaultObj();

	void K2_OnAllActorSpawned(TArray<class AActor*>& SpawnedActor);
};

// 0x10 (0x38 - 0x28)
// Class LagerRuntime.FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle
class UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle : public UFortAthenaLivingWorldSpawnAction
{
public:
	TArray<struct FFortAthenaLivingWorldTagQueryToSeatMapping> SeatMappings;                                      // 0x28(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle* GetDefaultObj();

};

// 0x248 (0x4A0 - 0x258)
// Class LagerRuntime.FortAthenaLivingWorldVolume
class AFortAthenaLivingWorldVolume : public AVolume
{
public:
	uint8                                        Pad_141E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bStartEnabled;                                     // 0x260(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_141F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 FiltersTags;                                       // 0x268(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate)
	class UEnvQuery*                             EnvironmentQuery;                                  // 0x288(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FAIDynamicParam>               QueryConfig;                                       // 0x290(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bRemoveUsedPoint;                                  // 0x2A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRemoveUsedPointPermenantly;                       // 0x2A1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1421[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter;                                      // 0x2A8(0x38)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        EQSRefreshInterval;                                // 0x2E0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        WaterLevelIndexMin;                                // 0x308(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        WaterLevelIndexMax;                                // 0x330(0x28)(Edit, NativeAccessSpecifierPrivate)
	class AFortGameStateAthena*                  CachedGameState;                                   // 0x358(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnActorSpawnedResult;                              // 0x360(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnPointProviderRegistered;                         // 0x370(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	class UFortAthenaLivingWorldManager*         CachedLivingWorldManager;                          // 0x380(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1425[0x118];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortAthenaLivingWorldVolume* GetDefaultObj();

	void SetFiltersTags(struct FGameplayTagContainer& TagContainer);
	void SetEQSQueryConfigParam(class FName ParameterName, float Value);
	void SetEQSQuery(class UEnvQuery* Query);
	void RunEQS();
	void OnWorldFinishedInitialization(struct FGameplayTagContainer& ContextTags);
	void OnPointProviderRegistered__DelegateSignature(class AFortAthenaLivingWorldVolume* PointProviderVolume);
	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	void OnActorSpawnedResult__DelegateSignature(class AActor* SpawnedActor, bool bResult);
	bool IsPointProviderEnabled();
	void EnablePointProvider();
	bool DoesStartEnabled();
	void DisablePointProvider();
};

// 0xA0 (0x2C0 - 0x220)
// Class LagerRuntime.FortAthenaPatrolPathPointProvider
class AFortAthenaPatrolPathPointProvider : public AActor
{
public:
	uint8                                        Pad_1431[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 FiltersTags;                                       // 0x228(0x20)(Edit, NativeAccessSpecifierPrivate)
	class AFortAthenaPatrolPath*                 AssociatedPatrolPath;                              // 0x248(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bStartEnabled : 1;                                 // Mask: 0x1, PropSize: 0x10x250(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bSpawnOnPatrolPath : 1;                            // Mask: 0x2, PropSize: 0x10x250(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAlignOrientationToPath : 1;                       // Mask: 0x4, PropSize: 0x10x250(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_A2 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1433[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter;                                      // 0x258(0x38)(Edit, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnActorSpawnedResult;                              // 0x290(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class AFortAthenaPatrolPath>  RuntimePatrolPathWeakPtr;                          // 0x2A0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortGameStateAthena*                  CachedGameState;                                   // 0x2A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAthenaLivingWorldManager*         CachedLivingWorldManager;                          // 0x2B0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1434[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortAthenaPatrolPathPointProvider* GetDefaultObj();

	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	void OnActorSpawnedResult__DelegateSignature(class AActor* SpawnedActor, bool bResult);
	void EnablePointProvider();
	void DisablePointProvider();
};

// 0x90 (0x2B0 - 0x220)
// Class LagerRuntime.FortAthenaPointAroundPlayerProvider
class AFortAthenaPointAroundPlayerProvider : public AActor
{
public:
	uint8                                        Pad_143A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 FiltersTags;                                       // 0x228(0x20)(Edit, NativeAccessSpecifierPrivate)
	class UEnvQuery*                             QueryTemplate;                                     // 0x248(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EEnvQueryRunMode                  RunMode;                                           // 0x250(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bStartEnabled : 1;                                 // Mask: 0x1, PropSize: 0x10x251(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bGenerateAroundPlayerBots : 1;                     // Mask: 0x2, PropSize: 0x10x251(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_A3 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_143B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          IgnorePlayerWithTag;                               // 0x254(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_143C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter;                                      // 0x260(0x38)(Edit, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnActorSpawnedResult;                              // 0x298(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	class AFortGameStateAthena*                  CachedGameState;                                   // 0x2A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AFortAthenaPointAroundPlayerProvider* GetDefaultObj();

	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	void OnActorSpawnedResult__DelegateSignature(class AActor* SpawnedActor, bool bResult);
	void EnablePointProvider();
	void DisablePointProvider();
};

// 0x18 (0x40 - 0x28)
// Class LagerRuntime.FortCheatManager_LivingWorldManager
class UFortCheatManager_LivingWorldManager : public UChildCheatManager
{
public:
	int32                                        CheatTeleportToCount;                              // 0x28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1448[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CheatLastEventDataName;                            // 0x30(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCheatManager_LivingWorldManager* GetDefaultObj();

	void LivingWorldManagerTeleportToSpawnPosition(const class FString& EventDataName);
	void LivingWorldManagerTeleportTo(const class FString& EventDataName);
	void LivingWorldManagerSpawnAtLocation(const class FString& EventDataName, const struct FVector& Location, const struct FRotator& Rotation);
	void LivingWorldManagerSpawn(const class FString& EventDataName);
};

// 0x10 (0x38 - 0x28)
// Class LagerRuntime.FortGameFeatureAction_AddLagerConfig
class UFortGameFeatureAction_AddLagerConfig : public UGameFeatureAction
{
public:
	TArray<struct FFortLivingWorldConfigOverride> LagerConfigOverrides;                              // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortGameFeatureAction_AddLagerConfig* GetDefaultObj();

};

}


