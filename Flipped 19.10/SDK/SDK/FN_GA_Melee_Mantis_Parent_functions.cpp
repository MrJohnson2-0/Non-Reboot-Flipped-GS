#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C
// (None)

class UClass* UGA_Melee_Mantis_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Melee_Mantis_Parent_C");

	return Clss;
}


// GA_Melee_Mantis_Parent_C GA_Melee_Mantis_Parent.Default__GA_Melee_Mantis_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Melee_Mantis_Parent_C* UGA_Melee_Mantis_Parent_C::GetDefaultObj()
{
	static class UGA_Melee_Mantis_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Melee_Mantis_Parent_C*>(UGA_Melee_Mantis_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.Should Switch Targets
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              AllTarget                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor*                      CurrentTarget                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_Melee_Mantis_Parent_C::Should_Switch_Targets(TArray<class AActor*>& AllTarget, class AActor*& CurrentTarget, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Mantis_Parent_C", "Should Switch Targets");

	Params::UGA_Melee_Mantis_Parent_C_Should_Switch_Targets_Params Parms{};

	Parms.AllTarget = AllTarget;
	Parms.CurrentTarget = CurrentTarget;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.IsValidTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceBetweenActors_Distance                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_Melee_Mantis_Parent_C::IsValidTarget(class AActor* Actor, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDead_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, float CallFunc_GetDistanceBetweenActors_Distance, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Mantis_Parent_C", "IsValidTarget");

	Params::UGA_Melee_Mantis_Parent_C_IsValidTarget_Params Parms{};

	Parms.Actor = Actor;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetDistanceBetweenActors_Distance = CallFunc_GetDistanceBetweenActors_Distance;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.ConfigureRootMotionWarping
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OutTargetActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOutAllowTranslationWarp                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOutAllowRotationWarp                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOutSnapshotTargetLocation                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidTarget_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UGA_Melee_Mantis_Parent_C::ConfigureRootMotionWarping(class AActor** OutTargetActor, bool* bOutAllowTranslationWarp, bool* bOutAllowRotationWarp, bool* bOutSnapshotTargetLocation, bool CallFunc_IsValidTarget_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Mantis_Parent_C", "ConfigureRootMotionWarping");

	Params::UGA_Melee_Mantis_Parent_C_ConfigureRootMotionWarping_Params Parms{};

	Parms.CallFunc_IsValidTarget_ReturnValue = CallFunc_IsValidTarget_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutTargetActor != nullptr)
		*OutTargetActor = Parms.OutTargetActor;

	if (bOutAllowTranslationWarp != nullptr)
		*bOutAllowTranslationWarp = Parms.bOutAllowTranslationWarp;

	if (bOutAllowRotationWarp != nullptr)
		*bOutAllowRotationWarp = Parms.bOutAllowRotationWarp;

	if (bOutSnapshotTargetLocation != nullptr)
		*bOutSnapshotTargetLocation = Parms.bOutSnapshotTargetLocation;

}


// Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.InitAbility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             Output_Get                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue_4          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Melee_Mantis_Parent_C::InitAbility(class AFortPlayerPawn** Output_Get, bool CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue, bool CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue_1, bool CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue_2, bool CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue_3, bool CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue_4, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Mantis_Parent_C", "InitAbility");

	Params::UGA_Melee_Mantis_Parent_C_InitAbility_Params Parms{};

	Parms.CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue = CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue_1 = CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue_1;
	Parms.CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue_2 = CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue_2;
	Parms.CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue_3 = CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue_3;
	Parms.CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue_4 = CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue_4;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Output_Get != nullptr)
		*Output_Get = Parms.Output_Get;

}


// Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.SetPawnCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   Fort_Pawn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collision_On                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCollisionProfileName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Melee_Mantis_Parent_C::SetPawnCollision(class AFortPawn* Fort_Pawn, bool Collision_On, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_GetCollisionProfileName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Mantis_Parent_C", "SetPawnCollision");

	Params::UGA_Melee_Mantis_Parent_C_SetPawnCollision_Params Parms{};

	Parms.Fort_Pawn = Fort_Pawn;
	Parms.Collision_On = Collision_On;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCollisionProfileName_ReturnValue = CallFunc_GetCollisionProfileName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.SetKnockbackImmunity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ImmunityOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue              (None)
// struct FActiveGameplayEffectHandle CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue           (NoDestructor, HasGetValueTypeHash)

void UGA_Melee_Mantis_Parent_C::SetKnockbackImmunity(bool ImmunityOn, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Mantis_Parent_C", "SetKnockbackImmunity");

	Params::UGA_Melee_Mantis_Parent_C_SetKnockbackImmunity_Params Parms{};

	Parms.ImmunityOn = ImmunityOn;
	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	Parms.CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue = CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.Added_9D0C0593477CDD4D8DCFB8ABA9C68A6D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Melee_Mantis_Parent_C::Added_9D0C0593477CDD4D8DCFB8ABA9C68A6D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Mantis_Parent_C", "Added_9D0C0593477CDD4D8DCFB8ABA9C68A6D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.Targeted_A97B41C34D59B42DF83C0EAAB120D871
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTargetingRequestHandle     TargetingHandle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UGA_Melee_Mantis_Parent_C::Targeted_A97B41C34D59B42DF83C0EAAB120D871(const struct FTargetingRequestHandle& TargetingHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Mantis_Parent_C", "Targeted_A97B41C34D59B42DF83C0EAAB120D871");

	Params::UGA_Melee_Mantis_Parent_C_Targeted_A97B41C34D59B42DF83C0EAAB120D871_Params Parms{};

	Parms.TargetingHandle = TargetingHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Melee_Mantis_Parent_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Mantis_Parent_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.BP_OnMantisTechniqueHit
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetDataHandle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Melee_Mantis_Parent_C::BP_OnMantisTechniqueHit(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Mantis_Parent_C", "BP_OnMantisTechniqueHit");

	Params::UGA_Melee_Mantis_Parent_C_BP_OnMantisTechniqueHit_Params Parms{};

	Parms.TargetDataHandle = TargetDataHandle;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Melee_Mantis_Parent_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Mantis_Parent_C", "K2_OnEndAbility");

	Params::UGA_Melee_Mantis_Parent_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.GetAimAssistTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Melee_Mantis_Parent_C::GetAimAssistTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Mantis_Parent_C", "GetAimAssistTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C.ExecuteUbergraph_GA_Melee_Mantis_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTargetingRequestHandle     K2Node_CustomEvent_TargetingHandle                               (NoDestructor)
// struct FTargetingRequestHandle     Temp_struct_Variable                                             (NoDestructor)
// TArray<class AActor*>              CallFunc_GetTargetingResultsActors_Targets                       (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidTarget_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_Event_TargetDataHandle                                    (ConstParm)
// struct FGameplayTag                K2Node_Event_ApplicationTag                                      (NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 CallFunc_GetCurrentSourceWeapon_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AB_Mantis_Weapon_Parent_C*   K2Node_DynamicCast_AsB_Mantis_Weapon_Parent                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 CallFunc_GetCurrentSourceWeapon_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_Mantis_Weapon_Parent_C*   K2Node_DynamicCast_AsB_Mantis_Weapon_Parent_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_InitAbility_Output_Get                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_ApplyGameplayEffectContainer_ReturnValue                (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Should_Switch_Targets_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncAction_PerformTargeting*CallFunc_PerformTargetingRequest_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Melee_Mantis_Parent_C::ExecuteUbergraph_GA_Melee_Mantis_Parent(int32 EntryPoint, const struct FTargetingRequestHandle& K2Node_CustomEvent_TargetingHandle, const struct FTargetingRequestHandle& Temp_struct_Variable, TArray<class AActor*>& CallFunc_GetTargetingResultsActors_Targets, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValidTarget_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_Event_TargetDataHandle, const struct FGameplayTag& K2Node_Event_ApplicationTag, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AB_Mantis_Weapon_Parent_C* K2Node_DynamicCast_AsB_Mantis_Weapon_Parent, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bWasCancelled, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue_1, class AB_Mantis_Weapon_Parent_C* K2Node_DynamicCast_AsB_Mantis_Weapon_Parent_1, bool K2Node_DynamicCast_bSuccess_1, class AFortPlayerPawn* CallFunc_InitAbility_Output_Get, int32 CallFunc_FTrunc_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue, bool CallFunc_Should_Switch_Targets_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UAsyncAction_PerformTargeting* CallFunc_PerformTargetingRequest_ReturnValue, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Mantis_Parent_C", "ExecuteUbergraph_GA_Melee_Mantis_Parent");

	Params::UGA_Melee_Mantis_Parent_C_ExecuteUbergraph_GA_Melee_Mantis_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_TargetingHandle = K2Node_CustomEvent_TargetingHandle;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetTargetingResultsActors_Targets = CallFunc_GetTargetingResultsActors_Targets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValidTarget_ReturnValue = CallFunc_IsValidTarget_ReturnValue;
	Parms.K2Node_Event_TargetDataHandle = K2Node_Event_TargetDataHandle;
	Parms.K2Node_Event_ApplicationTag = K2Node_Event_ApplicationTag;
	Parms.CallFunc_GetCurrentSourceWeapon_ReturnValue = CallFunc_GetCurrentSourceWeapon_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsB_Mantis_Weapon_Parent = K2Node_DynamicCast_AsB_Mantis_Weapon_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetCurrentSourceWeapon_ReturnValue_1 = CallFunc_GetCurrentSourceWeapon_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsB_Mantis_Weapon_Parent_1 = K2Node_DynamicCast_AsB_Mantis_Weapon_Parent_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_InitAbility_Output_Get = CallFunc_InitAbility_Output_Get;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_ApplyGameplayEffectContainer_ReturnValue = CallFunc_ApplyGameplayEffectContainer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue;
	Parms.CallFunc_Should_Switch_Targets_ReturnValue = CallFunc_Should_Switch_Targets_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue = CallFunc_WaitGameplayTagAdd_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_PerformTargetingRequest_ReturnValue = CallFunc_PerformTargetingRequest_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


