#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELivingWorldPointProviderSpawnLimiterBehavior : uint8
{
	Lifetime                       = 0,
	Concurrent                     = 1,
	ELivingWorldPointProviderSpawnLimiterBehavior_MAX = 2,
};

enum class ELivingWorldCalendarEventConditionBehavior : uint8
{
	IsActive                       = 0,
	Ratio                          = 1,
	ELivingWorldCalendarEventConditionBehavior_MAX = 2,
};

enum class ELivingWorldCalendarEventConditionRatioBehavior : uint8
{
	Less                           = 0,
	LessOrEqual                    = 1,
	Greater                        = 2,
	GreaterOrEqual                 = 3,
	InBetween                      = 4,
	ELivingWorldCalendarEventConditionRatioBehavior_MAX = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldPointProviderSpawnLimiter
struct FFortAthenaLivingWorldPointProviderSpawnLimiter
{
public:
	uint8                                        Pad_144B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ELivingWorldPointProviderSpawnLimiterBehavior Behavior;                                          // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_144C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        MaxNumberOfSpawn;                                  // 0x8(0x28)(Edit, NativeAccessSpecifierPrivate)
	bool                                         bResetLimitWhenEnabling;                           // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_144D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LagerRuntime.FortLivingWorldEventTableVariation
struct FFortLivingWorldEventTableVariation
{
public:
	TSoftObjectPtr<class UDataTable>             EventTableVariation;                               // 0x0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        VariationWeight;                                   // 0x28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldCategory
struct FFortAthenaLivingWorldCategory : public FTableRowBase
{
public:
	TSoftObjectPtr<class UDataTable>             EventTable;                                        // 0x8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FFortLivingWorldEventTableVariation> EventTableVariations;                              // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	int32                                        MaxCount;                                          // 0x40(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxSpawnedCount;                                   // 0x44(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Priority;                                          // 0x48(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bExcludeFromGlobalAIBudget;                        // 0x4C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_144E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagQuery                     RequirePlaylistTagQuery;                           // 0x50(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<TSoftObjectPtr<class UFortAthenaLivingWorldEncounter>> Encounters;                                        // 0x98(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        IsEnabled;                                         // 0xA8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldTagDensityGridData
struct FFortAthenaLivingWorldTagDensityGridData
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        GridCellSize;                                      // 0x8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaActorDensityDebugInfo
struct FFortAthenaActorDensityDebugInfo
{
public:
	class FString                                ActorName;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ActorPosition;                                     // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                            MinCellIndex;                                      // 0x1C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                            MaxCellIndex;                                      // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DensityValue;                                      // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x108 - 0x70)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldDensityGrid
struct FFortAthenaLivingWorldDensityGrid : public FFortSpatialGrid
{
public:
	uint8                                        Pad_1452[0x98];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldEncounterStage
struct FFortAthenaLivingWorldEncounterStage
{
public:
	TSoftObjectPtr<class UDataTable>             EventTable;                                        // 0x0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaximumConcurrentNumberOfAI;                       // 0x28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldEventDespawnCondition
struct FFortAthenaLivingWorldEventDespawnCondition
{
public:
	bool                                         bCanBeDespawned;                                   // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1454[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinDistanceToPlayer;                               // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeAsCandidateBeforeDespawn;                      // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAthenaGamePhaseStep              CanStartDespawningPhaseStep;                       // 0xC(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1455[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CanStartDespawningSafeZonePhase;                   // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanDespawnWhenInCombatWithPlayer;                 // 0x14(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanDespawnInTheStorm;                             // 0x15(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1456[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldEventTagDensityCondition
struct FFortAthenaLivingWorldEventTagDensityCondition
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDensity;                                        // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct LagerRuntime.LivingWorldCalendarEventCondition
struct FLivingWorldCalendarEventCondition
{
public:
	class FName                                  CalendarEventName;                                 // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELivingWorldCalendarEventConditionBehavior Behavior;                                          // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldEventBeActive;                               // 0x9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELivingWorldCalendarEventConditionRatioBehavior RatioBehavior;                                     // 0xA(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1457[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RatioValue;                                        // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RatioMaxValue;                                     // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LagerRuntime.LivingWorldCalendarEventConditions
struct FLivingWorldCalendarEventConditions
{
public:
	TArray<struct FLivingWorldCalendarEventCondition> Conditions;                                        // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         IsActiveWithoutSeasonalManager;                    // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1459[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x120 (0x128 - 0x8)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldEvent
struct FFortAthenaLivingWorldEvent : public FTableRowBase
{
public:
	TSoftObjectPtr<class UFortAthenaLivingWorldEventData> EventData;                                         // 0x8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        IsEnabled;                                         // 0x30(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<float>                                MaxCount;                                          // 0x58(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<float>                                MaxSpawnedCount;                                   // 0x68(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	float                                        Weight;                                            // 0x78(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_145A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                MinRespawnTime;                                    // 0x80(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<float>                                MaxRespawnTime;                                    // 0x90(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bOnlyInSafeZone;                                   // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOnlyInNextSafeZone;                               // 0xA1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOnlyInNextSafeZoneIfStormShrinking;               // 0xA2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAthenaGamePhaseStep              ActivationGamePhaseStep;                           // 0xA3(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ActivationSafeZoneIndex;                           // 0xA4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ActivationMinDelay;                                // 0xA8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ActivationMaxDelay;                                // 0xAC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FFortAthenaLivingWorldEventTagDensityCondition> TagDensityConditions;                              // 0xB0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	bool                                         bCheckForActorDensity;                             // 0xC0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_145B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxActorDensityOverride;                           // 0xC4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinDistanceToPlayer;                               // 0xC8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxDistanceToPlayer;                               // 0xCC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCanSpawnWithoutMatchingPlayerDistance;            // 0xD0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_145C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RandomActivationChance;                            // 0xD4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortAthenaLivingWorldEventDespawnCondition DespawnCondition;                                  // 0xD8(0x18)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 RequirePlaylistTags;                               // 0xF0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FLivingWorldCalendarEventConditions   CalendarEventConditions;                           // 0x110(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct LagerRuntime.PointProviderFilterEntry
struct FPointProviderFilterEntry
{
public:
	struct FGameplayTagQuery                     ProviderFiltersTagQuery;                           // 0x0(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FLivingWorldCalendarEventConditions   CalendarEventConditions;                           // 0x48(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        Weight;                                            // 0x60(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldEventTagDensityRegistration
struct FFortAthenaLivingWorldEventTagDensityRegistration
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        Range;                                             // 0x8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        DensityValue;                                      // 0x30(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x158 (0x158 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldEventDataActorSpawnDescription
struct FFortAthenaLivingWorldEventDataActorSpawnDescription
{
public:
	TSoftClassPtr<class AActor>                  ActorClass;                                        // 0x0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortAthenaAISpawnerData> SpawnerData;                                       // 0x28(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     SpawnerDataTagQuery;                               // 0x50(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bUseProviderTagOverrides;                          // 0x98(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_145E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagQuery                     ProviderFiltersTagQueryOverride;                   // 0xA0(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bSpawnAroundDefaultPoint;                          // 0xE8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateDefaultPosition;                            // 0xE9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_145F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnvQuery*                             SpawnAroundEnvironmentQuery;                       // 0xF0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        ActorDensityValue;                                 // 0xF8(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        DensityComputationRangeOverride;                   // 0x120(0x28)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FFortAthenaLivingWorldEventTagDensityRegistration> TagDensityRegistrations;                           // 0x148(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct LagerRuntime.FortLivingWorldConfigOverride
struct FFortLivingWorldConfigOverride
{
public:
	TSoftObjectPtr<class UWorld>                 SourceWorld;                                       // 0x0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PlaylistTag;                                       // 0x28(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortAthenaLivingWorldConfigData> LagerConfig;                                       // 0x48(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortReleaseVersion                   StartVersion;                                      // 0x70(0x8)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortReleaseVersion                   EndVersion;                                        // 0x78(0x8)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldPlayerTracker
struct FFortAthenaLivingWorldPlayerTracker
{
public:
	TSet<class AFortAthenaAIBotController*>      TrackedBotControllers;                             // 0x0(0x50)(Transient, NativeAccessSpecifierPrivate)
	TArray<class AFortPlayerPawn*>               TrackedPlayerPawns;                                // 0x50(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class AController*>                   TrackedPlayerControllers;                          // 0x60(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1460[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldPointProviderFilterRules
struct FFortAthenaLivingWorldPointProviderFilterRules
{
public:
	uint8                                        Pad_1461[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldTaggedSpawnActionClass
struct FFortAthenaLivingWorldTaggedSpawnActionClass
{
public:
	struct FGameplayTag                          SpawnActionTag;                                    // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortAthenaLivingWorldSpawnAction> SpawnActionClass;                                  // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldTagQueryToSeatMapping
struct FFortAthenaLivingWorldTagQueryToSeatMapping
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0x0(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                        SeatIndex;                                         // 0x48(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1462[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


