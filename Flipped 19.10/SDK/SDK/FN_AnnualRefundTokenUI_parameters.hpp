#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function AnnualRefundTokenUI.FortAnnualRefundTicket.OnUpdatePendingState
struct UFortAnnualRefundTicket_OnUpdatePendingState_Params
{
public:
	bool                                         bIsPending;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AnnualRefundTokenUI.FortAnnualRefundTicket.OnUpdateAvailableState
struct UFortAnnualRefundTicket_OnUpdateAvailableState_Params
{
public:
	bool                                         bIsAvailable;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.UpdateItemList
struct UFortPurchaseHistoryEntry_UpdateItemList_Params
{
public:
	TArray<class UFortCosmeticItemCard*>         ItemCards;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.SetupItemCard
struct UFortPurchaseHistoryEntry_SetupItemCard_Params
{
public:
	class UFortCosmeticItemCard*                 ItemCard;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItem*                             Item;                                              // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.SetPurchaseText
struct UFortPurchaseHistoryEntry_SetPurchaseText_Params
{
public:
	class FText                                  PurchaseText;                                      // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bHasBeenRefunded;                                  // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x3 - 0x0)
// Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.OnSetHistory
struct UFortPurchaseHistoryEntry_OnSetHistory_Params
{
public:
	bool                                         bHasBeenRefunded;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTokenlessRefund;                                // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayerHasTokens;                                  // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.UpdateItemList
struct UFortPurchaseHistoryScreen_UpdateItemList_Params
{
public:
	TArray<class UCommonTextBlock*>              ItemsToReturn;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnPopulateView
struct UFortPurchaseHistoryScreen_OnPopulateView_Params
{
public:
	enum class EPurchaseReturnStep               CurrentStep;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnOpenSubmitRequest
struct UFortPurchaseHistoryScreen_OnOpenSubmitRequest_Params
{
public:
	bool                                         bIsSelectionTokenlessRefundable;                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnItemRefresh
struct UFortPurchaseHistoryScreen_OnItemRefresh_Params
{
public:
	struct FMtxPurchaseHistory                   PurchaseHistory;                                   // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.HandleTabButtonClicked
struct UFortPurchaseHistoryScreen_HandleTabButtonClicked_Params
{
public:
	enum class EPurchaseReturnStep               ClickedStep;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.GetCurrentStep
struct UFortPurchaseHistoryScreen_GetCurrentStep_Params
{
public:
	enum class EPurchaseReturnStep               ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


