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
// Function TempestRuntime.FortCheatManager_Tempest.EndTempestStorm
struct UFortCheatManager_Tempest_EndTempestStorm_Params
{
public:
	class FString                                StormName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function TempestRuntime.TempestStateMachineComponent.GetCurrentStateInfo
struct UTempestStateMachineComponent_GetCurrentStateInfo_Params
{
public:
	struct FTempestStateInfo                     ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function TempestRuntime.TempestStateMachineComponent.GetCurrentStateCompletionPercentage
struct UTempestStateMachineComponent_GetCurrentStateCompletionPercentage_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TempestRuntime.TempestStateMachineComponent.GetCurrentState
struct UTempestStateMachineComponent_GetCurrentState_Params
{
public:
	enum class ETempestState                     ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TempestRuntime.TempestStateMachineComponent.ForceDissipate
struct UTempestStateMachineComponent_ForceDissipate_Params
{
public:
	class FString                                InDissipationReason;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


