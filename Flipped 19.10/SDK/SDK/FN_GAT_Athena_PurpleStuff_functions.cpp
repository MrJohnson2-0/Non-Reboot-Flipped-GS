#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAT_Athena_PurpleStuff.GAT_Athena_PurpleStuff_C
// (None)

class UClass* UGAT_Athena_PurpleStuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAT_Athena_PurpleStuff_C");

	return Clss;
}


// GAT_Athena_PurpleStuff_C GAT_Athena_PurpleStuff.Default__GAT_Athena_PurpleStuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAT_Athena_PurpleStuff_C* UGAT_Athena_PurpleStuff_C::GetDefaultObj()
{
	static class UGAT_Athena_PurpleStuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAT_Athena_PurpleStuff_C*>(UGAT_Athena_PurpleStuff_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAT_Athena_PurpleStuff.GAT_Athena_PurpleStuff_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAT_Athena_PurpleStuff_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAT_Athena_PurpleStuff_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GAT_Athena_PurpleStuff.GAT_Athena_PurpleStuff_C.ExecuteUbergraph_GAT_Athena_PurpleStuff
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromActor_ReturnValue                  (None)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (ReferenceParm)

void UGAT_Athena_PurpleStuff_C::ExecuteUbergraph_GAT_Athena_PurpleStuff(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAT_Athena_PurpleStuff_C", "ExecuteUbergraph_GAT_Athena_PurpleStuff");

	Params::UGAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = CallFunc_AbilityTargetDataFromActor_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


