#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x80 - 0x30)
// Class MoleUI.FortMobileButtonBehaviorComponent_MoleRoleVisibility
class UFortMobileButtonBehaviorComponent_MoleRoleVisibility : public UFortMobileButtonBehaviorComponent_Visibility
{
public:
	TMap<enum class EMoleRole, enum class ESlateVisibility> RoleVisibility;                                    // 0x30(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortMobileButtonBehaviorComponent_MoleRoleVisibility* GetDefaultObj();

};

// 0x8 (0x250 - 0x248)
// Class MoleUI.MoleActiveTaskContextBarHUDWidget
class UMoleActiveTaskContextBarHUDWidget : public UUserWidget
{
public:
	class UMolePlayerTaskManagementComponent*    CachedOwningTaskComponent;                         // 0x248(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMoleActiveTaskContextBarHUDWidget* GetDefaultObj();

};

// 0x10 (0x258 - 0x248)
// Class MoleUI.MoleAssignedTaskContainerWidget
class UMoleAssignedTaskContainerWidget : public UUserWidget
{
public:
	class UDynamicEntryBox*                      TaskWidgetEntryBox;                                // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMolePlayerTaskManagementComponent*    CachedOwningTaskComponent;                         // 0x250(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMoleAssignedTaskContainerWidget* GetDefaultObj();

	void OnActiveTasksChanged(bool bFrameDefer);
};

// 0x20 (0x268 - 0x248)
// Class MoleUI.MoleControllerBinding
class UMoleControllerBinding : public UUserWidget
{
public:
	struct FKey                                  RepresentedKey;                                    // 0x248(0x18)(Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    KeyBind_RepresentedAction;                         // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoleControllerBinding* GetDefaultObj();

	void OnBindingInfoSet(class FText& BindingLabel, bool bIsSaboteurBinding);
};

// 0x58 (0x3C0 - 0x368)
// Class MoleUI.MoleControllerBindingsScreen
class UMoleControllerBindingsScreen : public UFortOptionsTab
{
public:
	TMap<enum class ECommonGamepadType, TSoftObjectPtr<class UObject>> ControllerImages;                                  // 0x368(0x50)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UCommonLazyImage*                      Image_Controller;                                  // 0x3B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoleControllerBindingsScreen* GetDefaultObj();

};

// 0x18 (0x260 - 0x248)
// Class MoleUI.MoleEnemyAbilityContainer
class UMoleEnemyAbilityContainer : public UUserWidget
{
public:
	class UDataTable*                            AbilityUIDataTable;                                // 0x248(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonListView*                       Listview_EnemyTasks;                               // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMoleEnemyAbilityWidgetComponent*      OwnerWidgetComponent;                              // 0x258(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoleEnemyAbilityContainer* GetDefaultObj();

	void OnVisibilityChangeRequested(bool bNewVisibility);
};

// 0x28 (0xED0 - 0xEA8)
// Class MoleUI.MoleEnemyAbilityEntry
class UMoleEnemyAbilityEntry : public UCommonButtonBase
{
public:
	uint8                                        Pad_3969[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsInteractable;                                   // 0xEC0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_396B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMoleEnemyAbilityOverlay*              Overlay_EnemyAbilities;                            // 0xEC8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoleEnemyAbilityEntry* GetDefaultObj();

	void OnAbilityDataReceived(class UMoleEnemyAbilityItem* Data);
};

// 0x158 (0x180 - 0x28)
// Class MoleUI.MoleEnemyAbilityItem
class UMoleEnemyAbilityItem : public UObject
{
public:
	uint8                                        Pad_396F[0xE8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMoleAbilityUIData                    EnemyAbilityUIData;                                // 0x110(0x58)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_3970[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleEnemyAbilityItem* GetDefaultObj();

	int32 GetIndex();
};

// 0x20 (0x268 - 0x248)
// Class MoleUI.MoleEnemyAbilityOverlay
class UMoleEnemyAbilityOverlay : public UUserWidget
{
public:
	uint8                                        Pad_3976[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UMoleEnemyAbilityItem*                 EnemyAbilityItem;                                  // 0x258(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3977[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleEnemyAbilityOverlay* GetDefaultObj();

	void OnCooldownUpdated(int32 TimeLeft);
	void OnCooldownStarted(int32 TimeLeft);
	void OnCooldownFinished();
	void OnAbilityDataReceived(const struct FMoleAbilityUIData& InAbilityUIData);
};

// 0x40 (0x5E0 - 0x5A0)
// Class MoleUI.MoleEnemyAbilityWidgetComponent
class UMoleEnemyAbilityWidgetComponent : public UWidgetComponent
{
public:
	class UInputComponent*                       EnemyMenuInputComponent;                           // 0x5A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputComponent*                       InternalBindingsInputComponent;                    // 0x5A8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               WidgetRelativeLocation;                            // 0x5B0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               WidgetRelativeScale;                               // 0x5BC(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              WidgetRelativeRotation;                            // 0x5C8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3983[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleEnemyAbilityWidgetComponent* GetDefaultObj();

