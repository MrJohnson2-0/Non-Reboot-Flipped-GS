#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_Player_PreSlideFeedback.GA_Athena_Player_PreSlideFeedback_C
// (None)

class UClass* UGA_Athena_Player_PreSlideFeedback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_Player_PreSlideFeedback_C");

	return Clss;
}


// GA_Athena_Player_PreSlideFeedback_C GA_Athena_Player_PreSlideFeedback.Default__GA_Athena_Player_PreSlideFeedback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_Player_PreSlideFeedback_C* UGA_Athena_Player_PreSlideFeedback_C::GetDefaultObj()
{
	static class UGA_Athena_Player_PreSlideFeedback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_Player_PreSlideFeedback_C*>(UGA_Athena_Player_PreSlideFeedback_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_Player_PreSlideFeedback.GA_Athena_Player_PreSlideFeedback_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_Player_PreSlideFeedback_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Player_PreSlideFeedback_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Player_PreSlideFeedback.GA_Athena_Player_PreSlideFeedback_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Player_PreSlideFeedback_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Player_PreSlideFeedback_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Player_PreSlideFeedback.GA_Athena_Player_PreSlideFeedback_C.ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLastUpdateVelocity_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraShakeBase*            CallFunc_StartCameraShake_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Player_PreSlideFeedback_C::ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UCameraShakeBase* CallFunc_StartCameraShake_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Player_PreSlideFeedback_C", "ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback");

	Params::UGA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLastUpdateVelocity_ReturnValue = CallFunc_GetLastUpdateVelocity_ReturnValue;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_StartCameraShake_ReturnValue = CallFunc_StartCameraShake_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


