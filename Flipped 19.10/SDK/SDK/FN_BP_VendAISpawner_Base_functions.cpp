#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VendAISpawner_Base.BP_VendAISpawner_Base_C
// (Actor)

class UClass* ABP_VendAISpawner_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VendAISpawner_Base_C");

	return Clss;
}


// BP_VendAISpawner_Base_C BP_VendAISpawner_Base.Default__BP_VendAISpawner_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_VendAISpawner_Base_C* ABP_VendAISpawner_Base_C::GetDefaultObj()
{
	static class ABP_VendAISpawner_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_VendAISpawner_Base_C*>(ABP_VendAISpawner_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VendAISpawner_Base.BP_VendAISpawner_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_VendAISpawner_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VendAISpawner_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VendAISpawner_Base.BP_VendAISpawner_Base_C.ExecuteUbergraph_BP_VendAISpawner_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class AFortGameStateAthena*        CallFunc_GetGameStateAthenaFromContext_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAthenaLivingWorldManager*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TrySpawnEvent_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VendAISpawner_Base_C::ExecuteUbergraph_BP_VendAISpawner_Base(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AFortGameStateAthena* CallFunc_GetGameStateAthenaFromContext_ReturnValue, class UFortAthenaLivingWorldManager* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_TrySpawnEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VendAISpawner_Base_C", "ExecuteUbergraph_BP_VendAISpawner_Base");

	Params::ABP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetGameStateAthenaFromContext_ReturnValue = CallFunc_GetGameStateAthenaFromContext_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_TrySpawnEvent_ReturnValue = CallFunc_TrySpawnEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


