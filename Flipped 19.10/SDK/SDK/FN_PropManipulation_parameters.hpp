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

// 0x18 (0x18 - 0x0)
// Function PropManipulation.PropManipulationNativeComponent.SetControlledObjectsVisibilityAndCollision
struct UPropManipulationNativeComponent_SetControlledObjectsVisibilityAndCollision_Params
{
public:
	TArray<class ABuildingSMActor*>              InObjectsOfControl;                                // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         InNewVisibility;                                   // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2895[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function PropManipulation.PropManipulationNativeComponent.RefreshTrackedActors
struct UPropManipulationNativeComponent_RefreshTrackedActors_Params
{
public:
	class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker;          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


