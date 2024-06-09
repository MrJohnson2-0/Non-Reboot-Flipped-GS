#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tiered_Safe_Athena_NonPhysics.Tiered_Safe_Athena_NonPhysics_C
// (Actor)

class UClass* ATiered_Safe_Athena_NonPhysics_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tiered_Safe_Athena_NonPhysics_C");

	return Clss;
}


// Tiered_Safe_Athena_NonPhysics_C Tiered_Safe_Athena_NonPhysics.Default__Tiered_Safe_Athena_NonPhysics_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATiered_Safe_Athena_NonPhysics_C* ATiered_Safe_Athena_NonPhysics_C::GetDefaultObj()
{
	static class ATiered_Safe_Athena_NonPhysics_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATiered_Safe_Athena_NonPhysics_C*>(ATiered_Safe_Athena_NonPhysics_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Tiered_Safe_Athena_NonPhysics.Tiered_Safe_Athena_NonPhysics_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ATiered_Safe_Athena_NonPhysics_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tiered_Safe_Athena_NonPhysics_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tiered_Safe_Athena_NonPhysics.Tiered_Safe_Athena_NonPhysics_C.ExecuteUbergraph_Tiered_Safe_Athena_NonPhysics
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATiered_Safe_Athena_NonPhysics_C::ExecuteUbergraph_Tiered_Safe_Athena_NonPhysics(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tiered_Safe_Athena_NonPhysics_C", "ExecuteUbergraph_Tiered_Safe_Athena_NonPhysics");

	Params::ATiered_Safe_Athena_NonPhysics_C_ExecuteUbergraph_Tiered_Safe_Athena_NonPhysics_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


