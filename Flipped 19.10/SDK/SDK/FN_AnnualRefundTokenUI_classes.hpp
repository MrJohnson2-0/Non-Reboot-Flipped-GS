#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x250 - 0x248)
// Class AnnualRefundTokenUI.FortAnnualRefundTicket
class UFortAnnualRefundTicket : public UUserWidget
{
public:
	class UCommonTextBlock*                      Text_AvailableDate;                                // 0x248(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAnnualRefundTicket* GetDefaultObj();

	void OnUpdatePendingState(bool bIsPending);
	void OnUpdateAvailableState(bool bIsAvailable);
	void OnPlayLockingAnimation();
};

// 0x28 (0x4F0 - 0x4C8)
// Class AnnualRefundTokenUI.FortAnnualRefundTokenData
class UFortAnnualRefundTokenData : public UFortGameFeatureData
{
public:
	TSoftClassPtr<class UFortPurchaseHistoryScreen> PurchaseHistoryScreenClass;                        // 0x4C8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortAnnualRefundTokenData* GetDefaultObj();

};

// 0x38 (0xEE0 - 0xEA8)
// Class AnnualRefundTokenUI.FortPurchaseHistoryEntry
class UFortPurchaseHistoryEntry : public UCommonButtonBase
{
public:
	uint8                                        Pad_23[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortCosmeticItemCard>     ItemCardClass;                                     // 0xEB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CardWidthOverride;                                 // 0xEB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_Name;                                         // 0xEC0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FString>                        LootEntryItemTypesToExclude;                       // 0xEC8(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	uint8                                        Pad_26[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPurchaseHistoryEntry* GetDefaultObj();

	void UpdateItemList(TArray<class UFortCosmeticItemCard*>& ItemCards);
	void SetupItemCard(class UFortCosmeticItemCard* ItemCard, class UFortItem* Item);
	void SetPurchaseText(class FText& PurchaseText, bool bHasBeenRefunded);
	void OnSetHistory(bool bHasBeenRefunded, bool bIsTokenlessRefund, bool bPlayerHasTokens);
};

// 0xE0 (0x2F8 - 0x218)
// Class AnnualRefundTokenUI.FortPurchaseHistoryListView
class UFortPurchaseHistoryListView : public UListViewBase
{
public:
	uint8                                        Pad_27[0xE0];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPurchaseHistoryListView* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class AnnualRefundTokenUI.ReturnReasonDataWrapper
class UReturnReasonDataWrapper : public UObject
{
public:
	uint8                                        Pad_28[0x18];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UReturnReasonDataWrapper* GetDefaultObj();

};

// 0x130 (0x460 - 0x330)
// Class AnnualRefundTokenUI.FortPurchaseHistoryScreen
class UFortPurchaseHistoryScreen : public UCommonActivatableWidget
{
public:
	struct FDataTableRowHandle                   BackAction;                                        // 0x330(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortRefundConfirmation>   RefundConfirmationClass;                           // 0x340(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonGroupBase*                TabButtonGroup;                                    // 0x348(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonActivatableWidgetSwitcher*      Switcher_ItemList;                                 // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinRefundSubmissionDelay;                          // 0x358(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxRefundSubmissionDelay;                          // 0x35C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FText>                          ReturnReasons;                                     // 0x360(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UReturnReasonDataWrapper*>      WrapperArray;                                      // 0x370(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2B[0x10];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortItemDefinition*>           SelectedItemDefs;                                  // 0x390(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2C[0x40];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPurchaseHistoryListView*          ListView_Purchases;                                // 0x3E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonListView*                       ListView_Reasons;                                  // 0x3E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_RequestRefund;                              // 0x3F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_CloseMobile;                                // 0x3F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_PostApproval;                               // 0x400(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Desc;                                         // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RefundCount;                                  // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ResultTitle;                                  // 0x418(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ResultDesc;                                   // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ResultMtxMsg;                                 // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RefundValue;                                  // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_WarningMsg;                               // 0x438(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScrollBox*                            ScrollBox_ItemsToReturn;                           // 0x440(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAnnualRefundTicket*               RefundTicket_Left;                                 // 0x448(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAnnualRefundTicket*               RefundTicket_Center;                               // 0x450(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAnnualRefundTicket*               RefundTicket_Right;                                // 0x458(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortPurchaseHistoryScreen* GetDefaultObj();

	void UpdateItemList(TArray<class UCommonTextBlock*>& ItemsToReturn);
	void OnPopulateView(enum class EPurchaseReturnStep CurrentStep);
	void OnOpenSubmitRequest(bool bIsSelectionTokenlessRefundable);
	void OnNoPurchasesAvailable();
	void OnItemRefresh(const struct FMtxPurchaseHistory& PurchaseHistory);
	void OnEndRefundSubmission();
	void OnBeginRefundSubmission();
	void HandleTabButtonClicked(enum class EPurchaseReturnStep ClickedStep);
	void HandlePreviousStepAction();
	enum class EPurchaseReturnStep GetCurrentStep();
};

// 0x58 (0x388 - 0x330)
// Class AnnualRefundTokenUI.FortRefundConfirmation
class UFortRefundConfirmation : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_31[0x10];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_RefundsRemaining;                             // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RefundCount;                                  // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_AreYouSure;                                   // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Yes;                                        // 0x358(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_No;                                         // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_CloseMobile;                                // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAnnualRefundTicket*               RefundTicket_Left;                                 // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAnnualRefundTicket*               RefundTicket_Center;                               // 0x378(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAnnualRefundTicket*               RefundTicket_Right;                                // 0x380(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortRefundConfirmation* GetDefaultObj();

};

// 0x18 (0xEC0 - 0xEA8)
// Class AnnualRefundTokenUI.FortReturnReasonEntry
class UFortReturnReasonEntry : public UCommonButtonBase
{
public:
	uint8                                        Pad_34[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               InternalData;                                      // 0xEB0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Name;                                         // 0xEB8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortReturnReasonEntry* GetDefaultObj();

};

}


