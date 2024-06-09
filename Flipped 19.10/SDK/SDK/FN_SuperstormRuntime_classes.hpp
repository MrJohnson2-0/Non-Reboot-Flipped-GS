#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x388 (0x438 - 0xB0)
// Class SuperstormRuntime.TempestLightningComponent
class UTempestLightningComponent : public UGameFrameworkComponent
{
public:
	TSubclassOf<class AFortGameplayEffectDeliveryActor> LightningBoltClass;                                // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FTempestLightningBoltEffectContainer> LightningBoltTargetEffectContainers;               // 0xB8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class UTargetingPreset*                      LightningBoltTargetingPreset;                      // 0xC8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEnvQuery*                             FindTargetablePawnsQuery;                          // 0xD0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEnvQuery*                             FindTargetableLocationQuery;                       // 0xD8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  EnvironmentQueryParamName_LightningRadius;         // 0xE0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  EnvironmentQueryParamName_MinLightningTargetDistance; // 0xE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningCloudHeight;                              // 0xF0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningRadius;                                   // 0x118(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MinLightningTargetDistance;                        // 0x140(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningFrequencyMin;                             // 0x168(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningFrequencyMax;                             // 0x190(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningBoltsMin;                                 // 0x1B8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningBoltsMax;                                 // 0x1E0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningBoltIntervalMin;                          // 0x208(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningBoltIntervalMax;                          // 0x230(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningBoltSeparationDistance;                   // 0x258(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningStruckPawnReselectionInterval;            // 0x280(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningBoltTelegraphDuration;                    // 0x2A8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningBoltImpactIgnitionRadius;                 // 0x2D0(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningBoltGrassIgnitionRadius;                  // 0x2F8(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LightningBoltGrassFirePropagationFuel;             // 0x320(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          LightningAreaTargetTelegraphCue;                   // 0x348(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          LightningBoltTargetTelegraphCue;                   // 0x350(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FTempestLightningBoltData>     LightningBoltData;                                 // 0x358(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D34[0xD0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTempestLightningComponent* GetDefaultObj();

	float GetLightningRadius();
	float GetCloudHeight();
};

// 0x4E0 (0x590 - 0xB0)
// Class SuperstormRuntime.TempestTornadoForcesComponent
class UTempestTornadoForcesComponent : public UGameFrameworkComponent
{
public:
	struct FDataTableRowHandle                   ConfigHandle;                                      // 0xB0(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class AFortAthenaVehicle>        AttachedPawnHiddenVehicle;                         // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FGameplayTag>                  PhysicsPresetTagsAngularDampingToOverride;         // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        AngularDampingOverride;                            // 0xD8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<enum class ETornadoObjectType, struct FScalableFloat> ObjectTypeToMaxCapCount;                           // 0x100(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 TagsToIgnore;                                      // 0x150(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           RecentlyRemovedGE;                                 // 0x170(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTargetingPreset*                      TargetingPreset;                                   // 0x178(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          DamageSetByCallerTag;                              // 0x180(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           PeriodicDamageGE;                                  // 0x188(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           BurstDamageGE;                                     // 0x190(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          TornadoActiveCue;                                  // 0x198(0x8)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          PlayerNearCue;                                     // 0x1A0(0x8)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          PlayerInCue;                                       // 0x1A8(0x8)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PlayerNearRange;                                   // 0x1B0(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 PlayerBlockAbilitiesWithTag;                       // 0x1D8(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FTornadoClientSimulationArray         ActorsToClientSimulate;                            // 0x1F8(0x118)(Net, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D3D[0x148];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPawnEnterInvisibleVehicle;                       // 0x458(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnPawnExitInvisibleVehicle;                        // 0x468(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D3E[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTargetingRequestHandle               AsyncTargetingHandle;                              // 0x490(0x4)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D3F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class AFortPlayerPawn*>                 PreviouslyNearPlayers;                             // 0x498(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D40[0xA8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTempestTornadoForcesComponent* GetDefaultObj();

	bool IsActorInTornado(class AActor* Actor);
};

}


