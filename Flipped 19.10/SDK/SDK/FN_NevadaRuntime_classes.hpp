#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0xEF0 - 0xEA8)
// Class NevadaRuntime.FortCameraMode_Nevada
class UFortCameraMode_Nevada : public UFortCameraMode_AthenaVehicle
{
public:
	uint8                                        Pad_24C5[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TractorBeamCameraOffset;                           // 0xEC0(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TractorBeamCameraLerpTime;                         // 0xECC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TractorBeamCameraExtraPitch;                       // 0xED0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TractorBeamInactiveCameraExtraPitch;               // 0xED4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TractorBeamCameraPositionResetDelay;               // 0xED8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinPitchForOffset;                                 // 0xEDC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxPitchForOffset;                                 // 0xEE0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               ExtraOffset;                                       // 0xEE4(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCameraMode_Nevada* GetDefaultObj();

};

// 0x80 (0x2A0 - 0x220)
// Class NevadaRuntime.FortNevadaAudioController
class AFortNevadaAudioController : public AActor
{
public:
	struct FVector2D                             SpeedRangeMap;                                     // 0x220(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             TurningRangeMap;                                   // 0x228(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             AcceleratingRangeMap;                              // 0x230(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             BrakingRangeMap;                                   // 0x238(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PassByRangeMap;                                    // 0x240(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LFORangeMap;                                       // 0x248(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortNevadaVehicle*                    Vehicle;                                           // 0x250(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLayeredAudioComponent*            LayeredAudioComponent;                             // 0x258(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpeedParamValue;                                   // 0x260(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpeedParamValuePrev;                               // 0x264(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AcceleratingParamValue;                            // 0x268(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BrakingParamValue;                                 // 0x26C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ForwardVector;                                     // 0x270(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ForwardVectorPrev;                                 // 0x27C(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TurningParamValue;                                 // 0x288(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PassByParamValue;                                  // 0x28C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LocallyControlledParamValue;                       // 0x290(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LFOParamValue;                                     // 0x294(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24CD[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortNevadaAudioController* GetDefaultObj();