	bool AreSabotageShortcutsEnabled();
};

// 0x8 (0x250 - 0x248)
// Class MoleUI.MoleLocationWidget
class UMoleLocationWidget : public UUserWidget
{
public:
	class UFortControllerComponent_MapDiscoverability* DiscoverabilityComponent;                          // 0x248(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoleLocationWidget* GetDefaultObj();

	void OnVisited(class FText& LocalizedLocationName, bool bIsNamedLocation);
};

// 0xD0 (0x1D0 - 0x100)
// Class MoleUI.MoleMinimap
class UMoleMinimap : public UWidget
{
public:
	struct FSlateBrush                           MolePlayerIcon;                                    // 0x100(0xB0)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                             DesiredSize;                                       // 0x1B0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               MapCenterOffset;                                   // 0x1B8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ShowMapBackground;                                 // 0x1C4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3992[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ZoomLevel;                                         // 0x1C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinimapIndicatorZoomLevel;                         // 0x1CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMoleMinimap* GetDefaultObj();

};

// 0x20 (0x268 - 0x248)
// Class MoleUI.MoleMobileLoaderWidget
class UMoleMobileLoaderWidget : public UUserWidget
{
public:
	uint8                                        Pad_3995[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleMobileLoaderWidget* GetDefaultObj();

};

// 0x8 (0x250 - 0x248)
// Class MoleUI.MoleNameplate
class UMoleNameplate : public UUserWidget
{
public:
	class UFortVoiceChatStatusIcon*              VoiceIcon_Status;                                  // 0x248(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoleNameplate* GetDefaultObj();

	void SetupNameplateFor(class APlayerState* OwningPlayer);
};

// 0x48 (0x290 - 0x248)
// Class MoleUI.MolePostGameScreen
class UMolePostGameScreen : public UUserWidget
{
public:
	class UInputComponent*                       PostGameInputComponent;                            // 0x248(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMoleHoldBinding                      BackToMenuBinding;                                 // 0x250(0x20)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        MobileAutoGoBackToMenuTime;                        // 0x270(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_399C[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaAccoladeListWidget*             Listview_Accolades;                                // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMolePostGameScreen* GetDefaultObj();

	void StartMobileAutoGoBackToMenu();
	void OnXPCalculated(int32 XPValue);
};

// 0x10 (0x258 - 0x248)
// Class MoleUI.MolePrimaryActiveTaskHUDWidget
class UMolePrimaryActiveTaskHUDWidget : public UUserWidget
{
public:
	class UMolePlayerTaskManagementComponent*    CachedOwningTaskComponent;                         // 0x248(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMoleTaskHUDWidget*                    MoleTaskHUDWidget;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMolePrimaryActiveTaskHUDWidget* GetDefaultObj();

};

// 0x50 (0x380 - 0x330)
// Class MoleUI.MoleQuickChatLogWidget
class UMoleQuickChatLogWidget : public UCommonActivatableWidget
{
public:
	class FText                                  SelfMessageLogTitle;                               // 0x330(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  SelectedTokenFormat;                               // 0x348(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class UListView*                             ListView_MessageLog;                               // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMoleQuickChatMessageItem*>     MessageLog;                                        // 0x368(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39A0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleQuickChatLogWidget* GetDefaultObj();

