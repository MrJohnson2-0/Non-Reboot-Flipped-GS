#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MoleUI.FortMobileButtonBehaviorComponent_MoleRoleVisibility
// (None)

class UClass* UFortMobileButtonBehaviorComponent_MoleRoleVisibility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMobileButtonBehaviorComponent_MoleRoleVisibility");

	return Clss;
}


// FortMobileButtonBehaviorComponent_MoleRoleVisibility MoleUI.Default__FortMobileButtonBehaviorComponent_MoleRoleVisibility
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMobileButtonBehaviorComponent_MoleRoleVisibility* UFortMobileButtonBehaviorComponent_MoleRoleVisibility::GetDefaultObj()
{
	static class UFortMobileButtonBehaviorComponent_MoleRoleVisibility* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMobileButtonBehaviorComponent_MoleRoleVisibility*>(UFortMobileButtonBehaviorComponent_MoleRoleVisibility::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleUI.MoleActiveTaskContextBarHUDWidget
// (None)

class UClass* UMoleActiveTaskContextBarHUDWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleActiveTaskContextBarHUDWidget");

	return Clss;
}


// MoleActiveTaskContextBarHUDWidget MoleUI.Default__MoleActiveTaskContextBarHUDWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleActiveTaskContextBarHUDWidget* UMoleActiveTaskContextBarHUDWidget::GetDefaultObj()
{
	static class UMoleActiveTaskContextBarHUDWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleActiveTaskContextBarHUDWidget*>(UMoleActiveTaskContextBarHUDWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleUI.MoleAssignedTaskContainerWidget
// (None)

class UClass* UMoleAssignedTaskContainerWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleAssignedTaskContainerWidget");

	return Clss;
}


// MoleAssignedTaskContainerWidget MoleUI.Default__MoleAssignedTaskContainerWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleAssignedTaskContainerWidget* UMoleAssignedTaskContainerWidget::GetDefaultObj()
{
	static class UMoleAssignedTaskContainerWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleAssignedTaskContainerWidget*>(UMoleAssignedTaskContainerWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleAssignedTaskContainerWidget.OnActiveTasksChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bFrameDefer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleAssignedTaskContainerWidget::OnActiveTasksChanged(bool bFrameDefer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleAssignedTaskContainerWidget", "OnActiveTasksChanged");

	Params::UMoleAssignedTaskContainerWidget_OnActiveTasksChanged_Params Parms{};

	Parms.bFrameDefer = bFrameDefer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MoleUI.MoleControllerBinding
// (None)

class UClass* UMoleControllerBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleControllerBinding");

	return Clss;
}


// MoleControllerBinding MoleUI.Default__MoleControllerBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleControllerBinding* UMoleControllerBinding::GetDefaultObj()
{
	static class UMoleControllerBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleControllerBinding*>(UMoleControllerBinding::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleControllerBinding.OnBindingInfoSet
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        BindingLabel                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bIsSaboteurBinding                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleControllerBinding::OnBindingInfoSet(class FText& BindingLabel, bool bIsSaboteurBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleControllerBinding", "OnBindingInfoSet");

	Params::UMoleControllerBinding_OnBindingInfoSet_Params Parms{};

	Parms.BindingLabel = BindingLabel;
	Parms.bIsSaboteurBinding = bIsSaboteurBinding;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MoleUI.MoleControllerBindingsScreen
// (None)

class UClass* UMoleControllerBindingsScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleControllerBindingsScreen");

	return Clss;
}


// MoleControllerBindingsScreen MoleUI.Default__MoleControllerBindingsScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleControllerBindingsScreen* UMoleControllerBindingsScreen::GetDefaultObj()
{
	static class UMoleControllerBindingsScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleControllerBindingsScreen*>(UMoleControllerBindingsScreen::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleUI.MoleEnemyAbilityContainer
// (None)

class UClass* UMoleEnemyAbilityContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleEnemyAbilityContainer");

	return Clss;
}


// MoleEnemyAbilityContainer MoleUI.Default__MoleEnemyAbilityContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleEnemyAbilityContainer* UMoleEnemyAbilityContainer::GetDefaultObj()
{
	static class UMoleEnemyAbilityContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleEnemyAbilityContainer*>(UMoleEnemyAbilityContainer::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleEnemyAbilityContainer.OnVisibilityChangeRequested
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bNewVisibility                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleEnemyAbilityContainer::OnVisibilityChangeRequested(bool bNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleEnemyAbilityContainer", "OnVisibilityChangeRequested");

	Params::UMoleEnemyAbilityContainer_OnVisibilityChangeRequested_Params Parms{};

	Parms.bNewVisibility = bNewVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MoleUI.MoleEnemyAbilityEntry
// (None)

class UClass* UMoleEnemyAbilityEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleEnemyAbilityEntry");

	return Clss;
}


// MoleEnemyAbilityEntry MoleUI.Default__MoleEnemyAbilityEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleEnemyAbilityEntry* UMoleEnemyAbilityEntry::GetDefaultObj()
{
	static class UMoleEnemyAbilityEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleEnemyAbilityEntry*>(UMoleEnemyAbilityEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleEnemyAbilityEntry.OnAbilityDataReceived
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UMoleEnemyAbilityItem*       Data                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleEnemyAbilityEntry::OnAbilityDataReceived(class UMoleEnemyAbilityItem* Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleEnemyAbilityEntry", "OnAbilityDataReceived");

	Params::UMoleEnemyAbilityEntry_OnAbilityDataReceived_Params Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MoleUI.MoleEnemyAbilityItem
// (None)

class UClass* UMoleEnemyAbilityItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleEnemyAbilityItem");

	return Clss;
}


// MoleEnemyAbilityItem MoleUI.Default__MoleEnemyAbilityItem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleEnemyAbilityItem* UMoleEnemyAbilityItem::GetDefaultObj()
{
	static class UMoleEnemyAbilityItem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleEnemyAbilityItem*>(UMoleEnemyAbilityItem::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleEnemyAbilityItem.GetIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMoleEnemyAbilityItem::GetIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleEnemyAbilityItem", "GetIndex");

	Params::UMoleEnemyAbilityItem_GetIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MoleUI.MoleEnemyAbilityOverlay
// (None)

class UClass* UMoleEnemyAbilityOverlay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleEnemyAbilityOverlay");

	return Clss;
}


// MoleEnemyAbilityOverlay MoleUI.Default__MoleEnemyAbilityOverlay
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleEnemyAbilityOverlay* UMoleEnemyAbilityOverlay::GetDefaultObj()
{
	static class UMoleEnemyAbilityOverlay* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleEnemyAbilityOverlay*>(UMoleEnemyAbilityOverlay::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleEnemyAbilityOverlay.OnCooldownUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              TimeLeft                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleEnemyAbilityOverlay::OnCooldownUpdated(int32 TimeLeft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleEnemyAbilityOverlay", "OnCooldownUpdated");

	Params::UMoleEnemyAbilityOverlay_OnCooldownUpdated_Params Parms{};

	Parms.TimeLeft = TimeLeft;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MoleUI.MoleEnemyAbilityOverlay.OnCooldownStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              TimeLeft                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleEnemyAbilityOverlay::OnCooldownStarted(int32 TimeLeft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleEnemyAbilityOverlay", "OnCooldownStarted");

	Params::UMoleEnemyAbilityOverlay_OnCooldownStarted_Params Parms{};

	Parms.TimeLeft = TimeLeft;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MoleUI.MoleEnemyAbilityOverlay.OnCooldownFinished
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMoleEnemyAbilityOverlay::OnCooldownFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleEnemyAbilityOverlay", "OnCooldownFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MoleUI.MoleEnemyAbilityOverlay.OnAbilityDataReceived
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FMoleAbilityUIData          InAbilityUIData                                                  (Parm, NativeAccessSpecifierPublic)

void UMoleEnemyAbilityOverlay::OnAbilityDataReceived(const struct FMoleAbilityUIData& InAbilityUIData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleEnemyAbilityOverlay", "OnAbilityDataReceived");

	Params::UMoleEnemyAbilityOverlay_OnAbilityDataReceived_Params Parms{};

	Parms.InAbilityUIData = InAbilityUIData;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MoleUI.MoleEnemyAbilityWidgetComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UMoleEnemyAbilityWidgetComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleEnemyAbilityWidgetComponent");

	return Clss;
}


// MoleEnemyAbilityWidgetComponent MoleUI.Default__MoleEnemyAbilityWidgetComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleEnemyAbilityWidgetComponent* UMoleEnemyAbilityWidgetComponent::GetDefaultObj()
{
	static class UMoleEnemyAbilityWidgetComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleEnemyAbilityWidgetComponent*>(UMoleEnemyAbilityWidgetComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleEnemyAbilityWidgetComponent.AreSabotageShortcutsEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoleEnemyAbilityWidgetComponent::AreSabotageShortcutsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleEnemyAbilityWidgetComponent", "AreSabotageShortcutsEnabled");

	Params::UMoleEnemyAbilityWidgetComponent_AreSabotageShortcutsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MoleUI.MoleLocationWidget
// (None)

class UClass* UMoleLocationWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleLocationWidget");

	return Clss;
}


// MoleLocationWidget MoleUI.Default__MoleLocationWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleLocationWidget* UMoleLocationWidget::GetDefaultObj()
{
	static class UMoleLocationWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleLocationWidget*>(UMoleLocationWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleLocationWidget.OnVisited
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        LocalizedLocationName                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bIsNamedLocation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleLocationWidget::OnVisited(class FText& LocalizedLocationName, bool bIsNamedLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleLocationWidget", "OnVisited");

	Params::UMoleLocationWidget_OnVisited_Params Parms{};

	Parms.LocalizedLocationName = LocalizedLocationName;
	Parms.bIsNamedLocation = bIsNamedLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MoleUI.MoleMinimap
// (None)

class UClass* UMoleMinimap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleMinimap");

	return Clss;
}


// MoleMinimap MoleUI.Default__MoleMinimap
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleMinimap* UMoleMinimap::GetDefaultObj()
{
	static class UMoleMinimap* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleMinimap*>(UMoleMinimap::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleUI.MoleMobileLoaderWidget
// (None)

class UClass* UMoleMobileLoaderWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleMobileLoaderWidget");

	return Clss;
}


// MoleMobileLoaderWidget MoleUI.Default__MoleMobileLoaderWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleMobileLoaderWidget* UMoleMobileLoaderWidget::GetDefaultObj()
{
	static class UMoleMobileLoaderWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleMobileLoaderWidget*>(UMoleMobileLoaderWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleUI.MoleNameplate
// (None)

class UClass* UMoleNameplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleNameplate");

	return Clss;
}


// MoleNameplate MoleUI.Default__MoleNameplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleNameplate* UMoleNameplate::GetDefaultObj()
{
	static class UMoleNameplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleNameplate*>(UMoleNameplate::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleNameplate.SetupNameplateFor
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class APlayerState*                OwningPlayer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleNameplate::SetupNameplateFor(class APlayerState* OwningPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleNameplate", "SetupNameplateFor");

	Params::UMoleNameplate_SetupNameplateFor_Params Parms{};

	Parms.OwningPlayer = OwningPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MoleUI.MolePostGameScreen
// (None)

class UClass* UMolePostGameScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MolePostGameScreen");

	return Clss;
}


// MolePostGameScreen MoleUI.Default__MolePostGameScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UMolePostGameScreen* UMolePostGameScreen::GetDefaultObj()
{
	static class UMolePostGameScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UMolePostGameScreen*>(UMolePostGameScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MolePostGameScreen.StartMobileAutoGoBackToMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMolePostGameScreen::StartMobileAutoGoBackToMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePostGameScreen", "StartMobileAutoGoBackToMenu");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleUI.MolePostGameScreen.OnXPCalculated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              XPValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMolePostGameScreen::OnXPCalculated(int32 XPValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePostGameScreen", "OnXPCalculated");

	Params::UMolePostGameScreen_OnXPCalculated_Params Parms{};

	Parms.XPValue = XPValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MoleUI.MolePrimaryActiveTaskHUDWidget
// (None)

class UClass* UMolePrimaryActiveTaskHUDWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MolePrimaryActiveTaskHUDWidget");

	return Clss;
}


// MolePrimaryActiveTaskHUDWidget MoleUI.Default__MolePrimaryActiveTaskHUDWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMolePrimaryActiveTaskHUDWidget* UMolePrimaryActiveTaskHUDWidget::GetDefaultObj()
{
	static class UMolePrimaryActiveTaskHUDWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMolePrimaryActiveTaskHUDWidget*>(UMolePrimaryActiveTaskHUDWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleUI.MoleQuickChatLogWidget
// (None)

class UClass* UMoleQuickChatLogWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleQuickChatLogWidget");

	return Clss;
}


// MoleQuickChatLogWidget MoleUI.Default__MoleQuickChatLogWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleQuickChatLogWidget* UMoleQuickChatLogWidget::GetDefaultObj()
{
	static class UMoleQuickChatLogWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleQuickChatLogWidget*>(UMoleQuickChatLogWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleQuickChatLogWidget.OnFirstMessageReceived
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMoleQuickChatLogWidget::OnFirstMessageReceived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleQuickChatLogWidget", "OnFirstMessageReceived");



	UObject::ProcessEvent(Func, nullptr);

}


// Class MoleUI.MoleQuickChatMap
// (None)

class UClass* UMoleQuickChatMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleQuickChatMap");

	return Clss;
}


// MoleQuickChatMap MoleUI.Default__MoleQuickChatMap
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleQuickChatMap* UMoleQuickChatMap::GetDefaultObj()
{
	static class UMoleQuickChatMap* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleQuickChatMap*>(UMoleQuickChatMap::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleUI.MoleQuickChatMapEntry
// (None)

class UClass* UMoleQuickChatMapEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleQuickChatMapEntry");

	return Clss;
}


// MoleQuickChatMapEntry MoleUI.Default__MoleQuickChatMapEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleQuickChatMapEntry* UMoleQuickChatMapEntry::GetDefaultObj()
{
	static class UMoleQuickChatMapEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleQuickChatMapEntry*>(UMoleQuickChatMapEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleQuickChatMapEntry.ResetCosmetics
// (Event, Public, BlueprintEvent)
// Parameters:

void UMoleQuickChatMapEntry::ResetCosmetics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleQuickChatMapEntry", "ResetCosmetics");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MoleUI.MoleQuickChatMapEntry.OnMapDataRetrieved
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FMoleLocationData           LocationData                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UMoleQuickChatMapEntry::OnMapDataRetrieved(struct FMoleLocationData& LocationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleQuickChatMapEntry", "OnMapDataRetrieved");

	Params::UMoleQuickChatMapEntry_OnMapDataRetrieved_Params Parms{};

	Parms.LocationData = LocationData;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MoleUI.MoleQuickChatPlayerEntry
// (None)

class UClass* UMoleQuickChatPlayerEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleQuickChatPlayerEntry");

	return Clss;
}


// MoleQuickChatPlayerEntry MoleUI.Default__MoleQuickChatPlayerEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleQuickChatPlayerEntry* UMoleQuickChatPlayerEntry::GetDefaultObj()
{
	static class UMoleQuickChatPlayerEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleQuickChatPlayerEntry*>(UMoleQuickChatPlayerEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleQuickChatPlayerEntry.OnDataChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMoleQuickChatPlayerEntry::OnDataChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleQuickChatPlayerEntry", "OnDataChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Class MoleUI.MoleQuickChatPlayersWidget
// (None)

class UClass* UMoleQuickChatPlayersWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleQuickChatPlayersWidget");

	return Clss;
}


// MoleQuickChatPlayersWidget MoleUI.Default__MoleQuickChatPlayersWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleQuickChatPlayersWidget* UMoleQuickChatPlayersWidget::GetDefaultObj()
{
	static class UMoleQuickChatPlayersWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleQuickChatPlayersWidget*>(UMoleQuickChatPlayersWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleQuickChatPlayersWidget.OnFilterChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMoleQuickChatPlayersWidget::OnFilterChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleQuickChatPlayersWidget", "OnFilterChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Class MoleUI.MoleQuickChatMessageItem
// (None)

class UClass* UMoleQuickChatMessageItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleQuickChatMessageItem");

	return Clss;
}


// MoleQuickChatMessageItem MoleUI.Default__MoleQuickChatMessageItem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleQuickChatMessageItem* UMoleQuickChatMessageItem::GetDefaultObj()
{
	static class UMoleQuickChatMessageItem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleQuickChatMessageItem*>(UMoleQuickChatMessageItem::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleUI.MoleQuickChatMessageEntry
// (None)

class UClass* UMoleQuickChatMessageEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleQuickChatMessageEntry");

	return Clss;
}


// MoleQuickChatMessageEntry MoleUI.Default__MoleQuickChatMessageEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleQuickChatMessageEntry* UMoleQuickChatMessageEntry::GetDefaultObj()
{
	static class UMoleQuickChatMessageEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleQuickChatMessageEntry*>(UMoleQuickChatMessageEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleQuickChatMessageEntry.OnDataChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMoleQuickChatMessageEntry::OnDataChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleQuickChatMessageEntry", "OnDataChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Class MoleUI.MoleQuickChatRadialSlot
// (None)

class UClass* UMoleQuickChatRadialSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleQuickChatRadialSlot");

	return Clss;
}


// MoleQuickChatRadialSlot MoleUI.Default__MoleQuickChatRadialSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleQuickChatRadialSlot* UMoleQuickChatRadialSlot::GetDefaultObj()
{
	static class UMoleQuickChatRadialSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleQuickChatRadialSlot*>(UMoleQuickChatRadialSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleQuickChatRadialSlot.OnUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void UMoleQuickChatRadialSlot::OnUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleQuickChatRadialSlot", "OnUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Class MoleUI.MoleQuickChatCategorySlot
// (None)

class UClass* UMoleQuickChatCategorySlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleQuickChatCategorySlot");

	return Clss;
}


// MoleQuickChatCategorySlot MoleUI.Default__MoleQuickChatCategorySlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleQuickChatCategorySlot* UMoleQuickChatCategorySlot::GetDefaultObj()
{
	static class UMoleQuickChatCategorySlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleQuickChatCategorySlot*>(UMoleQuickChatCategorySlot::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleUI.MoleQuickChatActionSlot
// (None)

class UClass* UMoleQuickChatActionSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleQuickChatActionSlot");

	return Clss;
}


// MoleQuickChatActionSlot MoleUI.Default__MoleQuickChatActionSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleQuickChatActionSlot* UMoleQuickChatActionSlot::GetDefaultObj()
{
	static class UMoleQuickChatActionSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleQuickChatActionSlot*>(UMoleQuickChatActionSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleQuickChatActionSlot.OnIsAvailableChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsAvailable                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleQuickChatActionSlot::OnIsAvailableChanged(bool bIsAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleQuickChatActionSlot", "OnIsAvailableChanged");

	Params::UMoleQuickChatActionSlot_OnIsAvailableChanged_Params Parms{};

	Parms.bIsAvailable = bIsAvailable;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MoleUI.MoleQuickChatUIComponent
// (None)

class UClass* UMoleQuickChatUIComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleQuickChatUIComponent");

	return Clss;
}


// MoleQuickChatUIComponent MoleUI.Default__MoleQuickChatUIComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleQuickChatUIComponent* UMoleQuickChatUIComponent::GetDefaultObj()
{
	static class UMoleQuickChatUIComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleQuickChatUIComponent*>(UMoleQuickChatUIComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleUI.MoleQuickChatWidget
// (None)

class UClass* UMoleQuickChatWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleQuickChatWidget");

	return Clss;
}


// MoleQuickChatWidget MoleUI.Default__MoleQuickChatWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleQuickChatWidget* UMoleQuickChatWidget::GetDefaultObj()
{
	static class UMoleQuickChatWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleQuickChatWidget*>(UMoleQuickChatWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleQuickChatWidget.OnPreviewChanged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Message                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UMoleQuickChatWidget::OnPreviewChanged(class FText& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleQuickChatWidget", "OnPreviewChanged");

	Params::UMoleQuickChatWidget_OnPreviewChanged_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MoleUI.MoleQuickChatWidget.OnMessageFailedToSend
// (Event, Public, BlueprintEvent)
// Parameters:

void UMoleQuickChatWidget::OnMessageFailedToSend()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleQuickChatWidget", "OnMessageFailedToSend");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MoleUI.MoleQuickChatWidget.OnItemClicked
// (Event, Public, BlueprintEvent)
// Parameters:

void UMoleQuickChatWidget::OnItemClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleQuickChatWidget", "OnItemClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MoleUI.MoleQuickChatWidget.OnAvailable
// (Event, Public, BlueprintEvent)
// Parameters:

void UMoleQuickChatWidget::OnAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleQuickChatWidget", "OnAvailable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MoleUI.MoleQuickChatWidget.AreAcceptAndBackInverted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoleQuickChatWidget::AreAcceptAndBackInverted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleQuickChatWidget", "AreAcceptAndBackInverted");

	Params::UMoleQuickChatWidget_AreAcceptAndBackInverted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MoleUI.MoleQuickChatWidgetProxy
// (None)

class UClass* UMoleQuickChatWidgetProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleQuickChatWidgetProxy");

	return Clss;
}


// MoleQuickChatWidgetProxy MoleUI.Default__MoleQuickChatWidgetProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleQuickChatWidgetProxy* UMoleQuickChatWidgetProxy::GetDefaultObj()
{
	static class UMoleQuickChatWidgetProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleQuickChatWidgetProxy*>(UMoleQuickChatWidgetProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleQuickChatWidgetProxy.OnQuickChatOpened
// (Event, Public, BlueprintEvent)
// Parameters:

void UMoleQuickChatWidgetProxy::OnQuickChatOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleQuickChatWidgetProxy", "OnQuickChatOpened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MoleUI.MoleQuickChatWidgetProxy.OnQuickChatClosed
// (Event, Public, BlueprintEvent)
// Parameters:

void UMoleQuickChatWidgetProxy::OnQuickChatClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleQuickChatWidgetProxy", "OnQuickChatClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MoleUI.MoleQuickChatWidgetProxy.OnEnter
// (Final, Native, Private)
// Parameters:

void UMoleQuickChatWidgetProxy::OnEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleQuickChatWidgetProxy", "OnEnter");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MoleUI.MoleRoleColor
// (Actor)

class UClass* AMoleRoleColor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleRoleColor");

	return Clss;
}


// MoleRoleColor MoleUI.Default__MoleRoleColor
// (Public, ClassDefaultObject, ArchetypeObject)

class AMoleRoleColor* AMoleRoleColor::GetDefaultObj()
{
	static class AMoleRoleColor* Default = nullptr;

	if (!Default)
		Default = static_cast<AMoleRoleColor*>(AMoleRoleColor::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleRoleColor.SetColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                Color                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMoleRoleColor::SetColor(struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleRoleColor", "SetColor");

	Params::AMoleRoleColor_SetColor_Params Parms{};

	Parms.Color = Color;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleUI.MoleRoleColor.OnSetColor
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMoleRoleColor::OnSetColor(struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleRoleColor", "OnSetColor");

	Params::AMoleRoleColor_OnSetColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MoleUI.MoleRoleColor.Hide
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AMoleRoleColor::Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleRoleColor", "Hide");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MoleUI.MoleSaboteurBarEntry
// (None)

class UClass* UMoleSaboteurBarEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleSaboteurBarEntry");

	return Clss;
}


// MoleSaboteurBarEntry MoleUI.Default__MoleSaboteurBarEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleSaboteurBarEntry* UMoleSaboteurBarEntry::GetDefaultObj()
{
	static class UMoleSaboteurBarEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleSaboteurBarEntry*>(UMoleSaboteurBarEntry::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleUI.MoleSlottedRadialMenu
// (None)

class UClass* UMoleSlottedRadialMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleSlottedRadialMenu");

	return Clss;
}


// MoleSlottedRadialMenu MoleUI.Default__MoleSlottedRadialMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleSlottedRadialMenu* UMoleSlottedRadialMenu::GetDefaultObj()
{
	static class UMoleSlottedRadialMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleSlottedRadialMenu*>(UMoleSlottedRadialMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleSlottedRadialMenu.OnResetNavigation
// (Event, Public, BlueprintEvent)
// Parameters:

void UMoleSlottedRadialMenu::OnResetNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleSlottedRadialMenu", "OnResetNavigation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MoleUI.MoleSlottedRadialMenu.OnRadialEntrySelected
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 SelectedEntry                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleSlottedRadialMenu::OnRadialEntrySelected(int32 Index, class UUserWidget* SelectedEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleSlottedRadialMenu", "OnRadialEntrySelected");

	Params::UMoleSlottedRadialMenu_OnRadialEntrySelected_Params Parms{};

	Parms.Index = Index;
	Parms.SelectedEntry = SelectedEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MoleUI.MoleSlottedRadialMenu.OnRadialEntriesChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsActions                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumEntries                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Degrees                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleSlottedRadialMenu::OnRadialEntriesChanged(bool bIsActions, int32 NumEntries, float Degrees)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleSlottedRadialMenu", "OnRadialEntriesChanged");

	Params::UMoleSlottedRadialMenu_OnRadialEntriesChanged_Params Parms{};

	Parms.bIsActions = bIsActions;
	Parms.NumEntries = NumEntries;
	Parms.Degrees = Degrees;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MoleUI.MoleSlottedRadialMenu.OnCategorySelected
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// class UFortRadialSlot*             SelectedSlot                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMoleQuickChatActionData>Actions                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor                CategoryColor                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UTexture2D>   CategoryImage                                                    (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleSlottedRadialMenu::OnCategorySelected(class UFortRadialSlot* SelectedSlot, TArray<struct FMoleQuickChatActionData>& Actions, struct FLinearColor& CategoryColor, TSoftObjectPtr<class UTexture2D>& CategoryImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleSlottedRadialMenu", "OnCategorySelected");

	Params::UMoleSlottedRadialMenu_OnCategorySelected_Params Parms{};

	Parms.SelectedSlot = SelectedSlot;
	Parms.Actions = Actions;
	Parms.CategoryColor = CategoryColor;
	Parms.CategoryImage = CategoryImage;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MoleUI.MoleSubobjectiveIndicatorWidget
// (None)

class UClass* UMoleSubobjectiveIndicatorWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleSubobjectiveIndicatorWidget");

	return Clss;
}


// MoleSubobjectiveIndicatorWidget MoleUI.Default__MoleSubobjectiveIndicatorWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleSubobjectiveIndicatorWidget* UMoleSubobjectiveIndicatorWidget::GetDefaultObj()
{
	static class UMoleSubobjectiveIndicatorWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleSubobjectiveIndicatorWidget*>(UMoleSubobjectiveIndicatorWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleSubobjectiveIndicatorWidget.OnSetUsageMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUseGoalIndicatorMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleSubobjectiveIndicatorWidget::OnSetUsageMode(bool bUseGoalIndicatorMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleSubobjectiveIndicatorWidget", "OnSetUsageMode");

	Params::UMoleSubobjectiveIndicatorWidget_OnSetUsageMode_Params Parms{};

	Parms.bUseGoalIndicatorMode = bUseGoalIndicatorMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MoleUI.MoleSubobjectiveIndicatorWidget.OnScreenClampChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bScreenClamped                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleSubobjectiveIndicatorWidget::OnScreenClampChanged(bool bScreenClamped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleSubobjectiveIndicatorWidget", "OnScreenClampChanged");

	Params::UMoleSubobjectiveIndicatorWidget_OnScreenClampChanged_Params Parms{};

	Parms.bScreenClamped = bScreenClamped;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MoleUI.MoleTaskHUDWidget
// (None)

class UClass* UMoleTaskHUDWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskHUDWidget");

	return Clss;
}


// MoleTaskHUDWidget MoleUI.Default__MoleTaskHUDWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskHUDWidget* UMoleTaskHUDWidget::GetDefaultObj()
{
	static class UMoleTaskHUDWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskHUDWidget*>(UMoleTaskHUDWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleTaskHUDWidget.SetTaskHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMoleActiveTaskStateHandle  TaskHandle                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskHUDWidget::SetTaskHandle(const struct FMoleActiveTaskStateHandle& TaskHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskHUDWidget", "SetTaskHandle");

	Params::UMoleTaskHUDWidget_SetTaskHandle_Params Parms{};

	Parms.TaskHandle = TaskHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleUI.MoleTaskHUDWidget.SetTaskAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoleTaskDataAsset*          TaskAsset                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskHUDWidget::SetTaskAsset(class UMoleTaskDataAsset* TaskAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskHUDWidget", "SetTaskAsset");

	Params::UMoleTaskHUDWidget_SetTaskAsset_Params Parms{};

	Parms.TaskAsset = TaskAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleUI.MoleTaskHUDWidget.SetAttemptShowActiveObjectives
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAttemptShow                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskHUDWidget::SetAttemptShowActiveObjectives(bool bAttemptShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskHUDWidget", "SetAttemptShowActiveObjectives");

	Params::UMoleTaskHUDWidget_SetAttemptShowActiveObjectives_Params Parms{};

	Parms.bAttemptShow = bAttemptShow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleUI.MoleTaskHUDWidget.RequestCompactMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMoleTaskHUDWidget::RequestCompactMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskHUDWidget", "RequestCompactMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MoleUI.MoleTaskHUDWidget.OnRepresentedTaskChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UMoleTaskDataAsset*          PreviousTaskAsset                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMoleActiveTaskStateHandle  PreviousHandle                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskHUDWidget::OnRepresentedTaskChanged(class UMoleTaskDataAsset* PreviousTaskAsset, const struct FMoleActiveTaskStateHandle& PreviousHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskHUDWidget", "OnRepresentedTaskChanged");

	Params::UMoleTaskHUDWidget_OnRepresentedTaskChanged_Params Parms{};

	Parms.PreviousTaskAsset = PreviousTaskAsset;
	Parms.PreviousHandle = PreviousHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleUI.MoleTaskHUDWidget.OnRepresentedLogicPhaseChange
// (Final, Native, Protected)
// Parameters:

void UMoleTaskHUDWidget::OnRepresentedLogicPhaseChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskHUDWidget", "OnRepresentedLogicPhaseChange");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleUI.MoleTaskHUDWidget.GetTaskTitle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UMoleTaskHUDWidget::GetTaskTitle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskHUDWidget", "GetTaskTitle");

	Params::UMoleTaskHUDWidget_GetTaskTitle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleUI.MoleTaskHUDWidget.GetTaskAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoleTaskDataAsset*          ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoleTaskDataAsset* UMoleTaskHUDWidget::GetTaskAsset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskHUDWidget", "GetTaskAsset");

	Params::UMoleTaskHUDWidget_GetTaskAsset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MoleUI.MoleTaskObjectiveHUDWidget
// (None)

class UClass* UMoleTaskObjectiveHUDWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskObjectiveHUDWidget");

	return Clss;
}


// MoleTaskObjectiveHUDWidget MoleUI.Default__MoleTaskObjectiveHUDWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskObjectiveHUDWidget* UMoleTaskObjectiveHUDWidget::GetDefaultObj()
{
	static class UMoleTaskObjectiveHUDWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskObjectiveHUDWidget*>(UMoleTaskObjectiveHUDWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleTaskObjectiveHUDWidget.OnRepresentedObjectiveTargetValueChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              NewTargetValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskObjectiveHUDWidget::OnRepresentedObjectiveTargetValueChanged(float NewTargetValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskObjectiveHUDWidget", "OnRepresentedObjectiveTargetValueChanged");

	Params::UMoleTaskObjectiveHUDWidget_OnRepresentedObjectiveTargetValueChanged_Params Parms{};

	Parms.NewTargetValue = NewTargetValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleUI.MoleTaskObjectiveHUDWidget.OnRepresentedObjectiveCurrentValueChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              NewCurrentValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskObjectiveHUDWidget::OnRepresentedObjectiveCurrentValueChanged(float NewCurrentValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskObjectiveHUDWidget", "OnRepresentedObjectiveCurrentValueChanged");

	Params::UMoleTaskObjectiveHUDWidget_OnRepresentedObjectiveCurrentValueChanged_Params Parms{};

	Parms.NewCurrentValue = NewCurrentValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleUI.MoleTaskObjectiveHUDWidget.OnRepresentedObjectiveChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UMoleTaskObjectiveHUDWidget::OnRepresentedObjectiveChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskObjectiveHUDWidget", "OnRepresentedObjectiveChanged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleUI.MoleTaskObjectiveHUDWidget.GetTaskObjectiveInfo
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FMoleTaskObjectiveUIInfo    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMoleTaskObjectiveUIInfo UMoleTaskObjectiveHUDWidget::GetTaskObjectiveInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskObjectiveHUDWidget", "GetTaskObjectiveInfo");

	Params::UMoleTaskObjectiveHUDWidget_GetTaskObjectiveInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MoleUI.MoleTimer
// (None)

class UClass* UMoleTimer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTimer");

	return Clss;
}


// MoleTimer MoleUI.Default__MoleTimer
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTimer* UMoleTimer::GetDefaultObj()
{
	static class UMoleTimer* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTimer*>(UMoleTimer::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleTimer.StartTimer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InServerFinishTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTimer::StartTimer(float InServerFinishTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTimer", "StartTimer");

	Params::UMoleTimer_StartTimer_Params Parms{};

	Parms.InServerFinishTime = InServerFinishTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleUI.MoleTimer.OnTimerUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              TimeLeft                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTimer::OnTimerUpdated(int32 TimeLeft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTimer", "OnTimerUpdated");

	Params::UMoleTimer_OnTimerUpdated_Params Parms{};

	Parms.TimeLeft = TimeLeft;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MoleUI.MoleTimer.OnTimerStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              TimeLeft                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTimer::OnTimerStarted(int32 TimeLeft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTimer", "OnTimerStarted");

	Params::UMoleTimer_OnTimerStarted_Params Parms{};

	Parms.TimeLeft = TimeLeft;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MoleUI.MoleTimer.OnTimerFinished
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMoleTimer::OnTimerFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTimer", "OnTimerFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MoleUI.MoleTimer.OnTimerCleared
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMoleTimer::OnTimerCleared()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTimer", "OnTimerCleared");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MoleUI.MoleTimer.ClearTimer
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMoleTimer::ClearTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTimer", "ClearTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MoleUI.MoleUIAssetManagerComponent
// (None)

class UClass* UMoleUIAssetManagerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleUIAssetManagerComponent");

	return Clss;
}


// MoleUIAssetManagerComponent MoleUI.Default__MoleUIAssetManagerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleUIAssetManagerComponent* UMoleUIAssetManagerComponent::GetDefaultObj()
{
	static class UMoleUIAssetManagerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleUIAssetManagerComponent*>(UMoleUIAssetManagerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleUI.MoleUIDirector
// (Actor)

class UClass* AMoleUIDirector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleUIDirector");

	return Clss;
}


// MoleUIDirector MoleUI.Default__MoleUIDirector
// (Public, ClassDefaultObject, ArchetypeObject)

class AMoleUIDirector* AMoleUIDirector::GetDefaultObj()
{
	static class AMoleUIDirector* Default = nullptr;

	if (!Default)
		Default = static_cast<AMoleUIDirector*>(AMoleUIDirector::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleUIDirector.GetMolePlayerUIData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerState*                PlayerState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutPlayerNUmber                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMolePlayerUIData           OutPlayerUIData                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AMoleUIDirector::GetMolePlayerUIData(class APlayerState* PlayerState, int32* OutPlayerNUmber, struct FMolePlayerUIData* OutPlayerUIData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleUIDirector", "GetMolePlayerUIData");

	Params::AMoleUIDirector_GetMolePlayerUIData_Params Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPlayerNUmber != nullptr)
		*OutPlayerNUmber = Parms.OutPlayerNUmber;

	if (OutPlayerUIData != nullptr)
		*OutPlayerUIData = std::move(Parms.OutPlayerUIData);

	return Parms.ReturnValue;

}


// Function MoleUI.MoleUIDirector.GetMoleLocationData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                LocationTag                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMoleLocationData           OutLocationData                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AMoleUIDirector::GetMoleLocationData(class UObject* WorldContextObject, struct FGameplayTag& LocationTag, struct FMoleLocationData* OutLocationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleUIDirector", "GetMoleLocationData");

	Params::AMoleUIDirector_GetMoleLocationData_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LocationTag = LocationTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLocationData != nullptr)
		*OutLocationData = std::move(Parms.OutLocationData);

	return Parms.ReturnValue;

}


// Function MoleUI.MoleUIDirector.GetMoleEnemyAbilityUIData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                SabotageTag                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMoleAbilityUIData          OutEnemyAbilityUIData                                            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AMoleUIDirector::GetMoleEnemyAbilityUIData(class UObject* WorldContextObject, struct FGameplayTag& SabotageTag, struct FMoleAbilityUIData* OutEnemyAbilityUIData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleUIDirector", "GetMoleEnemyAbilityUIData");

	Params::AMoleUIDirector_GetMoleEnemyAbilityUIData_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SabotageTag = SabotageTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutEnemyAbilityUIData != nullptr)
		*OutEnemyAbilityUIData = std::move(Parms.OutEnemyAbilityUIData);

	return Parms.ReturnValue;

}


// Class MoleUI.MoleUIIndicatorManagerComponent
// (None)

class UClass* UMoleUIIndicatorManagerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleUIIndicatorManagerComponent");

	return Clss;
}


// MoleUIIndicatorManagerComponent MoleUI.Default__MoleUIIndicatorManagerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleUIIndicatorManagerComponent* UMoleUIIndicatorManagerComponent::GetDefaultObj()
{
	static class UMoleUIIndicatorManagerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleUIIndicatorManagerComponent*>(UMoleUIIndicatorManagerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleUI.MoleVoiceChatStatusIcon
// (None)

class UClass* UMoleVoiceChatStatusIcon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleVoiceChatStatusIcon");

	return Clss;
}


// MoleVoiceChatStatusIcon MoleUI.Default__MoleVoiceChatStatusIcon
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleVoiceChatStatusIcon* UMoleVoiceChatStatusIcon::GetDefaultObj()
{
	static class UMoleVoiceChatStatusIcon* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleVoiceChatStatusIcon*>(UMoleVoiceChatStatusIcon::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleUI.MolePlayerItem
// (None)

class UClass* UMolePlayerItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MolePlayerItem");

	return Clss;
}


// MolePlayerItem MoleUI.Default__MolePlayerItem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMolePlayerItem* UMolePlayerItem::GetDefaultObj()
{
	static class UMolePlayerItem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMolePlayerItem*>(UMolePlayerItem::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleUI.MoleVotingPlayerInfoItem
// (None)

class UClass* UMoleVotingPlayerInfoItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleVotingPlayerInfoItem");

	return Clss;
}


// MoleVotingPlayerInfoItem MoleUI.Default__MoleVotingPlayerInfoItem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleVotingPlayerInfoItem* UMoleVotingPlayerInfoItem::GetDefaultObj()
{
	static class UMoleVotingPlayerInfoItem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleVotingPlayerInfoItem*>(UMoleVotingPlayerInfoItem::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleUI.MoleVoteCastingInfoPanel
// (None)

class UClass* UMoleVoteCastingInfoPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleVoteCastingInfoPanel");

	return Clss;
}


// MoleVoteCastingInfoPanel MoleUI.Default__MoleVoteCastingInfoPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleVoteCastingInfoPanel* UMoleVoteCastingInfoPanel::GetDefaultObj()
{
	static class UMoleVoteCastingInfoPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleVoteCastingInfoPanel*>(UMoleVoteCastingInfoPanel::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleVoteCastingInfoPanel.OnPanelVisibilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShouldShowPanel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleVoteCastingInfoPanel::OnPanelVisibilityChanged(bool bShouldShowPanel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleVoteCastingInfoPanel", "OnPanelVisibilityChanged");

	Params::UMoleVoteCastingInfoPanel_OnPanelVisibilityChanged_Params Parms{};

	Parms.bShouldShowPanel = bShouldShowPanel;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MoleUI.MoleVoteTally
// (None)

class UClass* UMoleVoteTally::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleVoteTally");

	return Clss;
}


// MoleVoteTally MoleUI.Default__MoleVoteTally
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleVoteTally* UMoleVoteTally::GetDefaultObj()
{
	static class UMoleVoteTally* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleVoteTally*>(UMoleVoteTally::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleVoteTally.OnVoteTallyStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSkipTally                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleVoteTally::OnVoteTallyStarted(bool bIsSkipTally)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleVoteTally", "OnVoteTallyStarted");

	Params::UMoleVoteTally_OnVoteTallyStarted_Params Parms{};

	Parms.bIsSkipTally = bIsSkipTally;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MoleUI.MoleVoteTallyWidgetComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UMoleVoteTallyWidgetComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleVoteTallyWidgetComponent");

	return Clss;
}


// MoleVoteTallyWidgetComponent MoleUI.Default__MoleVoteTallyWidgetComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleVoteTallyWidgetComponent* UMoleVoteTallyWidgetComponent::GetDefaultObj()
{
	static class UMoleVoteTallyWidgetComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleVoteTallyWidgetComponent*>(UMoleVoteTallyWidgetComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleUI.MoleVotingIndicator
// (Actor)

class UClass* AMoleVotingIndicator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleVotingIndicator");

	return Clss;
}


// MoleVotingIndicator MoleUI.Default__MoleVotingIndicator
// (Public, ClassDefaultObject, ArchetypeObject)

class AMoleVotingIndicator* AMoleVotingIndicator::GetDefaultObj()
{
	static class AMoleVotingIndicator* Default = nullptr;

	if (!Default)
		Default = static_cast<AMoleVotingIndicator*>(AMoleVotingIndicator::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleUI.MoleVotingIndicator.OnIndicatorRevealed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerState*                AccuserPlayerState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMoleVotingIndicator::OnIndicatorRevealed(class APlayerState* AccuserPlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleVotingIndicator", "OnIndicatorRevealed");

	Params::AMoleVotingIndicator_OnIndicatorRevealed_Params Parms{};

	Parms.AccuserPlayerState = AccuserPlayerState;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MoleUI.MoleVotingPresentationManager
// (Actor)

class UClass* AMoleVotingPresentationManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleVotingPresentationManager");

	return Clss;
}


// MoleVotingPresentationManager MoleUI.Default__MoleVotingPresentationManager
// (Public, ClassDefaultObject, ArchetypeObject)

class AMoleVotingPresentationManager* AMoleVotingPresentationManager::GetDefaultObj()
{
	static class AMoleVotingPresentationManager* Default = nullptr;

	if (!Default)
		Default = static_cast<AMoleVotingPresentationManager*>(AMoleVotingPresentationManager::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleUI.MoleWidgetInteractionComponent
// (SceneComponent)

class UClass* UMoleWidgetInteractionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleWidgetInteractionComponent");

	return Clss;
}


// MoleWidgetInteractionComponent MoleUI.Default__MoleWidgetInteractionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleWidgetInteractionComponent* UMoleWidgetInteractionComponent::GetDefaultObj()
{
	static class UMoleWidgetInteractionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleWidgetInteractionComponent*>(UMoleWidgetInteractionComponent::StaticClass()->DefaultObject);

	return Default;
}

}


