#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x270 - 0x270)
// Class FortniteConversationUI.FortConversationOptionBrief
class UFortConversationOptionBrief : public UCommonUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFortConversationOptionBrief* GetDefaultObj();

};

// 0x18 (0x288 - 0x270)
// Class FortniteConversationUI.FortItemTransactionBrief
class UFortItemTransactionBrief : public UFortConversationOptionBrief
{
public:
	uint8                                        Pad_421[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortTransactionStrip*                 TransactionStrip_Main;                             // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItem*                             DisplayItem;                                       // 0x280(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortItemTransactionBrief* GetDefaultObj();

	void OnTransactionInfoReceived(class UFortItem* Item);
};

// 0x20 (0x2A8 - 0x288)
// Class FortniteConversationUI.FortApplyAbilityBrief
class UFortApplyAbilityBrief : public UFortItemTransactionBrief
{
public:
	class FText                                  PurchaseServiceText;                               // 0x288(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                  Text_Display;                                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortApplyAbilityBrief* GetDefaultObj();

	void OnUnableToPurchase(enum class EPreventAbilityUseReason Reason);
	void OnAbleToPurchase();
};

// 0x0 (0x270 - 0x270)
// Class FortniteConversationUI.FortBasicBrief
class UFortBasicBrief : public UFortConversationOptionBrief
{
public:

	static class UClass* StaticClass();
	static class UFortBasicBrief* GetDefaultObj();

	void OnChoiceTextReceived(class FText& Text);
};

// 0x70 (0x2E0 - 0x270)
// Class FortniteConversationUI.FortBasicItemBrief
class UFortBasicItemBrief : public UFortConversationOptionBrief
{
public:
	uint8                                        Pad_433[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_TitleBar;                                     // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortTransactionStrip*                 TransactionStrip_Main;                             // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItem*                             DisplayItem;                                       // 0x288(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs;                                    // 0x290(0x50)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortBasicItemBrief* GetDefaultObj();

	void OnUpdateDescriptionText(class FText& DescriptionText);
	void OnUnableToUse(class FText& Reason);
	void OnItemInfoReceived(class UFortItem* Item, int32 StackSize);
	void OnAbleToUse(bool bShowWarningMessage);
};

// 0x0 (0x288 - 0x288)
// Class FortniteConversationUI.FortBuyBrief
class UFortBuyBrief : public UFortItemTransactionBrief
{
public:

	static class UClass* StaticClass();
	static class UFortBuyBrief* GetDefaultObj();

	void OnPurchaseDataReceived(int32 StackSize, int32 RemainingForSale);
	void OnDisplayUnavailability(enum class ECannotBuyReason CannotBuyReason);
};

// 0xB8 (0x3A0 - 0x2E8)
// Class FortniteConversationUI.FortConversationMarker
class UFortConversationMarker : public UFortActorIndicatorWidget
{
public:
	uint8                                        Pad_452[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InitialOffset;                                     // 0x320(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               ManualOffset;                                      // 0x32C(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MessageBubbleDuration;                             // 0x338(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LastTextBubbleDuration;                            // 0x33C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonVisibilitySwitcher*             Switcher_States;                                   // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Overlay_PreviewState;                              // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_454[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortConversationMessageWidget*        ConversationMessage_Main;                          // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_455[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_ParticipantName;                              // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_456[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortKeybindWidget*                    Keybind_Nameplate;                                 // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                NPCIcon;                                           // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture2D*                            CustomDialogMarkerIndicatorIcon;                   // 0x388(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture2D*                            DefaultDialogMarkerIndicatorIcon;                  // 0x390(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_458[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortConversationMarker* GetDefaultObj();

	void OnSetIndicatedActor(class AActor* NewIndicatorActor);
	void OnMessageShownOverActor(class AActor* OverActor);
	void OnInteractionRangeChanged(enum class EInteractionRange TargetInteractionRange);
	void OnConversationActorProximityChanged(enum class EInteractionRange TargetInteractionRange, class UFortNonPlayerConversationParticipantComponent* ConversationComponent);
	void OnCanInteract(bool bCanInteract);
};

// 0x0 (0x248 - 0x248)
// Class FortniteConversationUI.FortConversationMessageWidget
class UFortConversationMessageWidget : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFortConversationMessageWidget* GetDefaultObj();

