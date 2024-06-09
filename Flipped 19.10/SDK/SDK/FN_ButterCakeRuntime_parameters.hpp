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

// 0x1 (0x1 - 0x0)
// Function ButterCakeRuntime.ButterCakeUnstuckComponent.HandleAthenaGamePhaseChanged
struct UButterCakeUnstuckComponent_HandleAthenaGamePhaseChanged_Params
{
public:
	enum class EAthenaGamePhase                  GamePhase;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ButterCakeRuntime.FortAIAnimInstance_ButterCake.ComputeLeanAngleByVelocity
struct UFortAIAnimInstance_ButterCake_ComputeLeanAngleByVelocity_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ButterCakeRuntime.FortAIAnimInstance_ButterCake.ComputeFootPhase
struct UFortAIAnimInstance_ButterCake_ComputeFootPhase_Params
{
public:
	enum class EFortButterCakeFootPhase          ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ButterCakeRuntime.FortButterCakeComponent_Telemetry.OnItemsSneezed
struct UFortButterCakeComponent_Telemetry_OnItemsSneezed_Params
{
public:
	int32                                        ItemsCount;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ButterCakeRuntime.FortButterCakeComponent_Telemetry.OnItemsEaten
struct UFortButterCakeComponent_Telemetry_OnItemsEaten_Params
{
public:
	int32                                        ItemsCount;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ButterCakeRuntime.FortButterCakeComponent_Telemetry.OnEnterBerserk
struct UFortButterCakeComponent_Telemetry_OnEnterBerserk_Params
{
public:
	class AController*                           Instigator;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ButterCakeRuntime.FortButterCakeControlRig.GetGroundHitNormalAt
struct UFortButterCakeControlRig_GetGroundHitNormalAt_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ButterCakeRuntime.FortButterCakeControlRig.GetGroundHitLocationAt
struct UFortButterCakeControlRig_GetGroundHitLocationAt_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


