#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CrewUI.BattlePassCrewContentInterface
// (None)

class UClass* IBattlePassCrewContentInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassCrewContentInterface");

	return Clss;
}


// BattlePassCrewContentInterface CrewUI.Default__BattlePassCrewContentInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IBattlePassCrewContentInterface* IBattlePassCrewContentInterface::GetDefaultObj()
{
	static class IBattlePassCrewContentInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IBattlePassCrewContentInterface*>(IBattlePassCrewContentInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class CrewUI.BattlePassCrewPurchaseButton
// (None)

class UClass* UBattlePassCrewPurchaseButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassCrewPurchaseButton");

	return Clss;
}


// BattlePassCrewPurchaseButton CrewUI.Default__BattlePassCrewPurchaseButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UBattlePassCrewPurchaseButton* UBattlePassCrewPurchaseButton::GetDefaultObj()
{
	static class UBattlePassCrewPurchaseButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassCrewPurchaseButton*>(UBattlePassCrewPurchaseButton::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.BattlePassCrewPurchaseButton.OnCurrencyUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassCrewPurchaseButton::OnCurrencyUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassCrewPurchaseButton", "OnCurrencyUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Class CrewUI.BattlePassCrewPurchaseContainer
// (None)

class UClass* UBattlePassCrewPurchaseContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassCrewPurchaseContainer");

	return Clss;
}


// BattlePassCrewPurchaseContainer CrewUI.Default__BattlePassCrewPurchaseContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UBattlePassCrewPurchaseContainer* UBattlePassCrewPurchaseContainer::GetDefaultObj()
{
	static class UBattlePassCrewPurchaseContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassCrewPurchaseContainer*>(UBattlePassCrewPurchaseContainer::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.BattlePassCrewPurchaseContainer.OnTriggerIntroAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanClaimRewards                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassCrewPurchaseContainer::OnTriggerIntroAnimation(bool bCanClaimRewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer", "OnTriggerIntroAnimation");

	Params::UBattlePassCrewPurchaseContainer_OnTriggerIntroAnimation_Params Parms{};

	Parms.bCanClaimRewards = bCanClaimRewards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.BattlePassCrewPurchaseContainer.OnContentStateUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EBattlePassCrewContentStateInState                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInScreenOpened                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassCrewPurchaseContainer::OnContentStateUpdated(enum class EBattlePassCrewContentState InState, bool bInScreenOpened)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer", "OnContentStateUpdated");

	Params::UBattlePassCrewPurchaseContainer_OnContentStateUpdated_Params Parms{};

	Parms.InState = InState;
	Parms.bInScreenOpened = bInScreenOpened;

	UObject::ProcessEvent(Func, &Parms);

}


// Class CrewUI.BattlePassSeasonHeading
// (None)

class UClass* UBattlePassSeasonHeading::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassSeasonHeading");

	return Clss;
}


// BattlePassSeasonHeading CrewUI.Default__BattlePassSeasonHeading
// (Public, ClassDefaultObject, ArchetypeObject)

class UBattlePassSeasonHeading* UBattlePassSeasonHeading::GetDefaultObj()
{
	static class UBattlePassSeasonHeading* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassSeasonHeading*>(UBattlePassSeasonHeading::StaticClass()->DefaultObject);

	return Default;
}


// Class CrewUI.BattlePassPurchaseScreen
// (None)

class UClass* UBattlePassPurchaseScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassPurchaseScreen");

	return Clss;
}


// BattlePassPurchaseScreen CrewUI.Default__BattlePassPurchaseScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UBattlePassPurchaseScreen* UBattlePassPurchaseScreen::GetDefaultObj()
{
	static class UBattlePassPurchaseScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassPurchaseScreen*>(UBattlePassPurchaseScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.BattlePassPurchaseScreen.OnSetScreenInteractable
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInteractable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassPurchaseScreen::OnSetScreenInteractable(bool bInteractable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPurchaseScreen", "OnSetScreenInteractable");

	Params::UBattlePassPurchaseScreen_OnSetScreenInteractable_Params Parms{};

	Parms.bInteractable = bInteractable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.BattlePassPurchaseScreen.OnPurchaseStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EBattlePassPurchaseStateInCurrentState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassPurchaseScreen::OnPurchaseStateChanged(enum class EBattlePassPurchaseState InCurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPurchaseScreen", "OnPurchaseStateChanged");

	Params::UBattlePassPurchaseScreen_OnPurchaseStateChanged_Params Parms{};

	Parms.InCurrentState = InCurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.BattlePassPurchaseScreen.OnPurchaseConfirmed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassPurchaseScreen::OnPurchaseConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPurchaseScreen", "OnPurchaseConfirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Class CrewUI.CrewPurchaseScreen
// (None)

class UClass* UCrewPurchaseScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrewPurchaseScreen");

	return Clss;
}


// CrewPurchaseScreen CrewUI.Default__CrewPurchaseScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrewPurchaseScreen* UCrewPurchaseScreen::GetDefaultObj()
{
	static class UCrewPurchaseScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrewPurchaseScreen*>(UCrewPurchaseScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.CrewPurchaseScreen.OnUpdateVBuckRefundVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewPurchaseScreen::OnUpdateVBuckRefundVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPurchaseScreen", "OnUpdateVBuckRefundVisibility");

	Params::UCrewPurchaseScreen_OnUpdateVBuckRefundVisibility_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPurchaseScreen.OnUpdatePurchaseButtonState
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECrewPurchaseButtonStateButtonState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewPurchaseScreen::OnUpdatePurchaseButtonState(enum class ECrewPurchaseButtonState ButtonState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPurchaseScreen", "OnUpdatePurchaseButtonState");

	Params::UCrewPurchaseScreen_OnUpdatePurchaseButtonState_Params Parms{};

	Parms.ButtonState = ButtonState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPurchaseScreen.OnContainerTabVisibilityUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bTabsVisible                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SpacingAdjustmentForTabs                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewPurchaseScreen::OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPurchaseScreen", "OnContainerTabVisibilityUpdated");

	Params::UCrewPurchaseScreen_OnContainerTabVisibilityUpdated_Params Parms{};

	Parms.bTabsVisible = bTabsVisible;
	Parms.SpacingAdjustmentForTabs = SpacingAdjustmentForTabs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewPurchaseScreen.EndProgress
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCrewPurchaseScreen::EndProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPurchaseScreen", "EndProgress");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CrewUI.CrewPurchaseScreen.BeginProgress
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ProgressLabel                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCrewPurchaseScreen::BeginProgress(class FText& ProgressLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewPurchaseScreen", "BeginProgress");

	Params::UCrewPurchaseScreen_BeginProgress_Params Parms{};

	Parms.ProgressLabel = ProgressLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Class CrewUI.CrewRewardTile
// (None)

class UClass* UCrewRewardTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrewRewardTile");

	return Clss;
}


// CrewRewardTile CrewUI.Default__CrewRewardTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrewRewardTile* UCrewRewardTile::GetDefaultObj()
{
	static class UCrewRewardTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrewRewardTile*>(UCrewRewardTile::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.CrewRewardTile.OnUpdateOwnedState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bOwned                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewRewardTile::OnUpdateOwnedState(bool bOwned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewRewardTile", "OnUpdateOwnedState");

	Params::UCrewRewardTile_OnUpdateOwnedState_Params Parms{};

	Parms.bOwned = bOwned;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrewUI.CrewRewardTile.OnStartingDownloadTileImage
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCrewRewardTile::OnStartingDownloadTileImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewRewardTile", "OnStartingDownloadTileImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CrewUI.CrewRewardTile.OnDownloadTileImageComplete
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewRewardTile::OnDownloadTileImageComplete(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewRewardTile", "OnDownloadTileImageComplete");

	Params::UCrewRewardTile_OnDownloadTileImageComplete_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Class CrewUI.CrewSeasonLaunchScreen
// (None)

class UClass* UCrewSeasonLaunchScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrewSeasonLaunchScreen");

	return Clss;
}


// CrewSeasonLaunchScreen CrewUI.Default__CrewSeasonLaunchScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrewSeasonLaunchScreen* UCrewSeasonLaunchScreen::GetDefaultObj()
{
	static class UCrewSeasonLaunchScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrewSeasonLaunchScreen*>(UCrewSeasonLaunchScreen::StaticClass()->DefaultObject);

	return Default;
}


// Class CrewUI.CrewTileDetails
// (None)

class UClass* UCrewTileDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrewTileDetails");

	return Clss;
}


// CrewTileDetails CrewUI.Default__CrewTileDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrewTileDetails* UCrewTileDetails::GetDefaultObj()
{
	static class UCrewTileDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrewTileDetails*>(UCrewTileDetails::StaticClass()->DefaultObject);

	return Default;
}


// Class CrewUI.CrewTileDetailsTag
// (None)

class UClass* UCrewTileDetailsTag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrewTileDetailsTag");

	return Clss;
}


// CrewTileDetailsTag CrewUI.Default__CrewTileDetailsTag
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrewTileDetailsTag* UCrewTileDetailsTag::GetDefaultObj()
{
	static class UCrewTileDetailsTag* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrewTileDetailsTag*>(UCrewTileDetailsTag::StaticClass()->DefaultObject);

	return Default;
}


// Function CrewUI.CrewTileDetailsTag.OnTagSetup
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECrewDetailsTag         RewardTag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsOwnedTag                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrewTileDetailsTag::OnTagSetup(enum class ECrewDetailsTag RewardTag, bool bIsOwnedTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrewTileDetailsTag", "OnTagSetup");

	Params::UCrewTileDetailsTag_OnTagSetup_Params Parms{};

	Parms.RewardTag = RewardTag;
	Parms.bIsOwnedTag = bIsOwnedTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Class CrewUI.CrewUIGameFeatureAction
// (None)

class UClass* UCrewUIGameFeatureAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrewUIGameFeatureAction");

	return Clss;
}


// CrewUIGameFeatureAction CrewUI.Default__CrewUIGameFeatureAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrewUIGameFeatureAction* UCrewUIGameFeatureAction::GetDefaultObj()
{
	static class UCrewUIGameFeatureAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrewUIGameFeatureAction*>(UCrewUIGameFeatureAction::StaticClass()->DefaultObject);

	return Default;
}

}


