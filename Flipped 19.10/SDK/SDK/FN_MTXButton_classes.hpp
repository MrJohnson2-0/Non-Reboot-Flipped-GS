#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xF40 - 0xF00)
// WidgetBlueprintGeneratedClass MTXButton.MTXButton_C
class UMTXButton_C : public UFortMTXButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF00(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hover_Grow;                                        // 0xF08(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hover_Bounce;                                      // 0xF10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hover;                                             // 0xF18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               AmountColor;                                       // 0xF20(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ButtonBacking;                                     // 0xF28(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Vbucks;                                      // 0xF30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              VariableSize;                                      // 0xF38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMTXButton_C* GetDefaultObj();

	void Construct();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_MTXButton(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_IsMobileGame_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, float Temp_float_Variable_2, bool CallFunc_BooleanAND_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, float Temp_float_Variable_3, bool CallFunc_IsMobileGame_ReturnValue_1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsMobileGame_ReturnValue_2, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1, class UMaterialInstance* CallFunc_SelectMaterialInstance_ReturnValue);
};

}


