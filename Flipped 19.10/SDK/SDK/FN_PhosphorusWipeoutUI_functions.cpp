#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PhosphorusWipeoutUI.PhosphorusKnockBackWidget
// (None)

class UClass* UPhosphorusKnockBackWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhosphorusKnockBackWidget");

	return Clss;
}


// PhosphorusKnockBackWidget PhosphorusWipeoutUI.Default__PhosphorusKnockBackWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UPhosphorusKnockBackWidget* UPhosphorusKnockBackWidget::GetDefaultObj()
{
	static class UPhosphorusKnockBackWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhosphorusKnockBackWidget*>(UPhosphorusKnockBackWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function PhosphorusWipeoutUI.PhosphorusKnockBackWidget.PhosphorusPhaseChangedEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortAthenaMutator_Phosphorus*Mutator                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPhosphorusPhase        Phase                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPhosphorusKnockBackWidget::PhosphorusPhaseChangedEvent(class AFortAthenaMutator_Phosphorus* Mutator, enum class EPhosphorusPhase Phase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhosphorusKnockBackWidget", "PhosphorusPhaseChangedEvent");

	Params::UPhosphorusKnockBackWidget_PhosphorusPhaseChangedEvent_Params Parms{};

	Parms.Mutator = Mutator;
	Parms.Phase = Phase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhosphorusWipeoutUI.PhosphorusKnockBackWidget.KnockBackFromAllPlayersReceivedEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FKnockbackMutatorData       KnockbackData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UPhosphorusKnockBackWidget::KnockBackFromAllPlayersReceivedEvent(struct FKnockbackMutatorData& KnockbackData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhosphorusKnockBackWidget", "KnockBackFromAllPlayersReceivedEvent");

	Params::UPhosphorusKnockBackWidget_KnockBackFromAllPlayersReceivedEvent_Params Parms{};

	Parms.KnockbackData = KnockbackData;

	UObject::ProcessEvent(Func, &Parms);

}

}


