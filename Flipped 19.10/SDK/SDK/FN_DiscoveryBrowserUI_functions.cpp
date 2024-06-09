#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DiscoveryBrowserUI.ActivityLibraryComponent
// (None)

class UClass* UActivityLibraryComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActivityLibraryComponent");

	return Clss;
}


// ActivityLibraryComponent DiscoveryBrowserUI.Default__ActivityLibraryComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UActivityLibraryComponent* UActivityLibraryComponent::GetDefaultObj()
{
	static class UActivityLibraryComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UActivityLibraryComponent*>(UActivityLibraryComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.FortActivityBrowser
// (None)

class UClass* UFortActivityBrowser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowser");

	return Clss;
}


// FortActivityBrowser DiscoveryBrowserUI.Default__FortActivityBrowser
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowser* UFortActivityBrowser::GetDefaultObj()
{
	static class UFortActivityBrowser* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowser*>(UFortActivityBrowser::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityBrowser.OnPlayerQueueTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EPlayerQueueType        PlayerQueueType                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowser::OnPlayerQueueTypeChanged(enum class EPlayerQueueType PlayerQueueType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowser", "OnPlayerQueueTypeChanged");

	Params::UFortActivityBrowser_OnPlayerQueueTypeChanged_Params Parms{};

	Parms.PlayerQueueType = PlayerQueueType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowser.OnActivitySelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityBrowser::OnActivitySelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowser", "OnActivitySelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DiscoveryBrowserUI.FortActivityBrowser.HandleTabChanged
// (Final, Native, Private)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowser::HandleTabChanged(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowser", "HandleTabChanged");

	Params::UFortActivityBrowser_HandleTabChanged_Params Parms{};

	Parms.TabId = TabId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class DiscoveryBrowserUI.FortActivityBrowserListView
// (None)

class UClass* UFortActivityBrowserListView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowserListView");

	return Clss;
}


// FortActivityBrowserListView DiscoveryBrowserUI.Default__FortActivityBrowserListView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowserListView* UFortActivityBrowserListView::GetDefaultObj()
{
	static class UFortActivityBrowserListView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowserListView*>(UFortActivityBrowserListView::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.FortActivityBrowserRow
// (None)

class UClass* UFortActivityBrowserRow::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowserRow");

	return Clss;
}


// FortActivityBrowserRow DiscoveryBrowserUI.Default__FortActivityBrowserRow
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowserRow* UFortActivityBrowserRow::GetDefaultObj()
{
	static class UFortActivityBrowserRow* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowserRow*>(UFortActivityBrowserRow::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowPeekStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsInPeekState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRow::OnRowPeekStateChanged(bool bIsInPeekState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRow", "OnRowPeekStateChanged");

	Params::UFortActivityBrowserRow_OnRowPeekStateChanged_Params Parms{};

	Parms.bIsInPeekState = bIsInPeekState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveUp
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityBrowserRow::OnRowMoveUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRow", "OnRowMoveUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveDown
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityBrowserRow::OnRowMoveDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRow", "OnRowMoveDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsActiveChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsActive                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRow::OnRowIsActiveChanged(bool bIsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRow", "OnRowIsActiveChanged");

	Params::UFortActivityBrowserRow_OnRowIsActiveChanged_Params Parms{};

	Parms.bIsActive = bIsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnCategoryItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsActive                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPlayAnimation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRow::OnCategoryItemChanged(bool bIsActive, bool bPlayAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRow", "OnCategoryItemChanged");

	Params::UFortActivityBrowserRow_OnCategoryItemChanged_Params Parms{};

	Parms.bIsActive = bIsActive;
	Parms.bPlayAnimation = bPlayAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.GetIsInPeekState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityBrowserRow::GetIsInPeekState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRow", "GetIsInPeekState");

	Params::UFortActivityBrowserRow_GetIsInPeekState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.GetIsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityBrowserRow::GetIsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRow", "GetIsActive");

	Params::UFortActivityBrowserRow_GetIsActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DiscoveryBrowserUI.FortActivityBrowserRowList
// (None)

class UClass* UFortActivityBrowserRowList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowserRowList");

	return Clss;
}


// FortActivityBrowserRowList DiscoveryBrowserUI.Default__FortActivityBrowserRowList
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowserRowList* UFortActivityBrowserRowList::GetDefaultObj()
{
	static class UFortActivityBrowserRowList* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowserRowList*>(UFortActivityBrowserRowList::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityBrowserRowList.OnQueryStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsActive                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRowList::OnQueryStatusChanged(bool bIsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowList", "OnQueryStatusChanged");

	Params::UFortActivityBrowserRowList_OnQueryStatusChanged_Params Parms{};

	Parms.bIsActive = bIsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Class DiscoveryBrowserUI.FortActivityBrowserRowPromoted
// (None)

class UClass* UFortActivityBrowserRowPromoted::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowserRowPromoted");

	return Clss;
}


// FortActivityBrowserRowPromoted DiscoveryBrowserUI.Default__FortActivityBrowserRowPromoted
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowserRowPromoted* UFortActivityBrowserRowPromoted::GetDefaultObj()
{
	static class UFortActivityBrowserRowPromoted* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowserRowPromoted*>(UFortActivityBrowserRowPromoted::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityBrowserRowPromoted.OnPreviewImageChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsLoading                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    Texture                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRowPromoted::OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowPromoted", "OnPreviewImageChanged");

	Params::UFortActivityBrowserRowPromoted_OnPreviewImageChanged_Params Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Class DiscoveryBrowserUI.FortActivityBrowserSoloButton
// (None)

class UClass* UFortActivityBrowserSoloButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowserSoloButton");

	return Clss;
}


// FortActivityBrowserSoloButton DiscoveryBrowserUI.Default__FortActivityBrowserSoloButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowserSoloButton* UFortActivityBrowserSoloButton::GetDefaultObj()
{
	static class UFortActivityBrowserSoloButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowserSoloButton*>(UFortActivityBrowserSoloButton::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.FortActivityBrowserTabButton
// (None)

class UClass* UFortActivityBrowserTabButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowserTabButton");

	return Clss;
}


// FortActivityBrowserTabButton DiscoveryBrowserUI.Default__FortActivityBrowserTabButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowserTabButton* UFortActivityBrowserTabButton::GetDefaultObj()
{
	static class UFortActivityBrowserTabButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowserTabButton*>(UFortActivityBrowserTabButton::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityBrowserTabButton.OnFavoriteChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsFavorite                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserTabButton::OnFavoriteChanged(bool bIsFavorite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserTabButton", "OnFavoriteChanged");

	Params::UFortActivityBrowserTabButton_OnFavoriteChanged_Params Parms{};

	Parms.bIsFavorite = bIsFavorite;

	UObject::ProcessEvent(Func, &Parms);

}


// Class DiscoveryBrowserUI.FortActivityBrowserTag
// (None)

class UClass* UFortActivityBrowserTag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowserTag");

	return Clss;
}


// FortActivityBrowserTag DiscoveryBrowserUI.Default__FortActivityBrowserTag
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowserTag* UFortActivityBrowserTag::GetDefaultObj()
{
	static class UFortActivityBrowserTag* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowserTag*>(UFortActivityBrowserTag::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityBrowserTag.OnTagUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityBrowserTag::OnTagUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserTag", "OnTagUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DiscoveryBrowserUI.FortActivityBrowserTag.GetTagType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortActivityBrowserTagTypeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortActivityBrowserTagType UFortActivityBrowserTag::GetTagType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserTag", "GetTagType");

	Params::UFortActivityBrowserTag_GetTagType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DiscoveryBrowserUI.FortActivityBrowserTile
// (None)

class UClass* UFortActivityBrowserTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowserTile");

	return Clss;
}


// FortActivityBrowserTile DiscoveryBrowserUI.Default__FortActivityBrowserTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowserTile* UFortActivityBrowserTile::GetDefaultObj()
{
	static class UFortActivityBrowserTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowserTile*>(UFortActivityBrowserTile::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityBrowserTile.HandleActivitySelected
// (Final, Native, Private)
// Parameters:

void UFortActivityBrowserTile::HandleActivitySelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserTile", "HandleActivitySelected");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class DiscoveryBrowserUI.FortActivityView
// (None)

class UClass* UFortActivityView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityView");

	return Clss;
}


// FortActivityView DiscoveryBrowserUI.Default__FortActivityView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityView* UFortActivityView::GetDefaultObj()
{
	static class UFortActivityView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityView*>(UFortActivityView::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityView.OnSurfaceDataDirty
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityView::OnSurfaceDataDirty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityView", "OnSurfaceDataDirty");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DiscoveryBrowserUI.FortActivityView.GetInvalidActivityReason
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortInvalidActivityReasonReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortInvalidActivityReason UFortActivityView::GetInvalidActivityReason()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityView", "GetInvalidActivityReason");

	Params::UFortActivityView_GetInvalidActivityReason_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityView.BP_OnPartySizeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              PartySize                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityView::BP_OnPartySizeChanged(int32 PartySize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityView", "BP_OnPartySizeChanged");

	Params::UFortActivityView_BP_OnPartySizeChanged_Params Parms{};

	Parms.PartySize = PartySize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityView.BP_OnLocalPlayerPromotedToLeader
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityView::BP_OnLocalPlayerPromotedToLeader()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityView", "BP_OnLocalPlayerPromotedToLeader");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DiscoveryBrowserUI.FortActivityView.BP_OnLocalPlayerDemoted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityView::BP_OnLocalPlayerDemoted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityView", "BP_OnLocalPlayerDemoted");



	UObject::ProcessEvent(Func, nullptr);

}


// Class DiscoveryBrowserUI.FortActivityBrowserView
// (None)

class UClass* UFortActivityBrowserView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowserView");

	return Clss;
}


// FortActivityBrowserView DiscoveryBrowserUI.Default__FortActivityBrowserView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowserView* UFortActivityBrowserView::GetDefaultObj()
{
	static class UFortActivityBrowserView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowserView*>(UFortActivityBrowserView::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityBrowserView.OnRowChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              NewCategoryIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserView::OnRowChanged(int32 NewCategoryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserView", "OnRowChanged");

	Params::UFortActivityBrowserView_OnRowChanged_Params Parms{};

	Parms.NewCategoryIndex = NewCategoryIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserView.OnQueryActivitiesFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityBrowserView::OnQueryActivitiesFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserView", "OnQueryActivitiesFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DiscoveryBrowserUI.FortActivityBrowserView.OnActivityUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityBrowserView::OnActivityUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserView", "OnActivityUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Class DiscoveryBrowserUI.FortActivityCreateView
// (None)

class UClass* UFortActivityCreateView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityCreateView");

	return Clss;
}


// FortActivityCreateView DiscoveryBrowserUI.Default__FortActivityCreateView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityCreateView* UFortActivityCreateView::GetDefaultObj()
{
	static class UFortActivityCreateView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityCreateView*>(UFortActivityCreateView::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityCreateView.GetInvalidCreativeActivityReason
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortInvalidActivityReasonReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortInvalidActivityReason UFortActivityCreateView::GetInvalidCreativeActivityReason()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityCreateView", "GetInvalidCreativeActivityReason");

	Params::UFortActivityCreateView_GetInvalidCreativeActivityReason_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DiscoveryBrowserUI.FortActivityDetailsDisplay
// (None)

class UClass* UFortActivityDetailsDisplay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityDetailsDisplay");

	return Clss;
}


// FortActivityDetailsDisplay DiscoveryBrowserUI.Default__FortActivityDetailsDisplay
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityDetailsDisplay* UFortActivityDetailsDisplay::GetDefaultObj()
{
	static class UFortActivityDetailsDisplay* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityDetailsDisplay*>(UFortActivityDetailsDisplay::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityDetailsDisplay.ResetWidgetState
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityDetailsDisplay::ResetWidgetState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDetailsDisplay", "ResetWidgetState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DiscoveryBrowserUI.FortActivityDetailsDisplay.OnPartySizeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              PartySize                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityDetailsDisplay::OnPartySizeChanged(int32 PartySize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDetailsDisplay", "OnPartySizeChanged");

	Params::UFortActivityDetailsDisplay_OnPartySizeChanged_Params Parms{};

	Parms.PartySize = PartySize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityDetailsDisplay.OnParentActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityDetailsDisplay::OnParentActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDetailsDisplay", "OnParentActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DiscoveryBrowserUI.FortActivityDetailsDisplay.OnOutroAnimationFinished
// (Final, Native, Private)
// Parameters:

void UFortActivityDetailsDisplay::OnOutroAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDetailsDisplay", "OnOutroAnimationFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function DiscoveryBrowserUI.FortActivityDetailsDisplay.OnLocalPlayerPromotedToLeader
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityDetailsDisplay::OnLocalPlayerPromotedToLeader()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDetailsDisplay", "OnLocalPlayerPromotedToLeader");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DiscoveryBrowserUI.FortActivityDetailsDisplay.OnLocalPlayerDemoted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityDetailsDisplay::OnLocalPlayerDemoted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDetailsDisplay", "OnLocalPlayerDemoted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DiscoveryBrowserUI.FortActivityDetailsDisplay.OnIsFavoriteChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsFavorite                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPlayAnimation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityDetailsDisplay::OnIsFavoriteChanged(bool bIsFavorite, bool bPlayAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDetailsDisplay", "OnIsFavoriteChanged");

	Params::UFortActivityDetailsDisplay_OnIsFavoriteChanged_Params Parms{};

	Parms.bIsFavorite = bIsFavorite;
	Parms.bPlayAnimation = bPlayAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityDetailsDisplay.OnDetailsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsDetailsValid                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityDetailsDisplay::OnDetailsUpdated(bool bIsDetailsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDetailsDisplay", "OnDetailsUpdated");

	Params::UFortActivityDetailsDisplay_OnDetailsUpdated_Params Parms{};

	Parms.bIsDetailsValid = bIsDetailsValid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityDetailsDisplay.OnDescriptionScrollRestarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityDetailsDisplay::OnDescriptionScrollRestarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDetailsDisplay", "OnDescriptionScrollRestarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DiscoveryBrowserUI.FortActivityDetailsDisplay.IsDisplayingCategory
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityDetailsDisplay::IsDisplayingCategory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDetailsDisplay", "IsDisplayingCategory");

	Params::UFortActivityDetailsDisplay_IsDisplayingCategory_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDetailsDisplay.IsActivityEpicOriginal
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityDetailsDisplay::IsActivityEpicOriginal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDetailsDisplay", "IsActivityEpicOriginal");

	Params::UFortActivityDetailsDisplay_IsActivityEpicOriginal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDetailsDisplay.GetInvalidActivityReason
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortInvalidActivityReasonReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortInvalidActivityReason UFortActivityDetailsDisplay::GetInvalidActivityReason()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDetailsDisplay", "GetInvalidActivityReason");

	Params::UFortActivityDetailsDisplay_GetInvalidActivityReason_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDetailsDisplay.GetCreatorTextFormat
// (Native, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        CreatorName                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortActivityDetailsDisplay::GetCreatorTextFormat(class FText& CreatorName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDetailsDisplay", "GetCreatorTextFormat");

	Params::UFortActivityDetailsDisplay_GetCreatorTextFormat_Params Parms{};

	Parms.CreatorName = CreatorName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDetailsDisplay.GetContentWarningStrings
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UFortActivityDetailsDisplay::GetContentWarningStrings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDetailsDisplay", "GetContentWarningStrings");

	Params::UFortActivityDetailsDisplay_GetContentWarningStrings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DiscoveryBrowserUI.FortActivityDetailsModal
// (None)

class UClass* UFortActivityDetailsModal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityDetailsModal");

	return Clss;
}


// FortActivityDetailsModal DiscoveryBrowserUI.Default__FortActivityDetailsModal
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityDetailsModal* UFortActivityDetailsModal::GetDefaultObj()
{
	static class UFortActivityDetailsModal* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityDetailsModal*>(UFortActivityDetailsModal::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityDetailsModal.OnPreviewImageChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsLoading                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    Texture                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityDetailsModal::OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDetailsModal", "OnPreviewImageChanged");

	Params::UFortActivityDetailsModal_OnPreviewImageChanged_Params Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityDetailsModal.OnIsFavoriteChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsFavorite                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityDetailsModal::OnIsFavoriteChanged(bool bIsFavorite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDetailsModal", "OnIsFavoriteChanged");

	Params::UFortActivityDetailsModal_OnIsFavoriteChanged_Params Parms{};

	Parms.bIsFavorite = bIsFavorite;

	UObject::ProcessEvent(Func, &Parms);

}


// Class DiscoveryBrowserUI.FortActivityDiscoverView
// (None)

class UClass* UFortActivityDiscoverView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityDiscoverView");

	return Clss;
}


// FortActivityDiscoverView DiscoveryBrowserUI.Default__FortActivityDiscoverView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityDiscoverView* UFortActivityDiscoverView::GetDefaultObj()
{
	static class UFortActivityDiscoverView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityDiscoverView*>(UFortActivityDiscoverView::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.OnPreviewImageChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsLoading                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    Texture                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityDiscoverView::OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverView", "OnPreviewImageChanged");

	Params::UFortActivityDiscoverView_OnPreviewImageChanged_Params Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePlayingChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsPlaying                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityDiscoverView::OnMoviePlayingChanged(bool bIsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverView", "OnMoviePlayingChanged");

	Params::UFortActivityDiscoverView_OnMoviePlayingChanged_Params Parms{};

	Parms.bIsPlaying = bIsPlaying;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingSeasonalContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityDiscoverView::IsShowingSeasonalContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverView", "IsShowingSeasonalContent");

	Params::UFortActivityDiscoverView_IsShowingSeasonalContent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingPromotedContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityDiscoverView::IsShowingPromotedContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverView", "IsShowingPromotedContent");

	Params::UFortActivityDiscoverView_IsShowingPromotedContent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaStarted
// (Final, Native, Private)
// Parameters:

void UFortActivityDiscoverView::HandleMovieWidgetMediaStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverView", "HandleMovieWidgetMediaStarted");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class DiscoveryBrowserUI.FortActivityPlayerBrowserView
// (None)

class UClass* UFortActivityPlayerBrowserView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityPlayerBrowserView");

	return Clss;
}


// FortActivityPlayerBrowserView DiscoveryBrowserUI.Default__FortActivityPlayerBrowserView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityPlayerBrowserView* UFortActivityPlayerBrowserView::GetDefaultObj()
{
	static class UFortActivityPlayerBrowserView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityPlayerBrowserView*>(UFortActivityPlayerBrowserView::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.PlayViewIntro
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortActivityPlayerBrowserView::PlayViewIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityPlayerBrowserView", "PlayViewIntro");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnPlayViewIntro
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityPlayerBrowserView::OnPlayViewIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityPlayerBrowserView", "OnPlayViewIntro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.BP_OnTileViewUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityPlayerBrowserView::BP_OnTileViewUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityPlayerBrowserView", "BP_OnTileViewUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Class DiscoveryBrowserUI.FortActivityFavoriteBrowserView
// (None)

class UClass* UFortActivityFavoriteBrowserView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityFavoriteBrowserView");

	return Clss;
}


// FortActivityFavoriteBrowserView DiscoveryBrowserUI.Default__FortActivityFavoriteBrowserView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityFavoriteBrowserView* UFortActivityFavoriteBrowserView::GetDefaultObj()
{
	static class UFortActivityFavoriteBrowserView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityFavoriteBrowserView*>(UFortActivityFavoriteBrowserView::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.FortActivityListItemWrapper
// (None)

class UClass* UFortActivityListItemWrapper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityListItemWrapper");

	return Clss;
}


// FortActivityListItemWrapper DiscoveryBrowserUI.Default__FortActivityListItemWrapper
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityListItemWrapper* UFortActivityListItemWrapper::GetDefaultObj()
{
	static class UFortActivityListItemWrapper* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityListItemWrapper*>(UFortActivityListItemWrapper::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.FortActivityListView
// (None)

class UClass* UFortActivityListView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityListView");

	return Clss;
}


// FortActivityListView DiscoveryBrowserUI.Default__FortActivityListView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityListView* UFortActivityListView::GetDefaultObj()
{
	static class UFortActivityListView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityListView*>(UFortActivityListView::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityListView.GetInViewCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortActivityListView::GetInViewCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityListView", "GetInViewCount");

	Params::UFortActivityListView_GetInViewCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DiscoveryBrowserUI.FortActivityLobbyTile
// (None)

class UClass* UFortActivityLobbyTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityLobbyTile");

	return Clss;
}


// FortActivityLobbyTile DiscoveryBrowserUI.Default__FortActivityLobbyTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityLobbyTile* UFortActivityLobbyTile::GetDefaultObj()
{
	static class UFortActivityLobbyTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityLobbyTile*>(UFortActivityLobbyTile::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityLobbyTile.OnPreviewImageChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsLoading                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    Texture                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityLobbyTile::OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityLobbyTile", "OnPreviewImageChanged");

	Params::UFortActivityLobbyTile_OnPreviewImageChanged_Params Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityLobbyTile.OnDetailsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityLobbyTile::OnDetailsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityLobbyTile", "OnDetailsUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DiscoveryBrowserUI.FortActivityLobbyTile.IsActivityEpicCreated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityLobbyTile::IsActivityEpicCreated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityLobbyTile", "IsActivityEpicCreated");

	Params::UFortActivityLobbyTile_IsActivityEpicCreated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DiscoveryBrowserUI.FortActivityPlayerBrowserTile
// (None)

class UClass* UFortActivityPlayerBrowserTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityPlayerBrowserTile");

	return Clss;
}


// FortActivityPlayerBrowserTile DiscoveryBrowserUI.Default__FortActivityPlayerBrowserTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityPlayerBrowserTile* UFortActivityPlayerBrowserTile::GetDefaultObj()
{
	static class UFortActivityPlayerBrowserTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityPlayerBrowserTile*>(UFortActivityPlayerBrowserTile::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityPlayerBrowserTile.HandleActivitySelected
// (Final, Native, Private)
// Parameters:

void UFortActivityPlayerBrowserTile::HandleActivitySelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityPlayerBrowserTile", "HandleActivitySelected");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class DiscoveryBrowserUI.FortActivityPlayerView
// (None)

class UClass* UFortActivityPlayerView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityPlayerView");

	return Clss;
}


// FortActivityPlayerView DiscoveryBrowserUI.Default__FortActivityPlayerView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityPlayerView* UFortActivityPlayerView::GetDefaultObj()
{
	static class UFortActivityPlayerView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityPlayerView*>(UFortActivityPlayerView::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.FortActivityPlayerViewTabButton
// (None)

class UClass* UFortActivityPlayerViewTabButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityPlayerViewTabButton");

	return Clss;
}


// FortActivityPlayerViewTabButton DiscoveryBrowserUI.Default__FortActivityPlayerViewTabButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityPlayerViewTabButton* UFortActivityPlayerViewTabButton::GetDefaultObj()
{
	static class UFortActivityPlayerViewTabButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityPlayerViewTabButton*>(UFortActivityPlayerViewTabButton::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.FortActivityScaleFontList
// (None)

class UClass* UFortActivityScaleFontList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityScaleFontList");

	return Clss;
}


// FortActivityScaleFontList DiscoveryBrowserUI.Default__FortActivityScaleFontList
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityScaleFontList* UFortActivityScaleFontList::GetDefaultObj()
{
	static class UFortActivityScaleFontList* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityScaleFontList*>(UFortActivityScaleFontList::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.FortActivityScalingTextBlock
// (None)

class UClass* UFortActivityScalingTextBlock::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityScalingTextBlock");

	return Clss;
}


// FortActivityScalingTextBlock DiscoveryBrowserUI.Default__FortActivityScalingTextBlock
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityScalingTextBlock* UFortActivityScalingTextBlock::GetDefaultObj()
{
	static class UFortActivityScalingTextBlock* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityScalingTextBlock*>(UFortActivityScalingTextBlock::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.FortActivitySearchView
// (None)

class UClass* UFortActivitySearchView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivitySearchView");

	return Clss;
}


// FortActivitySearchView DiscoveryBrowserUI.Default__FortActivitySearchView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivitySearchView* UFortActivitySearchView::GetDefaultObj()
{
	static class UFortActivitySearchView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivitySearchView*>(UFortActivitySearchView::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivitySearchView.OnActivityValidated
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortActivityValidationResultValidateResult                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivitySearchView::OnActivityValidated(enum class EFortActivityValidationResult ValidateResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivitySearchView", "OnActivityValidated");

	Params::UFortActivitySearchView_OnActivityValidated_Params Parms{};

	Parms.ValidateResult = ValidateResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivitySearchView.OnActivityClear
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivitySearchView::OnActivityClear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivitySearchView", "OnActivityClear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DiscoveryBrowserUI.FortActivitySearchView.HandleTextCommitted
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FText                        InText                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETextCommit             CommitInfo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivitySearchView::HandleTextCommitted(class FText& InText, enum class ETextCommit CommitInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivitySearchView", "HandleTextCommitted");

	Params::UFortActivitySearchView_HandleTextCommitted_Params Parms{};

	Parms.InText = InText;
	Parms.CommitInfo = CommitInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DiscoveryBrowserUI.FortActivitySearchView.HandleTextChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortActivitySearchView::HandleTextChanged(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivitySearchView", "HandleTextChanged");

	Params::UFortActivitySearchView_HandleTextChanged_Params Parms{};

	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class DiscoveryBrowserUI.FortActivitySeasonalBrowserView
// (None)

class UClass* UFortActivitySeasonalBrowserView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivitySeasonalBrowserView");

	return Clss;
}


// FortActivitySeasonalBrowserView DiscoveryBrowserUI.Default__FortActivitySeasonalBrowserView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivitySeasonalBrowserView* UFortActivitySeasonalBrowserView::GetDefaultObj()
{
	static class UFortActivitySeasonalBrowserView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivitySeasonalBrowserView*>(UFortActivitySeasonalBrowserView::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.FortActivityTileDetailsDisplay
// (None)

class UClass* UFortActivityTileDetailsDisplay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityTileDetailsDisplay");

	return Clss;
}


// FortActivityTileDetailsDisplay DiscoveryBrowserUI.Default__FortActivityTileDetailsDisplay
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityTileDetailsDisplay* UFortActivityTileDetailsDisplay::GetDefaultObj()
{
	static class UFortActivityTileDetailsDisplay* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityTileDetailsDisplay*>(UFortActivityTileDetailsDisplay::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnTileActiveSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsTileActive                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityTileDetailsDisplay::OnTileActiveSet(bool bIsTileActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnTileActiveSet");

	Params::UFortActivityTileDetailsDisplay_OnTileActiveSet_Params Parms{};

	Parms.bIsTileActive = bIsTileActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnSocialUsersPlayingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumPlaying                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityTileDetailsDisplay::OnSocialUsersPlayingChanged(int32 NumPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnSocialUsersPlayingChanged");

	Params::UFortActivityTileDetailsDisplay_OnSocialUsersPlayingChanged_Params Parms{};

	Parms.NumPlaying = NumPlaying;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPreviewImageChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsLoading                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    Texture                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityTileDetailsDisplay::OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnPreviewImageChanged");

	Params::UFortActivityTileDetailsDisplay_OnPreviewImageChanged_Params Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPartySizeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              PartySize                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityTileDetailsDisplay::OnPartySizeChanged(int32 PartySize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnPartySizeChanged");

	Params::UFortActivityTileDetailsDisplay_OnPartySizeChanged_Params Parms{};

	Parms.PartySize = PartySize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerPromotedToLeader
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityTileDetailsDisplay::OnLocalPlayerPromotedToLeader()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnLocalPlayerPromotedToLeader");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerDemoted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityTileDetailsDisplay::OnLocalPlayerDemoted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnLocalPlayerDemoted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnIsFavoriteChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsFavorite                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityTileDetailsDisplay::OnIsFavoriteChanged(bool bIsFavorite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnIsFavoriteChanged");

	Params::UFortActivityTileDetailsDisplay_OnIsFavoriteChanged_Params Parms{};

	Parms.bIsFavorite = bIsFavorite;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnDetailsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityTileDetailsDisplay::OnDetailsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnDetailsUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivityUnSelected__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UFortActivityTileDetailsDisplay::OnActivityUnSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnActivityUnSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivitySelected__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UFortActivityTileDetailsDisplay::OnActivitySelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnActivitySelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityFavorited
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityTileDetailsDisplay::IsActivityFavorited()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "IsActivityFavorited");

	Params::UFortActivityTileDetailsDisplay_IsActivityFavorited_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityEpicCreated
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityTileDetailsDisplay::IsActivityEpicCreated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "IsActivityEpicCreated");

	Params::UFortActivityTileDetailsDisplay_IsActivityEpicCreated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetInvalidActivityReason
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortInvalidActivityReasonReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortInvalidActivityReason UFortActivityTileDetailsDisplay::GetInvalidActivityReason()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "GetInvalidActivityReason");

	Params::UFortActivityTileDetailsDisplay_GetInvalidActivityReason_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DiscoveryBrowserUI.FortActivityTileView
// (None)

class UClass* UFortActivityTileView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityTileView");

	return Clss;
}


// FortActivityTileView DiscoveryBrowserUI.Default__FortActivityTileView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityTileView* UFortActivityTileView::GetDefaultObj()
{
	static class UFortActivityTileView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityTileView*>(UFortActivityTileView::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.OverrideMatchmakingUIComponent
// (None)

class UClass* UOverrideMatchmakingUIComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OverrideMatchmakingUIComponent");

	return Clss;
}


// OverrideMatchmakingUIComponent DiscoveryBrowserUI.Default__OverrideMatchmakingUIComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UOverrideMatchmakingUIComponent* UOverrideMatchmakingUIComponent::GetDefaultObj()
{
	static class UOverrideMatchmakingUIComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UOverrideMatchmakingUIComponent*>(UOverrideMatchmakingUIComponent::StaticClass()->DefaultObject);

	return Default;
}

}