	void OnFirstMessageReceived();
};

// 0x60 (0x390 - 0x330)
// Class MoleUI.MoleQuickChatMap
class UMoleQuickChatMap : public UCommonActivatableWidget
{
public:
	class UMoleQuickChatMapEntry*                DefaultRoomWidgetToFocus;                          // 0x330(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPanelWidget*                          Panel_Locations;                                   // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_SkipLocation;                               // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39A3[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleQuickChatMap* GetDefaultObj();

};

// 0x48 (0xEF0 - 0xEA8)
// Class MoleUI.MoleQuickChatMapEntry
class UMoleQuickChatMapEntry : public UCommonButtonBase
{
public:
	struct FGameplayTag                          LocationTag;                                       // 0xEA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39A9[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBox*                        HBox_HerePin;                                      // 0xEE8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoleQuickChatMapEntry* GetDefaultObj();

	void ResetCosmetics();
	void OnMapDataRetrieved(struct FMoleLocationData& LocationData);
};

// 0x58 (0xF00 - 0xEA8)
// Class MoleUI.MoleQuickChatPlayerEntry
class UMoleQuickChatPlayerEntry : public UCommonButtonBase
{
public:
	class FName                                  PlayerPortraitColorAMaterialParameterName;         // 0xEA8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  PlayerPortraitColorBMaterialParameterName;         // 0xEB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsOnLowerRow;                                     // 0xEB8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerState*                          PlayerState;                                       // 0xEC0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                PlayerName;                                        // 0xEC8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsLocalPlayer;                                    // 0xED8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsGhost;                                          // 0xED9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsFilteredOut;                                    // 0xEDA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39B2[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonLazyImage*                      LazyImage_PlayerPortrait;                          // 0xEE0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USizeBox*                              Size_Ghost;                                        // 0xEE8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_PlayerNumber;                                 // 0xEF0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39B3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleQuickChatPlayerEntry* GetDefaultObj();

	void OnDataChanged();
};

// 0x80 (0x3B0 - 0x330)
// Class MoleUI.MoleQuickChatPlayersWidget
class UMoleQuickChatPlayersWidget : public UCommonActivatableWidget
{
public:
	bool                                         bIsSkipButtonEnabled;                              // 0x330(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlay*                              Overlay_Players;                                   // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Skip;                                       // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39BA[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputComponent*                       PlayersInputComponent;                             // 0x390(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMoleQuickChatPlayerEntry*>     PlayerButtons;                                     // 0x398(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39BB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleQuickChatPlayersWidget* GetDefaultObj();

	void OnFilterChanged();
};

// 0x40 (0x68 - 0x28)
// Class MoleUI.MoleQuickChatMessageItem
class UMoleQuickChatMessageItem : public UObject
{
public:
	uint8                                        Pad_39BF[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerState*                          PlayerState;                                       // 0x60(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMoleQuickChatMessageItem* GetDefaultObj();

};

// 0x30 (0x278 - 0x248)
// Class MoleUI.MoleQuickChatMessageEntry
class UMoleQuickChatMessageEntry : public UUserWidget
{
public:
	uint8                                        Pad_39C3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URichTextBlock*                        Text_Sender;                                       // 0x250(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URichTextBlock*                        Text_Message;                                      // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFromSelf;                                       // 0x260(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFromPreviousSender;                             // 0x261(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39C5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerState*                          PlayerState;                                       // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemDefinition*                   PlayerItemDefinition;                              // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMoleQuickChatMessageEntry* GetDefaultObj();

	void OnDataChanged();
};

// 0x48 (0xF90 - 0xF48)
// Class MoleUI.MoleQuickChatRadialSlot
class UMoleQuickChatRadialSlot : public UFortRadialSlot
{
public:
	struct FLinearColor                          CategoryColor;                                     // 0xF48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UTexture2D>             CategoryImage;                                     // 0xF58(0x28)(BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                  RichText_Main;                                     // 0xF80(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39C8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleQuickChatRadialSlot* GetDefaultObj();

