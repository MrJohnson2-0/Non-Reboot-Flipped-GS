#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x808 - 0x790)
// WidgetBlueprintGeneratedClass ProgressiveItemScreen.ProgressiveItemScreen_C
class UProgressiveItemScreen_C : public UFortProgressiveItemScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x790(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0x798(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ProgDetailsItemChange;                             // 0x7A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                NoMinusCountMinus1;                                // 0x7A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_ProgressiveStageList;                      // 0x7B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Spike_Angle_Left;                                  // 0x7B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Spike_Angle_Right;                                 // 0x7C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ThinSpike_Left;                                    // 0x7C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ThinSpike_Right;                                   // 0x7D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          Color1;                                            // 0x7D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          Color2;                                            // 0x7E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          Color3;                                            // 0x7F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UProgressiveItemScreen_C* GetDefaultObj();

	void UpdateLayoutForTabs(bool bTabsVisible, float SpacingAdjustmentForTabs, bool Temp_bool_Variable, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float Temp_float_Variable, bool CallFunc_BooleanAND_ReturnValue, float Temp_float_Variable_1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin_1);
	void CustomEvent(class UFortTextButton* NewPipButton);
	void OnPreviewActionButtonUpdated(class FText& RowDisplayName);
	void BP_OnActivated();
	void OnItemSelected();
	void OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs);
	void ExecuteUbergraph_ProgressiveItemScreen(int32 EntryPoint, bool K2Node_Event_bTabsVisible, float K2Node_Event_SpacingAdjustmentForTabs, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class USoloButton_C* K2Node_DynamicCast_AsSolo_Button, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, class UFortTextButton* K2Node_Event_NewPipButton, class FText K2Node_Event_RowDisplayName, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
};

}