	void SetPreviewMessage(class FText& MessageToSet);
	void OnPreviewMessageSet(class FText& PreviewText);
	void OnMessageShown();
	void OnMessageHidden();
	void OnMainMessageSet(class FText& NPCName, class FText& MessageBody);
};

// 0xC0 (0x1010 - 0xF50)
// Class FortniteConversationUI.FortConversationOption
class UFortConversationOption : public UFortRadialPickerEntry
{
public:
	class USoundBase*                            OnOptionConfirmedSound;                            // 0xF50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                            OnOptionHoveredSound;                              // 0xF58(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonVisibilitySwitcher*             Switcher_DisplayAsset;                             // 0xF60(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UObject>                DefaultSoftTaskIcon;                               // 0xF68(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class USoundBase>             DefaultConfirmChoiceSound;                         // 0xF90(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class USoundBase>             DefaultHoverChoiceSound;                           // 0xFB8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_48F[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortConversationOption* GetDefaultObj();

	void OnSetupPivotFromRadialInformation(int32 NumElements, int32 ItemIndex);
	void OnSetupFromItemDef(class UFortItem* Item);
	void OnSetupFromDisplayAsset(class UObject* DisplayAsset);
	void OnOptionConfirmed();
	bool IsAvailable();
};

// 0x18 (0x130 - 0x118)
// Class FortniteConversationUI.FortConversationOptionsPanel
class UFortConversationOptionsPanel : public UPanelWidget
{
public:
	uint8                                        Pad_49C[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxRows;                                           // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MiddleColumnWidth;                                 // 0x12C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortConversationOptionsPanel* GetDefaultObj();

	class UPanelSlot* AddChildToDynamicPanel(class UWidget* Content);
};

// 0x1D8 (0x508 - 0x330)
// Class FortniteConversationUI.FortConversationScreen
class UFortConversationScreen : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_4B5[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonVisibilitySwitcher*             Switcher_Details;                                  // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4B6[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputComponent*                       ConversationInputComp;                             // 0x380(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        CurrentlySelectedIndex;                            // 0x388(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bBlockOptionIntroAnimation;                        // 0x38C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4B9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RadialSelectionMaterialParameterName;              // 0x390(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FGameplayTag>                  TagPriorities;                                     // 0x398(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class FName                                  InteractActionNameKBM;                             // 0x3A8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ADSInputAction;                                    // 0x3B0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  InteractActionNameGamepad;                         // 0x3B8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   ConfirmBinding;                                    // 0x3C0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   MakeSelectionBinding;                              // 0x3D0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   ADSMouseBinding;                                   // 0x3E0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   CancelActionBinding;                               // 0x3F0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   RightTriggerBinding;                               // 0x400(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	TMap<class FString, TSoftClassPtr<class UFortConversationOptionBrief>> DetailsNodeTypeToBrief;                            // 0x410(0x50)(Edit, UObjectWrapper, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortConversationOptionBrief> ChatBrief;                                         // 0x460(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                DataDrivenBriefPrefix;                             // 0x488(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortConversationOptionBrief> DataDrivenBrief;                                   // 0x498(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortSlottedRadialMenu*                RadialMenu_DialogOptions;                          // 0x4C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_RadialHighlight;                             // 0x4C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortKeybindWidget*                    Keybind_Confirm;                                   // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBasicBrief*                       BasicBrief_Main;                                   // 0x4D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USizeBox*                              SizeBox_RadialMenu;                                // 0x4E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Overlay_Details;                                   // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Overlay_WheelContainer;                            // 0x4F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_Background;                                  // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_LoadingSpinner;                              // 0x500(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortConversationScreen* GetDefaultObj();

	bool ShouldBlockOptionIntroAnim();
	void OnSelectedItemAvailabilityChanged(bool bIsAvailable);
	void OnOptionsPopulated();
	void OnItemSelected(int32 OriginalIndex);
	void OnConversationStarted();
	void OnConversationOptionUnavailable(class UFortRadialSlot* SelectedEntry);
	void EndConversation();
};

// 0x78 (0x2E8 - 0x270)
// Class FortniteConversationUI.FortDataDrivenServiceBrief
class UFortDataDrivenServiceBrief : public UFortConversationOptionBrief
{
public:
	uint8                                        Pad_4D4[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_TitleBar;                                     // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                  RichText_Description;                              // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_StockRemaining;                               // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortTransactionStrip*                 TransactionStrip_Main;                             // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs;                                    // 0x298(0x50)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortDataDrivenServiceBrief* GetDefaultObj();

	void OnUnableToPurchase(class FText& Reason);
	void OnTransactionInfoReceived(class UFortItem* Item);
	void OnAbleToPurchase();
};

// 0x28 (0x2B0 - 0x288)
// Class FortniteConversationUI.FortDuelBrief
class UFortDuelBrief : public UFortItemTransactionBrief
{
public:
	class FText                                  TextTemplate;                                      // 0x288(0x18)(Edit, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  Text_Objective;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTileView*                       TileView;                                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortDuelBrief* GetDefaultObj();

