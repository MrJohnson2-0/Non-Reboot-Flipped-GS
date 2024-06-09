#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x520 - 0x4C8)
// Class StoreSelectionUI.FortStoreSelectionData
class UFortStoreSelectionData : public UFortGameFeatureData
{
public:
	TSoftClassPtr<class UFortStoreSelectionScreen> StoreSelectionScreenClass;                         // 0x4C8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  RegularStoreSelectedText;                          // 0x4F0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  NonRegularStoreSelectedText;                       // 0x508(0x18)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortStoreSelectionData* GetDefaultObj();

};

// 0x28 (0xF20 - 0xEF8)
// Class StoreSelectionUI.FortStoreSelectionOptionEntry
class UFortStoreSelectionOptionEntry : public UCommonButtonLegacy
{
public:
	class UFortLazyImage*                        Image_Icon;                                        // 0xEF8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Description;                                  // 0xF00(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Price;                                        // 0xF08(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_Label;                                    // 0xF10(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_0[0x8];                                        // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortStoreSelectionOptionEntry* GetDefaultObj();

};

// 0x420 (0x888 - 0x468)
// Class StoreSelectionUI.FortStoreSelectionScreen
class UFortStoreSelectionScreen : public UCommonActivatablePanelLegacy
{
public:
	uint8                                        Pad_1[0x8];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonGroupLegacy*              EntryBoxButtonGroup;                               // 0x470(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortRealMoneyOffer*                   StoreOffer;                                        // 0x478(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonLoadGuard*                      StoreOfferLoadGuard;                               // 0x480(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Header;                                       // 0x488(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      DynamicEntryBox_Options;                           // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_Continue;                                   // 0x498(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_Cancel;                                     // 0x4A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_InitiallySelectedHint;                    // 0x4A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TScriptInterface<class IPurchaseChoiceRequesterInterface> PurchaseChoiceOwner;                               // 0x4B0(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FItemData>                     StoreOptions;                                      // 0x4C0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UFortMtxOfferData>      SoftDisplayAsset;                                  // 0x4D0(0x28)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FItemData                             ItemData[0xC];                                     // 0x4F8(0x360)(Edit, NativeAccessSpecifierPrivate)
	class FText                                  OptionalLabels[0x2];                               // 0x858(0x30)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortStoreSelectionScreen* GetDefaultObj();

};

}


