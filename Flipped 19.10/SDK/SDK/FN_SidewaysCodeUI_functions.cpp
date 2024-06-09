#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SidewaysCodeUI.SidewaysWidgetBase
// (None)

class UClass* USidewaysWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SidewaysWidgetBase");

	return Clss;
}


// SidewaysWidgetBase SidewaysCodeUI.Default__SidewaysWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USidewaysWidgetBase* USidewaysWidgetBase::GetDefaultObj()
{
	static class USidewaysWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USidewaysWidgetBase*>(USidewaysWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SidewaysCodeUI.SidewaysWidgetBase.OnSidewaysStateChanged
// (Final, Native, Protected)
// Parameters:
// class USidewaysStateComponent*     SidewaysStateComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ASidewaysPlayspace*          NewPlayspace                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESidewaysState          OldState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESidewaysState          NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USidewaysWidgetBase::OnSidewaysStateChanged(class USidewaysStateComponent* SidewaysStateComponent, class ASidewaysPlayspace* NewPlayspace, enum class ESidewaysState OldState, enum class ESidewaysState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidewaysWidgetBase", "OnSidewaysStateChanged");

	Params::USidewaysWidgetBase_OnSidewaysStateChanged_Params Parms{};

	Parms.SidewaysStateComponent = SidewaysStateComponent;
	Parms.NewPlayspace = NewPlayspace;
	Parms.OldState = OldState;
	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SidewaysCodeUI.SidewaysWidgetBase.OnParamUpdated
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                UpdatedParam                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USidewaysWidgetBase::OnParamUpdated(struct FGameplayTag& UpdatedParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidewaysWidgetBase", "OnParamUpdated");

	Params::USidewaysWidgetBase_OnParamUpdated_Params Parms{};

	Parms.UpdatedParam = UpdatedParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidewaysCodeUI.SidewaysWidgetBase.OnExitSideways
// (Event, Protected, BlueprintEvent)
// Parameters:

void USidewaysWidgetBase::OnExitSideways()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidewaysWidgetBase", "OnExitSideways");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SidewaysCodeUI.SidewaysWidgetBase.OnEnterSideways
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ASidewaysPlayspace*          Playspace                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USidewaysWidgetBase::OnEnterSideways(class ASidewaysPlayspace* Playspace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidewaysWidgetBase", "OnEnterSideways");

	Params::USidewaysWidgetBase_OnEnterSideways_Params Parms{};

	Parms.Playspace = Playspace;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidewaysCodeUI.SidewaysWidgetBase.IsValidPlayspace
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class ASidewaysPlayspace*          Playspace                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USidewaysWidgetBase::IsValidPlayspace(class ASidewaysPlayspace* Playspace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidewaysWidgetBase", "IsValidPlayspace");

	Params::USidewaysWidgetBase_IsValidPlayspace_Params Parms{};

	Parms.Playspace = Playspace;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SidewaysCodeUI.SidewaysWidgetBase.InitializeVariables
// (Event, Protected, BlueprintEvent)
// Parameters:

void USidewaysWidgetBase::InitializeVariables()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidewaysWidgetBase", "InitializeVariables");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SidewaysCodeUI.SidewaysWidgetBase.HandleFortPawnChanged
// (Final, Native, Protected)
// Parameters:
// class AFortPawn*                   PossessedPawn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USidewaysWidgetBase::HandleFortPawnChanged(class AFortPawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidewaysWidgetBase", "HandleFortPawnChanged");

	Params::USidewaysWidgetBase_HandleFortPawnChanged_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SidewaysCodeUI.SidewaysWidgetBase.ConfigureUIFromPlayspace
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ASidewaysPlayspace*          Playspace                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USidewaysWidgetBase::ConfigureUIFromPlayspace(class ASidewaysPlayspace* Playspace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidewaysWidgetBase", "ConfigureUIFromPlayspace");

	Params::USidewaysWidgetBase_ConfigureUIFromPlayspace_Params Parms{};

	Parms.Playspace = Playspace;

	UObject::ProcessEvent(Func, &Parms);

}

}


