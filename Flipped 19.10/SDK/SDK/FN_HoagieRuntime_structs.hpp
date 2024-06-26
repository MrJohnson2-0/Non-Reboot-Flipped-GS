#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EHoagieBoostState : uint8
{
	Unknown                        = 0,
	Ready                          = 1,
	Started                        = 2,
	Finished                       = 3,
	Failed                         = 4,
	EHoagieBoostState_MAX          = 5,
};

enum class EHoagieState : int32
{
	STARTUP                        = 0,
	STARTUP_LIFT                   = 1,
	FLIGHT                         = 2,
	AUTO_LANDING                   = 3,
	SPIN_CRASHING                  = 4,
	CRASHING_NO_SPIN               = 5,
	CRASH_LANDED                   = 6,
	LANDED                         = 7,
	EXPLODING                      = 8,
	NONE                           = 9,
	EHoagieState_MAX               = 10,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0x110 - 0x0)
// ScriptStruct HoagieRuntime.FortHeliFlightModel
struct FFortHeliFlightModel
{
public:
	uint8                                        Pad_1B46[0x108];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHoagieVehicleConfigs*             Configs;                                           // 0x108(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct HoagieRuntime.RotorHit
struct FRotorHit
{
public:
	struct FActorInstanceHandle                  HitObjectHandle;                                   // 0x0(0x18)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastHitTimer;                                      // 0x18(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct HoagieRuntime.CachedSeatCollision
struct FCachedSeatCollision
{
public:
	int32                                        SeatIndex;                                         // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOccupied;                                         // 0x4(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B47[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct HoagieRuntime.ReplicatedHeliControlState
struct FReplicatedHeliControlState
{
public:
	struct FVector_NetQuantizeNormal             Up;                                                // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal             Forward;                                           // 0xC(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x44 (0x44 - 0x0)
// ScriptStruct HoagieRuntime.HoagieCmd
struct FHoagieCmd
{
public:
	uint8                                        Pad_1B48[0x44];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x170 - 0x148)
// ScriptStruct HoagieRuntime.HoagieInPersistent
struct FHoagieInPersistent : public FFortVehicleInPersistent
{
public:
	class UFortHoagieVehicleConfigs*             FortHoagieVehicleConfigs;                          // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoagieState                      CurrentHoagieState;                                // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastRotorImpulseTime;                              // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RotorHitLinearImpulse;                             // 0x158(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RotorHitAngularImpulse;                            // 0x164(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x118 (0x170 - 0x58)
// ScriptStruct HoagieRuntime.HoagieInternal
struct FHoagieInternal : public FFortVehicleInternalPersistent
{
public:
	struct FFortHeliFlightModel                  FlightModel;                                       // 0x58(0x110)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B4E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x28 - 0x28)
// ScriptStruct HoagieRuntime.HoagieOutContinuous
struct FHoagieOutContinuous : public FFortVehicleOutContinuous
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct HoagieRuntime.HoagieOutPersistent
struct FHoagieOutPersistent : public FFortVehicleOutPersistent
{
public:
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct HoagieRuntime.HoagieDeathEffectInfo
struct FHoagieDeathEffectInfo
{
public:
	float                                        Damage;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B4F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(NativeAccessSpecifierPublic)
	struct FVector                               Momentum;                                          // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            HitInfo;                                           // 0x34(0x9C)(IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AFortPawn*                             InstigatedBy;                                      // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0xE0(0x18)(NativeAccessSpecifierPublic)
};

}


