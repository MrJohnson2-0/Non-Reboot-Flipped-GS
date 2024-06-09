#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x438 - 0x330)
// Class BattlePassBase.BattlePassLandingPageBase
class UBattlePassLandingPageBase : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_D02[0xF0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattlePassLandingPageButton*          LastHoveredPageButton;                             // 0x420(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D03[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBattlePassLandingPageBase* GetDefaultObj();

};

// 0x98 (0xF40 - 0xEA8)
// Class BattlePassBase.BattlePassLandingPageButton
class UBattlePassLandingPageButton : public UCommonButtonBase
{
public:
	enum class EBattlePassView                   SubPageType;                                       // 0xEA8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBattlePassFeatures               FeatureType;                                       // 0xEA9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D0C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBattlePassLandingPageEntryPreviewInfo PreviewInfo;                                       // 0xEB0(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UFortBangWrapper_NUI*                  BangWrapper;                                       // 0xEF0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUsesTelemetry;                                    // 0xEF8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D0E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             Telemetry_Size;                                    // 0xEFC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FIntPoint                             Telemetry_Position;                                // 0xF04(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D10[0x34];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBattlePassLandingPageButton* GetDefaultObj();

	void OnSubscriptionTextureLoaded(class UTexture2D* Texture);
	void OnSubscriptionOwnershipUpdated(bool bOwnsSubsciption);
};

// 0xE8 (0x418 - 0x330)
// Class BattlePassBase.BattlePassRewardPageBase
class UBattlePassRewardPageBase : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_D14[0xE8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBattlePassRewardPageBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class BattlePassBase.BattlePassSubPageInterface
class IBattlePassSubPageInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBattlePassSubPageInterface* GetDefaultObj();

	void OnEnterSubPage();
};

// 0x78 (0xA0 - 0x28)
// Class BattlePassBase.BattlePassUIGameFeatureAction
class UBattlePassUIGameFeatureAction : public UFortUIGameFeatureAction
{
public:
	TSoftClassPtr<class UBattlePassScreenBase>   BattlePassScreenClass;                             // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortGlobalSeasonResourceWidget> BattlePassResourceWidgetClass;                     // 0x50(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonActivatableWidget> BattlePassInfoModalClass;                          // 0x78(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UBattlePassUIGameFeatureAction* GetDefaultObj();

};

// 0x168 (0x498 - 0x330)
// Class BattlePassBase.FortBattlePassBulkBuyPageBase
class UFortBattlePassBulkBuyPageBase : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_DA2[0xE8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     Button_Addition;                                   // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_Subtraction;                                // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicEntryBox*                      DynamicEntryBox_TilesEntries;                      // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonVisibilitySwitcher*             Switcher_BottomButtons;                            // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortHoldableButton*                   Button_BuyLevels;                                  // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortHoldableButton*                   Button_ClaimReward;                                // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaSeasonItemData_BattleStar*      SeasonData_BattleStar;                             // 0x448(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaSeasonItemDefinition*           SeasonItemDefinition;                              // 0x450(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassTile*                   FocusedReward;                                     // 0x458(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DAF[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScrollBox*                            ScrollBox_Pages;                                   // 0x490(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortBattlePassBulkBuyPageBase* GetDefaultObj();

	void OnRewardCountChanged(int32 Count);
	void OnPageRangeChanged(int32 FromPage, int32 ToPage);
	void OnCostChanged(int32 Cost);
	void HandleUserScrolled(float ScrollAmount);
};

// 0x8 (0xEB0 - 0xEA8)
// Class BattlePassBase.FortBattlePassCheckBoxButton
class UFortBattlePassCheckBoxButton : public UCommonButtonBase
{
public:
	uint8                                        Pad_DBC[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBattlePassCheckBoxButton* GetDefaultObj();

	void OnStateChanged(bool bNewIsChecked);
};

// 0x0 (0x30 - 0x30)
// Class BattlePassBase.FortBattlePassContext
class UFortBattlePassContext : public UBlueprintContextBase
{
public:

	static class UClass* StaticClass();
	static class UFortBattlePassContext* GetDefaultObj();

