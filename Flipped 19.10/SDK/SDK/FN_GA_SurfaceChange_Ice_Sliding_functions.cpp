#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SurfaceChange_Ice_Sliding.GA_SurfaceChange_Ice_Sliding_C
// (None)

class UClass* UGA_SurfaceChange_Ice_Sliding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SurfaceChange_Ice_Sliding_C");

	return Clss;
}


// GA_SurfaceChange_Ice_Sliding_C GA_SurfaceChange_Ice_Sliding.Default__GA_SurfaceChange_Ice_Sliding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SurfaceChange_Ice_Sliding_C* UGA_SurfaceChange_Ice_Sliding_C::GetDefaultObj()
{
	static class UGA_SurfaceChange_Ice_Sliding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SurfaceChange_Ice_Sliding_C*>(UGA_SurfaceChange_Ice_Sliding_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_SurfaceChange_Ice_Sliding.GA_SurfaceChange_Ice_Sliding_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_SurfaceChange_Ice_Sliding_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SurfaceChange_Ice_Sliding_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SurfaceChange_Ice_Sliding.GA_SurfaceChange_Ice_Sliding_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SurfaceChange_Ice_Sliding_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SurfaceChange_Ice_Sliding_C", "K2_OnEndAbility");

	Params::UGA_SurfaceChange_Ice_Sliding_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_SurfaceChange_Ice_Sliding.GA_SurfaceChange_Ice_Sliding_C.ExecuteUbergraph_GA_SurfaceChange_Ice_Sliding
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMovementComp_CharacterAthena*K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SurfaceChange_Ice_Sliding_C::ExecuteUbergraph_GA_SurfaceChange_Ice_Sliding(int32 EntryPoint, bool K2Node_Event_bWasCancelled, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue, class UFortMovementComp_CharacterAthena* K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SurfaceChange_Ice_Sliding_C", "ExecuteUbergraph_GA_SurfaceChange_Ice_Sliding");

	Params::UGA_SurfaceChange_Ice_Sliding_C_ExecuteUbergraph_GA_SurfaceChange_Ice_Sliding_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena = K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


