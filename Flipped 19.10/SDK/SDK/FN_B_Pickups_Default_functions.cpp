#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Pickups_Default.B_Pickups_Default_C
// (Actor)

class UClass* AB_Pickups_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Pickups_Default_C");

	return Clss;
}


// B_Pickups_Default_C B_Pickups_Default.Default__B_Pickups_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Pickups_Default_C* AB_Pickups_Default_C::GetDefaultObj()
{
	static class AB_Pickups_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Pickups_Default_C*>(AB_Pickups_Default_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Pickups_Default.B_Pickups_Default_C.Set Initial BKGD Param
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    Mid                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Default_C::Set_Initial_BKGD_Param(class UMaterialInstanceDynamic* Mid, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Pickups_Default_C", "Set Initial BKGD Param");

	Params::AB_Pickups_Default_C_Set_Initial_BKGD_Param_Params Parms{};

	Parms.Mid = Mid;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Default.B_Pickups_Default_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Pickups_Default_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Pickups_Default_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Pickups_Default.B_Pickups_Default_C.OnTossed
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Pickups_Default_C::OnTossed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Pickups_Default_C", "OnTossed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Pickups_Default.B_Pickups_Default_C.OnPickedUp
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                   PickupTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Default_C::OnPickedUp(class AFortPawn* PickupTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Pickups_Default_C", "OnPickedUp");

	Params::AB_Pickups_Default_C_OnPickedUp_Params Parms{};

	Parms.PickupTarget = PickupTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Default.B_Pickups_Default_C.HideBackgroundAndSpotlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Pickups_Default_C::HideBackgroundAndSpotlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Pickups_Default_C", "HideBackgroundAndSpotlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Pickups_Default.B_Pickups_Default_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Pickups_Default_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Pickups_Default_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Pickups_Default.B_Pickups_Default_C.ExecuteUbergraph_B_Pickups_Default
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_Event_PickupTarget                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPickupRarityMID_bNeedsToBeInitialized                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetPickupRarityMID_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Default_C::ExecuteUbergraph_B_Pickups_Default(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AFortPawn* K2Node_Event_PickupTarget, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, bool CallFunc_GetPickupRarityMID_bNeedsToBeInitialized, class UMaterialInstanceDynamic* CallFunc_GetPickupRarityMID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Pickups_Default_C", "ExecuteUbergraph_B_Pickups_Default");

	Params::AB_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_PickupTarget = K2Node_Event_PickupTarget;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;
	Parms.CallFunc_GetPickupRarityMID_bNeedsToBeInitialized = CallFunc_GetPickupRarityMID_bNeedsToBeInitialized;
	Parms.CallFunc_GetPickupRarityMID_ReturnValue = CallFunc_GetPickupRarityMID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


