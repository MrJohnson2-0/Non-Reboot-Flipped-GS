#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AnnualRefundTokenUI.FortAnnualRefundTicket
// (None)

class UClass* UFortAnnualRefundTicket::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAnnualRefundTicket");

	return Clss;
}


// FortAnnualRefundTicket AnnualRefundTokenUI.Default__FortAnnualRefundTicket
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAnnualRefundTicket* UFortAnnualRefundTicket::GetDefaultObj()
{
	static class UFortAnnualRefundTicket* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAnnualRefundTicket*>(UFortAnnualRefundTicket::StaticClass()->DefaultObject);

	return Default;
}


// Function AnnualRefundTokenUI.FortAnnualRefundTicket.OnUpdatePendingState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsPending                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAnnualRefundTicket::OnUpdatePendingState(bool bIsPending)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAnnualRefundTicket", "OnUpdatePendingState");

	Params::UFortAnnualRefundTicket_OnUpdatePendingState_Params Parms{};

	Parms.bIsPending = bIsPending;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortAnnualRefundTicket.OnUpdateAvailableState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsAvailable                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAnnualRefundTicket::OnUpdateAvailableState(bool bIsAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAnnualRefundTicket", "OnUpdateAvailableState");

	Params::UFortAnnualRefundTicket_OnUpdateAvailableState_Params Parms{};

	Parms.bIsAvailable = bIsAvailable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortAnnualRefundTicket.OnPlayLockingAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAnnualRefundTicket::OnPlayLockingAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAnnualRefundTicket", "OnPlayLockingAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Class AnnualRefundTokenUI.FortAnnualRefundTokenData
// (None)

class UClass* UFortAnnualRefundTokenData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAnnualRefundTokenData");

	return Clss;
}


// FortAnnualRefundTokenData AnnualRefundTokenUI.Default__FortAnnualRefundTokenData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAnnualRefundTokenData* UFortAnnualRefundTokenData::GetDefaultObj()
{
	static class UFortAnnualRefundTokenData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAnnualRefundTokenData*>(UFortAnnualRefundTokenData::StaticClass()->DefaultObject);

	return Default;
}


// Class AnnualRefundTokenUI.FortPurchaseHistoryEntry
// (None)

class UClass* UFortPurchaseHistoryEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPurchaseHistoryEntry");

	return Clss;
}


