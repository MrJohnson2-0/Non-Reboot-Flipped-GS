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

// 0x8 (0x8 - 0x0)
// Function BattlePassBase.BattlePassLandingPageButton.OnSubscriptionTextureLoaded
struct UBattlePassLandingPageButton_OnSubscriptionTextureLoaded_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassBase.BattlePassLandingPageButton.OnSubscriptionOwnershipUpdated
struct UBattlePassLandingPageButton_OnSubscriptionOwnershipUpdated_Params
{
public:
	bool                                         bOwnsSubsciption;                                  // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function BattlePassBase.FortBattlePassBulkBuyPageBase.OnRewardCountChanged
struct UFortBattlePassBulkBuyPageBase_OnRewardCountChanged_Params
{
public:
	int32                                        Count;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassBase.FortBattlePassBulkBuyPageBase.OnPageRangeChanged
struct UFortBattlePassBulkBuyPageBase_OnPageRangeChanged_Params
{
public:
	int32                                        FromPage;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ToPage;                                            // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function BattlePassBase.FortBattlePassBulkBuyPageBase.OnCostChanged
struct UFortBattlePassBulkBuyPageBase_OnCostChanged_Params
{
public:
	int32                                        Cost;                                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function BattlePassBase.FortBattlePassBulkBuyPageBase.HandleUserScrolled
struct UFortBattlePassBulkBuyPageBase_HandleUserScrolled_Params
{
public:
	float                                        ScrollAmount;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassBase.FortBattlePassCheckBoxButton.OnStateChanged
struct UFortBattlePassCheckBoxButton_OnStateChanged_Params
{
public:
	bool                                         bNewIsChecked;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function BattlePassBase.FortBattlePassContext.GetSeasonalCurrencies
struct UFortBattlePassContext_GetSeasonalCurrencies_Params
{
public:
	TArray<struct FSeasonCurrencyMcpData>        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function BattlePassBase.FortBattlePassContext.GetCurrentSeasonNumberAsText
struct UFortBattlePassContext_GetCurrentSeasonNumberAsText_Params
{
public:
	bool                                         bFullText;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function BattlePassBase.FortBattlePassContext.GetCurrentChapterAsText
struct UFortBattlePassContext_GetCurrentChapterAsText_Params
{
public:
	bool                                         bFullText;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DCC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassBase.FortBattlePassContext.CanPurchaseBattlePassLevel
struct UFortBattlePassContext_CanPurchaseBattlePassLevel_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.SetPreviewedTile
struct UFortBattlePassCustomSkinCategoryTile_SetPreviewedTile_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnOwnedTilesUpdated
struct UFortBattlePassCustomSkinCategoryTile_OnOwnedTilesUpdated_Params
{
public:
	int32                                        CurrentlyOwnedRewards;                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalRewards;                                      // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CategoryProgress;                                  // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnLockedStateChanged
struct UFortBattlePassCustomSkinCategoryTile_OnLockedStateChanged_Params
{
public:
	bool                                         bCategoryLocked;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnLockedProgressUpdated
struct UFortBattlePassCustomSkinCategoryTile_OnLockedProgressUpdated_Params
{
public:
	int32                                        CurrentlyOwnedBeforeCategory;                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalRewardsBeforeCategory;                        // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LockedProgress;                                    // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.FocusTile
struct UFortBattlePassCustomSkinCategoryTile_FocusTile_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnTotalPriceChanged
struct UFortBattlePassPurchaseResourcesWidget_OnTotalPriceChanged_Params
{
public:
	int32                                        NewPrice;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnPurchaseAmountChanged
struct UFortBattlePassPurchaseResourcesWidget_OnPurchaseAmountChanged_Params
{
public:
	int32                                        NewAmount;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelsLeft;                                        // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.IsReloadMtxEnabled
struct UFortBattlePassPurchaseResourcesWidget_IsReloadMtxEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.HandlePurchaseMultiComplete
struct UFortBattlePassPurchaseResourcesWidget_HandlePurchaseMultiComplete_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E1C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPurchasedItemInfo>            PurchasedItems;                                    // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        OfferIdList;                                       // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.HandlePurchaseComplete
struct UFortBattlePassPurchaseResourcesWidget_HandlePurchaseComplete_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E1E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPurchasedItemInfo>            PurchasedItems;                                    // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                OfferId;                                           // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassBase.FortBattlePassRewardGridHeader.OnSetPageType
struct UFortBattlePassRewardGridHeader_OnSetPageType_Params
{
public:
	enum class ERewardPageType                   PageType;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BattlePassBase.FortBattlePassRewardGridHeader.OnSetPageCustomName
struct UFortBattlePassRewardGridHeader_OnSetPageCustomName_Params
{
public:
	class FText                                  CustomName;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassBase.FortBattlePassRewardGridHeader.OnPageUnlocked
struct UFortBattlePassRewardGridHeader_OnPageUnlocked_Params
{
public:
	int32                                        PurchasedRewards;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalRewards;                                      // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function BattlePassBase.FortBattlePassRewardGridHeader.OnPageNumberSet
struct UFortBattlePassRewardGridHeader_OnPageNumberSet_Params
{
public:
	int32                                        InPageNumber;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassBase.FortBattlePassRewardGridHeader.OnPageLocked
struct UFortBattlePassRewardGridHeader_OnPageLocked_Params
{
public:
	int32                                        RequiredLevel;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredRewards;                                   // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function BattlePassBase.FortBattlePassRewardGridHeader.OnBattlePassLevelSet
struct UFortBattlePassRewardGridHeader_OnBattlePassLevelSet_Params
{
public:
	int32                                        BattlePassLevel;                                   // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function BattlePassBase.FortBattlePassRewardGridHeader.GetPageNumber
struct UFortBattlePassRewardGridHeader_GetPageNumber_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassBase.FortBattlePassTileBase.SetState
struct UFortBattlePassTileBase_SetState_Params
{
public:
	enum class EBattlePassTileAvailabilityStates NewState;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function BattlePassBase.FortBattlePassTileBase.SetSize
struct UFortBattlePassTileBase_SetSize_Params
{
public:
	enum class EPageItemTileSize                 TileSize;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E3C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CellSpacing;                                       // 0x4(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassBase.FortBattlePassTileBase.OnStateChanged
struct UFortBattlePassTileBase_OnStateChanged_Params
{
public:
	enum class EBattlePassTileAvailabilityStates NewState;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassBase.FortBattlePassTileBase.OnSizeChanged
struct UFortBattlePassTileBase_OnSizeChanged_Params
{
public:
	struct FVector2D                             NewSize;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassBase.FortBattlePassTileBase.OnSetRequiresBattlePass
struct UFortBattlePassTileBase_OnSetRequiresBattlePass_Params
{
public:
	bool                                         bRequiresBP;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassBase.FortBattlePassTileBase.IsOwned
struct UFortBattlePassTileBase_IsOwned_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassBase.FortBattlePassTileBase.IsLocked
struct UFortBattlePassTileBase_IsLocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassBase.FortBattlePassTileBase.IsAvailable
struct UFortBattlePassTileBase_IsAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassBase.FortBattlePassTileBase.GetState
struct UFortBattlePassTileBase_GetState_Params
{
public:
	enum class EBattlePassTileAvailabilityStates ReturnValue;                                       // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function BattlePassBase.FortBattlePassTile.OnSetTrack
struct UFortBattlePassTile_OnSetTrack_Params
{
public:
	bool                                         bIsFreeTrack;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOwnsBattlePass;                                   // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassBase.FortBattlePassTile.OnSetCurrencyAndPrice
struct UFortBattlePassTile_OnSetCurrencyAndPrice_Params
{
public:
	enum class EBattlePassCurrencyType           Currency;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E4F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Price;                                             // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function BattlePassBase.FortBattlePassTile.OnLockedStateUpdated
struct UFortBattlePassTile_OnLockedStateUpdated_Params
{
public:
	bool                                         OwnsBattlePass;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ParentUnlocked;                                    // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasRemainingPrerequisites;                         // 0x2(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDelayed;                                        // 0x3(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function BattlePassBase.FortBattlePassTile.OnLockedProgressUpdated
struct UFortBattlePassTile_OnLockedProgressUpdated_Params
{
public:
	float                                        Progress;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentlyOwnedRewards;                             // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NeededRewards;                                     // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassBase.FortBattlePassTile.OnAffordabilityChanged
struct UFortBattlePassTile_OnAffordabilityChanged_Params
{
public:
	bool                                         bHasEnougCurrency;                                 // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassBase.FortBattlePassTile.IsAffordable
struct UFortBattlePassTile_IsAffordable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassBase.FortBattlePassTile.HasPrerequisites
struct UFortBattlePassTile_HasPrerequisites_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassBase.FortBattlePassTutorialTooltip.SetTooltipEnabled
struct UFortBattlePassTutorialTooltip_SetTooltipEnabled_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BattlePassBase.FortBattlePassTutorialTooltip.SetText
struct UFortBattlePassTutorialTooltip_SetText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

}
}


