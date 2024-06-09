#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MeltUI.MeltWidgetBase
// (None)

class UClass* UMeltWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeltWidgetBase");

	return Clss;
}


// MeltWidgetBase MeltUI.Default__MeltWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeltWidgetBase* UMeltWidgetBase::GetDefaultObj()
{
	static class UMeltWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeltWidgetBase*>(UMeltWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function MeltUI.MeltWidgetBase.MutatorReady
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAthenaMutator_Fill*     MutatorActor                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeltWidgetBase::MutatorReady(class AFortAthenaMutator_Fill* MutatorActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeltWidgetBase", "MutatorReady");

	Params::UMeltWidgetBase_MutatorReady_Params Parms{};

	Parms.MutatorActor = MutatorActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MeltUI.MeltWidgetBase.GetFillMutator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortAthenaMutator_Fill*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFortAthenaMutator_Fill* UMeltWidgetBase::GetFillMutator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeltWidgetBase", "GetFillMutator");

	Params::UMeltWidgetBase_GetFillMutator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeltUI.MeltWidgetBase.CacheAndGetSeaLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMeltWidgetBase::CacheAndGetSeaLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeltWidgetBase", "CacheAndGetSeaLevel");

	Params::UMeltWidgetBase_CacheAndGetSeaLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


