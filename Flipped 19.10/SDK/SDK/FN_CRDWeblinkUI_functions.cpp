#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CRDWeblinkUI.WeblinkComponent
// (None)

class UClass* UWeblinkComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeblinkComponent");

	return Clss;
}


// WeblinkComponent CRDWeblinkUI.Default__WeblinkComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeblinkComponent* UWeblinkComponent::GetDefaultObj()
{
	static class UWeblinkComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeblinkComponent*>(UWeblinkComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CRDWeblinkUI.WeblinkComponent.DisplayConfirmation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWeblinkComponent::DisplayConfirmation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeblinkComponent", "DisplayConfirmation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