	void Update();
	void Init(class AFortNevadaVehicle* InVehicle);
	class AFortNevadaVehicle* GetVehicleActor();
	void CacheReferences(class UFortLayeredAudioComponent* InLayeredAudioComponent);
	void BP_Update();
	void BP_Init();
};

// 0x5D0 (0x1BC0 - 0x15F0)
// Class NevadaRuntime.FortNevadaVehicle
class AFortNevadaVehicle : public AFortAthenaSKVehicle
{
public:
	struct FNevadaState                          ServerReplicatedState;                             // 0x15F0(0x14)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_24FA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortNevadaVehicleConfigs*             FortNevadaVehicleConfigs;                          // 0x1608(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortNevadaVehicleConfigs> FortNevadaVehicleConfigsClass;                     // 0x1610(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class AFortNevadaAudioController> FortNevadaAudioControllerClass;                    // 0x1618(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UChildActorComponent*                  AudioControllerActor;                              // 0x1620(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortNevadaAudioController*            FortNevadaAudioController;                         // 0x1628(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVehicleGamepadLiftInputs             LiftInputs;                                        // 0x1630(0x8)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        LastBatteryRegenTickTime;                          // 0x1638(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBoostThrust;                                      // 0x163C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBoostDrag;                                        // 0x163D(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBoostInputReleased;                               // 0x163E(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseTractorBeamUprightForce;                       // 0x163F(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDeadBattery;                                      // 0x1640(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TractorBeamExtraLengthForExtents;                  // 0x1644(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               CrashingDesiredUp;                                 // 0x1648(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BoostStartTime;                                    // 0x1654(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BoostPitchAlpha;                                   // 0x1658(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BoostChargeProgress;                               // 0x165C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BoostChargesAvailable;                             // 0x1660(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               CachedBoostMoveDir;                                // 0x1664(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentStateStartTime;                             // 0x1670(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HeightAtLandingTime;                               // 0x1674(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CrashingScrapingTime;                              // 0x1678(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CrashingNotMovingTimer;                            // 0x167C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AltimeterTraceHitDistance;                         // 0x1680(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TractorBeamAppliedForceMagnitude;                  // 0x1684(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AnimParamDriverSeatLeftRight;                      // 0x1688(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AnimParamDriverSeatForwardBack;                    // 0x168C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bForceNegativeLift;                                // 0x1690(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bForcePositiveLift;                                // 0x1691(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInitialLift;                                      // 0x1692(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ENevadaFlightStates               CurrentVehicleState;                               // 0x1693(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24FE[0x4C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class ALandscapeProxy>        CachedLandscapeProxy;                              // 0x16E0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortCameraMode_AthenaVehicle> PassengerCameraModeClass;                          // 0x16E8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24FF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bTractorBeamChargeStarted;                         // 0x16F1(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2500[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTowhookParams                        TowhookParams;                                     // 0x16F8(0xD0)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class AFortAthenaVehicle>        AttachedPawnHiddenVehicle;                         // 0x17C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UPrimitiveComponent>    TractorBeamAttachedPrimitive;                      // 0x17D0(0x8)(ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortAthenaVehicle*                    SpawnedTractorBeamVictimVehicle;                   // 0x17D8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UPrimitiveComponent>    PreviousTractorBeamAttachedPrimitive;              // 0x17E0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AActor*>                        TractorBeamTargetedActors;                         // 0x17E8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<class AActor*>                        PreviouslyTargetedActors;                          // 0x17F8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class AActor*                                TractorBeamAttachedActor;                          // 0x1808(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                TractorBeamTargetedActor;                          // 0x1810(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TractorBeamTargetPosition;                         // 0x1818(0xC)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2503[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bBeamButtonReleased;                               // 0x1825(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2504[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EObjectTypeQuery>          TractorBeamObjectsTypes;                           // 0x1828(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 DisallowedBeamTags;                                // 0x1838(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 AlwaysAllowedBeamTags;                             // 0x1858(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2505[0x98];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        TractorBeamFX_Unattached;                          // 0x1910(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        TractorBeamFX_Attached;                            // 0x1918(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     BeamPSC;                                           // 0x1920(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2507[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETractorBeamState                 TractorBeamState;                                  // 0x1978(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2508[0x27];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TractorBeamDeactivationTimestamp;                  // 0x19A0(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TractorBeamDisruptedTimestamp;                     // 0x19A4(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2509[0x80];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CockpitHealth;                                     // 0x1A28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Native_CockpitEnabled;                             // 0x1A2C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastCockpitHealthTickTime;                         // 0x1A30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastCockpitDamageTime;                             // 0x1A34(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CockpitDissolveStartTime;                          // 0x1A38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_250B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        CockpitMaxHealth;                                  // 0x1A40(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CockpitHealthTickRate;                             // 0x1A68(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CockpitHealthPerTick;                              // 0x1A90(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CockpitRegenDelay;                                 // 0x1AB8(0x28)(Edit, NativeAccessSpecifierPublic)
	class UCurveFloat*                           CockpitHitMaterialWobble;                          // 0x1AE0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastDamageAlpha;                                   // 0x1AE8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDissolvingCockpit;                                // 0x1AEC(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestoringCockpit;                                 // 0x1AED(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCockpitWobble;                                    // 0x1AEE(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_250D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  NativeComp_ShieldMesh;                             // 0x1AF0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              Native_CockpitMaterial;                            // 0x1AF8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              Native_EnergyRingMatInstance;                      // 0x1B00(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              Native_EnergyFieldMatInstance;                     // 0x1B08(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                       NativeComp_DamageStateLastLife;                    // 0x1B10(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                       NativeComp_DamageState;                            // 0x1B18(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Native_LastHitLocation;                            // 0x1B20(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Native_LastHitNormal;                              // 0x1B2C(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraComponent*                     NativeComp_DamageStateFX;                          // 0x1B38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraComponent*                     NativeComp_HologramScreen;                         // 0x1B40(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraComponent*                     NativeComp_SpeedLines;                             // 0x1B48(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Native_EnergyRingMat;                              // 0x1B50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Native_EnergyFieldMat;                             // 0x1B58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        NativeSys_DamageStateFX;                           // 0x1B60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        NativeSys_CockpitDestroyed;                        // 0x1B68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            CockpitDamagedSound;                               // 0x1B70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            CockpitDestroyedSound;                             // 0x1B78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            CockpitRespawnSound;                               // 0x1B80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            Native_DamageStateSound;                           // 0x1B88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            Native_DamageStateLastLifeSound;                   // 0x1B90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UForceFeedbackEffect*                  CockpitDeactivatedForceFeedback;                   // 0x1B98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMatineeCameraShake>       CockpitDestroyedCamShake;                          // 0x1BA0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class AActor>>            TractorBeamDisallowedClasses;                      // 0x1BA8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_2511[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortNevadaVehicle* GetDefaultObj();

