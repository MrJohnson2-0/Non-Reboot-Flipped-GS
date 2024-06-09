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
// Function BattlePassS19UI.BattlePassLandingPageS19.OnBattlePassSubscriptionAllowed
struct UBattlePassLandingPageS19_OnBattlePassSubscriptionAllowed_Params
{
public:
	bool                                         bSubscriptionAllowed;                              // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS19UI.BattlePassLandingPageS19.OnBattlePassGiftingAllowed
struct UBattlePassLandingPageS19_OnBattlePassGiftingAllowed_Params
{
public:
	bool                                         bGiftingAllowed;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function BattlePassS19UI.BattlePassRewardPageS19.OnPageChanged
struct UBattlePassRewardPageS19_OnPageChanged_Params
{
public:
	int32                                        PageNumber;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS19UI.BattlePassRewardPageS19.OnInputMethodChanged
struct UBattlePassRewardPageS19_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  InputType;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS19UI.BattlePassRewardPageS19.OnInitForPageType
struct UBattlePassRewardPageS19_OnInitForPageType_Params
{
public:
	enum class ERewardPageType                   InRewardPageType;                                  // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS19UI.BattlePassScreenS19.OnTransitionItemDetails
struct UBattlePassScreenS19_OnTransitionItemDetails_Params
{
public:
	bool                                         bTransitionForward;                                // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function BattlePassS19UI.BattlePassScreenS19.OnSetPrerequisiteInfo
struct UBattlePassScreenS19_OnSetPrerequisiteInfo_Params
{
public:
	class FText                                  Description;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        OwnedRewards;                                      // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NeededRewards;                                     // 0x1C(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowPrerequisiteLock;                             // 0x20(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function BattlePassS19UI.BattlePassScreenS19.OnSetItemPrice
struct UBattlePassScreenS19_OnSetItemPrice_Params
{
public:
	int32                                        Cost;                                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBattlePassCurrencyType           CurrencyType;                                      // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B2[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function BattlePassS19UI.BattlePassScreenS19.OnSetDynamicInput
struct UBattlePassScreenS19_OnSetDynamicInput_Params
{
public:
	enum class EBattlePassInputs                 InputType;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattlePassInputData*                  InputData;                                         // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassS19UI.BattlePassScreenS19.OnSetClaimedRewardInfo
struct UBattlePassScreenS19_OnSetClaimedRewardInfo_Params
{
public:
	int32                                        OwnedRewards;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalRewards;                                      // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function BattlePassS19UI.BattlePassScreenS19.OnLevelChanged
struct UBattlePassScreenS19_OnLevelChanged_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassS19UI.BattlePassScreenS19.OnItemDelayed
struct UBattlePassScreenS19_OnItemDelayed_Params
{
public:
	struct FTimespan                             Delay;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS19UI.BattlePassScreenS19.OnInsufficientFunds
struct UBattlePassScreenS19_OnInsufficientFunds_Params
{
public:
	enum class EBattlePassCurrencyType           CurrencyType;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassS19UI.BattlePassScreenS19.IsSeasonalCustomizationItemOwned
struct UBattlePassScreenS19_IsSeasonalCustomizationItemOwned_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BattlePassS19UI.BattlePassScreenS19.HandleClaimRewardComplete
struct UBattlePassScreenS19_HandleClaimRewardComplete_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        OfferTemplateIdList;                               // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassS19UI.BattlePassScreenS19.GetQuestPageDelay
struct UBattlePassScreenS19_GetQuestPageDelay_Params
{
public:
	struct FTimespan                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function BattlePassS19UI.FortBattlePassResourcesWidgetS19.OnStylePointsRewardsSet
struct UFortBattlePassResourcesWidgetS19_OnStylePointsRewardsSet_Params
{
public:
	int32                                        Rewards;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function BattlePassS19UI.FortBattlePassResourcesWidgetS19.OnBattleStarRewardsSet
struct UFortBattlePassResourcesWidgetS19_OnBattleStarRewardsSet_Params
{
public:
	int32                                        Rewards;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function BattlePassS19UI.FortBattlePassTutorialTooltipS19.SetText
struct UFortBattlePassTutorialTooltipS19_SetText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

}
}