	void OnUpdated();
};

// 0x0 (0xF90 - 0xF90)
// Class MoleUI.MoleQuickChatCategorySlot
class UMoleQuickChatCategorySlot : public UMoleQuickChatRadialSlot
{
public:

	static class UClass* StaticClass();
	static class UMoleQuickChatCategorySlot* GetDefaultObj();

};

// 0x0 (0xF90 - 0xF90)
// Class MoleUI.MoleQuickChatActionSlot
class UMoleQuickChatActionSlot : public UMoleQuickChatRadialSlot
{
public:

	static class UClass* StaticClass();
	static class UMoleQuickChatActionSlot* GetDefaultObj();

	void OnIsAvailableChanged(bool bIsAvailable);
};

// 0xB8 (0x168 - 0xB0)
// Class MoleUI.MoleQuickChatUIComponent
class UMoleQuickChatUIComponent : public UPlayerStateComponent
{
public:
	TSoftObjectPtr<class UDataTable>             MessagesTable;                                     // 0xB0(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct FMoleQuickChatMessageInfo, float> MessageSpamMap;                                    // 0xD8(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FMoleQuickChatMessageSummary          MessagesSummary;                                   // 0x128(0x18)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FMoleQuickChatRawMessage>      MessageLog;                                        // 0x140(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	float                                        MinimumTimeBetweenSameMessageSend;                 // 0x150(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            LoadedMessagesTable;                               // 0x158(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39D1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleQuickChatUIComponent* GetDefaultObj();

};

// 0x220 (0x550 - 0x330)
// Class MoleUI.MoleQuickChatWidget
class UMoleQuickChatWidget : public UCommonActivatableWidget
{
public:
	class FText                                  LeftBracketToken;                                  // 0x330(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  RightBracketToken;                                 // 0x348(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  AddPlayerToken;                                    // 0x360(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  AddPlayerOptionalToken;                            // 0x378(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  AddPlayerTitleToken;                               // 0x390(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  AddGhostToken;                                     // 0x3A8(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  AddGhostOptionalToken;                             // 0x3C0(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  AddGhostTitleToken;                                // 0x3D8(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  AddLocationToken;                                  // 0x3F0(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  AddLocationOptionalToken;                          // 0x408(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  AddLocationTitleToken;                             // 0x420(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  SelectedTokenFormat;                               // 0x438(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UMoleQuickChatRadialSlot>  CategoryWidgetClass;                               // 0x450(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UMoleQuickChatRadialSlot>  ActionWidgetClass;                                 // 0x458(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FMoleBlockedInput>             InputActionsToBlock;                               // 0x460(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FMoleHoldBinding                      BackBinding;                                       // 0x470(0x20)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UOverlay*                              Overlay_Selections;                                // 0x490(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonVisibilitySwitcher*             Switcher_SelectionMethods;                         // 0x498(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOverlay*                              Overlay_Radial;                                    // 0x4A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOverlay*                              Overlay_Players;                                   // 0x4A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOverlay*                              Overlay_Map;                                       // 0x4B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMoleSlottedRadialMenu*                Radial_Selections;                                 // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMoleQuickChatPlayersWidget*           MolePlayers_PlayerSelection;                       // 0x4C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMoleQuickChatMap*                     MoleMap_LocationSelection;                         // 0x4C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USizeBox*                              SizeBox_HotkeyBar;                                 // 0x4D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOverlay*                              Overlay_FullscreenContainer;                       // 0x4D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39DD[0x58];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputComponent*                       QuickChatInputComponent;                           // 0x538(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39DF[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleQuickChatWidget* GetDefaultObj();

	void OnPreviewChanged(class FText& Message);
	void OnMessageFailedToSend();
	void OnItemClicked();
	void OnAvailable();
	bool AreAcceptAndBackInverted();
};

// 0x50 (0x298 - 0x248)
// Class MoleUI.MoleQuickChatWidgetProxy
class UMoleQuickChatWidgetProxy : public UUserWidget
{
public:
	TSubclassOf<class UMoleQuickChatUIComponent> QuickChatUIComponentClass;                         // 0x248(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UUserWidget>             ActiveClass;                                       // 0x250(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39E3[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleQuickChatWidgetProxy* GetDefaultObj();

