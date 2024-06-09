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
// Function CrewUI.BattlePassCrewPurchaseContainer.OnTriggerIntroAnimation
struct UBattlePassCrewPurchaseContainer_OnTriggerIntroAnimation_Params
{
public:
	bool                                         bCanClaimRewards;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function CrewUI.BattlePassCrewPurchaseContainer.OnContentStateUpdated
struct UBattlePassCrewPurchaseContainer_OnContentStateUpdated_Params
{
public:
	enum class EBattlePassCrewContentState       InState;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInScreenOpened;                                   // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrewUI.BattlePassPurchaseScreen.OnSetScreenInteractable
struct UBattlePassPurchaseScreen_OnSetScreenInteractable_Params
{
public:
	bool                                         bInteractable;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrewUI.BattlePassPurchaseScreen.OnPurchaseStateChanged
struct UBattlePassPurchaseScreen_OnPurchaseStateChanged_Params
{
public:
	enum class EBattlePassPurchaseState          InCurrentState;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrewUI.CrewPurchaseScreen.OnUpdateVBuckRefundVisibility
struct UCrewPurchaseScreen_OnUpdateVBuckRefundVisibility_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrewUI.CrewPurchaseScreen.OnUpdatePurchaseButtonState
struct UCrewPurchaseScreen_OnUpdatePurchaseButtonState_Params
{
public:
	enum class ECrewPurchaseButtonState          ButtonState;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CrewUI.CrewPurchaseScreen.OnContainerTabVisibilityUpdated
struct UCrewPurchaseScreen_OnContainerTabVisibilityUpdated_Params
{
public:
	bool                                         bTabsVisible;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C6A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpacingAdjustmentForTabs;                          // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CrewUI.CrewPurchaseScreen.BeginProgress
struct UCrewPurchaseScreen_BeginProgress_Params
{
public:
	class FText                                  ProgressLabel;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CrewUI.CrewRewardTile.OnUpdateOwnedState
struct UCrewRewardTile_OnUpdateOwnedState_Params
{
public:
	bool                                         bOwned;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CrewUI.CrewRewardTile.OnDownloadTileImageComplete
struct UCrewRewardTile_OnDownloadTileImageComplete_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function CrewUI.CrewTileDetailsTag.OnTagSetup
struct UCrewTileDetailsTag_OnTagSetup_Params
{
public:
	enum class ECrewDetailsTag                   RewardTag;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsOwnedTag;                                       // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


