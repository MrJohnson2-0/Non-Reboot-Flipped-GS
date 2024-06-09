#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xEE0 - 0xEC0)
// Class CraftingUI.AthenaCraftingQuickBarButton
class UAthenaCraftingQuickBarButton : public UAthenaQuickBarSlotButtonBase
{
public:
	uint8                                        Pad_1A88[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaCraftingQuickBarButton* GetDefaultObj();

	void OnIsCraftableItemChanged(bool bIsCraftableItem);
	void OnCanCraftNowChanged(bool bCanCraftNow);
};

// 0x20 (0x290 - 0x270)
// Class CraftingUI.AthenaEquippedItemCraftingIndicator
class UAthenaEquippedItemCraftingIndicator : public UCommonUserWidget
{
public:
	uint8                                        Pad_1A8D[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaEquippedItemCraftingIndicator* GetDefaultObj();

	void OnIsCraftableItemChanged(bool bIsCraftableItem);
	void OnCanCraftNowChanged(bool bCanCraftNow);
	void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
};

// 0x20 (0x290 - 0x270)
// Class CraftingUI.AthenaInventoryItemInfoCraftingIndicator
class UAthenaInventoryItemInfoCraftingIndicator : public UCommonUserWidget
{
public:
	uint8                                        Pad_1A95[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaInventoryItemInfoCraftingIndicator* GetDefaultObj();

	void OnIsCraftableItemChanged(bool bIsCraftableItem);
	void OnCanCraftNowChanged(bool bCanCraftNow);
	void HandleInventoryItemSelected(class UFortItem* SelectedItem);
};

// 0x30 (0x2A8 - 0x278)
// Class CraftingUI.AthenaQuickBarSlotCraftingIndicator
class UAthenaQuickBarSlotCraftingIndicator : public UAthenaQuickBarSlotExtensionWidgetBase
{
public:
	uint8                                        Pad_1AA2[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bCheckForIngredientChangesWhenCraftable;           // 0x298(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AA3[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaQuickBarSlotCraftingIndicator* GetDefaultObj();

	void OnIsCraftableItemChanged(bool bIsCraftableItem);
	void OnIngredientChanged(bool bCanCraftNow);
	void OnCanCraftNowChanged(bool bCanCraftNow);
	void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
};

// 0x50 (0x380 - 0x330)
// Class CraftingUI.FortCookingScreen
class UFortCookingScreen : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_1AA6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CloseInputAction;                                  // 0x338(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AA7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonLegacy*                   Button_EjectAll;                                   // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_Cancel;                                     // 0x358(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RecipeName;                                   // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RecipeDescription;                            // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_Recipe;                                      // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortSlottedRadialMenu*                RadialMenu_Recipes;                                // 0x378(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCookingScreen* GetDefaultObj();

};

// 0x8 (0x278 - 0x270)
// Class CraftingUI.FortCraftingFormulaIngredientsWidget
class UFortCraftingFormulaIngredientsWidget : public UCommonUserWidget
{
public:
	class UDynamicEntryBox*                      EntryBox_Ingredients;                              // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCraftingFormulaIngredientsWidget* GetDefaultObj();

};

// 0x28 (0x298 - 0x270)
// Class CraftingUI.FortCraftingIngredientWidget
class UFortCraftingIngredientWidget : public UCommonUserWidget
{
public:
	uint8                                        Pad_1AAE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_NumAvailable;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_NumRequired;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaItemIcon*                       ItemIcon;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonLazyImage*                      LazyImage_Icon;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCraftingIngredientWidget* GetDefaultObj();

	void OnIngredientWidgetUpdated(int32 NumAvailable, int32 NumRequired, bool bIsPrimaryIngredient, bool bIsLastIngredient);
};

// 0x68 (0x398 - 0x330)
// Class CraftingUI.FortCraftingItemInfoWidget
class UFortCraftingItemInfoWidget : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_1AB1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  RarityTextFormat;                                  // 0x338(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ItemName;                                     // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ItemRarity;                                   // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ItemCategory;                                 // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItemCategoryIndicator*            ItemCategoryIndicator;                             // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ItemDescription;                              // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaInventoryItemStatsWidget*       ItemStatsWidget;                                   // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortCraftingFormulaIngredientsWidget* IngredientsWidget;                                 // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_StartCrafting;                              // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AB2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCraftingItemInfoWidget* GetDefaultObj();

	void OnItemRaritySet(enum class EFortRarity Rarity, const struct FFortRarityItemData& RarityItemData);
};

// 0x28 (0xF20 - 0xEF8)
// Class CraftingUI.FortCraftingListEntry
class UFortCraftingListEntry : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_1AB4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaItemIcon*                       ItemIcon;                                          // 0xF00(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCanCraftItem;                                     // 0xF08(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AB6[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCraftingListEntry* GetDefaultObj();

	void OnCraftingListItemSet();
};

// 0xD0 (0xF8 - 0x28)
// Class CraftingUI.FortCraftingListItem
class UFortCraftingListItem : public UObject
{
public:
	uint8                                        Pad_1AB7[0xD0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCraftingListItem* GetDefaultObj();

};

// 0x120 (0x450 - 0x330)
// Class CraftingUI.FortCraftingTab
class UFortCraftingTab : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_1ABB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TabNameID;                                         // 0x338(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortTabButtonLabelInfo               TabButtonLabelInfo;                                // 0x340(0xD0)(Edit, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 PrimaryIngredientTags;                             // 0x410(0x20)(Edit, NativeAccessSpecifierPrivate)
	class UFortCraftingItemInfoWidget*           CraftingItemInfo;                                  // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonListView*                       ListView_Recipes;                                  // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaQuickbarEditorBase*             QuickbarEditor;                                    // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1ABE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCraftingTab* GetDefaultObj();

	void OnFormulaListUpdated(int32 NumFormulas);
	void HandleInventoryItemSelected(class UFortItem* Item);
};

// 0x28 (0x270 - 0x248)
// Class CraftingUI.FortPotContentsPopup
class UFortPotContentsPopup : public UUserWidget
{
public:
	int32                                        MaxItemsToShow;                                    // 0x248(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AC2[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTileView*                       TileView_PotContents;                              // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_MoreItems;                                    // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Overlay_Popup;                                     // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortPotContentsPopup* GetDefaultObj();

	void SetOwningCraftingObject(class ACraftingObjectBGA* InCraftingObject);
};

// 0x18 (0xF10 - 0xEF8)
// Class CraftingUI.FortPotContentsTile
class UFortPotContentsTile : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_1AC6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonLazyImage*                      Image_Item;                                        // 0xF00(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AC7[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPotContentsTile* GetDefaultObj();

};

}