	void DisplayLootItems(TArray<class UFortItem*>& Items);
};

// 0x20 (0x2A8 - 0x288)
// Class FortniteConversationUI.FortHireBrief
class UFortHireBrief : public UFortItemTransactionBrief
{
public:
	class FText                                  TextTemplate;                                      // 0x288(0x18)(Edit, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  Text_Objective;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortHireBrief* GetDefaultObj();

};

// 0x20 (0x2A8 - 0x288)
// Class FortniteConversationUI.FortIntelBrief
class UFortIntelBrief : public UFortItemTransactionBrief
{
public:
	class FText                                  TextTemplate;                                      // 0x288(0x18)(Edit, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  Text_Objective;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortIntelBrief* GetDefaultObj();

};

// 0xC8 (0x338 - 0x270)
// Class FortniteConversationUI.FortItemFundBrief
class UFortItemFundBrief : public UCommonUserWidget
{
public:
	uint8                                        Pad_4E7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventMessageTag                      CurrentFundsChangedTag;                            // 0x278(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4EA[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_TitleBar;                                     // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ProgressPercent;                              // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ProgressCount;                                // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortSimpleMaterialProgressBar*        Progress_Funding;                                  // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortLazyImage*                        LazyImage_Icon;                                    // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortTransactionStrip*                 TransactionStrip_Main;                             // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs;                                    // 0x2E8(0x50)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortItemFundBrief* GetDefaultObj();

	void OnProgressUpdated(float CurrentFundingFraction);
	void InitializeFromContext(struct FConversationContext& ConversationContext);
};

// 0x68 (0x2D8 - 0x270)
// Class FortniteConversationUI.FortSingleItemFundBrief
class UFortSingleItemFundBrief : public UFortConversationOptionBrief
{
public:
	uint8                                        Pad_4EF[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemFundBrief*                    Item_Entry;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortNPCTextDisplay*                   NPCTextDisplay;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs;                                    // 0x288(0x50)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortSingleItemFundBrief* GetDefaultObj();

};

// 0x8 (0x2E0 - 0x2D8)
// Class FortniteConversationUI.FortMultiItemFundBrief
class UFortMultiItemFundBrief : public UFortSingleItemFundBrief
{
public:
	class UFortItemFundBrief*                    Item_EntrySecondary;                               // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortMultiItemFundBrief* GetDefaultObj();

