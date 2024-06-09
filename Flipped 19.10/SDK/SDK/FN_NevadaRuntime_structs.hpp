#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETractorBeamState : uint8
{
	TBS_Inactive                   = 0,
	TBS_Charging                   = 1,
	TBS_Active                     = 2,
	TBS_MAX                        = 3,
};

enum class ENevadaFlightStates : uint8
{
	FLIGHT                         = 0,
	CRASHING                       = 1,
	CRASHED                        = 2,
	REBOOTING                      = 3,
	LANDING                        = 4,
	LANDED                         = 5,
	IDLE                           = 6,
	NONE                           = 7,
	ENevadaFlightStates_MAX        = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct NevadaRuntime.NevadaAudioUpdateContext
struct FNevadaAudioUpdateContext
{
public:
	uint8                                        Pad_2545[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct NevadaRuntime.NevadaOutContinuous
struct FNevadaOutContinuous : public FFortVehicleOutContinuous
{
public:
	float                                        AltimeterTraceHitDistance;                         // 0x28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TractorBeamAppliedForceMagnitude;                  // 0x2C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x370 (0x380 - 0x10)
// ScriptStruct NevadaRuntime.NevadaOutPersistent
struct FNevadaOutPersistent : public FFortVehicleOutPersistent
{
public:
	uint8                                        Pad_2546[0x370];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct NevadaRuntime.NevadaState
struct FNevadaState
{
public:
	enum class ENevadaFlightStates               CurrentStatus;                                     // 0x0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2547[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LivesRemaining;                                    // 0x4(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHijackingActive;                                  // 0x8(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPilotBubbleCollisionEnabled;                      // 0x9(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2548[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentBatteryCharge;                              // 0xC(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCannonEnabled;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractorBeamEnabled;                               // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_254A[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct NevadaRuntime.NevadaMoveModeConfig
struct FNevadaMoveModeConfig
{
public:
	float                                        ThrustForce;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LiftForce;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxHorizontalSpeed;                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxVerticalSpeed;                                  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DragForceMultiplier;                               // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x248 - 0x148)
// ScriptStruct NevadaRuntime.NevadaInPersistent
struct FNevadaInPersistent : public FFortVehicleInPersistent
{
public:
	class UFortNevadaVehicleConfigs*             FortNevadaVehicleConfigs;                          // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBoostThrust;                                      // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBoostDrag;                                        // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_254E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TractorBeamExtraLengthForExtents;                  // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTractorBeamUprightForce;                       // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_254F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CrashingDesiredUp;                                 // 0x15C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENevadaFlightStates               CurrentVehicleState;                               // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2550[0xDF];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


