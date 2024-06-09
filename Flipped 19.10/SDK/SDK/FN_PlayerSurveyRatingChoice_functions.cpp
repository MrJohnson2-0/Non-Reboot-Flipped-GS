#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C
// (None)

class UClass* UPlayerSurveyRatingChoice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerSurveyRatingChoice_C");

	return Clss;
}


// PlayerSurveyRatingChoice_C PlayerSurveyRatingChoice.Default__PlayerSurveyRatingChoice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerSurveyRatingChoice_C* UPlayerSurveyRatingChoice_C::GetDefaultObj()
{
	static class UPlayerSurveyRatingChoice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerSurveyRatingChoice_C*>(UPlayerSurveyRatingChoice_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.GetCurrentButtonBrush
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 CurrentBrush                                                     (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPressed_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPressed_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonStyle*          CallFunc_GetStyle_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetDisabledBrush_Brush                                  (None)
// struct FSlateBrush                 CallFunc_GetNormalBaseBrush_Brush                                (None)
// struct FSlateBrush                 CallFunc_GetNormalHoveredBrush_Brush                             (None)
// struct FSlateBrush                 CallFunc_GetNormalPressedBrush_Brush                             (None)
// struct FSlateBrush                 K2Node_Select_Default                                            (None)
// struct FSlateBrush                 CallFunc_GetSelectedPressedBrush_Brush                           (None)
// struct FSlateBrush                 K2Node_Select_Default_1                                          (None)
// struct FSlateBrush                 CallFunc_GetSelectedBaseBrush_Brush                              (None)
// struct FSlateBrush                 CallFunc_GetSelectedHoveredBrush_Brush                           (None)
// struct FSlateBrush                 K2Node_Select_Default_2                                          (None)
// struct FSlateBrush                 K2Node_Select_Default_3                                          (None)
// struct FSlateBrush                 K2Node_Select_Default_4                                          (None)
// struct FSlateBrush                 K2Node_Select_Default_5                                          (None)

void UPlayerSurveyRatingChoice_C::GetCurrentButtonBrush(struct FSlateBrush* CurrentBrush, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsPressed_ReturnValue, bool CallFunc_IsPressed_ReturnValue_1, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, class UCommonButtonStyle* CallFunc_GetStyle_ReturnValue, const struct FSlateBrush& CallFunc_GetDisabledBrush_Brush, const struct FSlateBrush& CallFunc_GetNormalBaseBrush_Brush, const struct FSlateBrush& CallFunc_GetNormalHoveredBrush_Brush, const struct FSlateBrush& CallFunc_GetNormalPressedBrush_Brush, const struct FSlateBrush& K2Node_Select_Default, const struct FSlateBrush& CallFunc_GetSelectedPressedBrush_Brush, const struct FSlateBrush& K2Node_Select_Default_1, const struct FSlateBrush& CallFunc_GetSelectedBaseBrush_Brush, const struct FSlateBrush& CallFunc_GetSelectedHoveredBrush_Brush, const struct FSlateBrush& K2Node_Select_Default_2, const struct FSlateBrush& K2Node_Select_Default_3, const struct FSlateBrush& K2Node_Select_Default_4, const struct FSlateBrush& K2Node_Select_Default_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyRatingChoice_C", "GetCurrentButtonBrush");

	Params::UPlayerSurveyRatingChoice_C_GetCurrentButtonBrush_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_IsPressed_ReturnValue = CallFunc_IsPressed_ReturnValue;
	Parms.CallFunc_IsPressed_ReturnValue_1 = CallFunc_IsPressed_ReturnValue_1;
	Parms.CallFunc_IsHovered_ReturnValue_1 = CallFunc_IsHovered_ReturnValue_1;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_GetStyle_ReturnValue = CallFunc_GetStyle_ReturnValue;
	Parms.CallFunc_GetDisabledBrush_Brush = CallFunc_GetDisabledBrush_Brush;
	Parms.CallFunc_GetNormalBaseBrush_Brush = CallFunc_GetNormalBaseBrush_Brush;
	Parms.CallFunc_GetNormalHoveredBrush_Brush = CallFunc_GetNormalHoveredBrush_Brush;
	Parms.CallFunc_GetNormalPressedBrush_Brush = CallFunc_GetNormalPressedBrush_Brush;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetSelectedPressedBrush_Brush = CallFunc_GetSelectedPressedBrush_Brush;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetSelectedBaseBrush_Brush = CallFunc_GetSelectedBaseBrush_Brush;
	Parms.CallFunc_GetSelectedHoveredBrush_Brush = CallFunc_GetSelectedHoveredBrush_Brush;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentBrush != nullptr)
		*CurrentBrush = std::move(Parms.CurrentBrush);

}


// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.UpdateInputActionRenderOpacity
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyRatingChoice_C::UpdateInputActionRenderOpacity(bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_IsHovered_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyRatingChoice_C", "UpdateInputActionRenderOpacity");

	Params::UPlayerSurveyRatingChoice_C_UpdateInputActionRenderOpacity_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.UpdateTextStyle
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonTextStyle*            CallFunc_GetCurrentTextStyle_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColor_OutColor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UPlayerSurveyRatingChoice_C::UpdateTextStyle(class UCommonTextStyle* CallFunc_GetCurrentTextStyle_ReturnValue, const struct FLinearColor& CallFunc_GetColor_OutColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyRatingChoice_C", "UpdateTextStyle");

	Params::UPlayerSurveyRatingChoice_C_UpdateTextStyle_Params Parms{};

	Parms.CallFunc_GetCurrentTextStyle_ReturnValue = CallFunc_GetCurrentTextStyle_ReturnValue;
	Parms.CallFunc_GetColor_OutColor = CallFunc_GetColor_OutColor;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyRatingChoice_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyRatingChoice_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyRatingChoice_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyRatingChoice_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.OnSurveyResetChoice
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyRatingChoice_C::OnSurveyResetChoice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyRatingChoice_C", "OnSurveyResetChoice");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerSurveyRatingChoice_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyRatingChoice_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyRatingChoice_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyRatingChoice_C", "BP_OnSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyRatingChoice_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyRatingChoice_C", "BP_OnDeselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.ExecuteUbergraph_PlayerSurveyRatingChoice
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyRatingChoice_C::ExecuteUbergraph_PlayerSurveyRatingChoice(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerSurveyRatingChoice_C", "ExecuteUbergraph_PlayerSurveyRatingChoice");

	Params::UPlayerSurveyRatingChoice_C_ExecuteUbergraph_PlayerSurveyRatingChoice_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


