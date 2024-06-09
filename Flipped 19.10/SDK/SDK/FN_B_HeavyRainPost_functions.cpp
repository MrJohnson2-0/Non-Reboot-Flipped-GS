#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_HeavyRainPost.B_HeavyRainPost_C
// (Actor)

class UClass* AB_HeavyRainPost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_HeavyRainPost_C");

	return Clss;
}


// B_HeavyRainPost_C B_HeavyRainPost.Default__B_HeavyRainPost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_HeavyRainPost_C* AB_HeavyRainPost_C::GetDefaultObj()
{
	static class AB_HeavyRainPost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_HeavyRainPost_C*>(AB_HeavyRainPost_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_HeavyRainPost.B_HeavyRainPost_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void AB_HeavyRainPost_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_HeavyRainPost_C", "UserConstructionScript");

	Params::AB_HeavyRainPost_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_HeavyRainPost.B_HeavyRainPost_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_HeavyRainPost_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_HeavyRainPost_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_HeavyRainPost.B_HeavyRainPost_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_HeavyRainPost_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_HeavyRainPost_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_HeavyRainPost.B_HeavyRainPost_C.CE_Deactivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_HeavyRainPost_C::CE_Deactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_HeavyRainPost_C", "CE_Deactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_HeavyRainPost.B_HeavyRainPost_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_HeavyRainPost_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_HeavyRainPost_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_HeavyRainPost.B_HeavyRainPost_C.ExecuteUbergraph_B_HeavyRainPost
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_HeavyRainPost_C::ExecuteUbergraph_B_HeavyRainPost(int32 EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_HeavyRainPost_C", "ExecuteUbergraph_B_HeavyRainPost");

	Params::AB_HeavyRainPost_C_ExecuteUbergraph_B_HeavyRainPost_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


