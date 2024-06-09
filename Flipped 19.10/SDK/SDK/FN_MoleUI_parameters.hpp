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
// Function MoleUI.MoleAssignedTaskContainerWidget.OnActiveTasksChanged
struct UMoleAssignedTaskContainerWidget_OnActiveTasksChanged_Params
{
public:
	bool                                         bFrameDefer;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MoleUI.MoleControllerBinding.OnBindingInfoSet
struct UMoleControllerBinding_OnBindingInfoSet_Params
{
public:
	class FText                                  BindingLabel;                                      // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bIsSaboteurBinding;                                // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3952[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function MoleUI.MoleEnemyAbilityContainer.OnVisibilityChangeRequested
struct UMoleEnemyAbilityContainer_OnVisibilityChangeRequested_Params
{
public:
	bool                                         bNewVisibility;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MoleUI.MoleEnemyAbilityEntry.OnAbilityDataReceived
struct UMoleEnemyAbilityEntry_OnAbilityDataReceived_Params
{
public:
	class UMoleEnemyAbilityItem*                 Data;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MoleUI.MoleEnemyAbilityItem.GetIndex
struct UMoleEnemyAbilityItem_GetIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MoleUI.MoleEnemyAbilityOverlay.OnCooldownUpdated
struct UMoleEnemyAbilityOverlay_OnCooldownUpdated_Params
{
public:
	int32                                        TimeLeft;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MoleUI.MoleEnemyAbilityOverlay.OnCooldownStarted
struct UMoleEnemyAbilityOverlay_OnCooldownStarted_Params
{
public:
	int32                                        TimeLeft;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function MoleUI.MoleEnemyAbilityOverlay.OnAbilityDataReceived
struct UMoleEnemyAbilityOverlay_OnAbilityDataReceived_Params
{
public:
	struct FMoleAbilityUIData                    InAbilityUIData;                                   // 0x0(0x58)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MoleUI.MoleEnemyAbilityWidgetComponent.AreSabotageShortcutsEnabled
struct UMoleEnemyAbilityWidgetComponent_AreSabotageShortcutsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MoleUI.MoleLocationWidget.OnVisited
struct UMoleLocationWidget_OnVisited_Params
{
public:
	class FText                                  LocalizedLocationName;                             // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bIsNamedLocation;                                  // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_398D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MoleUI.MoleNameplate.SetupNameplateFor
struct UMoleNameplate_SetupNameplateFor_Params
{
public:
	class APlayerState*                          OwningPlayer;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MoleUI.MolePostGameScreen.OnXPCalculated
struct UMolePostGameScreen_OnXPCalculated_Params
{
public:
	int32                                        XPValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function MoleUI.MoleQuickChatMapEntry.OnMapDataRetrieved
struct UMoleQuickChatMapEntry_OnMapDataRetrieved_Params
{
public:
	struct FMoleLocationData                     LocationData;                                      // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MoleUI.MoleQuickChatActionSlot.OnIsAvailableChanged
struct UMoleQuickChatActionSlot_OnIsAvailableChanged_Params
{
public:
	bool                                         bIsAvailable;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MoleUI.MoleQuickChatWidget.OnPreviewChanged
struct UMoleQuickChatWidget_OnPreviewChanged_Params
{
public:
	class FText                                  Message;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MoleUI.MoleQuickChatWidget.AreAcceptAndBackInverted
struct UMoleQuickChatWidget_AreAcceptAndBackInverted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleUI.MoleRoleColor.SetColor
struct AMoleRoleColor_SetColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleUI.MoleRoleColor.OnSetColor
struct AMoleRoleColor_OnSetColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleUI.MoleSlottedRadialMenu.OnRadialEntrySelected
struct UMoleSlottedRadialMenu_OnRadialEntrySelected_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           SelectedEntry;                                     // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function MoleUI.MoleSlottedRadialMenu.OnRadialEntriesChanged
struct UMoleSlottedRadialMenu_OnRadialEntriesChanged_Params
{
public:
	bool                                         bIsActions;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumEntries;                                        // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Degrees;                                           // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function MoleUI.MoleSlottedRadialMenu.OnCategorySelected
struct UMoleSlottedRadialMenu_OnCategorySelected_Params
{
public:
	class UFortRadialSlot*                       SelectedSlot;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMoleQuickChatActionData>      Actions;                                           // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLinearColor                          CategoryColor;                                     // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             CategoryImage;                                     // 0x28(0x28)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MoleUI.MoleSubobjectiveIndicatorWidget.OnSetUsageMode
struct UMoleSubobjectiveIndicatorWidget_OnSetUsageMode_Params
{
public:
	bool                                         bUseGoalIndicatorMode;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MoleUI.MoleSubobjectiveIndicatorWidget.OnScreenClampChanged
struct UMoleSubobjectiveIndicatorWidget_OnScreenClampChanged_Params
{
public:
	bool                                         bScreenClamped;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MoleUI.MoleTaskHUDWidget.SetTaskHandle
struct UMoleTaskHUDWidget_SetTaskHandle_Params
{
public:
	struct FMoleActiveTaskStateHandle            TaskHandle;                                        // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MoleUI.MoleTaskHUDWidget.SetTaskAsset
struct UMoleTaskHUDWidget_SetTaskAsset_Params
{
public:
	class UMoleTaskDataAsset*                    TaskAsset;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MoleUI.MoleTaskHUDWidget.SetAttemptShowActiveObjectives
struct UMoleTaskHUDWidget_SetAttemptShowActiveObjectives_Params
{
public:
	bool                                         bAttemptShow;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MoleUI.MoleTaskHUDWidget.OnRepresentedTaskChanged
struct UMoleTaskHUDWidget_OnRepresentedTaskChanged_Params
{
public:
	class UMoleTaskDataAsset*                    PreviousTaskAsset;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMoleActiveTaskStateHandle            PreviousHandle;                                    // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A09[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function MoleUI.MoleTaskHUDWidget.GetTaskTitle
struct UMoleTaskHUDWidget_GetTaskTitle_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MoleUI.MoleTaskHUDWidget.GetTaskAsset
struct UMoleTaskHUDWidget_GetTaskAsset_Params
{
public:
	class UMoleTaskDataAsset*                    ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MoleUI.MoleTaskObjectiveHUDWidget.OnRepresentedObjectiveTargetValueChanged
struct UMoleTaskObjectiveHUDWidget_OnRepresentedObjectiveTargetValueChanged_Params
{
public:
	float                                        NewTargetValue;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MoleUI.MoleTaskObjectiveHUDWidget.OnRepresentedObjectiveCurrentValueChanged
struct UMoleTaskObjectiveHUDWidget_OnRepresentedObjectiveCurrentValueChanged_Params
{
public:
	float                                        NewCurrentValue;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MoleUI.MoleTaskObjectiveHUDWidget.GetTaskObjectiveInfo
struct UMoleTaskObjectiveHUDWidget_GetTaskObjectiveInfo_Params
{
public:
	struct FMoleTaskObjectiveUIInfo              ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MoleUI.MoleTimer.StartTimer
struct UMoleTimer_StartTimer_Params
{
public:
	float                                        InServerFinishTime;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MoleUI.MoleTimer.OnTimerUpdated
struct UMoleTimer_OnTimerUpdated_Params
{
public:
	int32                                        TimeLeft;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MoleUI.MoleTimer.OnTimerStarted
struct UMoleTimer_OnTimerStarted_Params
{
public:
	int32                                        TimeLeft;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function MoleUI.MoleUIDirector.GetMolePlayerUIData
struct AMoleUIDirector_GetMolePlayerUIData_Params
{
public:
	class APlayerState*                          PlayerState;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutPlayerNUmber;                                   // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A2A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMolePlayerUIData                     OutPlayerUIData;                                   // 0x10(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A2B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function MoleUI.MoleUIDirector.GetMoleLocationData
struct AMoleUIDirector_GetMoleLocationData_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          LocationTag;                                       // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMoleLocationData                     OutLocationData;                                   // 0x10(0x38)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A2F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function MoleUI.MoleUIDirector.GetMoleEnemyAbilityUIData
struct AMoleUIDirector_GetMoleEnemyAbilityUIData_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SabotageTag;                                       // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMoleAbilityUIData                    OutEnemyAbilityUIData;                             // 0x10(0x58)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x68(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A31[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function MoleUI.MoleVoteCastingInfoPanel.OnPanelVisibilityChanged
struct UMoleVoteCastingInfoPanel_OnPanelVisibilityChanged_Params
{
public:
	bool                                         bShouldShowPanel;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MoleUI.MoleVoteTally.OnVoteTallyStarted
struct UMoleVoteTally_OnVoteTallyStarted_Params
{
public:
	bool                                         bIsSkipTally;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MoleUI.MoleVotingIndicator.OnIndicatorRevealed
struct AMoleVotingIndicator_OnIndicatorRevealed_Params
{
public:
	class APlayerState*                          AccuserPlayerState;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


