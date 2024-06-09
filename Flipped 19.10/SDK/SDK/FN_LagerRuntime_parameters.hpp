#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// DelegateFunction LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorSpawned__DelegateSignature
struct UFortAthenaLivingWorldEncounterInstance_OnActorSpawned__DelegateSignature_Params
{
public:
	class AActor*                                SpawnedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorDestroyed__DelegateSignature
struct UFortAthenaLivingWorldEncounterInstance_OnActorDestroyed__DelegateSignature_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.GetTotalActorCount
struct UFortAthenaLivingWorldEncounterInstance_GetTotalActorCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.TrySpawnEvent
struct UFortAthenaLivingWorldManager_TrySpawnEvent_Params
{
public:
	struct FDataTableRowHandle                   EventEntry;                                        // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            SpawnLocation;                                     // 0x10(0x30)(ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnRequestFinished;                                 // 0x40(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C0[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.StartEncounter
struct UFortAthenaLivingWorldManager_StartEncounter_Params
{
public:
	TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> EncounterType;                                     // 0x0(0x28)(ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> EncounterPointProviders;                           // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	class AActor*                                ActorDensityReservoir;                             // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAthenaLivingWorldEncounterInstance* ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.QueryEventBudget
struct UFortAthenaLivingWorldManager_QueryEventBudget_Params
{
public:
	struct FDataTableRowHandle                   EventEntry;                                        // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                SpawnLocation;                                     // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.OnWorldFinishedInitialization
struct UFortAthenaLivingWorldManager_OnWorldFinishedInitialization_Params
{
public:
	struct FGameplayTagContainer                 ContextTags;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.OnUnmanagedDensityReservoirActorDestroy
struct UFortAthenaLivingWorldManager_OnUnmanagedDensityReservoirActorDestroy_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.OnSpawnedActorDestroy
struct UFortAthenaLivingWorldManager_OnSpawnedActorDestroy_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.OnRep_DebugDensityMinimapIndicator
struct UFortAthenaLivingWorldManager_OnRep_DebugDensityMinimapIndicator_Params
{
public:
	class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* OldMapIndicator;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.OnPatrolPathAdded
struct UFortAthenaLivingWorldManager_OnPatrolPathAdded_Params
{
public:
	class AFortAthenaPatrolPath*                 PatrolPath;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.OnCurrentPlaylistLoaded
struct UFortAthenaLivingWorldManager_OnCurrentPlaylistLoaded_Params
{
public:
	class FName                                  PlaylistName;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.OnActorSpawned
struct UFortAthenaLivingWorldManager_OnActorSpawned_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequestID;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerUnregisterPointProvider
struct UFortAthenaLivingWorldManager_LivingWorldManagerUnregisterPointProvider_Params
{
public:
	class AActor*                                PointProvider;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerRegisterPointProvider
struct UFortAthenaLivingWorldManager_LivingWorldManagerRegisterPointProvider_Params
{
public:
	class AActor*                                PointProvider;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerProviderDebugActor
struct UFortAthenaLivingWorldManager_LivingWorldManagerProviderDebugActor_Params
{
public:
	int32                                        ProviderIndex;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.EndEncounter
struct UFortAthenaLivingWorldManager_EndEncounter_Params
{
public:
	class UFortAthenaLivingWorldEncounterInstance* EncounterInstance;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnSpawnedActorDestroyed
struct IFortAthenaLivingWorldPointProviderInterface_OnSpawnedActorDestroyed_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnSpawnedActor
struct IFortAthenaLivingWorldPointProviderInterface_OnSpawnedActor_Params
{
public:
	class AActor*                                SpawnedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PositionFromProvider;                              // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13EB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.IsEnabled
struct IFortAthenaLivingWorldPointProviderInterface_IsEnabled_Params
{
public:
	struct FFortAthenaLivingWorldPointProviderFilterRules PointFilter;                                       // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13ED[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetValidLocation
struct IFortAthenaLivingWorldPointProviderInterface_GetValidLocation_Params
{
public:
	struct FFortAthenaLivingWorldPointProviderFilterRules PointFilter;                                       // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               OutPosition;                                       // 0x30(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              OutRotation;                                       // 0x3C(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetPointProviderLocation
struct IFortAthenaLivingWorldPointProviderInterface_GetPointProviderLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetFiltersTags
struct IFortAthenaLivingWorldPointProviderInterface_GetFiltersTags_Params
{
public:
	struct FGameplayTagContainer                 FilterTags;                                        // 0x0(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.RemoveClosestPointProvidersToPoint
struct AFortAthenaLivingWorldPointProvidersEnabler_RemoveClosestPointProvidersToPoint_Params
{
public:
	struct FVector                               Point;                                             // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDistance;                                   // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PointsToDisable;                                   // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.OnCurrentPlaylistLoaded
struct AFortAthenaLivingWorldPointProvidersEnabler_OnCurrentPlaylistLoaded_Params
{
public:
	class FName                                  PlaylistName;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.OnCompletedEvaluation__DelegateSignature
struct AFortAthenaLivingWorldPointProvidersEnabler_OnCompletedEvaluation__DelegateSignature_Params
{
public:
	TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> EnabledPointProviders;                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.HasCompletedEvaluation
struct AFortAthenaLivingWorldPointProvidersEnabler_HasCompletedEvaluation_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.GetEnablerTags
struct AFortAthenaLivingWorldPointProvidersEnabler_GetEnablerTags_Params
{
public:
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.GetEnabledLinkedPointProviders
struct AFortAthenaLivingWorldPointProvidersEnabler_GetEnabledLinkedPointProviders_Params
{
public:
	TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.DoesStartEnabled
struct AFortAthenaLivingWorldPointProvidersEnabler_DoesStartEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint.K2_OnAllActorSpawned
struct UFortAthenaLivingWorldSpawnActionBlueprint_K2_OnAllActorSpawned_Params
{
public:
	TArray<class AActor*>                        SpawnedActor;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldVolume.SetFiltersTags
struct AFortAthenaLivingWorldVolume_SetFiltersTags_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldVolume.SetEQSQueryConfigParam
struct AFortAthenaLivingWorldVolume_SetEQSQueryConfigParam_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldVolume.SetEQSQuery
struct AFortAthenaLivingWorldVolume_SetEQSQuery_Params
{
public:
	class UEnvQuery*                             Query;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldVolume.OnWorldFinishedInitialization
struct AFortAthenaLivingWorldVolume_OnWorldFinishedInitialization_Params
{
public:
	struct FGameplayTagContainer                 ContextTags;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction LagerRuntime.FortAthenaLivingWorldVolume.OnPointProviderRegistered__DelegateSignature
struct AFortAthenaLivingWorldVolume_OnPointProviderRegistered__DelegateSignature_Params
{
public:
	class AFortAthenaLivingWorldVolume*          PointProviderVolume;                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldVolume.OnCurrentPlaylistLoaded
struct AFortAthenaLivingWorldVolume_OnCurrentPlaylistLoaded_Params
{
public:
	class FName                                  PlaylistName;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction LagerRuntime.FortAthenaLivingWorldVolume.OnActorSpawnedResult__DelegateSignature
struct AFortAthenaLivingWorldVolume_OnActorSpawnedResult__DelegateSignature_Params
{
public:
	class AActor*                                SpawnedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResult;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_141C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldVolume.IsPointProviderEnabled
struct AFortAthenaLivingWorldVolume_IsPointProviderEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldVolume.DoesStartEnabled
struct AFortAthenaLivingWorldVolume_DoesStartEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LagerRuntime.FortAthenaPatrolPathPointProvider.OnCurrentPlaylistLoaded
struct AFortAthenaPatrolPathPointProvider_OnCurrentPlaylistLoaded_Params
{
public:
	class FName                                  PlaylistName;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction LagerRuntime.FortAthenaPatrolPathPointProvider.OnActorSpawnedResult__DelegateSignature
struct AFortAthenaPatrolPathPointProvider_OnActorSpawnedResult__DelegateSignature_Params
{
public:
	class AActor*                                SpawnedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResult;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_142F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function LagerRuntime.FortAthenaPointAroundPlayerProvider.OnCurrentPlaylistLoaded
struct AFortAthenaPointAroundPlayerProvider_OnCurrentPlaylistLoaded_Params
{
public:
	class FName                                  PlaylistName;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction LagerRuntime.FortAthenaPointAroundPlayerProvider.OnActorSpawnedResult__DelegateSignature
struct AFortAthenaPointAroundPlayerProvider_OnActorSpawnedResult__DelegateSignature_Params
{
public:
	class AActor*                                SpawnedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResult;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1436[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTeleportToSpawnPosition
struct UFortCheatManager_LivingWorldManager_LivingWorldManagerTeleportToSpawnPosition_Params
{
public:
	class FString                                EventDataName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTeleportTo
struct UFortCheatManager_LivingWorldManager_LivingWorldManagerTeleportTo_Params
{
public:
	class FString                                EventDataName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnAtLocation
struct UFortCheatManager_LivingWorldManager_LivingWorldManagerSpawnAtLocation_Params
{
public:
	class FString                                EventDataName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x10(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x1C(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawn
struct UFortCheatManager_LivingWorldManager_LivingWorldManagerSpawn_Params
{
public:
	class FString                                EventDataName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


