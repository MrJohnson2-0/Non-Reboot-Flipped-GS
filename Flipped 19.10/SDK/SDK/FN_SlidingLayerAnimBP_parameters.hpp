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

// 0x30 (0x30 - 0x0)
// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_UpperBodyPose
struct USlidingLayerAnimBP_C_MovementMode_UpperBodyPose_Params
{
public:
	struct FPoseLink                             UppperBodyPose_BasePose;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             UpperBodyPose_AdditiveIdentityPose;                // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_UpperBodyPose;                        // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_LowerBodyOverride
struct USlidingLayerAnimBP_C_MovementMode_LowerBodyOverride_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_LowerBodyOverride;                    // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_LocomotionUpperBodyAdditive
struct USlidingLayerAnimBP_C_MovementMode_LocomotionUpperBodyAdditive_Params
{
public:
	struct FPoseLink                             InPose_0;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             IdleAdditive_CachedPose;                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_LocomotionUpperBodyAdditive;          // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.AnimGraph
struct USlidingLayerAnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0xBC (0xBC - 0x0)
// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.Correct Yaw Value
struct USlidingLayerAnimBP_C_Correct_Yaw_Value_Params
{
public:
	struct FRotator                              InRot;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              ReturnValue;                                       // 0xC(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F63[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 CallFunc_Conv_RotatorToQuaternion_ReturnValue;     // 0x20(0x10)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll_1;                      // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch_1;                     // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw_1;                       // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x50(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue_1;                // 0x5C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F67[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 CallFunc_Conv_RotatorToQuaternion_ReturnValue_1;   // 0x70(0x10)(IsPlainOldData, NoDestructor)
	struct FQuat                                 CallFunc_Conv_RotatorToQuaternion_ReturnValue_2;   // 0x80(0x10)(IsPlainOldData, NoDestructor)
	struct FQuat                                 CallFunc_Multiply_QuatQuat_ReturnValue;            // 0x90(0x10)(IsPlainOldData, NoDestructor)
	struct FQuat                                 CallFunc_Multiply_QuatQuat_ReturnValue_1;          // 0xA0(0x10)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_Quat_Rotator_ReturnValue;                 // 0xB0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.BlueprintUpdateAnimation
struct USlidingLayerAnimBP_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.ExecuteUbergraph_SlidingLayerAnimBP
struct USlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


