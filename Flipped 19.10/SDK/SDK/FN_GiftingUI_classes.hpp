#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x358 - 0x330)
// Class GiftingUI.AthenaGiftConfirmedPanel
class UAthenaGiftConfirmedPanel : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_3669[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class URichTextBlock*                        Text_RecipientInfo;                                // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_Back;                                       // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaGiftConfirmedPanel* GetDefaultObj();

};

// 0x158 (0x488 - 0x330)
// Class GiftingUI.AthenaGiftingConfirmationScreen
class UAthenaGiftingConfirmationScreen : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_366F[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStoreFrontOfferInfo*              PresentedGiftableOfferInfo;                        // 0x360(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortStoreFrontOfferInfo*              PresentedOptionalTokenOfferInfo;                   // 0x368(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3670[0xBC];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinGiftSubmissionDelay;                            // 0x42C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxGiftSubmissionDelay;                            // 0x430(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3671[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonLegacy*                   Button_WrapOptions;                                // 0x448(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_Back;                                       // 0x450(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_MobileClose;                                // 0x458(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_MtxWallet;                                  // 0x460(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaGiftingPurchasePanel*           Panel_GiftingPurchase;                             // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaGiftingWrapOptionsPanel*        Panel_WrapOptions;                                 // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaGiftConfirmedPanel*             Panel_GiftConfirmed;                               // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaGiftingErrorsPanel*             Panel_GiftingErrors;                               // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaGiftingConfirmationScreen* GetDefaultObj();

	void OnPresentationModeChanged(enum class EGiftingPresentationMode NewMode);
	void HandleTokenOfferPurchaseComplete(bool bSuccess, TArray<struct FPurchasedItemInfo>& PurchasedItems);
	void HandleGiftSent(bool bSuccess, TArray<class FString>& IneligibleAccounts, TArray<class FString>& ErrorCodes);
	void Dismiss();
};

// 0x60 (0x390 - 0x330)
// Class GiftingUI.AthenaGiftingErrorsPanel
class UAthenaGiftingErrorsPanel : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_3673[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class URichTextBlock*                        Text_RecipientInfo;                                // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URichTextBlock*                        Text_Title;                                        // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_MobileClose;                                // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_Back;                                       // 0x378(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_Continue;                                   // 0x380(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTileView*                             TileView_Items;                                    // 0x388(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaGiftingErrorsPanel* GetDefaultObj();

	void UpdateGiftEligibility(bool bStillGiftable);
};

// 0x20 (0x290 - 0x270)
// Class GiftingUI.AthenaGiftingPriceWidget
class UAthenaGiftingPriceWidget : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      Text_RealMoneyPrice;                               // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_FinalPrice;                                   // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RegularPrice;                                 // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Overlay_SalePrice;                                 // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaGiftingPriceWidget* GetDefaultObj();

	void SetPresentationMode(enum class EGiftingPricePresentationMode Mode);
};

// 0x18 (0xF10 - 0xEF8)
// Class GiftingUI.AthenaGiftingPurchaseButton
class UAthenaGiftingPurchaseButton : public UCommonButtonLegacy
{
public:
	class UAthenaGiftingPriceWidget*             Widget_Price;                                      // 0xEF8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Title;                                        // 0xF00(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_367D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaGiftingPurchaseButton* GetDefaultObj();

};

// 0x48 (0x378 - 0x330)
// Class GiftingUI.AthenaGiftingPurchasePanel
class UAthenaGiftingPurchasePanel : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_3682[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaGiftingPurchaseButton*          Button_PurchaseGift;                               // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortSocialAvatarIcon*                 Avatar_MemberIcon;                                 // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_SocialNameInfo;                               // 0x358(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ItemsCount;                                   // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_OfferName;                                    // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTileView*                             TileView_Items;                                    // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaGiftingPurchasePanel* GetDefaultObj();

	void PlayIntroAnimation();
};

