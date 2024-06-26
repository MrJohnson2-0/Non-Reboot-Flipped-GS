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

// 0x18 (0x18 - 0x0)
// Function CommonUILegacy.CommonButtonLegacy.SetTriggeredInputActionLegacy
struct UCommonButtonLegacy_SetTriggeredInputActionLegacy_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UCommonActivatablePanelLegacy*         OldPanel;                                          // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUILegacy.CommonButtonLegacy.HandleOnSelectedChanged
struct UCommonButtonLegacy_HandleOnSelectedChanged_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InSelected;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_514[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CommonUILegacy.CommonButtonLegacy.HandleOnButtonUnhovered
struct UCommonButtonLegacy_HandleOnButtonUnhovered_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUILegacy.CommonButtonLegacy.HandleOnButtonHovered
struct UCommonButtonLegacy_HandleOnButtonHovered_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUILegacy.CommonButtonLegacy.HandleOnButtonDoubleClicked
struct UCommonButtonLegacy_HandleOnButtonDoubleClicked_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUILegacy.CommonButtonLegacy.HandleOnButtonClicked
struct UCommonButtonLegacy_HandleOnButtonClicked_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithProgressPopupMenu
struct UCommonActivatablePanelLegacy_SetInputActionHandlerWithProgressPopupMenu_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           CommitedEvent;                                     // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ProgressEvent;                                     // 0x20(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	class UCommonPopupMenuLegacy*                PopupMenu;                                         // 0x30(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithProgress
struct UCommonActivatablePanelLegacy_SetInputActionHandlerWithProgress_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           CommitedEvent;                                     // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ProgressEvent;                                     // 0x20(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithPopupMenu
struct UCommonActivatablePanelLegacy_SetInputActionHandlerWithPopupMenu_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           CommitedEvent;                                     // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	class UCommonPopupMenuLegacy*                PopupMenu;                                         // 0x20(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandler
struct UCommonActivatablePanelLegacy_SetInputActionHandler_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           CommitedEvent;                                     // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateWithDisabledCommitEvent
struct UCommonActivatablePanelLegacy_SetActionHandlerStateWithDisabledCommitEvent_Params
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowName;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputActionState                 State;                                             // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           DisabledCommitEvent;                               // 0x14(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_54E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateFromHandleWithDisabledCommitEvent
struct UCommonActivatablePanelLegacy_SetActionHandlerStateFromHandleWithDisabledCommitEvent_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EInputActionState                 State;                                             // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_553[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           DisabledCommitEvent;                               // 0x14(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_554[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateFromHandle
struct UCommonActivatablePanelLegacy_SetActionHandlerStateFromHandle_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EInputActionState                 State;                                             // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerState
struct UCommonActivatablePanelLegacy_SetActionHandlerState_Params
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowName;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputActionState                 State;                                             // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CommonUILegacy.CommonActivatablePanelLegacy.RemoveInputActionHandler
struct UCommonActivatablePanelLegacy_RemoveInputActionHandler_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUILegacy.CommonActivatablePanelLegacy.OnInputModeChanged
struct UCommonActivatablePanelLegacy_OnInputModeChanged_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUILegacy.CommonActivatablePanelLegacy.IsIntroed
struct UCommonActivatablePanelLegacy_IsIntroed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUILegacy.CommonActivatablePanelLegacy.IsInActivationStack
struct UCommonActivatablePanelLegacy_IsInActivationStack_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUILegacy.CommonActivatablePanelLegacy.HasInputActionHandler
struct UCommonActivatablePanelLegacy_HasInputActionHandler_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_574[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function CommonUILegacy.CommonActivatablePanelLegacy.GetInputActions
struct UCommonActivatablePanelLegacy_GetInputActions_Params
{
public:
	TArray<struct FCommonInputActionHandlerData> InputActionDataRows;                               // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_57E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionNoHandler
struct UCommonActivatablePanelLegacy_AddInputActionNoHandler_Params
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowName;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithProgressPopup
struct UCommonActivatablePanelLegacy_AddInputActionHandlerWithProgressPopup_Params
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowName;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           CommitedEvent;                                     // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ProgressEvent;                                     // 0x20(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	class UCommonPopupMenuLegacy*                PopupMenu;                                         // 0x30(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithProgress
struct UCommonActivatablePanelLegacy_AddInputActionHandlerWithProgress_Params
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowName;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           CommitedEvent;                                     // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ProgressEvent;                                     // 0x20(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithPopup
struct UCommonActivatablePanelLegacy_AddInputActionHandlerWithPopup_Params
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowName;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           CommitedEvent;                                     // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	class UCommonPopupMenuLegacy*                PopupMenu;                                         // 0x20(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandler
struct UCommonActivatablePanelLegacy_AddInputActionHandler_Params
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowName;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           CommitedEvent;                                     // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUILegacy.CommonButtonGroupLegacy.OnSelectionStateChanged
struct UCommonButtonGroupLegacy_OnSelectionStateChanged_Params
{
public:
	class UCommonButtonLegacy*                   BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSelected;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CommonUILegacy.CommonButtonGroupLegacy.OnHandleButtonDoubleClicked
struct UCommonButtonGroupLegacy_OnHandleButtonDoubleClicked_Params
{
public:
	class UCommonButtonLegacy*                   BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUILegacy.CommonButtonGroupLegacy.OnHandleButtonClicked
struct UCommonButtonGroupLegacy_OnHandleButtonClicked_Params
{
public:
	class UCommonButtonLegacy*                   BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUILegacy.CommonButtonGroupLegacy.OnButtonUnhovered
struct UCommonButtonGroupLegacy_OnButtonUnhovered_Params
{
public:
	class UCommonButtonLegacy*                   BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUILegacy.CommonButtonGroupLegacy.OnButtonHovered
struct UCommonButtonGroupLegacy_OnButtonHovered_Params
{
public:
	class UCommonButtonLegacy*                   BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUILegacy.CommonButtonGroupLegacy.HandleOnSelectedButtonChanged
struct UCommonButtonGroupLegacy_HandleOnSelectedButtonChanged_Params
{
public:
	class UCommonButtonBase*                     BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InSelectedButtonIndex;                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CommonUILegacy.CommonButtonGroupLegacy.HandleOnHoveredButtonChanged
struct UCommonButtonGroupLegacy_HandleOnHoveredButtonChanged_Params
{
public:
	class UCommonButtonBase*                     BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InSelectedButtonIndex;                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CommonUILegacy.CommonButtonGroupLegacy.HandleOnButtonDoubleClicked
struct UCommonButtonGroupLegacy_HandleOnButtonDoubleClicked_Params
{
public:
	class UCommonButtonBase*                     BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InSelectedButtonIndex;                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CommonUILegacy.CommonButtonGroupLegacy.HandleOnButtonClicked
struct UCommonButtonGroupLegacy_HandleOnButtonClicked_Params
{
public:
	class UCommonButtonBase*                     BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InSelectedButtonIndex;                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnSelectedButtonChanged
struct UCommonButtonGroupLegacy_HandleNativeOnSelectedButtonChanged_Params
{
public:
	class UCommonButtonBase*                     BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InSelectedButtonIndex;                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnHoveredButtonChanged
struct UCommonButtonGroupLegacy_HandleNativeOnHoveredButtonChanged_Params
{
public:
	class UCommonButtonBase*                     BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InSelectedButtonIndex;                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnButtonDoubleClicked
struct UCommonButtonGroupLegacy_HandleNativeOnButtonDoubleClicked_Params
{
public:
	class UCommonButtonBase*                     BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InSelectedButtonIndex;                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnButtonClicked
struct UCommonButtonGroupLegacy_HandleNativeOnButtonClicked_Params
{
public:
	class UCommonButtonBase*                     BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InSelectedButtonIndex;                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CommonUILegacy.CommonButtonGroupLegacy.GetSelectedButton
struct UCommonButtonGroupLegacy_GetSelectedButton_Params
{
public:
	class UCommonButtonLegacy*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUILegacy.CommonButtonGroupLegacy.GetButtonAtIndex
struct UCommonButtonGroupLegacy_GetButtonAtIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonLegacy*                   ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUILegacy.CommonButtonGroupLegacy.CreateButtonGroup
struct UCommonButtonGroupLegacy_CreateButtonGroup_Params
{
public:
	class UObject*                               ContextObject;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInSelectionRequired;                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonGroupLegacy*              ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function CommonUILegacy.CommonInputManagerLegacy.StopListeningForExistingHeldAction
struct UCommonInputManagerLegacy_StopListeningForExistingHeldAction_Params
{
public:
	struct FDataTableRowHandle                   InputActionDataRow;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           CompleteEvent;                                     // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ProgressEvent;                                     // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_617[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function CommonUILegacy.CommonInputManagerLegacy.StartListeningForExistingHeldAction
struct UCommonInputManagerLegacy_StartListeningForExistingHeldAction_Params
{
public:
	struct FDataTableRowHandle                   InputActionDataRow;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           CompleteEvent;                                     // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ProgressEvent;                                     // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_624[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function CommonUILegacy.CommonInputManagerLegacy.SetGlobalInputHandlerPriorityFilter
struct UCommonInputManagerLegacy_SetGlobalInputHandlerPriorityFilter_Params
{
public:
	int32                                        InFilterPriority;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUILegacy.CommonInputManagerLegacy.PushActivatablePanel
struct UCommonInputManagerLegacy_PushActivatablePanel_Params
{
public:
	class UCommonActivatablePanelLegacy*         ActivatablePanel;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntroPanel;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutroPanelBelow;                                  // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_62C[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CommonUILegacy.CommonInputManagerLegacy.PopActivatablePanel
struct UCommonInputManagerLegacy_PopActivatablePanel_Params
{
public:
	class UCommonActivatablePanelLegacy*         ActivatablePanel;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUILegacy.CommonInputManagerLegacy.IsPanelOnStack
struct UCommonInputManagerLegacy_IsPanelOnStack_Params
{
public:
	class UCommonActivatablePanelLegacy*         InPanel;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_633[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function CommonUILegacy.CommonInputManagerLegacy.IsInputSuspended
struct UCommonInputManagerLegacy_IsInputSuspended_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUILegacy.CommonInputManagerLegacy.GetTopPanel
struct UCommonInputManagerLegacy_GetTopPanel_Params
{
public:
	class UCommonActivatablePanelLegacy*         ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUILegacy.CommonInputManagerLegacy.GetGlobalInputHandlerPriorityFilter
struct UCommonInputManagerLegacy_GetGlobalInputHandlerPriorityFilter_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUILegacy.CommonInputManagerLegacy.GetAvailableInputActions
struct UCommonInputManagerLegacy_GetAvailableInputActions_Params
{
public:
	TArray<struct FCommonInputActionHandlerData> AvailableInputActions;                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_63D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function CommonUILegacy.CommonInputReflectorLegacy.OnButtonAdded
struct UCommonInputReflectorLegacy_OnButtonAdded_Params
{
public:
	class UCommonButtonLegacy*                   AddedButton;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCommonInputActionHandlerData         Data;                                              // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUILegacy.CommonPopupButtonLegacy.GetMenuAnchorWidget
struct UCommonPopupButtonLegacy_GetMenuAnchorWidget_Params
{
public:
	class UUserWidget*                           ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUILegacy.CommonPopupMenuLegacy.SetOwningMenuAnchor
struct UCommonPopupMenuLegacy_SetOwningMenuAnchor_Params
{
public:
	class UMenuAnchor*                           MenuAnchor;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUILegacy.CommonPopupMenuLegacy.SetContextProvider
struct UCommonPopupMenuLegacy_SetContextProvider_Params
{
public:
	class UObject*                               ContextProvidingObject;                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUILegacy.CommonPopupMenuLegacy.OnIsOpenChanged
struct UCommonPopupMenuLegacy_OnIsOpenChanged_Params
{
public:
	bool                                         IsOpen;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction CommonUILegacy.CommonTabListWidgetLegacy.OnTabButtonRemoved__DelegateSignature
struct UCommonTabListWidgetLegacy_OnTabButtonRemoved__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButtonLegacy*                   TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction CommonUILegacy.CommonTabListWidgetLegacy.OnTabButtonCreated__DelegateSignature
struct UCommonTabListWidgetLegacy_OnTabButtonCreated__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButtonLegacy*                   TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUILegacy.CommonTabListWidgetLegacy.HandleTabRemoved
struct UCommonTabListWidgetLegacy_HandleTabRemoved_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButtonLegacy*                   TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUILegacy.CommonTabListWidgetLegacy.HandleTabCreated
struct UCommonTabListWidgetLegacy_HandleTabCreated_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButtonLegacy*                   TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUILegacy.CommonTabListWidgetLegacy.HandleOnTabButtonRemoved
struct UCommonTabListWidgetLegacy_HandleOnTabButtonRemoved_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButtonBase*                     TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUILegacy.CommonTabListWidgetLegacy.HandleOnTabButtonCreated
struct UCommonTabListWidgetLegacy_HandleOnTabButtonCreated_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButtonBase*                     TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUILegacy.CommonTabListWidgetLegacy.GetTabButtonByID
struct UCommonTabListWidgetLegacy_GetTabButtonByID_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButtonLegacy*                   ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction CommonUILegacy.CommonUISubsystemLegacy.InputSuspensionChanged__DelegateSignature
struct UCommonUISubsystemLegacy_InputSuspensionChanged__DelegateSignature_Params
{
public:
	bool                                         bInputSuspended;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUILegacy.CommonUISubsystemLegacy.GetInputManager
struct UCommonUISubsystemLegacy_GetInputManager_Params
{
public:
	class UCommonInputManagerLegacy*             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUILegacy.CommonWidgetStackLegacy.PushWidget
struct UCommonWidgetStackLegacy_PushWidget_Params
{
public:
	class UWidget*                               InWidget;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUILegacy.CommonWidgetStackLegacy.PopWidget
struct UCommonWidgetStackLegacy_PopWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction CommonUILegacy.CommonWidgetStackLegacy.OnActiveWidgetChangedLegacy__DelegateSignature
struct UCommonWidgetStackLegacy_OnActiveWidgetChangedLegacy__DelegateSignature_Params
{
public:
	class UWidget*                               InActiveWidget;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InActiveWidgetIndex;                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CommonUILegacy.CommonWidgetSwitcherLegacy.SetActiveWidgetIndex_Advanced
struct UCommonWidgetSwitcherLegacy_SetActiveWidgetIndex_Advanced_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AttemptActivationChange;                           // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6BA[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CommonUILegacy.CommonWidgetSwitcherLegacy.SetActiveWidget_Advanced
struct UCommonWidgetSwitcherLegacy_SetActiveWidget_Advanced_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AttemptActivationChange;                           // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6BF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CommonUILegacy.CommonWidgetSwitcherLegacy.HandleActiveWidgetDeactivated
struct UCommonWidgetSwitcherLegacy_HandleActiveWidgetDeactivated_Params
{
public:
	class UCommonActivatablePanelLegacy*         DeactivatedPanel;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