// FortPurchaseHistoryEntry AnnualRefundTokenUI.Default__FortPurchaseHistoryEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPurchaseHistoryEntry* UFortPurchaseHistoryEntry::GetDefaultObj()
{
	static class UFortPurchaseHistoryEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPurchaseHistoryEntry*>(UFortPurchaseHistoryEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.UpdateItemList
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UFortCosmeticItemCard*>ItemCards                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortPurchaseHistoryEntry::UpdateItemList(TArray<class UFortCosmeticItemCard*>& ItemCards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryEntry", "UpdateItemList");

	Params::UFortPurchaseHistoryEntry_UpdateItemList_Params Parms{};

	Parms.ItemCards = ItemCards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.SetupItemCard
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCosmeticItemCard*       ItemCard                                                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItem*                   Item                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPurchaseHistoryEntry::SetupItemCard(class UFortCosmeticItemCard* ItemCard, class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryEntry", "SetupItemCard");

	Params::UFortPurchaseHistoryEntry_SetupItemCard_Params Parms{};

	Parms.ItemCard = ItemCard;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.SetPurchaseText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        PurchaseText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bHasBeenRefunded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPurchaseHistoryEntry::SetPurchaseText(class FText& PurchaseText, bool bHasBeenRefunded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryEntry", "SetPurchaseText");

	Params::UFortPurchaseHistoryEntry_SetPurchaseText_Params Parms{};

	Parms.PurchaseText = PurchaseText;
	Parms.bHasBeenRefunded = bHasBeenRefunded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.OnSetHistory
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bHasBeenRefunded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsTokenlessRefund                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPlayerHasTokens                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPurchaseHistoryEntry::OnSetHistory(bool bHasBeenRefunded, bool bIsTokenlessRefund, bool bPlayerHasTokens)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryEntry", "OnSetHistory");

	Params::UFortPurchaseHistoryEntry_OnSetHistory_Params Parms{};

	Parms.bHasBeenRefunded = bHasBeenRefunded;
	Parms.bIsTokenlessRefund = bIsTokenlessRefund;
	Parms.bPlayerHasTokens = bPlayerHasTokens;

	UObject::ProcessEvent(Func, &Parms);

}


// Class AnnualRefundTokenUI.FortPurchaseHistoryListView
// (None)

class UClass* UFortPurchaseHistoryListView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPurchaseHistoryListView");

	return Clss;
}


// FortPurchaseHistoryListView AnnualRefundTokenUI.Default__FortPurchaseHistoryListView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPurchaseHistoryListView* UFortPurchaseHistoryListView::GetDefaultObj()
{
	static class UFortPurchaseHistoryListView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPurchaseHistoryListView*>(UFortPurchaseHistoryListView::StaticClass()->DefaultObject);

	return Default;
}


// Class AnnualRefundTokenUI.ReturnReasonDataWrapper
// (None)

class UClass* UReturnReasonDataWrapper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReturnReasonDataWrapper");

	return Clss;
}


// ReturnReasonDataWrapper AnnualRefundTokenUI.Default__ReturnReasonDataWrapper
// (Public, ClassDefaultObject, ArchetypeObject)

class UReturnReasonDataWrapper* UReturnReasonDataWrapper::GetDefaultObj()
{
	static class UReturnReasonDataWrapper* Default = nullptr;

	if (!Default)
		Default = static_cast<UReturnReasonDataWrapper*>(UReturnReasonDataWrapper::StaticClass()->DefaultObject);

	return Default;
}


// Class AnnualRefundTokenUI.FortPurchaseHistoryScreen
// (None)

class UClass* UFortPurchaseHistoryScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPurchaseHistoryScreen");

	return Clss;
}


// FortPurchaseHistoryScreen AnnualRefundTokenUI.Default__FortPurchaseHistoryScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPurchaseHistoryScreen* UFortPurchaseHistoryScreen::GetDefaultObj()
{
	static class UFortPurchaseHistoryScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPurchaseHistoryScreen*>(UFortPurchaseHistoryScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.UpdateItemList
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UCommonTextBlock*>    ItemsToReturn                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortPurchaseHistoryScreen::UpdateItemList(TArray<class UCommonTextBlock*>& ItemsToReturn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryScreen", "UpdateItemList");

	Params::UFortPurchaseHistoryScreen_UpdateItemList_Params Parms{};

	Parms.ItemsToReturn = ItemsToReturn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnPopulateView
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EPurchaseReturnStep     CurrentStep                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPurchaseHistoryScreen::OnPopulateView(enum class EPurchaseReturnStep CurrentStep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryScreen", "OnPopulateView");

	Params::UFortPurchaseHistoryScreen_OnPopulateView_Params Parms{};

	Parms.CurrentStep = CurrentStep;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnOpenSubmitRequest
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelectionTokenlessRefundable                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPurchaseHistoryScreen::OnOpenSubmitRequest(bool bIsSelectionTokenlessRefundable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryScreen", "OnOpenSubmitRequest");

	Params::UFortPurchaseHistoryScreen_OnOpenSubmitRequest_Params Parms{};

	Parms.bIsSelectionTokenlessRefundable = bIsSelectionTokenlessRefundable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnNoPurchasesAvailable
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPurchaseHistoryScreen::OnNoPurchasesAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryScreen", "OnNoPurchasesAvailable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnItemRefresh
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FMtxPurchaseHistory         PurchaseHistory                                                  (Parm, NativeAccessSpecifierPublic)

void UFortPurchaseHistoryScreen::OnItemRefresh(const struct FMtxPurchaseHistory& PurchaseHistory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryScreen", "OnItemRefresh");

	Params::UFortPurchaseHistoryScreen_OnItemRefresh_Params Parms{};

	Parms.PurchaseHistory = PurchaseHistory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnEndRefundSubmission
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPurchaseHistoryScreen::OnEndRefundSubmission()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryScreen", "OnEndRefundSubmission");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnBeginRefundSubmission
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPurchaseHistoryScreen::OnBeginRefundSubmission()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryScreen", "OnBeginRefundSubmission");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.HandleTabButtonClicked
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// enum class EPurchaseReturnStep     ClickedStep                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPurchaseHistoryScreen::HandleTabButtonClicked(enum class EPurchaseReturnStep ClickedStep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryScreen", "HandleTabButtonClicked");

	Params::UFortPurchaseHistoryScreen_HandleTabButtonClicked_Params Parms{};

	Parms.ClickedStep = ClickedStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.HandlePreviousStepAction
// (Final, Native, Private, BlueprintCallable)
// Parameters:

void UFortPurchaseHistoryScreen::HandlePreviousStepAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryScreen", "HandlePreviousStepAction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.GetCurrentStep
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EPurchaseReturnStep     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPurchaseReturnStep UFortPurchaseHistoryScreen::GetCurrentStep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryScreen", "GetCurrentStep");

	Params::UFortPurchaseHistoryScreen_GetCurrentStep_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AnnualRefundTokenUI.FortRefundConfirmation
// (None)

class UClass* UFortRefundConfirmation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortRefundConfirmation");

	return Clss;
}


// FortRefundConfirmation AnnualRefundTokenUI.Default__FortRefundConfirmation
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortRefundConfirmation* UFortRefundConfirmation::GetDefaultObj()
{
	static class UFortRefundConfirmation* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortRefundConfirmation*>(UFortRefundConfirmation::StaticClass()->DefaultObject);

	return Default;
}


// Class AnnualRefundTokenUI.FortReturnReasonEntry
// (None)

class UClass* UFortReturnReasonEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortReturnReasonEntry");

	return Clss;
}


// FortReturnReasonEntry AnnualRefundTokenUI.Default__FortReturnReasonEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortReturnReasonEntry* UFortReturnReasonEntry::GetDefaultObj()
{
	static class UFortReturnReasonEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortReturnReasonEntry*>(UFortReturnReasonEntry::StaticClass()->DefaultObject);

	return Default;
}

}


