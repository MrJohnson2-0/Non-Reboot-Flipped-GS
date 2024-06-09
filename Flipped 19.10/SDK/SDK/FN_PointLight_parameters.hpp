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

// 0x38 (0x38 - 0x0)
// Function PointLight.PointLightNativeComponent.UpdateDeviceSettings
struct UPointLightNativeComponent_UpdateDeviceSettings_Params
{
public:
	struct FPointLightRhythmParameters           RhythmParameters;                                  // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PointLight.PointLightNativeComponent.StartShortCircuitUpdate
struct UPointLightNativeComponent_StartShortCircuitUpdate_Params
{
public:
	class UTimelineComponent*                    ShortCircuitTimeline;                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PointLight.PointLightNativeComponent.StartRhythmUpdate
struct UPointLightNativeComponent_StartRhythmUpdate_Params
{
public:
	struct FTimerHandle                          TimerHandle;                                       // 0x0(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rate;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2890[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


