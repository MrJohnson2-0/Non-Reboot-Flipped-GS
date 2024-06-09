#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tiered_Safe_Athena_Physics.Tiered_Safe_Athena_Physics_C
// (Actor)

class UClass* ATiered_Safe_Athena_Physics_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tiered_Safe_Athena_Physics_C");

	return Clss;
}


// Tiered_Safe_Athena_Physics_C Tiered_Safe_Athena_Physics.Default__Tiered_Safe_Athena_Physics_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATiered_Safe_Athena_Physics_C* ATiered_Safe_Athena_Physics_C::GetDefaultObj()
{
	static class ATiered_Safe_Athena_Physics_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATiered_Safe_Athena_Physics_C*>(ATiered_Safe_Athena_Physics_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Tiered_Safe_Athena_Physics.Tiered_Safe_Athena_Physics_C.OnSetSearched
// (Event, Public, BlueprintEvent)
// Parameters:

void ATiered_Safe_Athena_Physics_C::OnSetSearched()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tiered_Safe_Athena_Physics_C", "OnSetSearched");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tiered_Safe_Athena_Physics.Tiered_Safe_Athena_Physics_C.ExecuteUbergraph_Tiered_Safe_Athena_Physics
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATiered_Safe_Athena_Physics_C::ExecuteUbergraph_Tiered_Safe_Athena_Physics(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tiered_Safe_Athena_Physics_C", "ExecuteUbergraph_Tiered_Safe_Athena_Physics");

	Params::ATiered_Safe_Athena_Physics_C_ExecuteUbergraph_Tiered_Safe_Athena_Physics_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


