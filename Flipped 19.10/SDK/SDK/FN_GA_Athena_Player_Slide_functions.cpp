#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_Player_Slide.GA_Athena_Player_Slide_C
// (None)

class UClass* UGA_Athena_Player_Slide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_Player_Slide_C");

	return Clss;
}


// GA_Athena_Player_Slide_C GA_Athena_Player_Slide.Default__GA_Athena_Player_Slide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_Player_Slide_C* UGA_Athena_Player_Slide_C::GetDefaultObj()
{
	static class UGA_Athena_Player_Slide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_Player_Slide_C*>(UGA_Athena_Player_Slide_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Player_Slide_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Player_Slide_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Athena_Player_Slide_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Player_Slide_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Player_Slide_C", "K2_OnEndAbility");

	Params::UGA_Athena_Player_Slide_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.AddMomentum
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Player_Slide_C::AddMomentum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Player_Slide_C", "AddMomentum");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.EndLevelGroundSlide
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Player_Slide_C::EndLevelGroundSlide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Player_Slide_C", "EndLevelGroundSlide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.CameraFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Player_Slide_C::CameraFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Player_Slide_C", "CameraFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.OnFinishedCharacterCustomization_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Player_Slide_C::OnFinishedCharacterCustomization_Event_0(class AFortPlayerPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Player_Slide_C", "OnFinishedCharacterCustomization_Event_0");

	Params::UGA_Athena_Player_Slide_C_OnFinishedCharacterCustomization_Event_0_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.ExecuteUbergraph_GA_Athena_Player_Slide
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLastUpdateVelocity_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMovementComp_CharacterAthena*K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMovementComp_CharacterAthena*K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena_1       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMovementComp_CharacterAthena*K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena_2       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_1                               (NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier*             CallFunc_AddCameraModifierForOwningPlayerController_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_Athena_Sliding_C*K2Node_DynamicCast_AsCamera_Modifier_Athena_Sliding              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_6                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_2                               (NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_7                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraShakeBase*            CallFunc_StartCameraShake_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_8                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Athena_Generic_C*K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_9                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Athena_Generic_C*K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_10                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_CustomEvent_Pawn                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_11                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Player_Slide_C::ExecuteUbergraph_GA_Athena_Player_Slide(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool K2Node_Event_bWasCancelled, bool CallFunc_Greater_FloatFloat_ReturnValue, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_1, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class UFortMovementComp_CharacterAthena* K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_3, class UFortMovementComp_CharacterAthena* K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena_1, bool K2Node_DynamicCast_bSuccess_1, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_4, class UFortMovementComp_CharacterAthena* K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena_2, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetValueAtLevel_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_2, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UCameraModifier* CallFunc_AddCameraModifierForOwningPlayerController_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class UCameraModifier_Athena_Sliding_C* K2Node_DynamicCast_AsCamera_Modifier_Athena_Sliding, bool K2Node_DynamicCast_bSuccess_3, const struct FGameplayEventData& K2Node_Event_EventData, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_6, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_2, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_7, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, class UCameraShakeBase* CallFunc_StartCameraShake_ReturnValue, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_8, class APlayerPawn_Athena_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsServer_ReturnValue_2, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_9, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class APlayerPawn_Athena_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic_1, bool K2Node_DynamicCast_bSuccess_5, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_5, class AFortPlayerPawn* K2Node_CustomEvent_Pawn, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_6, bool Temp_bool_Has_Been_Initd_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Player_Slide_C", "ExecuteUbergraph_GA_Athena_Player_Slide");

	Params::UGA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetLastUpdateVelocity_ReturnValue = CallFunc_GetLastUpdateVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_1 = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_1;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_2 = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena = K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_3 = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena_1 = K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_4 = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena_2 = K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue_1 = CallFunc_K2_SetTimer_ReturnValue_1;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_5 = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_AddCameraModifierForOwningPlayerController_ReturnValue = CallFunc_AddCameraModifierForOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Athena_Sliding = K2Node_DynamicCast_AsCamera_Modifier_Athena_Sliding;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_6 = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_6;
	Parms.CallFunc_K2_SetTimer_ReturnValue_2 = CallFunc_K2_SetTimer_ReturnValue_2;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_7 = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_7;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1 = CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1;
	Parms.CallFunc_StartCameraShake_ReturnValue = CallFunc_StartCameraShake_ReturnValue;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_8 = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic = K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_9 = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_9;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic_1 = K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_10 = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CustomEvent_Pawn = K2Node_CustomEvent_Pawn;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_11 = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_11;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}


