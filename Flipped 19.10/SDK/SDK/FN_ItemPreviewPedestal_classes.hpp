#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x459 - 0x450)
// BlueprintGeneratedClass ItemPreviewPedestal.ItemPreviewPedestal_C
class AItemPreviewPedestal_C : public AFortCameraTargetPedestal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Floor_Enabled;                                     // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AItemPreviewPedestal_C* GetDefaultObj();

	void Remove_Floor(class AFortItemPreviewActor* Preview, class AWrapPreview_C* K2Node_DynamicCast_AsWrap_Preview, bool K2Node_DynamicCast_bSuccess, class AItemOnPawnPreview_C* K2Node_DynamicCast_AsItem_on_Pawn_Preview, bool K2Node_DynamicCast_bSuccess_1);
	void OnItemDisplayed(enum class EFortItemType ItemType);
	void ExecuteUbergraph_ItemPreviewPedestal(int32 EntryPoint, enum class EFortItemType K2Node_Event_ItemType);
};

}


