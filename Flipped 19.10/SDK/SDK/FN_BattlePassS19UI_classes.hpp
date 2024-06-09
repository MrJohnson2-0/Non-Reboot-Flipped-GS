#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x488 - 0x438)
// Class BattlePassS19UI.BattlePassLandingPageS19
class UBattlePassLandingPageS19 : public UBattlePassLandingPageBase
{
public:
	class UBattlePassLandingPageButton*          Button_Rewards;                                    // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBattlePassLandingPageButton*          Button_CharacterCustomizer;                        // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBattlePassLandingPageButton*          Button_BonusRewards;                               // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBattlePassLandingPageButton*          Button_Quests;                                     // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBattlePassLandingPageButton*          Button_BuyBattlePass;                              // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBattlePassLandingPageButton*          Button_JoinSubscription;                           // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBattlePassLandingPageButton*          Button_BuyResources;                               // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBattlePassLandingPageButton*          Button_GiftBattlePass;                             // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_139D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaSeasonItemData_BattleStar*      SeasonData_BattleStar;                             // 0x480(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UBattlePassLandingPageS19* GetDefaultObj();

	void OnBattlePassSubscriptionAllowed(bool bSubscriptionAllowed);
	void OnBattlePassOwned();
	void OnBattlePassGiftingAllowed(bool bGiftingAllowed);
};

// 0x98 (0x4B0 - 0x418)
// Class BattlePassS19UI.BattlePassRewardPageS19
class UBattlePassRewardPageS19 : public UBattlePassRewardPageBase
{
public:
	TSubclassOf<class UFortBattlePassRewardGrid> RewardsGridClass;                                  // 0x418(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortPageNavigator*                    PageNavigator;                                     // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassTile*                   FocusedReward;                                     // 0x428(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortBattlePassRewardGrid*>     GridPages;                                         // 0x430(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ERewardPageType                   RewardPageType;                                    // 0x444(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HoldTileTooltip_ClaimedRewardsToHide;              // 0x448(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        HoldTileTooltip_RequiredBattleStarsToShow;         // 0x44C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                ClaimToonAFishTooltip_ClaimCheckTemplateId;        // 0x450(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortBattlePassTutorialTooltipS19*     TutorialTooltip_SecondPageUnlock;                  // 0x460(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassTutorialTooltipS19*     TutorialTooltip_ClaimAllRewards;                   // 0x468(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassTutorialTooltipS19*     TutorialTooltip_HoldTile;                          // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassTutorialTooltipS19*     TutorialTooltip_Fishtoon_ClaimToonAFish;           // 0x478(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassTutorialTooltipS19*     TutorialTooltip_Fishtoon_ExploreToCollectInk;      // 0x480(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassTutorialTooltipS19*     TutorialTooltip_Fishtoon_MustUnlockInkColor;       // 0x488(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassTutorialTooltipS19*     TutorialTooltip_Fishtoon_MustCompleteObjective;    // 0x490(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaSeasonItemData_BattleStar*      SeasonData_BattleStar;                             // 0x498(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBattlePassBulkBuyInputData*           BulkBuyInputData;                                  // 0x4A0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13A8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBattlePassRewardPageS19* GetDefaultObj();

	void OnPageChanged(int32 PageNumber);
	void OnInputMethodChanged(enum class ECommonInputType InputType);
	void OnInitForPageType(enum class ERewardPageType InRewardPageType);
};

