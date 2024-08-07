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
// Function FortniteConversationUI.FortItemTransactionBrief.OnTransactionInfoReceived
struct UFortItemTransactionBrief_OnTransactionInfoReceived_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteConversationUI.FortApplyAbilityBrief.OnUnableToPurchase
struct UFortApplyAbilityBrief_OnUnableToPurchase_Params
{
public:
	enum class EPreventAbilityUseReason          Reason;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteConversationUI.FortBasicBrief.OnChoiceTextReceived
struct UFortBasicBrief_OnChoiceTextReceived_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteConversationUI.FortBasicItemBrief.OnUpdateDescriptionText
struct UFortBasicItemBrief_OnUpdateDescriptionText_Params
{
public:
	class FText                                  DescriptionText;                                   // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteConversationUI.FortBasicItemBrief.OnUnableToUse
struct UFortBasicItemBrief_OnUnableToUse_Params
{
public:
	class FText                                  Reason;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteConversationUI.FortBasicItemBrief.OnItemInfoReceived
struct UFortBasicItemBrief_OnItemInfoReceived_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StackSize;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_431[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function FortniteConversationUI.FortBasicItemBrief.OnAbleToUse
struct UFortBasicItemBrief_OnAbleToUse_Params
{
public:
	bool                                         bShowWarningMessage;                               // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteConversationUI.FortBuyBrief.OnPurchaseDataReceived
struct UFortBuyBrief_OnPurchaseDataReceived_Params
{
public:
	int32                                        StackSize;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RemainingForSale;                                  // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteConversationUI.FortBuyBrief.OnDisplayUnavailability
struct UFortBuyBrief_OnDisplayUnavailability_Params
{
public:
	enum class ECannotBuyReason                  CannotBuyReason;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteConversationUI.FortConversationMarker.OnSetIndicatedActor
struct UFortConversationMarker_OnSetIndicatedActor_Params
{
public:
	class AActor*                                NewIndicatorActor;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteConversationUI.FortConversationMarker.OnMessageShownOverActor
struct UFortConversationMarker_OnMessageShownOverActor_Params
{
public:
	class AActor*                                OverActor;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteConversationUI.FortConversationMarker.OnInteractionRangeChanged
struct UFortConversationMarker_OnInteractionRangeChanged_Params
{
public:
	enum class EInteractionRange                 TargetInteractionRange;                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteConversationUI.FortConversationMarker.OnConversationActorProximityChanged
struct UFortConversationMarker_OnConversationActorProximityChanged_Params
{
public:
	enum class EInteractionRange                 TargetInteractionRange;                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortNonPlayerConversationParticipantComponent* ConversationComponent;                             // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteConversationUI.FortConversationMarker.OnCanInteract
struct UFortConversationMarker_OnCanInteract_Params
{
public:
	bool                                         bCanInteract;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteConversationUI.FortConversationMessageWidget.SetPreviewMessage
struct UFortConversationMessageWidget_SetPreviewMessage_Params
{
public:
	class FText                                  MessageToSet;                                      // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteConversationUI.FortConversationMessageWidget.OnPreviewMessageSet
struct UFortConversationMessageWidget_OnPreviewMessageSet_Params
{
public:
	class FText                                  PreviewText;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function FortniteConversationUI.FortConversationMessageWidget.OnMainMessageSet
struct UFortConversationMessageWidget_OnMainMessageSet_Params
{
public:
	class FText                                  NPCName;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  MessageBody;                                       // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteConversationUI.FortConversationOption.OnSetupPivotFromRadialInformation
struct UFortConversationOption_OnSetupPivotFromRadialInformation_Params
{
public:
	int32                                        NumElements;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemIndex;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteConversationUI.FortConversationOption.OnSetupFromItemDef
struct UFortConversationOption_OnSetupFromItemDef_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteConversationUI.FortConversationOption.OnSetupFromDisplayAsset
struct UFortConversationOption_OnSetupFromDisplayAsset_Params
{
public:
	class UObject*                               DisplayAsset;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteConversationUI.FortConversationOption.IsAvailable
struct UFortConversationOption_IsAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteConversationUI.FortConversationOptionsPanel.AddChildToDynamicPanel
struct UFortConversationOptionsPanel_AddChildToDynamicPanel_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPanelSlot*                            ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteConversationUI.FortConversationScreen.ShouldBlockOptionIntroAnim
struct UFortConversationScreen_ShouldBlockOptionIntroAnim_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteConversationUI.FortConversationScreen.OnSelectedItemAvailabilityChanged
struct UFortConversationScreen_OnSelectedItemAvailabilityChanged_Params
{
public:
	bool                                         bIsAvailable;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteConversationUI.FortConversationScreen.OnItemSelected
struct UFortConversationScreen_OnItemSelected_Params
{
public:
	int32                                        OriginalIndex;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteConversationUI.FortConversationScreen.OnConversationOptionUnavailable
struct UFortConversationScreen_OnConversationOptionUnavailable_Params
{
public:
	class UFortRadialSlot*                       SelectedEntry;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function FortniteConversationUI.FortDataDrivenServiceBrief.OnUnableToPurchase
struct UFortDataDrivenServiceBrief_OnUnableToPurchase_Params
{
public:
	class FText                                  Reason;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FortniteConversationUI.FortDataDrivenServiceBrief.OnTransactionInfoReceived
struct UFortDataDrivenServiceBrief_OnTransactionInfoReceived_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteConversationUI.FortDuelBrief.DisplayLootItems
struct UFortDuelBrief_DisplayLootItems_Params
{
public:
	TArray<class UFortItem*>                     Items;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteConversationUI.FortItemFundBrief.OnProgressUpdated
struct UFortItemFundBrief_OnProgressUpdated_Params
{
public:
	float                                        CurrentFundingFraction;                            // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function FortniteConversationUI.FortItemFundBrief.InitializeFromContext
struct UFortItemFundBrief_InitializeFromContext_Params
{
public:
	struct FConversationContext                  ConversationContext;                               // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function FortniteConversationUI.FortMultiItemFundBrief.UpdateSelectedVisuals
struct UFortMultiItemFundBrief_UpdateSelectedVisuals_Params
{
public:
	int32                                        SelectedIndex;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function FortniteConversationUI.FortQuestBrief.OnQuestInformationRecieved
struct UFortQuestBrief_OnQuestInformationRecieved_Params
{
public:
	class FText                                  Objective;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FFortRarityItemData                   RarityData;                                        // 0x18(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTag                          CategoryTag;                                       // 0x98(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        XPReward;                                          // 0xA0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MoneyReward;                                       // 0xA4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteConversationUI.FortQuestBrief.OnQuestExpirationTimeSet
struct UFortQuestBrief_OnQuestExpirationTimeSet_Params
{
public:
	bool                                         bDisplayExpirationTime;                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteConversationUI.FortShowFutureStormCircleBrief.OnUnableToPurchase
struct UFortShowFutureStormCircleBrief_OnUnableToPurchase_Params
{
public:
	enum class EPreventUseStormCircleServiceReason Reason;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function FortniteConversationUI.FortTransactionStrip.OnTransactionInfoReceived
struct UFortTransactionStrip_OnTransactionInfoReceived_Params
{
public:
	struct FFortServiceTransactionInfo           TransactionInfo;                                   // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteConversationUI.FortTransactionStrip.OnSetTransactionCostVisibility
struct UFortTransactionStrip_OnSetTransactionCostVisibility_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FortniteConversationUI.FortTransactionStrip.HandleOnItemCountChanged
struct UFortTransactionStrip_HandleOnItemCountChanged_Params
{
public:
	TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner;                                    // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemDefinition*                   Definition;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Delta;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function FortniteConversationUI.FortUpgradeBrief.OnUpgradeInfoReceived
struct UFortUpgradeBrief_OnUpgradeInfoReceived_Params
{
public:
	class UFortItem*                             CurrentWeapon;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function FortniteConversationUI.FortUpgradeBrief.OnUnableToUpgrade
struct UFortUpgradeBrief_OnUnableToUpgrade_Params
{
public:
	enum class EFortWeaponUpgradeInteractionResult CannotUpgradeCause;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


