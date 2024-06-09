#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ProgressiveItemScreen.ProgressiveItemScreen_C
// (None)

class UClass* UProgressiveItemScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProgressiveItemScreen_C");

	return Clss;
}


// ProgressiveItemScreen_C ProgressiveItemScreen.Default__ProgressiveItemScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UProgressiveItemScreen_C* UProgressiveItemScreen_C::GetDefaultObj()
{
	static class UProgressiveItemScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UProgressiveItemScreen_C*>(UProgressiveItemScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ProgressiveItemScreen.ProgressiveItemScreen_C.UpdateLayoutForTabs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bTabsVisible                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SpacingAdjustmentForTabs                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgressiveItemScreen_C::UpdateLayoutForTabs(bool bTabsVisible, float SpacingAdjustmentForTabs, bool Temp_bool_Variable, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float Temp_float_Variable, bool CallFunc_BooleanAND_ReturnValue, float Temp_float_Variable_1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressiveItemScreen_C", "UpdateLayoutForTabs");

	Params::UProgressiveItemScreen_C_UpdateLayoutForTabs_Params Parms{};

	Parms.bTabsVisible = bTabsVisible;
	Parms.SpacingAdjustmentForTabs = SpacingAdjustmentForTabs;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue_1 = CallFunc_SlotAsOverlaySlot_ReturnValue_1;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressiveItemScreen.ProgressiveItemScreen_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortTextButton*             NewPipButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressiveItemScreen_C::CustomEvent(class UFortTextButton* NewPipButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressiveItemScreen_C", "CustomEvent");

	Params::UProgressiveItemScreen_C_CustomEvent_Params Parms{};

	Parms.NewPipButton = NewPipButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressiveItemScreen.ProgressiveItemScreen_C.OnPreviewActionButtonUpdated
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        RowDisplayName                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UProgressiveItemScreen_C::OnPreviewActionButtonUpdated(class FText& RowDisplayName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressiveItemScreen_C", "OnPreviewActionButtonUpdated");

	Params::UProgressiveItemScreen_C_OnPreviewActionButtonUpdated_Params Parms{};

	Parms.RowDisplayName = RowDisplayName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressiveItemScreen.ProgressiveItemScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UProgressiveItemScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressiveItemScreen_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressiveItemScreen.ProgressiveItemScreen_C.OnItemSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UProgressiveItemScreen_C::OnItemSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressiveItemScreen_C", "OnItemSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressiveItemScreen.ProgressiveItemScreen_C.OnContainerTabVisibilityUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bTabsVisible                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SpacingAdjustmentForTabs                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressiveItemScreen_C::OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressiveItemScreen_C", "OnContainerTabVisibilityUpdated");

	Params::UProgressiveItemScreen_C_OnContainerTabVisibilityUpdated_Params Parms{};

	Parms.bTabsVisible = bTabsVisible;
	Parms.SpacingAdjustmentForTabs = SpacingAdjustmentForTabs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressiveItemScreen.ProgressiveItemScreen_C.ExecuteUbergraph_ProgressiveItemScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bTabsVisible                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_SpacingAdjustmentForTabs                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoloButton_C*               K2Node_DynamicCast_AsSolo_Button                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTextButton*             K2Node_Event_NewPipButton                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_RowDisplayName                                      (ConstParm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressiveItemScreen_C::ExecuteUbergraph_ProgressiveItemScreen(int32 EntryPoint, bool K2Node_Event_bTabsVisible, float K2Node_Event_SpacingAdjustmentForTabs, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class USoloButton_C* K2Node_DynamicCast_AsSolo_Button, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, class UFortTextButton* K2Node_Event_NewPipButton, class FText K2Node_Event_RowDisplayName, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressiveItemScreen_C", "ExecuteUbergraph_ProgressiveItemScreen");

	Params::UProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bTabsVisible = K2Node_Event_bTabsVisible;
	Parms.K2Node_Event_SpacingAdjustmentForTabs = K2Node_Event_SpacingAdjustmentForTabs;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_DynamicCast_AsSolo_Button = K2Node_DynamicCast_AsSolo_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_NewPipButton = K2Node_Event_NewPipButton;
	Parms.K2Node_Event_RowDisplayName = K2Node_Event_RowDisplayName;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


