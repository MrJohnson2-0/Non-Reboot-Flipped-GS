#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0xEF8 - 0xEA8)
// Class CommonUILegacy.CommonButtonLegacy
class UCommonButtonLegacy : public UCommonButtonBase
{
public:
	FMulticastInlineDelegateProperty_            OnSelectedChanged;                                 // 0xEA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0xEB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonDoubleClicked;                             // 0xEC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonHovered;                                   // 0xED8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonUnhovered;                                 // 0xEE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCommonButtonLegacy* GetDefaultObj();

	void SetTriggeredInputActionLegacy(struct FDataTableRowHandle& InputActionRow, class UCommonActivatablePanelLegacy* OldPanel);
	void HandleOnSelectedChanged(class UCommonButtonBase* Button, bool InSelected);
	void HandleOnButtonUnhovered(class UCommonButtonBase* Button);
	void HandleOnButtonHovered(class UCommonButtonBase* Button);
	void HandleOnButtonDoubleClicked(class UCommonButtonBase* Button);
	void HandleOnButtonClicked(class UCommonButtonBase* Button);
};

// 0x138 (0x468 - 0x330)
// Class CommonUILegacy.CommonActivatablePanelLegacy
class UCommonActivatablePanelLegacy : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_59D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnWidgetActivated;                                 // 0x338(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWidgetDeactivated;                               // 0x348(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bConsumeAllActions;                                // 0x358(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bExposeActionsExternally;                          // 0x359(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldBypassStack;                                // 0x35A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_59E[0x10D];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonActivatablePanelLegacy* GetDefaultObj();

	void SetInputActionHandlerWithProgressPopupMenu(const struct FDataTableRowHandle& InputActionRow, FDelegateProperty_ CommitedEvent, FDelegateProperty_ ProgressEvent, class UCommonPopupMenuLegacy* PopupMenu);
	void SetInputActionHandlerWithProgress(const struct FDataTableRowHandle& InputActionRow, FDelegateProperty_ CommitedEvent, FDelegateProperty_ ProgressEvent);
	void SetInputActionHandlerWithPopupMenu(const struct FDataTableRowHandle& InputActionRow, FDelegateProperty_ CommitedEvent, class UCommonPopupMenuLegacy* PopupMenu);
	void SetInputActionHandler(const struct FDataTableRowHandle& InputActionRow, FDelegateProperty_ CommitedEvent);
	void SetActionHandlerStateWithDisabledCommitEvent(class UDataTable* DataTable, class FName RowName, enum class EInputActionState State, FDelegateProperty_ DisabledCommitEvent);
	void SetActionHandlerStateFromHandleWithDisabledCommitEvent(const struct FDataTableRowHandle& InputActionRow, enum class EInputActionState State, FDelegateProperty_ DisabledCommitEvent);
	void SetActionHandlerStateFromHandle(const struct FDataTableRowHandle& InputActionRow, enum class EInputActionState State);
	void SetActionHandlerState(class UDataTable* DataTable, class FName RowName, enum class EInputActionState State);
	void RemoveInputActionHandler(const struct FDataTableRowHandle& InputActionRow);
	void RemoveAllInputActionHandlers();
	void PopPanel();
	void OnTransitionedBySwitcher();
	void OnRemovedFromActivationStack();
	void OnInputModeChanged(bool bUsingGamepad);
	void OnBeginOutro();
	void OnBeginIntro();
	void OnAddedToActivationStack();
	bool IsIntroed();
	bool IsInActivationStack();
	bool HasInputActionHandler(const struct FDataTableRowHandle& InputActionRow);
	bool GetInputActions(TArray<struct FCommonInputActionHandlerData>* InputActionDataRows);
	void EndOutro();
	void EndIntro();
	void BeginOutro();
	void BeginIntro();
	void AddInputActionNoHandler(class UDataTable* DataTable, class FName RowName);
	void AddInputActionHandlerWithProgressPopup(class UDataTable* DataTable, class FName RowName, FDelegateProperty_ CommitedEvent, FDelegateProperty_ ProgressEvent, class UCommonPopupMenuLegacy* PopupMenu);
	void AddInputActionHandlerWithProgress(class UDataTable* DataTable, class FName RowName, FDelegateProperty_ CommitedEvent, FDelegateProperty_ ProgressEvent);
	void AddInputActionHandlerWithPopup(class UDataTable* DataTable, class FName RowName, FDelegateProperty_ CommitedEvent, class UCommonPopupMenuLegacy* PopupMenu);
	void AddInputActionHandler(class UDataTable* DataTable, class FName RowName, FDelegateProperty_ CommitedEvent);
};

// 0xA0 (0x1B0 - 0x110)
// Class CommonUILegacy.CommonButtonGroupLegacy
class UCommonButtonGroupLegacy : public UCommonButtonGroupBase
{
public:
	FMulticastInlineDelegateProperty_            OnSelectedButtonChanged;                           // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_5FA[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHoveredButtonChanged;                            // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_5FD[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_5FF[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnButtonDoubleClicked;                             // 0x188(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_600[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonButtonGroupLegacy* GetDefaultObj();