	TArray<struct FSeasonCurrencyMcpData> GetSeasonalCurrencies();
	class FText GetCurrentSeasonNumberAsText(bool bFullText);
	class FText GetCurrentChapterAsText(bool bFullText);
	bool CanPurchaseBattlePassLevel();
};

// 0x40 (0x288 - 0x248)
// Class BattlePassBase.FortBattlePassCurrencyPanel
class UFortBattlePassCurrencyPanel : public UUserWidget
{
public:
	class UHorizontalBox*                        HBox_BattleStarContainer;                          // 0x248(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_BattleStar;                                   // 0x250(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                        HBox_CustomSkinContainer;                          // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_CustomSkin;                                   // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DE1[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBattlePassCurrencyPanel* GetDefaultObj();

};

// 0xC0 (0x308 - 0x248)
// Class BattlePassBase.FortBattlePassCustomSkinCategoryTile
class UFortBattlePassCustomSkinCategoryTile : public UUserWidget
{
public:
	uint8                                        Pad_E04[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressBar*                          ProgressBar;                                       // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortDynamicEntryBox*                  FortDynamicEntryBox_Items;                         // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URichTextBlock*                        Text_CategoryTitle;                                // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortBattlePassTile*                   PreviewedTile;                                     // 0x280(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        OwnedRewards;                                      // 0x288(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E07[0x7C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBattlePassCustomSkinCategoryTile* GetDefaultObj();

	void SetPreviewedTile(int32 Index);
	void OnOwnedTilesUpdated(int32 CurrentlyOwnedRewards, int32 TotalRewards, float CategoryProgress);
	void OnLockedStateChanged(bool bCategoryLocked);
	void OnLockedProgressUpdated(int32 CurrentlyOwnedBeforeCategory, int32 TotalRewardsBeforeCategory, float LockedProgress);
	void FocusTile(int32 Index);
};

// 0x188 (0x4B8 - 0x330)
// Class BattlePassBase.FortBattlePassCustomSkinPageBase
class UFortBattlePassCustomSkinPageBase : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_E0E[0x168];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UScrollBox*                            ScrollBox_Categories;                              // 0x498(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortDynamicEntryBox*                  FortDynamicEntryBox_Categories;                    // 0x4A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E0F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattlePassEnabledInputData*           EquipEnabledData;                                  // 0x4B0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortBattlePassCustomSkinPageBase* GetDefaultObj();

};

// 0xB8 (0x3E8 - 0x330)
// Class BattlePassBase.FortBattlePassPurchaseResourcesWidget
class UFortBattlePassPurchaseResourcesWidget : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_E21[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     Button_Addition;                                   // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_BatchAddition;                              // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_Subtraction;                                // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_BatchSubtraction;                           // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortHoldableButton*                   Button_Purchase;                                   // 0x358(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_GetVBucks;                                  // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_ReloadMtx;                                  // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_Back;                                       // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortBattlePassCheckBoxButton*         CheckBox_Bundle;                                   // 0x378(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_CloseMobile;                                // 0x380(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentLevel;                                      // 0x388(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsOfferActive;                                    // 0x38C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E23[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentVBucks;                                     // 0x390(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentBattleStars;                                // 0x394(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BatchNum;                                          // 0x398(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentPage;                                       // 0x39C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOfferUnavailable;                                 // 0x3A0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E25[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxBundleLevel;                                    // 0x3A4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxLevel;                                          // 0x3A8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxLevelPurchases;                                 // 0x3AC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BundleAmount;                                      // 0x3B0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E26[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   LevelPreviewItem;                                  // 0x3B8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E27[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBattlePassPurchaseResourcesWidget* GetDefaultObj();

	void OnTotalPriceChanged(int32 NewPrice);
	void OnPurchaseAmountChanged(int32 NewAmount, int32 LevelsLeft);
	void OnOfferUnavailable();
	void OnAmountChangeButtonClicked();
	bool IsReloadMtxEnabled();
	void HandlePurchaseMultiComplete(bool bSuccess, TArray<struct FPurchasedItemInfo>& PurchasedItems, TArray<class FString>& OfferIdList);
	void HandlePurchaseComplete(bool bSuccess, TArray<struct FPurchasedItemInfo>& PurchasedItems, const class FString& OfferId);
};

// 0x28 (0x298 - 0x270)
// Class BattlePassBase.FortBattlePassResourceCounter
class UFortBattlePassResourceCounter : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      Text_ResourceName;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortLazyImage*                        LazyImage_ResourceIcon;                            // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ResourceCount;                                // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E2B[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBattlePassResourceCounter* GetDefaultObj();

};

// 0x38 (0x2A8 - 0x270)
// Class BattlePassBase.FortBattlePassResourcesWidgetBase
class UFortBattlePassResourcesWidgetBase : public UFortGlobalSeasonResourceWidget
{
public:
	TSubclassOf<class UFortBattlePassResourceCounter> ResourceCounterClass;                              // 0x270(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UCommonActivatableWidget> MoreInfoModal;                                     // 0x278(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicEntryBox*                      EntryBox_ResourceCounters;                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortBattlePassResourcesWidgetBase* GetDefaultObj();

