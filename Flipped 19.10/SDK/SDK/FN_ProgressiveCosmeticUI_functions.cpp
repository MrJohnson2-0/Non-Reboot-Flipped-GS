#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ProgressiveCosmeticUI.FortProgressiveItemDetailsWidget
// (None)

class UClass* UFortProgressiveItemDetailsWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortProgressiveItemDetailsWidget");

	return Clss;
}


// FortProgressiveItemDetailsWidget ProgressiveCosmeticUI.Default__FortProgressiveItemDetailsWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortProgressiveItemDetailsWidget* UFortProgressiveItemDetailsWidget::GetDefaultObj()
{
	static class UFortProgressiveItemDetailsWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortProgressiveItemDetailsWidget*>(UFortProgressiveItemDetailsWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ProgressiveCosmeticUI.FortProgressiveItemScreen
// (None)

class UClass* UFortProgressiveItemScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortProgressiveItemScreen");

	return Clss;
}


// FortProgressiveItemScreen ProgressiveCosmeticUI.Default__FortProgressiveItemScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortProgressiveItemScreen* UFortProgressiveItemScreen::GetDefaultObj()
{
	static class UFortProgressiveItemScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortProgressiveItemScreen*>(UFortProgressiveItemScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function ProgressiveCosmeticUI.FortProgressiveItemScreen.OnItemSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortProgressiveItemScreen::OnItemSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveItemScreen", "OnItemSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressiveCosmeticUI.FortProgressiveItemScreen.OnContainerTabVisibilityUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bTabsVisible                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SpacingAdjustmentForTabs                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveItemScreen::OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveItemScreen", "OnContainerTabVisibilityUpdated");

	Params::UFortProgressiveItemScreen_OnContainerTabVisibilityUpdated_Params Parms{};

	Parms.bTabsVisible = bTabsVisible;
	Parms.SpacingAdjustmentForTabs = SpacingAdjustmentForTabs;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ProgressiveCosmeticUI.FortProgressiveItemStateTitleWidget
// (None)

class UClass* UFortProgressiveItemStateTitleWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortProgressiveItemStateTitleWidget");

	return Clss;
}


// FortProgressiveItemStateTitleWidget ProgressiveCosmeticUI.Default__FortProgressiveItemStateTitleWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortProgressiveItemStateTitleWidget* UFortProgressiveItemStateTitleWidget::GetDefaultObj()
{
	static class UFortProgressiveItemStateTitleWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortProgressiveItemStateTitleWidget*>(UFortProgressiveItemStateTitleWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ProgressiveCosmeticUI.FortProgressiveItemWidget
// (None)

class UClass* UFortProgressiveItemWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortProgressiveItemWidget");

	return Clss;
}


// FortProgressiveItemWidget ProgressiveCosmeticUI.Default__FortProgressiveItemWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortProgressiveItemWidget* UFortProgressiveItemWidget::GetDefaultObj()
{
	static class UFortProgressiveItemWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortProgressiveItemWidget*>(UFortProgressiveItemWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ProgressiveCosmeticUI.FortProgressiveItemWidget.OnUnhighlighted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortProgressiveItemWidget::OnUnhighlighted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveItemWidget", "OnUnhighlighted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressiveCosmeticUI.FortProgressiveItemWidget.OnStageItemChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FProgressiveStageItemInfo   InStageItemInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortProgressiveItemWidget::OnStageItemChanged(struct FProgressiveStageItemInfo& InStageItemInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveItemWidget", "OnStageItemChanged");

	Params::UFortProgressiveItemWidget_OnStageItemChanged_Params Parms{};

	Parms.InStageItemInfo = InStageItemInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressiveCosmeticUI.FortProgressiveItemWidget.OnPeekStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsInPeekState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveItemWidget::OnPeekStateChanged(bool bIsInPeekState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveItemWidget", "OnPeekStateChanged");

	Params::UFortProgressiveItemWidget_OnPeekStateChanged_Params Parms{};

	Parms.bIsInPeekState = bIsInPeekState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressiveCosmeticUI.FortProgressiveItemWidget.OnHighlighted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortProgressiveItemWidget::OnHighlighted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveItemWidget", "OnHighlighted");



	UObject::ProcessEvent(Func, nullptr);

}


// Class ProgressiveCosmeticUI.FortProgressiveStageList
// (None)

class UClass* UFortProgressiveStageList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortProgressiveStageList");

	return Clss;
}


// FortProgressiveStageList ProgressiveCosmeticUI.Default__FortProgressiveStageList
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortProgressiveStageList* UFortProgressiveStageList::GetDefaultObj()
{
	static class UFortProgressiveStageList* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortProgressiveStageList*>(UFortProgressiveStageList::StaticClass()->DefaultObject);

	return Default;
}


// Function ProgressiveCosmeticUI.FortProgressiveStageList.ClearStageWidgets
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortProgressiveStageList::ClearStageWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveStageList", "ClearStageWidgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressiveCosmeticUI.FortProgressiveStageList.AddStageWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortProgressiveStageWidget* ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortProgressiveStageWidget* UFortProgressiveStageList::AddStageWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveStageList", "AddStageWidget");

	Params::UFortProgressiveStageList_AddStageWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class ProgressiveCosmeticUI.FortProgressiveStageTags
// (None)

class UClass* UFortProgressiveStageTags::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortProgressiveStageTags");

	return Clss;
}


// FortProgressiveStageTags ProgressiveCosmeticUI.Default__FortProgressiveStageTags
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortProgressiveStageTags* UFortProgressiveStageTags::GetDefaultObj()
{
	static class UFortProgressiveStageTags* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortProgressiveStageTags*>(UFortProgressiveStageTags::StaticClass()->DefaultObject);

	return Default;
}


// Class ProgressiveCosmeticUI.FortProgressiveStageWidget
// (None)

class UClass* UFortProgressiveStageWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortProgressiveStageWidget");

	return Clss;
}


// FortProgressiveStageWidget ProgressiveCosmeticUI.Default__FortProgressiveStageWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortProgressiveStageWidget* UFortProgressiveStageWidget::GetDefaultObj()
{
	static class UFortProgressiveStageWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortProgressiveStageWidget*>(UFortProgressiveStageWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ProgressiveCosmeticUI.FortProgressiveStageWidget.OnPeekStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsInPeekState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressiveStageWidget::OnPeekStateChanged(bool bIsInPeekState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveStageWidget", "OnPeekStateChanged");

	Params::UFortProgressiveStageWidget_OnPeekStateChanged_Params Parms{};

	Parms.bIsInPeekState = bIsInPeekState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressiveCosmeticUI.FortProgressiveStageWidget.ClearStageItemWidgets
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortProgressiveStageWidget::ClearStageItemWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveStageWidget", "ClearStageItemWidgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressiveCosmeticUI.FortProgressiveStageWidget.AddStageItemWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortProgressiveItemWidget*  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortProgressiveItemWidget* UFortProgressiveStageWidget::AddStageItemWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressiveStageWidget", "AddStageItemWidget");

	Params::UFortProgressiveStageWidget_AddStageItemWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class ProgressiveCosmeticUI.ProgressiveCosmeticUIGameFeatureAction
// (None)

class UClass* UProgressiveCosmeticUIGameFeatureAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProgressiveCosmeticUIGameFeatureAction");

	return Clss;
}


// ProgressiveCosmeticUIGameFeatureAction ProgressiveCosmeticUI.Default__ProgressiveCosmeticUIGameFeatureAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UProgressiveCosmeticUIGameFeatureAction* UProgressiveCosmeticUIGameFeatureAction::GetDefaultObj()
{
	static class UProgressiveCosmeticUIGameFeatureAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UProgressiveCosmeticUIGameFeatureAction*>(UProgressiveCosmeticUIGameFeatureAction::StaticClass()->DefaultObject);

	return Default;
}

}


