#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SlidingLayerAnimBP.SlidingLayerAnimBP_C
// (None)

class UClass* USlidingLayerAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlidingLayerAnimBP_C");

	return Clss;
}


// SlidingLayerAnimBP_C SlidingLayerAnimBP.Default__SlidingLayerAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlidingLayerAnimBP_C* USlidingLayerAnimBP_C::GetDefaultObj()
{
	static class USlidingLayerAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlidingLayerAnimBP_C*>(USlidingLayerAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_UpperBodyPose
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   UppperBodyPose_BasePose                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   UpperBodyPose_AdditiveIdentityPose                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_UpperBodyPose                                       (Parm, OutParm, NoDestructor)

void USlidingLayerAnimBP_C::MovementMode_UpperBodyPose(const struct FPoseLink& UppperBodyPose_BasePose, const struct FPoseLink& UpperBodyPose_AdditiveIdentityPose, struct FPoseLink* MovementMode_UpperBodyPose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlidingLayerAnimBP_C", "MovementMode_UpperBodyPose");

	Params::USlidingLayerAnimBP_C_MovementMode_UpperBodyPose_Params Parms{};

	Parms.UppperBodyPose_BasePose = UppperBodyPose_BasePose;
	Parms.UpperBodyPose_AdditiveIdentityPose = UpperBodyPose_AdditiveIdentityPose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_UpperBodyPose != nullptr)
		*MovementMode_UpperBodyPose = std::move(Parms.MovementMode_UpperBodyPose);

}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_LowerBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_LowerBodyOverride                                   (Parm, OutParm, NoDestructor)

void USlidingLayerAnimBP_C::MovementMode_LowerBodyOverride(const struct FPoseLink& InPose, struct FPoseLink* MovementMode_LowerBodyOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlidingLayerAnimBP_C", "MovementMode_LowerBodyOverride");

	Params::USlidingLayerAnimBP_C_MovementMode_LowerBodyOverride_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_LowerBodyOverride != nullptr)
		*MovementMode_LowerBodyOverride = std::move(Parms.MovementMode_LowerBodyOverride);

}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_LocomotionUpperBodyAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_0                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   IdleAdditive_CachedPose                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_LocomotionUpperBodyAdditive                         (Parm, OutParm, NoDestructor)

void USlidingLayerAnimBP_C::MovementMode_LocomotionUpperBodyAdditive(const struct FPoseLink& InPose_0, const struct FPoseLink& IdleAdditive_CachedPose, struct FPoseLink* MovementMode_LocomotionUpperBodyAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlidingLayerAnimBP_C", "MovementMode_LocomotionUpperBodyAdditive");

	Params::USlidingLayerAnimBP_C_MovementMode_LocomotionUpperBodyAdditive_Params Parms{};

	Parms.InPose_0 = InPose_0;
	Parms.IdleAdditive_CachedPose = IdleAdditive_CachedPose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_LocomotionUpperBodyAdditive != nullptr)
		*MovementMode_LocomotionUpperBodyAdditive = std::move(Parms.MovementMode_LocomotionUpperBodyAdditive);

}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USlidingLayerAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlidingLayerAnimBP_C", "AnimGraph");

	Params::USlidingLayerAnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.Correct Yaw Value
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                    InRot                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FQuat                       CallFunc_Conv_RotatorToQuaternion_ReturnValue                    (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQuat                       CallFunc_Conv_RotatorToQuaternion_ReturnValue_1                  (IsPlainOldData, NoDestructor)
// struct FQuat                       CallFunc_Conv_RotatorToQuaternion_ReturnValue_2                  (IsPlainOldData, NoDestructor)
// struct FQuat                       CallFunc_Multiply_QuatQuat_ReturnValue                           (IsPlainOldData, NoDestructor)
// struct FQuat                       CallFunc_Multiply_QuatQuat_ReturnValue_1                         (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Quat_Rotator_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FRotator USlidingLayerAnimBP_C::Correct_Yaw_Value(const struct FRotator& InRot, const struct FQuat& CallFunc_Conv_RotatorToQuaternion_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FQuat& CallFunc_Conv_RotatorToQuaternion_ReturnValue_1, const struct FQuat& CallFunc_Conv_RotatorToQuaternion_ReturnValue_2, const struct FQuat& CallFunc_Multiply_QuatQuat_ReturnValue, const struct FQuat& CallFunc_Multiply_QuatQuat_ReturnValue_1, const struct FRotator& CallFunc_Quat_Rotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlidingLayerAnimBP_C", "Correct Yaw Value");

	Params::USlidingLayerAnimBP_C_Correct_Yaw_Value_Params Parms{};

	Parms.InRot = InRot;
	Parms.CallFunc_Conv_RotatorToQuaternion_ReturnValue = CallFunc_Conv_RotatorToQuaternion_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_Conv_RotatorToQuaternion_ReturnValue_1 = CallFunc_Conv_RotatorToQuaternion_ReturnValue_1;
	Parms.CallFunc_Conv_RotatorToQuaternion_ReturnValue_2 = CallFunc_Conv_RotatorToQuaternion_ReturnValue_2;
	Parms.CallFunc_Multiply_QuatQuat_ReturnValue = CallFunc_Multiply_QuatQuat_ReturnValue;
	Parms.CallFunc_Multiply_QuatQuat_ReturnValue_1 = CallFunc_Multiply_QuatQuat_ReturnValue_1;
	Parms.CallFunc_Quat_Rotator_ReturnValue = CallFunc_Quat_Rotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USlidingLayerAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlidingLayerAnimBP_C", "BlueprintUpdateAnimation");

	Params::USlidingLayerAnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void USlidingLayerAnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlidingLayerAnimBP_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.ExecuteUbergraph_SlidingLayerAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USlidingLayerAnimBP_C::ExecuteUbergraph_SlidingLayerAnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlidingLayerAnimBP_C", "ExecuteUbergraph_SlidingLayerAnimBP");

	Params::USlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


