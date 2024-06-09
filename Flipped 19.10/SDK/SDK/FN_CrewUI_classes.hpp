#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class CrewUI.BattlePassCrewContentInterface
class IBattlePassCrewContentInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBattlePassCrewContentInterface* GetDefaultObj();

};

// 0x28 (0xED0 - 0xEA8)
// Class CrewUI.BattlePassCrewPurchaseButton
class UBattlePassCrewPurchaseButton : public UCommonButtonBase
{
public:
	enum class EBattlePassPurchaseButtonCurrencyType CurrencyType;                                      // 0xEA8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C23[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_Label;                                        // 0xEB0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_SecondaryLabel;                               // 0xEB8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_FinalCost;                                    // 0xEC0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Container_SecondaryLabel;                          // 0xEC8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UBattlePassCrewPurchaseButton* GetDefaultObj();

	void OnCurrencyUpdated();
};

// 0x78 (0x3A8 - 0x330)
// Class CrewUI.BattlePassCrewPurchaseContainer
class UBattlePassCrewPurchaseContainer : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_2C2D[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CrewUpsellTransitionDelayTime;                     // 0x350(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2C30[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonActivatableWidgetSwitcher*      Switcher_ContentContainer;                         // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBattlePassPurchaseScreen*             BattlePassPurchaseScreen;                          // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      Intro;                                             // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      QuickIntro;                                        // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      CrewBenefitsIntro;                                 // 0x380(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2C35[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBattlePassCrewPurchaseContainer* GetDefaultObj();

	void OnTriggerIntroAnimation(bool bCanClaimRewards);
	void OnContentStateUpdated(enum class EBattlePassCrewContentState InState, bool bInScreenOpened);
};

// 0x8 (0x278 - 0x270)
// Class CrewUI.BattlePassSeasonHeading
class UBattlePassSeasonHeading : public UCommonUserWidget
{
public:
	class UCommonRichTextBlock*                  Text_Season;                                       // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UBattlePassSeasonHeading* GetDefaultObj();

};

// 0x100 (0x470 - 0x370)
// Class CrewUI.BattlePassPurchaseScreen
class UBattlePassPurchaseScreen : public UCMSBackgroundWidget
{
public:
	uint8                                        Pad_2C56[0xA0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonActivatableWidget>  PurchaseCompleteModal;                             // 0x410(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_ToCrew;                                     // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBattlePassCrewPurchaseButton*         Button_Purchase;                                   // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_MoreInfo;                                   // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_GiftBattlePass;                             // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBattlePassCrewPurchaseButton*         Button_ConfirmBase;                                // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBattlePassCrewPurchaseButton*         Button_ConfirmBundle;                              // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBattlePassSeasonHeading*              Heading_Primary;                                   // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBattlePassSeasonHeading*              Heading_Secondary;                                 // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_Disclaimer;                               // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Description;                                  // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonAnimatedSwitcher*               Switcher_PurchaseState;                            // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UBattlePassPurchaseScreen* GetDefaultObj();

	void OnSetScreenInteractable(bool bInteractable);
	void OnPurchaseStateChanged(enum class EBattlePassPurchaseState InCurrentState);
	void OnPurchaseConfirmed();
};

// 0x1B0 (0x520 - 0x370)
// Class CrewUI.CrewPurchaseScreen
class UCrewPurchaseScreen : public UCMSBackgroundWidget
{
public:
	uint8                                        Pad_2C6D[0x88];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bManagementModeEnabled;                            // 0x3F8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C6E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               FocusWidget;                                       // 0x400(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonGroupBase*                ButtonGroup_BenefitsTiles;                         // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortSubscriptionCancellationModal> CancellationInfoModalClass;                        // 0x410(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortSubscriptionPlatformModal> LegalInfoModalClass;                               // 0x438(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortSubscriptionPlatformModal> ResolveIssueModalClass;                            // 0x460(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortSubscriptionPlatformModal> RejoinModalClass;                                  // 0x488(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_ToBattlePass;                               // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBattlePassCrewPurchaseButton*         Button_Purchase;                                   // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBattlePassCrewPurchaseButton*         Button_Rejoin;                                     // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_ResolvePayment;                             // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_WatchTrailer;                               // 0x4D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Terms;                                      // 0x4D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_CancellationInfo;                           // 0x4E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      EntryBox_RecurringRewards;                         // 0x4E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      EntryBox_LimitedTimeRewards;                       // 0x4F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCrewTileDetails*                      Details_CurrentCrewTile;                           // 0x4F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_LimitedTime;                                  // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOverlay*                              Overlay_UserInformation;                           // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_UserInformation;                              // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_CrewDisclaimer;                               // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCrewPurchaseScreen* GetDefaultObj();

	void OnUpdateVBuckRefundVisibility(bool bVisible);
	void OnUpdatePurchaseButtonState(enum class ECrewPurchaseButtonState ButtonState);
	void OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs);
	void EndProgress();
	void BeginProgress(class FText& ProgressLabel);
};

// 0x68 (0xF10 - 0xEA8)
// Class CrewUI.CrewRewardTile
class UCrewRewardTile : public UCommonButtonBase
{
public:
	uint8                                        Pad_2C79[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TileImageStreamoutSeconds;                         // 0xEE8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2C7A[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UImage*                                Image_TileImage;                                   // 0xEF8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_TileLabel;                                    // 0xF00(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2C7B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrewRewardTile* GetDefaultObj();

	void OnUpdateOwnedState(bool bOwned);
	void OnStartingDownloadTileImage();
	void OnDownloadTileImageComplete(class UTexture2D* Texture);
};

// 0xF0 (0x460 - 0x370)
// Class CrewUI.CrewSeasonLaunchScreen
class UCrewSeasonLaunchScreen : public UCMSBackgroundWidget
{
public:
	uint8                                        Pad_2C7D[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UFortSubscriptionPlatformModal> ResolveIssueModalClass;                            // 0x3A8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBattlePassSeasonHeading*              Heading_SeasonInfo;                                // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Description;                                  // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Claim;                                      // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_ResolveIssue;                               // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_GiftBattlePass;                             // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_Disclaimer;                               // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2C7E[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrewSeasonLaunchScreen* GetDefaultObj();

};

// 0x48 (0x2B8 - 0x270)
// Class CrewUI.CrewTileDetails
class UCrewTileDetails : public UCommonUserWidget
{
public:
	uint8                                        Pad_2C80[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_Title;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_Description;                              // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      EntryBox_Tags;                                     // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_MobileMoreInfo;                             // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCrewTileDetails* GetDefaultObj();

};

// 0x8 (0x278 - 0x270)
// Class CrewUI.CrewTileDetailsTag
class UCrewTileDetailsTag : public UCommonUserWidget
{
public:
	class UCommonRichTextBlock*                  Text_Label;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCrewTileDetailsTag* GetDefaultObj();

	void OnTagSetup(enum class ECrewDetailsTag RewardTag, bool bIsOwnedTag);
};

// 0x50 (0x78 - 0x28)
// Class CrewUI.CrewUIGameFeatureAction
class UCrewUIGameFeatureAction : public UFortUIGameFeatureAction
{
public:
	TSoftClassPtr<class UBattlePassCrewPurchaseContainer> BattlePassCrewContainerClass;                      // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortSubscriptionContentContainer> CrewContentContainerClass;                         // 0x50(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCrewUIGameFeatureAction* GetDefaultObj();

};

}