	void OnQuickChatOpened();
	void OnQuickChatClosed();
	void OnEnter();
};

// 0x90 (0x2B0 - 0x220)
// Class MoleUI.MoleRoleColor
class AMoleRoleColor : public AActor
{
public:
	struct FEventMessageTag                      PeelyPartyTag;                                     // 0x220(0x8)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TraceEndPointOffset;                               // 0x228(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x234(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39E7[0x6B];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UDecalComponent*                       DecalComponent;                                    // 0x2A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39E8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMoleRoleColor* GetDefaultObj();

	void SetColor(struct FLinearColor& Color);
	void OnSetColor(struct FLinearColor& Color);
	void Hide();
};

// 0x60 (0x2A8 - 0x248)
// Class MoleUI.MoleSaboteurBarEntry
class UMoleSaboteurBarEntry : public UUserWidget
{
public:
	class FText                                  Name;                                              // 0x248(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FName                                  TriggeringInputAction;                             // 0x260(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 AbilitiesToTrack;                                  // 0x268(0x20)(Edit, NativeAccessSpecifierPrivate)
	bool                                         bTrackLowestCooldown;                              // 0x288(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayAbilitySpec>          AbilitySpecsToTrack;                               // 0x290(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class UMoleTimer*                            Timer_EntryVisuals;                                // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoleSaboteurBarEntry* GetDefaultObj();

};

// 0x20 (0x370 - 0x350)
// Class MoleUI.MoleSlottedRadialMenu
class UMoleSlottedRadialMenu : public UFortSlottedRadialMenu
{
public:
	class FName                                  PointerRotationMaterialParameterName;              // 0x350(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AngleChangedEpsilon;                               // 0x358(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UImage*                                Image_Pointer;                                     // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39FC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleSlottedRadialMenu* GetDefaultObj();

	void OnResetNavigation();
	void OnRadialEntrySelected(int32 Index, class UUserWidget* SelectedEntry);
	void OnRadialEntriesChanged(bool bIsActions, int32 NumEntries, float Degrees);
	void OnCategorySelected(class UFortRadialSlot* SelectedSlot, TArray<struct FMoleQuickChatActionData>& Actions, struct FLinearColor& CategoryColor, TSoftObjectPtr<class UTexture2D>& CategoryImage);
};

// 0x10 (0x2F8 - 0x2E8)
// Class MoleUI.MoleSubobjectiveIndicatorWidget
class UMoleSubobjectiveIndicatorWidget : public UFortActorIndicatorWidget
{
public:
	float                                        MaximumRelativeHeightBeforeOffset;                 // 0x2E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CollisionRelativeHeightOffset;                     // 0x2EC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsScreenClamped : 1;                              // Mask: 0x1, PropSize: 0x10x2F0(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A01[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleSubobjectiveIndicatorWidget* GetDefaultObj();

	void OnSetUsageMode(bool bUseGoalIndicatorMode);
	void OnScreenClampChanged(bool bScreenClamped);
};

// 0x38 (0x280 - 0x248)
// Class MoleUI.MoleTaskHUDWidget
class UMoleTaskHUDWidget : public UUserWidget
{
public:
	class UDynamicEntryBox*                      ObjectiveEntryBox;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUserWidget*                           TaskProgress;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMolePlayerTaskManagementComponent*    CachedOwningTaskComponent;                         // 0x258(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMoleTaskDataAsset*                    CachedTaskDataAsset;                               // 0x260(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMoleActiveTaskStateHandle            CachedTaskHandle;                                  // 0x268(0x4)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A0D[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bAttemptShowActiveObjectives : 1;                  // Mask: 0x1, PropSize: 0x10x278(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A0E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleTaskHUDWidget* GetDefaultObj();

