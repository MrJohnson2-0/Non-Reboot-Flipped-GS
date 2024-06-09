#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioGameplay.AudioGameplayComponent
// (None)

class UClass* UAudioGameplayComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioGameplayComponent");

	return Clss;
}


// AudioGameplayComponent AudioGameplay.Default__AudioGameplayComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioGameplayComponent* UAudioGameplayComponent::GetDefaultObj()
{
	static class UAudioGameplayComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioGameplayComponent*>(UAudioGameplayComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioGameplay.AudioGameplayCondition
// (None)

class UClass* IAudioGameplayCondition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioGameplayCondition");

	return Clss;
}


// AudioGameplayCondition AudioGameplay.Default__AudioGameplayCondition
// (Public, ClassDefaultObject, ArchetypeObject)

class IAudioGameplayCondition* IAudioGameplayCondition::GetDefaultObj()
{
	static class IAudioGameplayCondition* Default = nullptr;

	if (!Default)
		Default = static_cast<IAudioGameplayCondition*>(IAudioGameplayCondition::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioGameplay.AudioGameplayCondition.ConditionMet_Position
// (RequiredAPI, Native, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     Position                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IAudioGameplayCondition::ConditionMet_Position(struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioGameplayCondition", "ConditionMet_Position");

	Params::IAudioGameplayCondition_ConditionMet_Position_Params Parms{};

	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioGameplay.AudioGameplayCondition.ConditionMet
// (RequiredAPI, Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IAudioGameplayCondition::ConditionMet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioGameplayCondition", "ConditionMet");

	Params::IAudioGameplayCondition_ConditionMet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AudioGameplay.AudioGameplayVolumeInteraction
// (None)

class UClass* IAudioGameplayVolumeInteraction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioGameplayVolumeInteraction");

	return Clss;
}


// AudioGameplayVolumeInteraction AudioGameplay.Default__AudioGameplayVolumeInteraction
// (Public, ClassDefaultObject, ArchetypeObject)

class IAudioGameplayVolumeInteraction* IAudioGameplayVolumeInteraction::GetDefaultObj()
{
	static class IAudioGameplayVolumeInteraction* Default = nullptr;

	if (!Default)
		Default = static_cast<IAudioGameplayVolumeInteraction*>(IAudioGameplayVolumeInteraction::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioGameplay.AudioGameplayVolumeInteraction.OnListenerExit
// (RequiredAPI, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IAudioGameplayVolumeInteraction::OnListenerExit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioGameplayVolumeInteraction", "OnListenerExit");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AudioGameplay.AudioGameplayVolumeInteraction.OnListenerEnter
// (RequiredAPI, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IAudioGameplayVolumeInteraction::OnListenerEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioGameplayVolumeInteraction", "OnListenerEnter");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