// 0x3A8 (0xB18 - 0x770)
// Class BattlePassS19UI.BattlePassScreenS19
class UBattlePassScreenS19 : public UBattlePassScreenBase
{
public:
	TSubclassOf<class UFortBattlePassPurchaseResourcesWidget> ResourcePurchaseScreenClass;                       // 0x770(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13C5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonLegacy*                   Button_Close;                                      // 0x780(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonLegacy*                   Button_CloseMobile;                                // 0x788(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_BulkBuyRewards;                             // 0x790(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonLegacy*                   Button_ToggleViewDetails;                          // 0x798(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_ToggleViewDetails_Mobile;                   // 0x7A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonLegacy*                   Button_ReplayTrailer;                              // 0x7A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_ReplayTrailer_Mobile;                       // 0x7B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonLegacy*                   Button_ShowAbout;                                  // 0x7B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_ShowAbout_Mobile;                           // 0x7C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonLegacy*                   Button_ShowAboutCustomization;                     // 0x7C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_ShowAboutCustomization_Mobile;              // 0x7D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonVisibilitySwitcher*             MobileVisibilitySwitcher;                          // 0x7D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortBattlePassCurrencyPanel*          BattlePassCurrencyPanel;                           // 0x7E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaExclusiveRewardBanner*          AthenaExclusiveRewardBanner;                       // 0x7E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_Description;                                  // 0x7F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_ItemName;                                     // 0x7F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaRewardItemTypeRarityTag*        ItemRewardTag;                                     // 0x800(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_SetDetails;                                   // 0x808(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonVisibilitySwitcher*             Switcher_ContextualButtons;                        // 0x810(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortHoldableButton*                   Button_BuyLevels;                                  // 0x818(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortHoldableButton*                   Button_BuyBattlePass;                              // 0x820(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortHoldableButton*                   Button_ClaimReward;                                // 0x828(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               Tag_RequiresBP;                                    // 0x830(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               Tag_PageLocked;                                    // 0x838(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               Tag_BaseItem;                                      // 0x840(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               Tag_Prerequisite;                                  // 0x848(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               Tag_NotEnough_Currency;                            // 0x850(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               Tag_Cost;                                          // 0x858(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               Tag_Owned;                                         // 0x860(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               Tag_Delayed;                                       // 0x868(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13E6[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaSeasonItemData_BattleStar*      SeasonData_BattleStar;                             // 0x8B8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaSeasonItemEntryBase*            CurrentSelectedEntry;                              // 0x8C0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<enum class EBattlePassView>           SwitcherSubPageTypes;                              // 0x8C8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class UCommonVisibilitySwitcher*             SubPageSwitcher;                                   // 0x8D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13EF[0xC0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   SeasonalBaseCustomizationItem;                     // 0x9A0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasSubscription;                                  // 0x9A8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BattleStarsTooltipHideLevel;                       // 0x9AC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13F2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortBattlePassTutorialTooltipS19*     TutorialTooltip_BattleStars;                       // 0x9B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassTutorialTooltipS19*     TutorialTooltip_StylePoints;                       // 0x9C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13F3[0x150];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBattlePassScreenS19* GetDefaultObj();

	void OverviewShowAnimationFinished();
	void OnTransitionItemDetails(bool bTransitionForward);
	void OnSetPrerequisiteInfo(class FText& Description, int32 OwnedRewards, int32 NeededRewards, bool bShowPrerequisiteLock);
	void OnSetItemPrice(int32 Cost, enum class EBattlePassCurrencyType CurrencyType);
	void OnSetDynamicInput(enum class EBattlePassInputs InputType, class UBattlePassInputData* InputData);
	void OnSetClaimedRewardInfo(int32 OwnedRewards, int32 TotalRewards);
	void OnLevelChanged(int32 Level);
	void OnItemDelayed(const struct FTimespan& Delay);
	void OnInsufficientFunds(enum class EBattlePassCurrencyType CurrencyType);
	void OnBattlePassOwned();
	bool IsSeasonalCustomizationItemOwned();
	void HandleSwitcherVisibilityShown();
	void HandleClaimRewardComplete(bool bSuccess, TArray<class FString>& OfferTemplateIdList);
	struct FTimespan GetQuestPageDelay();
};

// 0x8 (0x4C0 - 0x4B8)
// Class BattlePassS19UI.FortBattlePassCustomSkinPageS19
class UFortBattlePassCustomSkinPageS19 : public UFortBattlePassCustomSkinPageBase
{
public:
	class UFortBattlePassTutorialTooltipS19*     TutorialTooltip_PurchaseStyle;                     // 0x4B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortBattlePassCustomSkinPageS19* GetDefaultObj();

};

// 0x20 (0x2C8 - 0x2A8)
// Class BattlePassS19UI.FortBattlePassResourcesWidgetS19
class UFortBattlePassResourcesWidgetS19 : public UFortBattlePassResourcesWidgetBase
{
public:
	class UCommonTextBlock*                      Text_BattleStarsAmount;                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_StylePointsAmount;                            // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               Border_StylePointsRewardsTag;                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               Border_BattleStarsRewardsTag;                      // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortBattlePassResourcesWidgetS19* GetDefaultObj();

	void OnStylePointsRewardsSet(int32 Rewards);
	void OnBattleStarRewardsSet(int32 Rewards);
};

// 0x10 (0x280 - 0x270)
// Class BattlePassS19UI.FortBattlePassTutorialTooltipS19
class UFortBattlePassTutorialTooltipS19 : public UCommonUserWidget
{
public:
	class UCommonRichTextBlock*                  Text_Tooltip;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1409[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBattlePassTutorialTooltipS19* GetDefaultObj();

	void ShowTooltip();
	void SetText(class FText Text);
	void HideTooltip();
};

}