	void SetTaskHandle(const struct FMoleActiveTaskStateHandle& TaskHandle);
	void SetTaskAsset(class UMoleTaskDataAsset* TaskAsset);
	void SetAttemptShowActiveObjectives(bool bAttemptShow);
	void RequestCompactMode();
	void OnRepresentedTaskChanged(class UMoleTaskDataAsset* PreviousTaskAsset, const struct FMoleActiveTaskStateHandle& PreviousHandle);
	void OnRepresentedLogicPhaseChange();
	class FText GetTaskTitle();
	class UMoleTaskDataAsset* GetTaskAsset();
};

// 0x8 (0x250 - 0x248)
// Class MoleUI.MoleTaskObjectiveHUDWidget
class UMoleTaskObjectiveHUDWidget : public UUserWidget
{
public:
	uint8                                        Pad_3A1B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleTaskObjectiveHUDWidget* GetDefaultObj();

	void OnRepresentedObjectiveTargetValueChanged(float NewTargetValue);
	void OnRepresentedObjectiveCurrentValueChanged(float NewCurrentValue);
	void OnRepresentedObjectiveChanged();
	struct FMoleTaskObjectiveUIInfo GetTaskObjectiveInfo();
};

// 0x10 (0x258 - 0x248)
// Class MoleUI.MoleTimer
class UMoleTimer : public UUserWidget
{
public:
	uint8                                        Pad_3A21[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleTimer* GetDefaultObj();

	void StartTimer(float InServerFinishTime);
	void OnTimerUpdated(int32 TimeLeft);
	void OnTimerStarted(int32 TimeLeft);
	void OnTimerFinished();
	void OnTimerCleared();
	void ClearTimer();
};

// 0x0 (0xE8 - 0xE8)
// Class MoleUI.MoleUIAssetManagerComponent
class UMoleUIAssetManagerComponent : public UMoleAssetManagerComponent
{
public:

	static class UClass* StaticClass();
	static class UMoleUIAssetManagerComponent* GetDefaultObj();

};

// 0xC8 (0x2F8 - 0x230)
// Class MoleUI.MoleUIDirector
class AMoleUIDirector : public ADynamicUIDirectorBase
{
public:
	TArray<class UDynamicUIScene*>               LobbyStateScenes;                                  // 0x230(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UDynamicUIScene*>               VotingStateScenes;                                 // 0x240(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UDynamicUIScene*>               QuickChatScenes;                                   // 0x250(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UDynamicUIScene*                       AllyScene;                                         // 0x260(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicUIScene*                       EnemyScene;                                        // 0x268(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicUIScene*                       GhostScene;                                        // 0x270(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class AMoleVotingPresentationManager> VotingSummaryPresentationManagerClass;             // 0x278(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AMoleVotingPresentationManager*        VotingSummaryPresentationManager;                  // 0x280(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UMoleEnemyAbilityWidgetComponent> EnemyAbilitiesMenuClass;                           // 0x288(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            EnemyAbilityUIDataTable;                           // 0x290(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            LocationDataTable;                                 // 0x298(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            PlayerUIInfoDataTable;                             // 0x2A0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicUIScene*                       RoleScene;                                         // 0x2A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMoleEnemyAbilityWidgetComponent*      EnemyAbilityMenuComponent;                         // 0x2B0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A32[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMoleUIDirector* GetDefaultObj();

	bool GetMolePlayerUIData(class APlayerState* PlayerState, int32* OutPlayerNUmber, struct FMolePlayerUIData* OutPlayerUIData);
	bool GetMoleLocationData(class UObject* WorldContextObject, struct FGameplayTag& LocationTag, struct FMoleLocationData* OutLocationData);
	bool GetMoleEnemyAbilityUIData(class UObject* WorldContextObject, struct FGameplayTag& SabotageTag, struct FMoleAbilityUIData* OutEnemyAbilityUIData);
};

// 0xE8 (0x198 - 0xB0)
// Class MoleUI.MoleUIIndicatorManagerComponent
class UMoleUIIndicatorManagerComponent : public UControllerComponent
{
public:
	uint8                                        Pad_3A34[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UMoleSubobjectiveIndicatorWidget> SubobjectiveIndicatorWidgetClass;                  // 0xB8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FUserWidgetPool                       IndicatorPool;                                     // 0xC0(0x88)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<class AActor*, class UMoleSubobjectiveIndicatorWidget*> ActorToSubobjectiveIndicatorMap;                   // 0x148(0x50)(ExportObject, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMoleUIIndicatorManagerComponent* GetDefaultObj();

};

// 0x0 (0x250 - 0x250)
// Class MoleUI.MoleVoiceChatStatusIcon
class UMoleVoiceChatStatusIcon : public UFortVoiceChatStatusIconProxyAnim
{
public:

