#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class BlueCheeseUI.BlueCheeseWidgetBase
// (None)

class UClass* UBlueCheeseWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlueCheeseWidgetBase");

	return Clss;
}


// BlueCheeseWidgetBase BlueCheeseUI.Default__BlueCheeseWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlueCheeseWidgetBase* UBlueCheeseWidgetBase::GetDefaultObj()
{
	static class UBlueCheeseWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlueCheeseWidgetBase*>(UBlueCheeseWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function BlueCheeseUI.BlueCheeseWidgetBase.OnMutatorAvailable
// (Native, Protected, BlueprintCallable)
// Parameters:
// class AFortGameplayMutator*        MutatorActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlueCheeseWidgetBase::OnMutatorAvailable(class AFortGameplayMutator* MutatorActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueCheeseWidgetBase", "OnMutatorAvailable");

	Params::UBlueCheeseWidgetBase_OnMutatorAvailable_Params Parms{};

	Parms.MutatorActor = MutatorActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BlueCheeseUI.BlueCheeseWidgetBase.MutatorReady
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBlueCheeseWidgetBase::MutatorReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueCheeseWidgetBase", "MutatorReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BlueCheeseUI.BlueCheeseWidgetBase.GetBlueCheeseMutator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortAthenaMutator_BlueCheese*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFortAthenaMutator_BlueCheese* UBlueCheeseWidgetBase::GetBlueCheeseMutator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueCheeseWidgetBase", "GetBlueCheeseMutator");

	Params::UBlueCheeseWidgetBase_GetBlueCheeseMutator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