	void SetTractorBeamInactive();
	void SetTractorBeamEnabled(bool bEnabled);
	void SetCannonEnabled(bool bEnabled);
	void SetAttachedPawnAddedVelocity(struct FVector& AddedVelocity);
	void OnTractorBeamDetached(class AActor* DetachedActor, struct FVector& LastBeamPosition);
	void OnTractorBeamDeactivated(struct FVector& LastBeamPosition);
	void OnTractorBeamChargeStarted();
	void OnTractorBeamAttached();
	void OnTractorBeamActivated();
	void OnTargetedActorChanged(class AActor* NewTargetedActor);
	void OnStartDescend();
	void OnStartAscend();
	void OnRep_TractorBeamState(enum class ETractorBeamState PreviousState);
	void OnRep_TractorBeamChargeStarted();
	void OnRep_TractorBeamAttached();
	void OnRep_TargetedActorChanged();
	void OnRep_ReplicatedTargetedActors();
	void OnRep_NevadaState(struct FNevadaState& PrevState);
	void OnRebootStarted();
	void OnRebootFinished();
	void OnOutOfBattery();
	void OnNewVehicleState(enum class ENevadaFlightStates NewVehicleState);
	void OnCrashingStarted();
	void OnCrashedImpact();
	void OnBoostStarted();
	void OnBoostFinished();
	void OnBoostChargeRefilled();
	void OnBatteryRegen(float Newcharge);
	void OnAttachedActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnAttachedActorDestroyed(class AActor* DestroyedActor);
	void NativeToggleCockpit(bool bEnable);
	bool IsTractorBeamDisrupted();
	bool IsTractorBeamAttached();
	bool IsTractorBeamActive();
	struct FVector GetTractorBeamAttachLocation();
	int32 GetNumRebootsAvailable();
	float GetEnergyCanonChargePercent();
	void GetDriverSeatRotationAnimParams(float* OutLeftRight, float* OutForwardBack);
	enum class ENevadaFlightStates GetCurrentVehicleState();
	float GetBoostChargeTimeRemaining();
	int32 GetBoostChargesAvailable();
	float GetBoostChargeProgress();
	float GetBatteryCharge();
	class AFortNevadaAudioController* GetAudioController();
	void EnablePilotBubbleCollisionOnServer(bool bNewCollisionEnabled);
	void DisruptTractorBeam();
	void AddPhysicsImpulseToTractorBeamAttachedActor(struct FVector& Impulse, class FName BoneName, bool bVelChange);
};

// 0x108 (0x5A0 - 0x498)
// Class NevadaRuntime.FortNevadaVehicleAnimInstance
class UFortNevadaVehicleAnimInstance : public UFortVehicleAnimInstance
{
public:
	class AFortNevadaVehicle*                    NevadaVehicle;                                     // 0x498(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeam_IsAttached;                           // 0x4A0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeam_IsCharging;                           // 0x4A1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeam_IsActive;                             // 0x4A2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeam_IsInactive;                           // 0x4A3(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeam_IsOn;                                 // 0x4A4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeam_HasTarget;                            // 0x4A5(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeam_ShouldApplyCustomAO;                  // 0x4A6(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_251D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TractorBeam_LookAtPitch;                           // 0x4A8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TractorBeam_LookAtYaw;                             // 0x4AC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeanLeftRight;                                     // 0x4B0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeanForwardBackward;                               // 0x4B4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeanValue;                                         // 0x4B8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviousLeanValue;                                 // 0x4BC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocityZValue;                                    // 0x4C0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeanDelta;                                         // 0x4C4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTurnAgain;                                        // 0x4C8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHadDriver;                                        // 0x4C9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bJustGotDriver;                                    // 0x4CA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bJustLostDriver;                                   // 0x4CB(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasBoosting;                                      // 0x4CC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBoosting;                                       // 0x4CD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_251F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PreviousBoostCount;                                // 0x4D0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BoostCount;                                        // 0x4D4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBoostingAgain;                                  // 0x4D8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMoving;                                         // 0x4D9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2520[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WingsPlayRate;                                     // 0x4DC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TractorBeamAlpha;                                  // 0x4E0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimPitch;                                          // 0x4E4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimYaw;                                            // 0x4E8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFiringCannon;                                   // 0x4EC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2521[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DistanceFromGround;                                // 0x4F0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceFromGroundLeft;                            // 0x4F4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceFromGroundRight;                           // 0x4F8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLanding;                                        // 0x4FC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasLanded;                                        // 0x4FD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2523[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LandingAlpha;                                      // 0x500(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotLandingMode;                                   // 0x504(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHadBattery;                                       // 0x505(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutOfBattery;                                     // 0x506(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bJustGotBattery;                                   // 0x507(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLaunchToDepart;                                   // 0x508(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLaunchToIdle;                                     // 0x509(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPartsLanding;                                   // 0x50A(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2524[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TractorBeamSocketName;                             // 0x50C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TractorBeamAimCurveName;                           // 0x514(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NevadaVehicleInterruptName;                        // 0x51C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LandingTraceRightName;                             // 0x524(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LandingTraceLeftName;                              // 0x52C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLeanDeltaInterruptMagnitude;                    // 0x534(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinForwardSpeedToBeMoving;                         // 0x538(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinForwardSpeedToPlayWings;                        // 0x53C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinWingsPlayRate;                                  // 0x540(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWingsPlayRate;                                  // 0x544(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WingsPlayRateInterpSpeed;                          // 0x548(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2525[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UAnimMontage>           CannonFiringMontage;                               // 0x550(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandingGearTraceLength;                            // 0x578(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2526[0x24];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortNevadaVehicleAnimInstance* GetDefaultObj();

};

// 0x498 (0xA98 - 0x600)
// Class NevadaRuntime.FortNevadaVehicleConfigs
class UFortNevadaVehicleConfigs : public UFortPhysicsVehicleConfigs
{
public:
	struct FNevadaMoveModeConfig                 BaseMovement;                                      // 0x600(0x14)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FNevadaMoveModeConfig                 BoostMovement;                                     // 0x614(0x14)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FNevadaMoveModeConfig                 ChargingMovement;                                  // 0x628(0x14)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FDampedSpringConfig                   UprightSpringForce;                                // 0x63C(0xC)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DebaseLaunchspeed;                                 // 0x648(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxHeight;                                         // 0x64C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinHeight;                                         // 0x650(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OnEnterPitchAlpha;                                 // 0x654(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FallDamageHeightBuffer;                            // 0x658(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurningForce;                                      // 0x65C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThrustRotationAlpha;                               // 0x660(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchDrag;                                         // 0x664(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawDrag;                                           // 0x668(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RollDrag;                                          // 0x66C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostThrustDuration;                               // 0x670(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostDragDuration;                                 // 0x674(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumBoostCharges;                                   // 0x678(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostChargeDuration;                               // 0x67C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostChargeDelay;                                  // 0x680(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostDragFinishSpeed;                              // 0x684(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TractorBeamRadius;                                 // 0x688(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TractorBeamWithTargetRadius;                       // 0x68C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TractorBeamSweepLength;                            // 0x690(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TractorBeamChargeTime;                             // 0x6B8(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TractorBeamDurationTime;                           // 0x6E0(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TractorBeamTossImpulseStrengthForward;             // 0x708(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TractorBeamTossImpulseStrengthUpward;              // 0x730(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	float                                        TractorBeamShutdownTime;                           // 0x758(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_252A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        TractorBeamTurnOffDamage;                          // 0x760(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        AllowTractorBeamAIPawns;                           // 0x788(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	float                                        TractorBeamBreakForceMagnitude;                    // 0x7B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_252B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        TractorBeamActive;                                 // 0x7B8(0x28)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TractorBeamCooldown;                               // 0x7E0(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TractorBeamDisruptionCooldown;                     // 0x808(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	class FName                                  TractorBeamSocket;                                 // 0x830(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TractorBeamAttachPositionOffset;                   // 0x838(0xC)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigidBodyErrorCorrection             TractorBeamTargetOverridenErrorCorrection;         // 0x844(0x34)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	float                                        VictimPitchDrag;                                   // 0x878(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VictimYawDrag;                                     // 0x87C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VictimRollDrag;                                    // 0x880(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDampedSpringConfig                   TractorBeamVictimUprightForce;                     // 0x884(0xC)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        NumReboots;                                        // 0x890(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCrashingTime;                                   // 0x894(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCrashingScrapingTime;                           // 0x898(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCrashingTimeSpentNotMoving;                     // 0x89C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedThresholdForCrashed;                          // 0x8A0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_252C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        RebootDuration;                                    // 0x8A8(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        RebootDelay;                                       // 0x8D0(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	float                                        LandingTraceRange;                                 // 0x8F8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DesiredLandingDistance;                            // 0x8FC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandingDelay_Max;                                  // 0x900(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandingDelay_Min;                                  // 0x904(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeightForMinLandingDelay;                          // 0x908(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeightForMaxLandingDelay;                          // 0x90C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandingPitchAlphaMax;                              // 0x910(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandingPitchAlphaMin;                              // 0x914(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DriverSeatRotationAnimBlendSpeed;                  // 0x918(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrashingDesiredUpLerpFactor;                       // 0x91C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrashedLinearDrag;                                 // 0x920(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandedDragCoef;                                    // 0x924(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandedDragCoef2;                                   // 0x928(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LandedMaxDragSpeed;                                // 0x92C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrashedAngularDragMultiplier;                      // 0x930(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostFOV;                                          // 0x934(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtraTraceInteractRange;                           // 0x938(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AntiGravityMult;                                   // 0x93C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialLiftDuration;                               // 0x940(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_253A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        BatteryCostDuringFlight;                           // 0x948(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        BatteryRegenDelay;                                 // 0x970(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        BatteryRegenTickRate;                              // 0x998(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        BatteryRegenAmount;                                // 0x9C0(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MaxBattery;                                        // 0x9E8(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinBatteryForFlight;                               // 0xA10(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	TArray<class FName>                          CockpitShapeNames;                                 // 0xA38(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CockpitDamageMult;                                 // 0xA48(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FScalableFloat                        CockpitHealth;                                     // 0xA70(0x28)(Edit, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortNevadaVehicleConfigs* GetDefaultObj();

};

// 0xF0 (0x2040 - 0x1F50)
// Class NevadaRuntime.FortPlayerAnimInstance_NevadaDriver
class UFortPlayerAnimInstance_NevadaDriver : public UFortPlayerAnimInstance_OctopusDriver
{
public:
	class AFortNevadaVehicle*                    NevadaVehicle;                                     // 0x1F50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimLeftRight;                                     // 0x1F58(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimForwardBackward;                               // 0x1F5C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RootAttachmentLoc;                                 // 0x1F60(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RootAttachmentRot;                                 // 0x1F6C(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        BoostCount;                                        // 0x1F78(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PreviousBoostCount;                                // 0x1F7C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBoostingAgain;                                  // 0x1F80(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMoving;                                         // 0x1F81(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2543[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinVehicleVelocityToBeMoving;                      // 0x1F84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DriverSocketName;                                  // 0x1F88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RightHandAttachmentSocketName;                     // 0x1F90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LeftHandAttachmentSocketName;                      // 0x1F98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RightFootAttachmentSocketName;                     // 0x1FA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LeftFootAttachementSocketName;                     // 0x1FA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RightHandRotationOffset;                           // 0x1FB0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              LeftHandRotationOffset;                            // 0x1FBC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              RightFootRotationOffset;                           // 0x1FC8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              LeftFootRotationOffset;                            // 0x1FD4(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               RootAttachmentOffset;                              // 0x1FE0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2544[0x54];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPlayerAnimInstance_NevadaDriver* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class NevadaRuntime.NevadaGlobals
class UNevadaGlobals : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNevadaGlobals* GetDefaultObj();

};

}


