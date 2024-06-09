#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RebirthUI.RebirthLimitedLivesWidgetBase
// (None)

class UClass* URebirthLimitedLivesWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RebirthLimitedLivesWidgetBase");

	return Clss;
}


// RebirthLimitedLivesWidgetBase RebirthUI.Default__RebirthLimitedLivesWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class URebirthLimitedLivesWidgetBase* URebirthLimitedLivesWidgetBase::GetDefaultObj()
{
	static class URebirthLimitedLivesWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<URebirthLimitedLivesWidgetBase*>(URebirthLimitedLivesWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function RebirthUI.RebirthLimitedLivesWidgetBase.UpdateWidgetRarity
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPlayAnimations                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URebirthLimitedLivesWidgetBase::UpdateWidgetRarity(bool bPlayAnimations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RebirthLimitedLivesWidgetBase", "UpdateWidgetRarity");

	Params::URebirthLimitedLivesWidgetBase_UpdateWidgetRarity_Params Parms{};

	Parms.bPlayAnimations = bPlayAnimations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RebirthUI.RebirthLimitedLivesWidgetBase.HandlePlayerRaritiesUpdated
// (Final, Native, Protected)
// Parameters:

void URebirthLimitedLivesWidgetBase::HandlePlayerRaritiesUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RebirthLimitedLivesWidgetBase", "HandlePlayerRaritiesUpdated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function RebirthUI.RebirthLimitedLivesWidgetBase.HandlePawnChanged
// (Final, Native, Protected)
// Parameters:

void URebirthLimitedLivesWidgetBase::HandlePawnChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RebirthLimitedLivesWidgetBase", "HandlePawnChanged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function RebirthUI.RebirthLimitedLivesWidgetBase.HandleLastLife
// (Event, Protected, BlueprintEvent)
// Parameters:

void URebirthLimitedLivesWidgetBase::HandleLastLife()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RebirthLimitedLivesWidgetBase", "HandleLastLife");



	UObject::ProcessEvent(Func, nullptr);

}

}


