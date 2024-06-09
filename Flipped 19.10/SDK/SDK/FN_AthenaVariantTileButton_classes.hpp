#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xF98 - 0xF80)
// WidgetBlueprintGeneratedClass AthenaVariantTileButton.AthenaVariantTileButton_C
class UAthenaVariantTileButton_C : public UFortVariantTileButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      WarningPulse;                                      // 0xF88(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_Conflict;                                    // 0xF90(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaVariantTileButton_C* GetDefaultObj();

	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnClicked();
	void ExecuteUbergraph_AthenaVariantTileButton(int32 EntryPoint, class UObject* K2Node_Event_ListItemObject, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
};

}


