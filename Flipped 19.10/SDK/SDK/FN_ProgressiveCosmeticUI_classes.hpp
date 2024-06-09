#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x270 - 0x248)
// Class ProgressiveCosmeticUI.FortProgressiveItemDetailsWidget
class UFortProgressiveItemDetailsWidget : public UUserWidget
{
public:
	class UCommonTextBlock*                      Text_CosmeticStage;                                // 0x248(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  Text_UnlockCriteria;                               // 0x250(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Widget_UnlockCriteriaContainer;                    // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaRewardItemTypeRarityTag*        Widget_ItemTypeRarityTag;                          // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortProgressiveStageTags*             Widget_ProgressiveStageTags;                       // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortProgressiveItemDetailsWidget* GetDefaultObj();

};

// 0x1B8 (0x790 - 0x5D8)
// Class ProgressiveCosmeticUI.FortProgressiveItemScreen
class UFortProgressiveItemScreen : public UFortItemPreviewScreen
{
public:
	uint8                                        Pad_3A8D[0x68];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAccountItemDefinition*            AccountItemDefinition;                             // 0x640(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A8E[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     Button_Back;                                       // 0x670(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_MobileBack;                                 // 0x678(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_MoreInfo;                                   // 0x680(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Subscribe;                                  // 0x688(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_PreviewStyles;                              // 0x690(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Widget_ExpirationDateBang;                         // 0x698(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ExpirationFinePrint;                          // 0x6A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_NewStagesUnlockFinePrint;                     // 0x6A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      EntryBox_StagesPips;                               // 0x6B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortSwipePanel*                       SwipePanel_Navigation;                             // 0x6B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonGroupBase*                ButtonGroup_StagesPips;                            // 0x6C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortProgressiveItemDetailsWidget*     Widget_ProgressiveItemDetails;                     // 0x6C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortProgressiveStageList*             Widget_ProgressiveStageList;                       // 0x6D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortProgressiveItemStateTitleWidget*  ProgressiveItemStateTitle;                         // 0x6D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortSubscriptionPlatformModal> MoreInfoModalClass;                                // 0x6E0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortSubscriptionProgressiveSizzleVideo> SizzleVideoClass;                                  // 0x708(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BangeDisplayDelay;                                 // 0x730(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A8F[0x5C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortProgressiveItemScreen* GetDefaultObj();

	void OnItemSelected();
	void OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs);
};

// 0x8 (0x250 - 0x248)
// Class ProgressiveCosmeticUI.FortProgressiveItemStateTitleWidget
class UFortProgressiveItemStateTitleWidget : public UUserWidget
{
public:
	class UCommonTextBlock*                      Text_UnlockedStages;                               // 0x248(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortProgressiveItemStateTitleWidget* GetDefaultObj();

};

// 0x58 (0xF00 - 0xEA8)
// Class ProgressiveCosmeticUI.FortProgressiveItemWidget
class UFortProgressiveItemWidget : public UCommonButtonBase
{
public:
	class UAthenaItemShopReactiveTileText*       TileText_ItemName;                                 // 0xEA8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FProgressiveStageItemInfo             StageItemInfo;                                     // 0xEB0(0x40)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A94[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortProgressiveItemWidget* GetDefaultObj();

	void OnUnhighlighted();
	void OnStageItemChanged(struct FProgressiveStageItemInfo& InStageItemInfo);
	void OnPeekStateChanged(bool bIsInPeekState);
	void OnHighlighted();
};

// 0x48 (0x378 - 0x330)
// Class ProgressiveCosmeticUI.FortProgressiveStageList
class UFortProgressiveStageList : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_3A9C[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonGroupBase*                ButtonGroup_StageItems;                            // 0x348(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaScrollBox*                      ScrollBox_StageList;                               // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A9E[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortProgressiveStageList* GetDefaultObj();

	void ClearStageWidgets();
	class UFortProgressiveStageWidget* AddStageWidget();
};

// 0x18 (0x260 - 0x248)
// Class ProgressiveCosmeticUI.FortProgressiveStageTags
class UFortProgressiveStageTags : public UUserWidget
{
public:
	class UWidgetSwitcher*                       Switcher_ActiveTag;                                // 0x248(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Tag_Owned;                                         // 0x250(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Tag_Prerequisite;                                  // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortProgressiveStageTags* GetDefaultObj();

};

// 0x28 (0x298 - 0x270)
// Class ProgressiveCosmeticUI.FortProgressiveStageWidget
class UFortProgressiveStageWidget : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      Text_Month;                                        // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortProgressiveStageTags*             Widget_ProgressiveStageTags;                       // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3AA3[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortProgressiveStageWidget* GetDefaultObj();

	void OnPeekStateChanged(bool bIsInPeekState);
	void ClearStageItemWidgets();
	class UFortProgressiveItemWidget* AddStageItemWidget();
};

// 0x28 (0x50 - 0x28)
// Class ProgressiveCosmeticUI.ProgressiveCosmeticUIGameFeatureAction
class UProgressiveCosmeticUIGameFeatureAction : public UFortUIGameFeatureAction
{
public:
	TSubclassOf<class UFortProgressiveItemScreen> ProgressionScreenClass;                            // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FFortProgressiveUIStage>       Stages;                                            // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3AA4[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProgressiveCosmeticUIGameFeatureAction* GetDefaultObj();

};

}