	void UpdateSelectedVisuals(int32 SelectedIndex);
};

// 0x10 (0x258 - 0x248)
// Class FortniteConversationUI.FortNPCTextDisplay
class UFortNPCTextDisplay : public UUserWidget
{
public:
	class UCommonRichTextBlock*                  Text_Message;                                      // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortLazyImage*                        LazyImage_NPCImage;                                // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortNPCTextDisplay* GetDefaultObj();

	void OnTextUpdated();
};

// 0x50 (0x2C0 - 0x270)
// Class FortniteConversationUI.FortQuestBrief
class UFortQuestBrief : public UFortConversationOptionBrief
{
public:
	uint8                                        Pad_506[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ThisMatchOnlyQuestText;                            // 0x278(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                  Text_Objective;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_MoneyReward;                                  // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_XpReward;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ExpirationTime;                               // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonLazyImage*                      LazyImage_QuestProviderImage;                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOverlay*                              Overlay_QuestProvider;                             // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortQuestBrief* GetDefaultObj();

	void OnQuestInformationRecieved(class FText& Objective, struct FFortRarityItemData& RarityData, struct FGameplayTag& CategoryTag, int32 XPReward, int32 MoneyReward);
	void OnQuestExpirationTimeSet(bool bDisplayExpirationTime);
};

// 0x20 (0x2A8 - 0x288)
// Class FortniteConversationUI.FortShowFutureStormCircleBrief
class UFortShowFutureStormCircleBrief : public UFortItemTransactionBrief
{
public:
	class FText                                  PurchaseServiceText;                               // 0x288(0x18)(Edit, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  Text_Display;                                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortShowFutureStormCircleBrief* GetDefaultObj();

	void OnUnableToPurchase(enum class EPreventUseStormCircleServiceReason Reason);
	void OnAbleToPurchase();
};

// 0x60 (0x2D0 - 0x270)
// Class FortniteConversationUI.FortSingleOrMultiItemFundBrief
class UFortSingleOrMultiItemFundBrief : public UFortConversationOptionBrief
{
public:
	uint8                                        Pad_515[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UFortConversationOptionBrief> SingleItemBrief;                                   // 0x278(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UFortConversationOptionBrief> MultiItemsBrief;                                   // 0x2A0(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              Overlay_Brief;                                     // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortSingleOrMultiItemFundBrief* GetDefaultObj();

};

// 0x20 (0x268 - 0x248)
// Class FortniteConversationUI.FortTransactionStrip
class UFortTransactionStrip : public UUserWidget
{
public:
	class UCommonTextBlock*                      Text_CostDescription;                              // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortWorldItemDefinition*              ResourceCurrency;                                  // 0x250(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_523[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortTransactionStrip* GetDefaultObj();

	void OnTransactionInfoReceived(struct FFortServiceTransactionInfo& TransactionInfo);
	void OnSetTransactionCostVisibility(bool bVisible);
	void HandleOnItemCountChanged(TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner, class UFortItemDefinition* Definition, int32 Delta);
};

// 0x0 (0x288 - 0x288)
// Class FortniteConversationUI.FortUpgradeBrief
class UFortUpgradeBrief : public UFortItemTransactionBrief
{
public:

	static class UClass* StaticClass();
	static class UFortUpgradeBrief* GetDefaultObj();

	void OnUpgradeInfoReceived(class UFortItem* CurrentWeapon);
	void OnUnableToUpgrade(enum class EFortWeaponUpgradeInteractionResult CannotUpgradeCause);
};

// 0x20 (0x528 - 0x508)
// Class FortniteConversationUI.MobileConversationScreen
class UMobileConversationScreen : public UFortConversationScreen
{
public:
	class UButton*                               MobileButtonConfirm;                               // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UButton*                               MobileButtonTouchInformation;                      // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_547[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonVisibilitySwitcher*             Switcher_CenteredDetails;                          // 0x520(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMobileConversationScreen* GetDefaultObj();

	void OnHandleConfirmClicked();
};

}


