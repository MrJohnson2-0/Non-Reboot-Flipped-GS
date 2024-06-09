#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SpecialEventGameplayUI.FortGameplayCinematicHostWidget
// (None)

class UClass* UFortGameplayCinematicHostWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayCinematicHostWidget");

	return Clss;
}


// FortGameplayCinematicHostWidget SpecialEventGameplayUI.Default__FortGameplayCinematicHostWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayCinematicHostWidget* UFortGameplayCinematicHostWidget::GetDefaultObj()
{
	static class UFortGameplayCinematicHostWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayCinematicHostWidget*>(UFortGameplayCinematicHostWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class SpecialEventGameplayUI.FortGameplayCinematicWidget
// (None)

class UClass* UFortGameplayCinematicWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayCinematicWidget");

	return Clss;
}


// FortGameplayCinematicWidget SpecialEventGameplayUI.Default__FortGameplayCinematicWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayCinematicWidget* UFortGameplayCinematicWidget::GetDefaultObj()
{
	static class UFortGameplayCinematicWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayCinematicWidget*>(UFortGameplayCinematicWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayUI.FortGameplayCinematicWidget.OnStartCinematic
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGameplayCinematicWidget::OnStartCinematic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayCinematicWidget", "OnStartCinematic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpecialEventGameplayUI.FortGameplayCinematicWidget.OnCinematicFinished
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortGameplayCinematicWidget::OnCinematicFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayCinematicWidget", "OnCinematicFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayUI.FortGameplayIntroPanelWidget
// (None)

class UClass* UFortGameplayIntroPanelWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayIntroPanelWidget");

	return Clss;
}


// FortGameplayIntroPanelWidget SpecialEventGameplayUI.Default__FortGameplayIntroPanelWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayIntroPanelWidget* UFortGameplayIntroPanelWidget::GetDefaultObj()
{
	static class UFortGameplayIntroPanelWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayIntroPanelWidget*>(UFortGameplayIntroPanelWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForReadyForGameplay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGameplayIntroPanelWidget::OnWaitingForReadyForGameplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayIntroPanelWidget", "OnWaitingForReadyForGameplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForPawn
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGameplayIntroPanelWidget::OnWaitingForPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayIntroPanelWidget", "OnWaitingForPawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForMinTime
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGameplayIntroPanelWidget::OnWaitingForMinTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayIntroPanelWidget", "OnWaitingForMinTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnStartIntro
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGameplayIntroPanelWidget::OnStartIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayIntroPanelWidget", "OnStartIntro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnIntroFinished
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortGameplayIntroPanelWidget::OnIntroFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayIntroPanelWidget", "OnIntroFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