	void OnSelectionStateChanged(class UCommonButtonLegacy* BaseButton, bool bIsSelected);
	void OnHandleButtonDoubleClicked(class UCommonButtonLegacy* BaseButton);
	void OnHandleButtonClicked(class UCommonButtonLegacy* BaseButton);
	void OnButtonUnhovered(class UCommonButtonLegacy* BaseButton);
	void OnButtonHovered(class UCommonButtonLegacy* BaseButton);
	void HandleOnSelectedButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	void HandleOnHoveredButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	void HandleOnButtonDoubleClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	void HandleOnButtonClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	void HandleNativeOnSelectedButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	void HandleNativeOnHoveredButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	void HandleNativeOnButtonDoubleClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	void HandleNativeOnButtonClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	class UCommonButtonLegacy* GetSelectedButton();
	class UCommonButtonLegacy* GetButtonAtIndex(int32 Index);
	class UCommonButtonGroupLegacy* CreateButtonGroup(class UObject* ContextObject, bool bInSelectionRequired);
};

// 0x0 (0x580 - 0x580)
// Class CommonUILegacy.CommonButtonInternalLegacy
class UCommonButtonInternalLegacy : public UCommonButtonInternalBase
{
public:

	static class UClass* StaticClass();
	static class UCommonButtonInternalLegacy* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class CommonUILegacy.CommonGlobalInputHandlerLegacy
class UCommonGlobalInputHandlerLegacy : public UObject
{
public:
	uint8                                        Pad_60C[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonGlobalInputHandlerLegacy* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class CommonUILegacy.CommonInputManagerLegacy
class UCommonInputManagerLegacy : public UObject
{
public:
	uint8                                        Pad_63E[0x80];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ICommonActionHandlerInterface> CurrentlyHeldActionInputHandler;                   // 0xA8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UCommonActivatablePanelLegacy*> ActivatablePanelStack;                             // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UCommonGlobalInputHandlerLegacy*       GlobalInputHandler;                                // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_642[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FOperation>                    Operations;                                        // 0xE8(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_643[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonInputManagerLegacy* GetDefaultObj();

	void SuspendStartingOperationProcessing();
	bool StopListeningForExistingHeldAction(struct FDataTableRowHandle& InputActionDataRow, FDelegateProperty_& CompleteEvent, FDelegateProperty_& ProgressEvent);
	bool StartListeningForExistingHeldAction(struct FDataTableRowHandle& InputActionDataRow, FDelegateProperty_& CompleteEvent, FDelegateProperty_& ProgressEvent);
	void SetGlobalInputHandlerPriorityFilter(int32 InFilterPriority);
	void ResumeStartingOperationProcessing();
	void PushActivatablePanel(class UCommonActivatablePanelLegacy* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow);
	void PopActivatablePanel(class UCommonActivatablePanelLegacy* ActivatablePanel);
	bool IsPanelOnStack(class UCommonActivatablePanelLegacy* InPanel);
	bool IsInputSuspended();
	class UCommonActivatablePanelLegacy* GetTopPanel();
	int32 GetGlobalInputHandlerPriorityFilter();
	bool GetAvailableInputActions(TArray<struct FCommonInputActionHandlerData>* AvailableInputActions);
};

// 0x30 (0x2A0 - 0x270)
// Class CommonUILegacy.CommonInputReflectorLegacy
class UCommonInputReflectorLegacy : public UCommonUserWidget
{
public:
	TSubclassOf<class UCommonButtonLegacy>       ButtonType;                                        // 0x270(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UCommonButtonLegacy*>           ActiveButtons;                                     // 0x278(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UCommonButtonLegacy*>           InactiveButtons;                                   // 0x288(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_653[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonInputReflectorLegacy* GetDefaultObj();

	void OnButtonAdded(class UCommonButtonLegacy* AddedButton, struct FCommonInputActionHandlerData& Data);
};

// 0x10 (0xF08 - 0xEF8)
// Class CommonUILegacy.CommonPopupButtonLegacy
class UCommonPopupButtonLegacy : public UCommonButtonLegacy
{
public:
	class UMenuAnchor*                           PopupMenuAnchor;                                   // 0xEF8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonPopupMenuLegacy*                PopupMenu;                                         // 0xF00(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCommonPopupButtonLegacy* GetDefaultObj();

	class UUserWidget* GetMenuAnchorWidget();
};

// 0x18 (0x480 - 0x468)
// Class CommonUILegacy.CommonPopupMenuLegacy
class UCommonPopupMenuLegacy : public UCommonActivatablePanelLegacy
{
public:
	bool                                         bUseInputStack;                                    // 0x468(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_686[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UMenuAnchor>            OwningMenuAnchor;                                  // 0x46C(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UObject>                ContextProvidingObject;                            // 0x474(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_688[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonPopupMenuLegacy* GetDefaultObj();

	void SetOwningMenuAnchor(class UMenuAnchor* MenuAnchor);
	void SetContextProvider(class UObject* ContextProvidingObject);
	void RequestClose();
	void OnIsOpenChanged(bool IsOpen);
	void HandlePreDifferentContextProviderSet();
	void HandlePostDifferentContextProviderSet();
};

// 0x20 (0x360 - 0x340)
// Class CommonUILegacy.CommonTabListWidgetLegacy
class UCommonTabListWidgetLegacy : public UCommonTabListWidgetBase
{
public:
	FMulticastInlineDelegateProperty_            OnTabButtonCreated;                                // 0x340(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTabButtonRemoved;                                // 0x350(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCommonTabListWidgetLegacy* GetDefaultObj();

	void OnTabButtonRemoved__DelegateSignature(class FName TabId, class UCommonButtonLegacy* TabButton);
	void OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButtonLegacy* TabButton);
	void HandleTabRemoved(class FName TabNameID, class UCommonButtonLegacy* TabButton);
	void HandleTabCreated(class FName TabNameID, class UCommonButtonLegacy* TabButton);
	void HandleOnTabButtonRemoved(class FName TabId, class UCommonButtonBase* TabButton);
	void HandleOnTabButtonCreated(class FName TabId, class UCommonButtonBase* TabButton);
	class UCommonButtonLegacy* GetTabButtonByID(class FName TabNameID);
};

// 0x8 (0x110 - 0x108)
// Class CommonUILegacy.CommonUIActionRouterLegacy
class UCommonUIActionRouterLegacy : public UCommonUIActionRouterBase
{
public:
	uint8                                        Pad_6A0[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonUIActionRouterLegacy* GetDefaultObj();

};

// 0x30 (0x70 - 0x40)
// Class CommonUILegacy.CommonUISubsystemLegacy
class UCommonUISubsystemLegacy : public UCommonUISubsystemBase
{
public:
	FMulticastInlineDelegateProperty_            OnInputSuspensionChanged;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonInputManagerLegacy*             CommonInputManager;                                // 0x50(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_6A4[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonUISubsystemLegacy* GetDefaultObj();

