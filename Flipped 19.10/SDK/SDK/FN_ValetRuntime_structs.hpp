#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETireStates : uint8
{
	Default                        = 0,
	Popped                         = 1,
	ETireStates_MAX                = 2,
};

enum class ETireSurfaces : uint8
{
	Road                           = 0,
	Dirt                           = 1,
	Grass                          = 2,
	Air                            = 3,
	Water                          = 4,
	ETireSurfaces_MAX              = 5,
};

enum class EFortDagwoodSimEvent : uint8
{
	EnterLandscape                 = 0,
	ExitLandscape                  = 1,
	EnterRoad                      = 2,
	ExitRoad                       = 3,
	Explode                        = 4,
	FlipImpact                     = 5,
	StartBoost                     = 6,
	FinishBoost                    = 7,
	EFortDagwoodSimEvent_MAX       = 8,
};

enum class EControlsPrototypes : uint8
{
	CameraSteering                 = 0,
	NonCameraSteering              = 1,
	HybridCameraSteering           = 2,
	MaxCount                       = 3,
	EControlsPrototypes_MAX        = 4,
};

enum class EPoppedTireReactionStates : uint8
{
	None                           = 0,
	VeerLeft                       = 1,
	VeerRight                      = 2,
	Wiggle                         = 3,
	Yaw90                          = 4,
	FlipPitch                      = 5,
	FlipRoll                       = 6,
	EPoppedTireReactionStates_MAX  = 7,
};

enum class ETireLocations : uint8
{
	FrontRight                     = 0,
	FrontLeft                      = 1,
	BackRight                      = 2,
	BackLeft                       = 3,
	ETireLocations_MAX             = 4,
};

enum class EVehicleClass : uint8
{
	Sedan                          = 0,
	Sport                          = 1,
	PickupTruck                    = 2,
	SemiTruck                      = 3,
	EVehicleClass_MAX              = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x1C - 0x0)
