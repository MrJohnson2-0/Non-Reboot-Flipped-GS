#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PhosphorusUI.PhosphorusWidgetBase
// (None)

class UClass* UPhosphorusWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhosphorusWidgetBase");

	return Clss;
}


// PhosphorusWidgetBase PhosphorusUI.Default__PhosphorusWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UPhosphorusWidgetBase* UPhosphorusWidgetBase::GetDefaultObj()
{
	static class UPhosphorusWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhosphorusWidgetBase*>(UPhosphorusWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function PhosphorusUI.PhosphorusWidgetBase.SetAvatarImageFromPlayerState
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class AFortPlayerStateAthena*      PlayerState                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortLazyImage*              AvatarImage                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPhosphorusWidgetBase::SetAvatarImageFromPlayerState(class AFortPlayerStateAthena* PlayerState, class UFortLazyImage* AvatarImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhosphorusWidgetBase", "SetAvatarImageFromPlayerState");

	Params::UPhosphorusWidgetBase_SetAvatarImageFromPlayerState_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.AvatarImage = AvatarImage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusUI.PhosphorusWidgetBase.OnMutatorAvailable
// (Native, Protected, BlueprintCallable)
// Parameters:
// class AFortGameplayMutator*        MutatorActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPhosphorusWidgetBase::OnMutatorAvailable(class AFortGameplayMutator* MutatorActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhosphorusWidgetBase", "OnMutatorAvailable");

	Params::UPhosphorusWidgetBase_OnMutatorAvailable_Params Parms{};

	Parms.MutatorActor = MutatorActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusUI.PhosphorusWidgetBase.MutatorReady
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhosphorusWidgetBase::MutatorReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhosphorusWidgetBase", "MutatorReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhosphorusUI.PhosphorusWidgetBase.GetPhosphorusMutator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortAthenaMutator_Phosphorus*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFortAthenaMutator_Phosphorus* UPhosphorusWidgetBase::GetPhosphorusMutator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhosphorusWidgetBase", "GetPhosphorusMutator");

	Params::UPhosphorusWidgetBase_GetPhosphorusMutator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PhosphorusUI.PhosphorusEndOfRoundWidget
// (None)

class UClass* UPhosphorusEndOfRoundWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhosphorusEndOfRoundWidget");

	return Clss;
}


// PhosphorusEndOfRoundWidget PhosphorusUI.Default__PhosphorusEndOfRoundWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UPhosphorusEndOfRoundWidget* UPhosphorusEndOfRoundWidget::GetDefaultObj()
{
	static class UPhosphorusEndOfRoundWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhosphorusEndOfRoundWidget*>(UPhosphorusEndOfRoundWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function PhosphorusUI.PhosphorusEndOfRoundWidget.SetWidgetVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bNewVisibility                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPhosphorusEndOfRoundWidget::SetWidgetVisibility(bool bNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhosphorusEndOfRoundWidget", "SetWidgetVisibility");

	Params::UPhosphorusEndOfRoundWidget_SetWidgetVisibility_Params Parms{};

	Parms.bNewVisibility = bNewVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhosphorusUI.PhosphorusEndOfRoundWidget.OnPhosphorusPhaseChanged
// (Final, Native, Protected)
// Parameters:
// class AFortAthenaMutator_Phosphorus*PhosphorusMutator                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPhosphorusPhase        NewPhase                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPhosphorusEndOfRoundWidget::OnPhosphorusPhaseChanged(class AFortAthenaMutator_Phosphorus* PhosphorusMutator, enum class EPhosphorusPhase NewPhase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhosphorusEndOfRoundWidget", "OnPhosphorusPhaseChanged");

	Params::UPhosphorusEndOfRoundWidget_OnPhosphorusPhaseChanged_Params Parms{};

	Parms.PhosphorusMutator = PhosphorusMutator;
	Parms.NewPhase = NewPhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusUI.PhosphorusEndOfRoundWidget.OnNewRoundStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPhosphorusEndOfRoundWidget::OnNewRoundStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhosphorusEndOfRoundWidget", "OnNewRoundStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhosphorusUI.PhosphorusEndOfRoundWidget.FadeOutScreen
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UPhosphorusEndOfRoundWidget::FadeOutScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhosphorusEndOfRoundWidget", "FadeOutScreen");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class PhosphorusUI.PhosphorusHUDWidget
// (None)

class UClass* UPhosphorusHUDWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhosphorusHUDWidget");

	return Clss;
}


// PhosphorusHUDWidget PhosphorusUI.Default__PhosphorusHUDWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UPhosphorusHUDWidget* UPhosphorusHUDWidget::GetDefaultObj()
{
	static class UPhosphorusHUDWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhosphorusHUDWidget*>(UPhosphorusHUDWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function PhosphorusUI.PhosphorusHUDWidget.OnPhosphorusPlayerEliminated_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      PlayerEliminated                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPhosphorusHUDWidget::OnPhosphorusPlayerEliminated_BP(class AFortPlayerStateAthena* PlayerEliminated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhosphorusHUDWidget", "OnPhosphorusPlayerEliminated_BP");

	Params::UPhosphorusHUDWidget_OnPhosphorusPlayerEliminated_BP_Params Parms{};

	Parms.PlayerEliminated = PlayerEliminated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhosphorusUI.PhosphorusHUDWidget.OnPhosphorusLocalSquadWiped_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPhosphorusHUDWidget::OnPhosphorusLocalSquadWiped_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhosphorusHUDWidget", "OnPhosphorusLocalSquadWiped_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhosphorusUI.PhosphorusHUDWidget.OnPhosphorusEnemySquadWiped_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPhosphorusHUDWidget::OnPhosphorusEnemySquadWiped_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhosphorusHUDWidget", "OnPhosphorusEnemySquadWiped_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Class PhosphorusUI.PhosphorusSquadWipedWidget
// (None)

class UClass* UPhosphorusSquadWipedWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhosphorusSquadWipedWidget");

	return Clss;
}


// PhosphorusSquadWipedWidget PhosphorusUI.Default__PhosphorusSquadWipedWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UPhosphorusSquadWipedWidget* UPhosphorusSquadWipedWidget::GetDefaultObj()
{
	static class UPhosphorusSquadWipedWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhosphorusSquadWipedWidget*>(UPhosphorusSquadWipedWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function PhosphorusUI.PhosphorusSquadWipedWidget.OnLocalPlayerSquadWiped
// (Final, Native, Protected)
// Parameters:

void UPhosphorusSquadWipedWidget::OnLocalPlayerSquadWiped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhosphorusSquadWipedWidget", "OnLocalPlayerSquadWiped");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusUI.PhosphorusSquadWipedWidget.HandleSquadWipedVisibilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bNewVisibility                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPhosphorusSquadWipedWidget::HandleSquadWipedVisibilityChanged(bool bNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhosphorusSquadWipedWidget", "HandleSquadWipedVisibilityChanged");

	Params::UPhosphorusSquadWipedWidget_HandleSquadWipedVisibilityChanged_Params Parms{};

	Parms.bNewVisibility = bNewVisibility;

	UObject::ProcessEvent(Func, &Parms);

}

}