	void InputSuspensionChanged__DelegateSignature(bool bInputSuspended);
	class UCommonInputManagerLegacy* GetInputManager();
};

// 0x10 (0x2C0 - 0x2B0)
// Class CommonUILegacy.CommonVisibilityWidgetLegacy
class UCommonVisibilityWidgetLegacy : public UCommonBorder
{
public:
	bool                                         bShowForGamepad;                                   // 0x2B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForMouseAndKeyboard;                          // 0x2B1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForTouch;                                     // 0x2B2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForPC;                                        // 0x2B3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForMac;                                       // 0x2B4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForPS4;                                       // 0x2B5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForPS5;                                       // 0x2B6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForXBox;                                      // 0x2B7(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForXSX;                                       // 0x2B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForIOS;                                       // 0x2B9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForAndroid;                                   // 0x2BA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForErebus;                                    // 0x2BB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  VisibleType;                                       // 0x2BC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  HiddenType;                                        // 0x2BD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6A9[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonVisibilityWidgetLegacy* GetDefaultObj();

};

// 0x10 (0x160 - 0x150)
// Class CommonUILegacy.CommonWidgetStackLegacy
class UCommonWidgetStackLegacy : public UCommonVisibilitySwitcher
{
public:
	FMulticastInlineDelegateProperty_            OnActiveWidgetChangedLegacyEvent;                  // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCommonWidgetStackLegacy* GetDefaultObj();

	void PushWidget(class UWidget* InWidget);
	class UWidget* PopWidget();
	void OnActiveWidgetChangedLegacy__DelegateSignature(class UWidget* InActiveWidget, int32 InActiveWidgetIndex);
	void DeactivateWidget();
	void ActivateWidget();
};

// 0x28 (0x1B0 - 0x188)
// Class CommonUILegacy.CommonWidgetSwitcherLegacy
class UCommonWidgetSwitcherLegacy : public UCommonAnimatedSwitcher
{
public:
	FMulticastInlineDelegateProperty_            OnActiveWidgetDeactivated;                         // 0x188(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnActiveWidgetChanged;                             // 0x198(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_6C4[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bWidgetActivationEnabled;                          // 0x1A9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOutroPanelBelow;                                  // 0x1AA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_6C5[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonWidgetSwitcherLegacy* GetDefaultObj();

	void SetActiveWidgetIndex_Advanced(int32 Index, bool AttemptActivationChange);
	void SetActiveWidget_Advanced(class UWidget* Widget, bool AttemptActivationChange);
	void HandleActiveWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel);
	void DeactivateWidget();
	void ActivateWidget();
};

}