// 0x1E0 (0x7B8 - 0x5D8)
// Class GiftingUI.AthenaGiftingScreen
class UAthenaGiftingScreen : public UFortItemPreviewScreen
{
public:
	uint8                                        Pad_3692[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGiftingUserSearchWidget*          SearchWidget_SocialSearchWidget;                   // 0x5E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortGiftingSocialUserListView*        ListView_Recipients;                               // 0x5E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTileView*                             TileView_Items;                                    // 0x5F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Back;                                       // 0x5F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_MobileClose;                                // 0x600(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_GiftingPolicy;                              // 0x608(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_CameraControl;                              // 0x610(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_OfferName;                                    // 0x618(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_VBucksOffCount;                               // 0x620(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ShownItemIndex;                               // 0x628(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  Text_NoContent;                                    // 0x630(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_OfferItemOwnedCount;                      // 0x638(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOverlay*                              Container_VBucksOffViolator;                       // 0x640(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_GiftCount;                                // 0x648(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaGiftingPriceWidget*             Widget_Price;                                      // 0x650(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaLockerItemInfo*                 Widget_ItemInfo;                                   // 0x658(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      EntryBox_FilterTabs;                               // 0x660(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActionWidget*                   ActionWidget_FilterTabsPrevious;                   // 0x668(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActionWidget*                   ActionWidget_FilterTabsNext;                       // 0x670(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaGiftingConfirmationScreen*      ActivatableWidget_GiftingConfirmation;             // 0x678(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ItemCyclingInterval;                               // 0x680(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3699[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   FilterTabsPreviousAction;                          // 0x688(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   FilterTabsNextAction;                              // 0x698(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)
	class FText                                  RegularGiftingPolicy;                              // 0x6A8(0x18)(Edit, NativeAccessSpecifierPrivate)
	class FText                                  BattlePassGiftingPolicy;                           // 0x6C0(0x18)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_369C[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UCommonButtonLegacy*, enum class EFilterType> FilterMap;                                         // 0x738(0x50)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UCommonButtonGroupLegacy*              FilterGroup;                                       // 0x788(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortItemDefinition*>           ItemDefinitions;                                   // 0x790(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class UFortItemDefinition*                   PresentedItemDefinition;                           // 0x7A0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortStoreFrontOfferInfo*              GiftableOfferInfo;                                 // 0x7A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortStoreFrontOfferInfo*              OptionalTokenOfferInfo;                            // 0x7B0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaGiftingScreen* GetDefaultObj();

	void OnShowSearchWarningText(bool bShow);
	void OnShownItemChanged();
	void OnSetupFilterTabButton(class UCommonButtonLegacy* Button, enum class EFilterType FilterType);
	void OnPresentationModeChanged(enum class EGiftingScreenPresentationMode Mode);
	void OnPartyListUpdated(bool bEmpty);
	void OnFriendSelectionChanged();
	void OnFilterChanged(enum class EFilterType FilterType);
};

// 0x68 (0x398 - 0x330)
// Class GiftingUI.AthenaGiftingWrapOptionsPanel
class UAthenaGiftingWrapOptionsPanel : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_36A1[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class UFortGiftBoxItemDefinition>> GiftBoxes;                                         // 0x358(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UFortGiftBoxItemDefinition*>    GiftBoxItemDefs;                                   // 0x368(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_36A3[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonLegacy*                   Button_ConfirmWrap;                                // 0x388(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTileView*                             TileView_WrapOptions;                              // 0x390(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaGiftingWrapOptionsPanel* GetDefaultObj();

};

// 0xF0 (0x1000 - 0xF10)
// Class GiftingUI.FortGiftingSocialUserListEntry
class UFortGiftingSocialUserListEntry : public USocialListEntryBase
{
public:
	uint8                                        Pad_36AA[0xC0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSocialAvatarIcon*                 Avatar_MemberIcon;                                 // 0xFD0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USocialNameTextBlock*                  Text_SocialName;                                   // 0xFD8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_EligibilityStatus;                        // 0xFE0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_OwnedItems;                               // 0xFE8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaGiftingPriceWidget*             Widget_Price;                                      // 0xFF0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_36AB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortGiftingSocialUserListEntry* GetDefaultObj();

	void SetPresentationMode(enum class ERecipientPresentationMode Mode);
	void OnUserItemSet();
	void OnRecipientStatusUpdated();
	void BP_OnTouchSelectionConfirmed();
	void BP_OnHighlightedStateChanged(bool bInIsHighlighted, bool bPlayAnimation);
};

// 0xF8 (0x3F8 - 0x300)
// Class GiftingUI.FortGiftingSocialUserListView
class UFortGiftingSocialUserListView : public USocialUserListViewBase
{
public:
	float                                        RefreshRecipientStatusDelay;                       // 0x300(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_36AC[0xF4];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortGiftingSocialUserListView* GetDefaultObj();

};

// 0x48 (0x2B8 - 0x270)
// Class GiftingUI.FortGiftingUserSearchWidget
class UFortGiftingUserSearchWidget : public UCommonUserWidget
{
public:
	class UEditableText*                         EditableText_SearchFriends;                        // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_ClearQuery;                                 // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_SubmitQuery;                                // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_36B8[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortGiftingUserSearchWidget* GetDefaultObj();

	void OnSearchCommit(bool bSearchStringShort);
	void HandleSearchFriendsTextEntered(class FText& Text, enum class ETextCommit CommitMethod);
	void HandleSearchFriendsTextChanged(class FText& Text);
};

// 0x18 (0xF10 - 0xEF8)
// Class GiftingUI.FortGiftingWrapOptionListEntry
class UFortGiftingWrapOptionListEntry : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_36BA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGiftBoxItemDefinition*            GiftBoxDefinition;                                 // 0xF00(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonLazyImage*                      Image_Gift;                                        // 0xF08(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortGiftingWrapOptionListEntry* GetDefaultObj();

};

// 0x28 (0x4F0 - 0x4C8)
// Class GiftingUI.FortGiftingData
class UFortGiftingData : public UFortGameFeatureData
{
public:
	TSoftClassPtr<class UAthenaGiftingScreen>    GiftingScreenClass;                                // 0x4C8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortGiftingData* GetDefaultObj();

};

}


