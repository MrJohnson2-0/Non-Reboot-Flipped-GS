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

// 0x10 (0x10 - 0x0)
// Function KnockbackRuntime.FortAthenaMutator_Knockback.SetPlayersShouldBreakThroughStructures
struct AFortAthenaMutator_Knockback_SetPlayersShouldBreakThroughStructures_Params
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function KnockbackRuntime.FortAthenaMutator_Knockback.HandleBlockedCharacterMovement
struct AFortAthenaMutator_Knockback_HandleBlockedCharacterMovement_Params
{
public:
	struct FHitResult                            InOutImpact;                                       // 0x0(0x9C)(Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_24AB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             FortPawn;                                          // 0xA0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function KnockbackRuntime.FortAthenaMutator_Knockback.GetPercentDamageMediumMaxThreshold
struct AFortAthenaMutator_Knockback_GetPercentDamageMediumMaxThreshold_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function KnockbackRuntime.FortAthenaMutator_Knockback.GetPercentDamageLowMaxThreshold
struct AFortAthenaMutator_Knockback_GetPercentDamageLowMaxThreshold_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function KnockbackRuntime.FortAthenaMutator_Knockback.GetKnockbackMultiplierInitialValue
struct AFortAthenaMutator_Knockback_GetKnockbackMultiplierInitialValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function KnockbackRuntime.FortAthenaMutator_Knockback.GetAllPlayersKnockbackData
struct AFortAthenaMutator_Knockback_GetAllPlayersKnockbackData_Params
{
public:
	TArray<struct FKnockbackMutatorData>         ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function KnockbackRuntime.FortGameplayAbility_KnockbackMutator.SaveKnockbackData
struct UFortGameplayAbility_KnockbackMutator_SaveKnockbackData_Params
{
public:
	struct FKnockbackMutatorData                 InKnockbackData;                                   // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function KnockbackRuntime.FortGameplayAbility_KnockbackMutator.GetCachedMutator
struct UFortGameplayAbility_KnockbackMutator_GetCachedMutator_Params
{
public:
	class AFortAthenaMutator_Knockback*          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


