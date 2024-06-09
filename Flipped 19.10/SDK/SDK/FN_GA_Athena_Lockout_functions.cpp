#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_Lockout.GA_Athena_Lockout_C
// (None)

class UClass* UGA_Athena_Lockout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_Lockout_C");

	return Clss;
}


// GA_Athena_Lockout_C GA_Athena_Lockout.Default__GA_Athena_Lockout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_Lockout_C* UGA_Athena_Lockout_C::GetDefaultObj()
{
	static class UGA_Athena_Lockout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_Lockout_C*>(UGA_Athena_Lockout_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_Lockout.GA_Athena_Lockout_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Lockout_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Lockout_C", "K2_OnEndAbility");

	Params::UGA_Athena_Lockout_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Lockout.GA_Athena_Lockout_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_Lockout_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Lockout_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Lockout.GA_Athena_Lockout_C.Failsafe
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Lockout_C::Failsafe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Lockout_C", "Failsafe");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Lockout.GA_Athena_Lockout_C.ExecuteUbergraph_GA_Athena_Lockout
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortGetPlayerPawnExecutionsCallFunc_GetAvatarAsValidFortPlayerPawn_OutExec                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortGetPlayerPawnExecutionsCallFunc_GetAvatarAsValidFortPlayerPawn_OutExec_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Lockout_C::ExecuteUbergraph_GA_Athena_Lockout(int32 EntryPoint, enum class EFortGetPlayerPawnExecutions CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec, class AFortPlayerPawn* CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortGetPlayerPawnExecutions CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec_1, class AFortPlayerPawn* CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn_1, bool K2Node_Event_bWasCancelled, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Lockout_C", "ExecuteUbergraph_GA_Athena_Lockout");

	Params::UGA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec = CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec;
	Parms.CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn = CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec_1 = CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec_1;
	Parms.CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn_1 = CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn_1;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


