#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2E1 (0x1191 - 0xEB0)
// WidgetBlueprintGeneratedClass PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C
class UPlayerSurveyResponseChoice_C : public UFortPlayerSurveyResponseChoiceBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_InputActionCircle;                          // 0xEB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Checkbox;                                    // 0xEC0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   InputActionWidget_Select;                          // 0xEC8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           Brush_RadioUnchecked;                              // 0xED0(0xB0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                           Brush_RadioChecked;                                // 0xF80(0xB0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                           Brush_CheckboxUnchecked;                           // 0x1030(0xB0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                           Brush_CheckboxChecked;                             // 0x10E0(0xB0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	enum class EFortPlayerSurveyResponseChoiceType ChoiceType;                                        // 0x1190(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlayerSurveyResponseChoice_C* GetDefaultObj();

	void Update_Text_Scale(const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void GetCurrentButtonBrush(struct FSlateBrush* CurrentBrush, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsPressed_ReturnValue, bool CallFunc_IsPressed_ReturnValue_1, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, class UCommonButtonStyle* CallFunc_GetStyle_ReturnValue, const struct FSlateBrush& CallFunc_GetDisabledBrush_Brush, const struct FSlateBrush& CallFunc_GetNormalBaseBrush_Brush, const struct FSlateBrush& CallFunc_GetNormalHoveredBrush_Brush, const struct FSlateBrush& CallFunc_GetNormalPressedBrush_Brush, const struct FSlateBrush& K2Node_Select_Default, const struct FSlateBrush& CallFunc_GetSelectedPressedBrush_Brush, const struct FSlateBrush& K2Node_Select_Default_1, const struct FSlateBrush& CallFunc_GetSelectedBaseBrush_Brush, const struct FSlateBrush& CallFunc_GetSelectedHoveredBrush_Brush, const struct FSlateBrush& K2Node_Select_Default_2, const struct FSlateBrush& K2Node_Select_Default_3, const struct FSlateBrush& K2Node_Select_Default_4, const struct FSlateBrush& K2Node_Select_Default_5);
	void UpdateChoiceImage(enum class EFortPlayerSurveyResponseChoiceType Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_GetSelected_ReturnValue_1, const struct FSlateBrush& K2Node_Select_Default, const struct FSlateBrush& K2Node_Select_Default_1, const struct FSlateBrush& K2Node_Select_Default_2);
	void UpdateInputActionRenderOpacity(bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_IsHovered_ReturnValue, float K2Node_Select_Default);
	void UpdateButtonColor(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, TSubclassOf<class UCommonTextStyle> CallFunc_GetCurrentTextStyleClass_ReturnValue, const struct FSlateBrush& CallFunc_GetCurrentButtonBrush_CurrentBrush, bool CallFunc_GetSelected_ReturnValue, class UCommonTextStyle* CallFunc_GetCurrentTextStyle_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FLinearColor& CallFunc_GetColor_OutColor, bool CallFunc_BooleanAND_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void SetChoiceType(enum class EFortPlayerSurveyResponseChoiceType Type);
	void OnSurveyResetChoice();
	void BP_OnSelected();
	void BP_OnDeselected();
	void OnInitialized();
	void OnCurrentTextStyleChanged();
	void ExecuteUbergraph_PlayerSurveyResponseChoice(int32 EntryPoint, enum class EFortPlayerSurveyResponseChoiceType K2Node_Event_Type);
};

}


