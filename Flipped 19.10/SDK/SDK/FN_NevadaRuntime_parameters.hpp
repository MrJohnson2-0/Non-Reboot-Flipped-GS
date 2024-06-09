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
// Function NevadaRuntime.FortNevadaAudioController.Init
struct AFortNevadaAudioController_Init_Params
{
public:
	class AFortNevadaVehicle*                    InVehicle;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NevadaRuntime.FortNevadaAudioController.GetVehicleActor
struct AFortNevadaAudioController_GetVehicleActor_Params
{
public:
	class AFortNevadaVehicle*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NevadaRuntime.FortNevadaAudioController.CacheReferences
struct AFortNevadaAudioController_CacheReferences_Params
{
public:
	class UFortLayeredAudioComponent*            InLayeredAudioComponent;                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.SetTractorBeamEnabled
struct AFortNevadaVehicle_SetTractorBeamEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.SetCannonEnabled
struct AFortNevadaVehicle_SetCannonEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.SetAttachedPawnAddedVelocity
struct AFortNevadaVehicle_SetAttachedPawnAddedVelocity_Params
{
public:
	struct FVector                               AddedVelocity;                                     // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamDetached
struct AFortNevadaVehicle_OnTractorBeamDetached_Params
{
public:
	class AActor*                                DetachedActor;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LastBeamPosition;                                  // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24D1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamDeactivated
struct AFortNevadaVehicle_OnTractorBeamDeactivated_Params
{
public:
	struct FVector                               LastBeamPosition;                                  // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnTargetedActorChanged
struct AFortNevadaVehicle_OnTargetedActorChanged_Params
{
public:
	class AActor*                                NewTargetedActor;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamState
struct AFortNevadaVehicle_OnRep_TractorBeamState_Params
{
public:
	enum class ETractorBeamState                 PreviousState;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnRep_NevadaState
struct AFortNevadaVehicle_OnRep_NevadaState_Params
{
public:
	struct FNevadaState                          PrevState;                                         // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnNewVehicleState
struct AFortNevadaVehicle_OnNewVehicleState_Params
{
public:
	enum class ENevadaFlightStates               NewVehicleState;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnBatteryRegen
struct AFortNevadaVehicle_OnBatteryRegen_Params
{
public:
	float                                        Newcharge;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnAttachedActorDied
struct AFortNevadaVehicle_OnAttachedActorDied_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x30(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Momentum;                                          // 0x40(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24E0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.OnAttachedActorDestroyed
struct AFortNevadaVehicle_OnAttachedActorDestroyed_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.NativeToggleCockpit
struct AFortNevadaVehicle_NativeToggleCockpit_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamDisrupted
struct AFortNevadaVehicle_IsTractorBeamDisrupted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamAttached
struct AFortNevadaVehicle_IsTractorBeamAttached_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamActive
struct AFortNevadaVehicle_IsTractorBeamActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetTractorBeamAttachLocation
struct AFortNevadaVehicle_GetTractorBeamAttachLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetNumRebootsAvailable
struct AFortNevadaVehicle_GetNumRebootsAvailable_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetEnergyCanonChargePercent
struct AFortNevadaVehicle_GetEnergyCanonChargePercent_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetDriverSeatRotationAnimParams
struct AFortNevadaVehicle_GetDriverSeatRotationAnimParams_Params
{
public:
	float                                        OutLeftRight;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutForwardBack;                                    // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetCurrentVehicleState
struct AFortNevadaVehicle_GetCurrentVehicleState_Params
{
public:
	enum class ENevadaFlightStates               ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetBoostChargeTimeRemaining
struct AFortNevadaVehicle_GetBoostChargeTimeRemaining_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetBoostChargesAvailable
struct AFortNevadaVehicle_GetBoostChargesAvailable_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetBoostChargeProgress
struct AFortNevadaVehicle_GetBoostChargeProgress_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetBatteryCharge
struct AFortNevadaVehicle_GetBatteryCharge_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.GetAudioController
struct AFortNevadaVehicle_GetAudioController_Params
{
public:
	class AFortNevadaAudioController*            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.EnablePilotBubbleCollisionOnServer
struct AFortNevadaVehicle_EnablePilotBubbleCollisionOnServer_Params
{
public:
	bool                                         bNewCollisionEnabled;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NevadaRuntime.FortNevadaVehicle.AddPhysicsImpulseToTractorBeamAttachedActor
struct AFortNevadaVehicle_AddPhysicsImpulseToTractorBeamAttachedActor_Params
{
public:
	struct FVector                               Impulse;                                           // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVelChange;                                        // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24F8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


