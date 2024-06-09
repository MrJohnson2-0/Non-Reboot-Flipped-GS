#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass MovementModeLayerInterface.MovementModeLayerInterface_C
// (None)

class UClass* IMovementModeLayerInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovementModeLayerInterface_C");

	return Clss;
}


// MovementModeLayerInterface_C MovementModeLayerInterface.Default__MovementModeLayerInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IMovementModeLayerInterface_C* IMovementModeLayerInterface_C::GetDefaultObj()
{
	static class IMovementModeLayerInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovementModeLayerInterface_C*>(IMovementModeLayerInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_UpperBodyPose
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   UppperBodyPose_BasePose                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   UpperBodyPose_AdditiveIdentityPose                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_UpperBodyPose                                       (Parm, OutParm, NoDestructor)

void IMovementModeLayerInterface_C::MovementMode_UpperBodyPose(const struct FPoseLink& UppperBodyPose_BasePose, const struct FPoseLink& UpperBodyPose_AdditiveIdentityPose, struct FPoseLink* MovementMode_UpperBodyPose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementModeLayerInterface_C", "MovementMode_UpperBodyPose");

	Params::IMovementModeLayerInterface_C_MovementMode_UpperBodyPose_Params Parms{};

	Parms.UppperBodyPose_BasePose = UppperBodyPose_BasePose;
	Parms.UpperBodyPose_AdditiveIdentityPose = UpperBodyPose_AdditiveIdentityPose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_UpperBodyPose != nullptr)
		*MovementMode_UpperBodyPose = std::move(Parms.MovementMode_UpperBodyPose);

}


// Function MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_LocomotionUpperBodyAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose_0                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   IdleAdditive_CachedPose                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_LocomotionUpperBodyAdditive                         (Parm, OutParm, NoDestructor)

void IMovementModeLayerInterface_C::MovementMode_LocomotionUpperBodyAdditive(const struct FPoseLink& InPose_0, const struct FPoseLink& IdleAdditive_CachedPose, struct FPoseLink* MovementMode_LocomotionUpperBodyAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementModeLayerInterface_C", "MovementMode_LocomotionUpperBodyAdditive");

	Params::IMovementModeLayerInterface_C_MovementMode_LocomotionUpperBodyAdditive_Params Parms{};

	Parms.InPose_0 = InPose_0;
	Parms.IdleAdditive_CachedPose = IdleAdditive_CachedPose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_LocomotionUpperBodyAdditive != nullptr)
		*MovementMode_LocomotionUpperBodyAdditive = std::move(Parms.MovementMode_LocomotionUpperBodyAdditive);

}


// Function MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_LowerBodyOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementMode_LowerBodyOverride                                   (Parm, OutParm, NoDestructor)

void IMovementModeLayerInterface_C::MovementMode_LowerBodyOverride(const struct FPoseLink& InPose, struct FPoseLink* MovementMode_LowerBodyOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovementModeLayerInterface_C", "MovementMode_LowerBodyOverride");

	Params::IMovementModeLayerInterface_C_MovementMode_LowerBodyOverride_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_LowerBodyOverride != nullptr)
		*MovementMode_LowerBodyOverride = std::move(Parms.MovementMode_LowerBodyOverride);

}

}


