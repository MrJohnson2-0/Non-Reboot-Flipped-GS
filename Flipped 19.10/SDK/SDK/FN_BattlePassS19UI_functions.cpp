#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class BattlePassS19UI.BattlePassLandingPageS19
// (None)

class UClass* UBattlePassLandingPageS19::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassLandingPageS19");

	return Clss;
}


// BattlePassLandingPageS19 BattlePassS19UI.Default__BattlePassLandingPageS19
// (Public, ClassDefaultObject, ArchetypeObject)

class UBattlePassLandingPageS19* UBattlePassLandingPageS19::GetDefaultObj()
{
	static class UBattlePassLandingPageS19* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassLandingPageS19*>(UBattlePassLandingPageS19::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassS19UI.BattlePassLandingPageS19.OnBattlePassSubscriptionAllowed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bSubscriptionAllowed                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassLandingPageS19::OnBattlePassSubscriptionAllowed(bool bSubscriptionAllowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassLandingPageS19", "OnBattlePassSubscriptionAllowed");

	Params::UBattlePassLandingPageS19_OnBattlePassSubscriptionAllowed_Params Parms{};

	Parms.bSubscriptionAllowed = bSubscriptionAllowed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS19UI.BattlePassLandingPageS19.OnBattlePassOwned
// (Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassLandingPageS19::OnBattlePassOwned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassLandingPageS19", "OnBattlePassOwned");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassS19UI.BattlePassLandingPageS19.OnBattlePassGiftingAllowed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bGiftingAllowed                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassLandingPageS19::OnBattlePassGiftingAllowed(bool bGiftingAllowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassLandingPageS19", "OnBattlePassGiftingAllowed");

	Params::UBattlePassLandingPageS19_OnBattlePassGiftingAllowed_Params Parms{};

	Parms.bGiftingAllowed = bGiftingAllowed;

	UObject::ProcessEvent(Func, &Parms);

}


// Class BattlePassS19UI.BattlePassRewardPageS19
// (None)

class UClass* UBattlePassRewardPageS19::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassRewardPageS19");

	return Clss;
}


// BattlePassRewardPageS19 BattlePassS19UI.Default__BattlePassRewardPageS19
// (Public, ClassDefaultObject, ArchetypeObject)

class UBattlePassRewardPageS19* UBattlePassRewardPageS19::GetDefaultObj()
{
	static class UBattlePassRewardPageS19* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassRewardPageS19*>(UBattlePassRewardPageS19::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassS19UI.BattlePassRewardPageS19.OnPageChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              PageNumber                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassRewardPageS19::OnPageChanged(int32 PageNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassRewardPageS19", "OnPageChanged");

	Params::UBattlePassRewardPageS19_OnPageChanged_Params Parms{};

	Parms.PageNumber = PageNumber;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS19UI.BattlePassRewardPageS19.OnInputMethodChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        InputType                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassRewardPageS19::OnInputMethodChanged(enum class ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassRewardPageS19", "OnInputMethodChanged");

	Params::UBattlePassRewardPageS19_OnInputMethodChanged_Params Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS19UI.BattlePassRewardPageS19.OnInitForPageType
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ERewardPageType         InRewardPageType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassRewardPageS19::OnInitForPageType(enum class ERewardPageType InRewardPageType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassRewardPageS19", "OnInitForPageType");

	Params::UBattlePassRewardPageS19_OnInitForPageType_Params Parms{};

	Parms.InRewardPageType = InRewardPageType;

	UObject::ProcessEvent(Func, &Parms);

}


// Class BattlePassS19UI.BattlePassScreenS19
// (None)

class UClass* UBattlePassScreenS19::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassScreenS19");

	return Clss;
}


// BattlePassScreenS19 BattlePassS19UI.Default__BattlePassScreenS19
// (Public, ClassDefaultObject, ArchetypeObject)

class UBattlePassScreenS19* UBattlePassScreenS19::GetDefaultObj()
{
	static class UBattlePassScreenS19* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassScreenS19*>(UBattlePassScreenS19::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassS19UI.BattlePassScreenS19.OverviewShowAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBattlePassScreenS19::OverviewShowAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS19", "OverviewShowAnimationFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function BattlePassS19UI.BattlePassScreenS19.OnTransitionItemDetails
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bTransitionForward                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS19::OnTransitionItemDetails(bool bTransitionForward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS19", "OnTransitionItemDetails");

	Params::UBattlePassScreenS19_OnTransitionItemDetails_Params Parms{};

	Parms.bTransitionForward = bTransitionForward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS19UI.BattlePassScreenS19.OnSetPrerequisiteInfo
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Description                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              OwnedRewards                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NeededRewards                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShowPrerequisiteLock                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS19::OnSetPrerequisiteInfo(class FText& Description, int32 OwnedRewards, int32 NeededRewards, bool bShowPrerequisiteLock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS19", "OnSetPrerequisiteInfo");

	Params::UBattlePassScreenS19_OnSetPrerequisiteInfo_Params Parms{};

	Parms.Description = Description;
	Parms.OwnedRewards = OwnedRewards;
	Parms.NeededRewards = NeededRewards;
	Parms.bShowPrerequisiteLock = bShowPrerequisiteLock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS19UI.BattlePassScreenS19.OnSetItemPrice
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Cost                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBattlePassCurrencyType CurrencyType                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS19::OnSetItemPrice(int32 Cost, enum class EBattlePassCurrencyType CurrencyType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS19", "OnSetItemPrice");

	Params::UBattlePassScreenS19_OnSetItemPrice_Params Parms{};

	Parms.Cost = Cost;
	Parms.CurrencyType = CurrencyType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS19UI.BattlePassScreenS19.OnSetDynamicInput
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EBattlePassInputs       InputType                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBattlePassInputData*        InputData                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS19::OnSetDynamicInput(enum class EBattlePassInputs InputType, class UBattlePassInputData* InputData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS19", "OnSetDynamicInput");

	Params::UBattlePassScreenS19_OnSetDynamicInput_Params Parms{};

	Parms.InputType = InputType;
	Parms.InputData = InputData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS19UI.BattlePassScreenS19.OnSetClaimedRewardInfo
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              OwnedRewards                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalRewards                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS19::OnSetClaimedRewardInfo(int32 OwnedRewards, int32 TotalRewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS19", "OnSetClaimedRewardInfo");

	Params::UBattlePassScreenS19_OnSetClaimedRewardInfo_Params Parms{};

	Parms.OwnedRewards = OwnedRewards;
	Parms.TotalRewards = TotalRewards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS19UI.BattlePassScreenS19.OnLevelChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS19::OnLevelChanged(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS19", "OnLevelChanged");

	Params::UBattlePassScreenS19_OnLevelChanged_Params Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS19UI.BattlePassScreenS19.OnItemDelayed
// (Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTimespan                   Delay                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS19::OnItemDelayed(const struct FTimespan& Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS19", "OnItemDelayed");

	Params::UBattlePassScreenS19_OnItemDelayed_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS19UI.BattlePassScreenS19.OnInsufficientFunds
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EBattlePassCurrencyType CurrencyType                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS19::OnInsufficientFunds(enum class EBattlePassCurrencyType CurrencyType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS19", "OnInsufficientFunds");

	Params::UBattlePassScreenS19_OnInsufficientFunds_Params Parms{};

	Parms.CurrencyType = CurrencyType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS19UI.BattlePassScreenS19.OnBattlePassOwned
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreenS19::OnBattlePassOwned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS19", "OnBattlePassOwned");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassS19UI.BattlePassScreenS19.IsSeasonalCustomizationItemOwned
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBattlePassScreenS19::IsSeasonalCustomizationItemOwned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS19", "IsSeasonalCustomizationItemOwned");

	Params::UBattlePassScreenS19_IsSeasonalCustomizationItemOwned_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BattlePassS19UI.BattlePassScreenS19.HandleSwitcherVisibilityShown
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBattlePassScreenS19::HandleSwitcherVisibilityShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS19", "HandleSwitcherVisibilityShown");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function BattlePassS19UI.BattlePassScreenS19.HandleClaimRewardComplete
// (Final, Native, Private, HasOutParams)
// Parameters:
// bool                               bSuccess                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              OfferTemplateIdList                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UBattlePassScreenS19::HandleClaimRewardComplete(bool bSuccess, TArray<class FString>& OfferTemplateIdList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS19", "HandleClaimRewardComplete");

	Params::UBattlePassScreenS19_HandleClaimRewardComplete_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.OfferTemplateIdList = OfferTemplateIdList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BattlePassS19UI.BattlePassScreenS19.GetQuestPageDelay
// (Final, Native, Protected, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTimespan UBattlePassScreenS19::GetQuestPageDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS19", "GetQuestPageDelay");

	Params::UBattlePassScreenS19_GetQuestPageDelay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class BattlePassS19UI.FortBattlePassCustomSkinPageS19
// (None)

class UClass* UFortBattlePassCustomSkinPageS19::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassCustomSkinPageS19");

	return Clss;
}


// FortBattlePassCustomSkinPageS19 BattlePassS19UI.Default__FortBattlePassCustomSkinPageS19
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassCustomSkinPageS19* UFortBattlePassCustomSkinPageS19::GetDefaultObj()
{
	static class UFortBattlePassCustomSkinPageS19* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassCustomSkinPageS19*>(UFortBattlePassCustomSkinPageS19::StaticClass()->DefaultObject);

	return Default;
}


// Class BattlePassS19UI.FortBattlePassResourcesWidgetS19
// (None)

class UClass* UFortBattlePassResourcesWidgetS19::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassResourcesWidgetS19");

	return Clss;
}


// FortBattlePassResourcesWidgetS19 BattlePassS19UI.Default__FortBattlePassResourcesWidgetS19
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassResourcesWidgetS19* UFortBattlePassResourcesWidgetS19::GetDefaultObj()
{
	static class UFortBattlePassResourcesWidgetS19* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassResourcesWidgetS19*>(UFortBattlePassResourcesWidgetS19::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassS19UI.FortBattlePassResourcesWidgetS19.OnStylePointsRewardsSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Rewards                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassResourcesWidgetS19::OnStylePointsRewardsSet(int32 Rewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassResourcesWidgetS19", "OnStylePointsRewardsSet");

	Params::UFortBattlePassResourcesWidgetS19_OnStylePointsRewardsSet_Params Parms{};

	Parms.Rewards = Rewards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS19UI.FortBattlePassResourcesWidgetS19.OnBattleStarRewardsSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Rewards                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassResourcesWidgetS19::OnBattleStarRewardsSet(int32 Rewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassResourcesWidgetS19", "OnBattleStarRewardsSet");

	Params::UFortBattlePassResourcesWidgetS19_OnBattleStarRewardsSet_Params Parms{};

	Parms.Rewards = Rewards;

	UObject::ProcessEvent(Func, &Parms);

}


// Class BattlePassS19UI.FortBattlePassTutorialTooltipS19
// (None)

class UClass* UFortBattlePassTutorialTooltipS19::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassTutorialTooltipS19");

	return Clss;
}


// FortBattlePassTutorialTooltipS19 BattlePassS19UI.Default__FortBattlePassTutorialTooltipS19
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassTutorialTooltipS19* UFortBattlePassTutorialTooltipS19::GetDefaultObj()
{
	static class UFortBattlePassTutorialTooltipS19* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassTutorialTooltipS19*>(UFortBattlePassTutorialTooltipS19::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassS19UI.FortBattlePassTutorialTooltipS19.ShowTooltip
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortBattlePassTutorialTooltipS19::ShowTooltip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTutorialTooltipS19", "ShowTooltip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassS19UI.FortBattlePassTutorialTooltipS19.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        Text                                                             (Parm, NativeAccessSpecifierPublic)

void UFortBattlePassTutorialTooltipS19::SetText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTutorialTooltipS19", "SetText");

	Params::UFortBattlePassTutorialTooltipS19_SetText_Params Parms{};

	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BattlePassS19UI.FortBattlePassTutorialTooltipS19.HideTooltip
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortBattlePassTutorialTooltipS19::HideTooltip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTutorialTooltipS19", "HideTooltip");



	UObject::ProcessEvent(Func, nullptr);

}

}