	void ShowResourcesInfoModal();
};

// 0xC8 (0x3F8 - 0x330)
// Class BattlePassBase.FortBattlePassRewardGrid
class UFortBattlePassRewardGrid : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_E2F[0x68];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortBattlePassTileBase>   GridTileClass;                                     // 0x398(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortBattlePassTileBase>   GridEmptyTileClass;                                // 0x3A0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                             GridCellPadding;                                   // 0x3A8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassRewardGridHeader*       PageHeader;                                        // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGridPanel*                            GridPanel_Rewards;                                 // 0x3B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBattlePassTileBase*               TopLeftTile;                                       // 0x3C0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UCommonButtonBase>      LastFocusedTile;                                   // 0x3C8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E30[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBattlePassRewardGrid* GetDefaultObj();

	void OnPageUnselected();
	void OnPageSelected();
};

// 0x8 (0x250 - 0x248)
// Class BattlePassBase.FortBattlePassRewardGridHeader
class UFortBattlePassRewardGridHeader : public UUserWidget
{
public:
	uint8                                        Pad_E38[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBattlePassRewardGridHeader* GetDefaultObj();

	void OnSetPageType(enum class ERewardPageType PageType);
	void OnSetPageCustomName(class FText& CustomName);
	void OnPageUnlocked(int32 PurchasedRewards, int32 TotalRewards);
	void OnPageNumberSet(int32 InPageNumber);
	void OnPageLocked(int32 RequiredLevel, int32 RequiredRewards);
	void OnBattlePassLevelSet(int32 BattlePassLevel);
	int32 GetPageNumber();
};

// 0x50 (0xF80 - 0xF30)
// Class BattlePassBase.FortBattlePassTileBase
class UFortBattlePassTileBase : public UFortHoldableButton
{
public:
	class USizeBox*                              SizeBox_Content;                                   // 0xF30(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        UnitHeight;                                        // 0xF38(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        UnitWidth;                                         // 0xF3C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E48[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBattlePassTileBase* GetDefaultObj();

	void SetState(enum class EBattlePassTileAvailabilityStates NewState);
	void SetSize(enum class EPageItemTileSize TileSize, struct FVector2D& CellSpacing);
	void OnStateChanged(enum class EBattlePassTileAvailabilityStates NewState);
	void OnSizeChanged(struct FVector2D& NewSize);
	void OnSetRequiresBattlePass(bool bRequiresBP);
	void OnRevealed();
	void OnPeeked();
	bool IsOwned();
	bool IsLocked();
	bool IsAvailable();
	enum class EBattlePassTileAvailabilityStates GetState();
};

// 0x60 (0xFE0 - 0xF80)
// Class BattlePassBase.FortBattlePassTile
class UFortBattlePassTile : public UFortBattlePassTileBase
{
public:
	uint8                                        Pad_E56[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortLazyImage*                        Image_RewardItem;                                  // 0xF90(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                Image_Currency;                                    // 0xF98(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E57[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBattlePassTile* GetDefaultObj();

	void OnUnpreviewed();
	void OnUnhighlighted();
	void OnTilePreviewCycled();
	void OnSetTrack(bool bIsFreeTrack, bool bOwnsBattlePass);
	void OnSetCurrencyAndPrice(enum class EBattlePassCurrencyType Currency, int32 Price);
	void OnPreviewed();
	void OnLockedStateUpdated(bool OwnsBattlePass, bool ParentUnlocked, bool HasRemainingPrerequisites, bool bIsDelayed);
	void OnLockedProgressUpdated(float Progress, int32 CurrentlyOwnedRewards, int32 NeededRewards);
	void OnHighlighted();
	void OnAffordabilityChanged(bool bHasEnougCurrency);
	bool IsAffordable();
	bool HasPrerequisites();
};

// 0x10 (0x280 - 0x270)
// Class BattlePassBase.FortBattlePassTutorialTooltip
class UFortBattlePassTutorialTooltip : public UCommonUserWidget
{
public:
	class UCommonRichTextBlock*                  Text_Tooltip;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E61[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBattlePassTutorialTooltip* GetDefaultObj();

	void ShowTooltip();
	void SetTooltipEnabled(bool bEnable);
	void SetText(class FText Text);
	void HideTooltip();
};

}