	static class UClass* StaticClass();
	static class UMoleVoiceChatStatusIcon* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MoleUI.MolePlayerItem
class UMolePlayerItem : public UObject
{
public:
	bool                                         bHiddenIdentity;                                   // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A3C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMolePlayerItem* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class MoleUI.MoleVotingPlayerInfoItem
class UMoleVotingPlayerInfoItem : public UMolePlayerItem
{
public:
	struct FMoleVotingPlayerInfo                 PlayerInfo;                                        // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMoleVotingPlayerInfoItem* GetDefaultObj();

};

// 0x18 (0x260 - 0x248)
// Class MoleUI.MoleVoteCastingInfoPanel
class UMoleVoteCastingInfoPanel : public UUserWidget
{
public:
	class UCommonListView*                       ListView_EliminatedPlayers;                        // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonListView*                       ListView_Voters;                                   // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonListView*                       ListView_Saboteurs;                                // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoleVoteCastingInfoPanel* GetDefaultObj();

	void OnPanelVisibilityChanged(bool bShouldShowPanel);
};

// 0x28 (0x270 - 0x248)
// Class MoleUI.MoleVoteTally
class UMoleVoteTally : public UUserWidget
{
public:
	TArray<class APlayerState*>                  VoteList;                                          // 0x248(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A46[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTileView*                       TileView_Votes;                                    // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMoleVoteTally* GetDefaultObj();

	void OnVoteTallyStarted(bool bIsSkipTally);
};

// 0x0 (0x5A0 - 0x5A0)
// Class MoleUI.MoleVoteTallyWidgetComponent
class UMoleVoteTallyWidgetComponent : public UWidgetComponent
{
public:

	static class UClass* StaticClass();
	static class UMoleVoteTallyWidgetComponent* GetDefaultObj();

};

// 0x0 (0x220 - 0x220)
// Class MoleUI.MoleVotingIndicator
class AMoleVotingIndicator : public AActor
{
public:

	static class UClass* StaticClass();
	static class AMoleVotingIndicator* GetDefaultObj();

	void OnIndicatorRevealed(class APlayerState* AccuserPlayerState);
};

// 0xB8 (0x2D8 - 0x220)
// Class MoleUI.MoleVotingPresentationManager
class AMoleVotingPresentationManager : public AActor
{
public:
	struct FScalableFloat                        TimeBetweenVoteReveals;                            // 0x220(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FVector                               PlayerTallyWidgetComponentRelativeOffset;          // 0x248(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               SkipTallyWidgetComponentRelativeOffset;            // 0x254(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SelfTallyWidgetSizeMultiplier;                     // 0x260(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A4C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UMoleVoteTallyWidgetComponent> VoteTallyWidgetComponentClass;                     // 0x268(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMoleVoteTallyWidgetComponent*> TallyWidgetComponents;                             // 0x270(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<class APlayerState*, class AFortPlayerStart*> PlayerStartsPerPlayer;                             // 0x280(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	class AActor*                                SkippedVotesSpawnPoint;                            // 0x2D0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AMoleVotingPresentationManager* GetDefaultObj();

};

// 0x10 (0x420 - 0x410)
// Class MoleUI.MoleWidgetInteractionComponent
class UMoleWidgetInteractionComponent : public UWidgetInteractionComponent
{
public:
	class UInputComponent*                       InputComp;                                         // 0x410(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A4D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoleWidgetInteractionComponent* GetDefaultObj();

};

}