// ScriptStruct ValetRuntime.FortDagwoodCmd
struct FFortDagwoodCmd
{
public:
	float                                        ForwardAlpha;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RightAlpha;                                        // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccelerationAlpha;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                MovementDir;                                       // 0xC(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bBoost : 1;                                        // Mask: 0x1, PropSize: 0x10x18(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHandbrake : 1;                                    // Mask: 0x2, PropSize: 0x10x18(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE2[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ValetRuntime.RuntimeBoostInfo
struct FRuntimeBoostInfo
{
public:
	uint8                                        bCanBoost : 1;                                     // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsesRechargeableBoost : 1;                        // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_112 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1CE4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BoostPushForce;                                    // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostTopSpeedForceMultiplier;                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoostTopSpeedMultiplier;                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RechargeableBoostRateOfRegen;                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RechargeableBoostRateOfUse;                        // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ValetRuntime.RuntimeFuelInfo
struct FRuntimeFuelInfo
{
public:
	float                                        MaxFuel;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FuelPerSecondDriving;                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FuelPerSecondBoosting;                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ValetRuntime.RuntimeGearInfo
struct FRuntimeGearInfo
{
public:
	int32                                        GearIndex;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TopSpeed;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSpeed;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PushForce;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ValetRuntime.DagwoodRuntimeModifiers
struct FDagwoodRuntimeModifiers
{
public:
	struct FRuntimeBoostInfo                     BoostInfo;                                         // 0x0(0x18)(BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct FRuntimeFuelInfo                      FuelInfo;                                          // 0x18(0xC)(BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct FRuntimeSpringsInfo                   SpringsInfo;                                       // 0x24(0x20)(BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDamageFriendlyVehicles;                           // 0x44(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDamageOtherVehicles;                              // 0x45(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDamageOwnVehicle;                                 // 0x46(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDamageAllowedFromOtherVehicle;                    // 0x47(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityMultiplier;                                 // 0x48(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxInclineAngle;                                   // 0x4C(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTiltAngle;                                      // 0x50(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRuntimeGearInfo>              GearInfos;                                         // 0x58(0x10)(BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FGameplayTag                          TireModTag;                                        // 0x68(0x8)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TireModVersion;                                    // 0x70(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTireModAdjustsPosition;                           // 0x71(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SelfDestructTime;                                  // 0x74(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTimeExplosion;                                  // 0x78(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTimeZeroHealth;                                 // 0x7C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTimeSelfDestructCleanup;                        // 0x80(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        DataVersion;                                       // 0x84(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE8 (0x230 - 0x148)
// ScriptStruct ValetRuntime.DagwoodInPersistent
struct FDagwoodInPersistent : public FFortVehicleInPersistent
{
public:
	class UFortDagwoodVehicleConfigs*            FortDagwoodVehicleConfigs;                         // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDagwoodRuntimeModifiers              DagwoodRuntimeModifiedProperties;                  // 0x150(0x88)(NativeAccessSpecifierPublic)
	TArray<enum class ETireStates>               TireStates;                                        // 0x1D8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE9[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0xF0 - 0x58)
// ScriptStruct ValetRuntime.DagwoodInternal
struct FDagwoodInternal : public FFortVehicleInternalPersistent
{
public:
	uint8                                        Pad_1CEA[0x98];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x28 - 0x10)
// ScriptStruct ValetRuntime.DagwoodOutPersistent
struct FDagwoodOutPersistent : public FFortVehicleOutPersistent
{
public:
	bool                                         bOnRoad;                                           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnLandscape;                                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnDirt;                                           // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnVehicle;                                        // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBoosting;                                         // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CEB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ETireSurfaces>             TireSurfaces;                                      // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ValetRuntime.DagwoodOutContinuous
struct FDagwoodOutContinuous : public FFortVehicleOutContinuous
{
public:
	uint8                                        Pad_1CEC[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x158 (0x158 - 0x0)
// ScriptStruct ValetRuntime.DagwoodState_PT
struct FDagwoodState_PT
{
public:
	struct FDagwoodInternal                      Internal;                                          // 0x0(0xF0)(NativeAccessSpecifierPublic)
	struct FDagwoodOutPersistent                 OutPersistent;                                     // 0xF0(0x28)(NativeAccessSpecifierPublic)
	struct FDagwoodOutContinuous                 OutContinuous;                                     // 0x118(0x38)(NativeAccessSpecifierPublic)
	bool                                         bOutValid;                                         // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CEF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ValetRuntime.DagwoodFutureClientInput
struct FDagwoodFutureClientInput
{
public:
	int32                                        Frame;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortDagwoodCmd                       InputCmd;                                          // 0x4(0x1C)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x3C8 (0x3C8 - 0x0)
// ScriptStruct ValetRuntime.DagwoodManagedState
struct FDagwoodManagedState
{
public:
	int32                                        Frame;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortDagwoodCmd                       InputCmd;                                          // 0x4(0x1C)(NoDestructor, NativeAccessSpecifierPublic)
	struct FDagwoodInPersistent                  GT_State;                                          // 0x20(0x230)(NativeAccessSpecifierPublic)
	struct FDagwoodState_PT                      PT_State;                                          // 0x250(0x158)(NativeAccessSpecifierPublic)
	class APlayerController*                     PC;                                                // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDagwoodFutureClientInput>     FutureInputs;                                      // 0x3B8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ValetRuntime.VehicleAttachment
struct FVehicleAttachment
{
public:
	class FName                                  ModName;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         SkeletalMesh;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ValetRuntime.DagwoodActionDefForUI
struct FDagwoodActionDefForUI
{
public:
	TArray<struct FActionDefForUI>               ActionDefForUI;                                    // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct ValetRuntime.TireSimulationRuntimeData
struct FTireSimulationRuntimeData
{
public:
	struct FRuntimeTerrainHandlingInfo           HandlingInfo;                                      // 0x0(0x10)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	float                                        PoppedTireSpringLength;                            // 0x10(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoppedTireSpringStiff;                             // 0x14(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoppedTireSpringDamp;                              // 0x18(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ValetRuntime.ValetUpdateContext
struct FValetUpdateContext
{
public:
	uint8                                        Pad_1CF1[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ValetRuntime.VehiclePropReplacementData
struct FVehiclePropReplacementData
{
public:
	TSoftObjectPtr<class UFortVehicleItemDefinition> FortVehicleItemDefinition;                         // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TransOffset;                                       // 0x28(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RotOffset;                                         // 0x34(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

}


