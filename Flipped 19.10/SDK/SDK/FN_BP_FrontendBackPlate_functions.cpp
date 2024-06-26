#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FrontendBackPlate.BP_FrontendBackPlate_C
// (Actor)

class UClass* ABP_FrontendBackPlate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FrontendBackPlate_C");

	return Clss;
}


// BP_FrontendBackPlate_C BP_FrontendBackPlate.Default__BP_FrontendBackPlate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FrontendBackPlate_C* ABP_FrontendBackPlate_C::GetDefaultObj()
{
	static class ABP_FrontendBackPlate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FrontendBackPlate_C*>(ABP_FrontendBackPlate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.HasMatcmakingInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasInteraction                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrontendBackPlate_C::HasMatcmakingInteraction(bool* HasInteraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "HasMatcmakingInteraction");

	Params::ABP_FrontendBackPlate_C_HasMatcmakingInteraction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HasInteraction != nullptr)
		*HasInteraction = Parms.HasInteraction;

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.CreateUniqueMaterialName
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      PostFix                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      UniqueString                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void ABP_FrontendBackPlate_C::CreateUniqueMaterialName(const class FString& PostFix, class FString* UniqueString, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "CreateUniqueMaterialName");

	Params::ABP_FrontendBackPlate_C_CreateUniqueMaterialName_Params Parms{};

	Parms.PostFix = PostFix;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (UniqueString != nullptr)
		*UniqueString = std::move(Parms.UniqueString);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.SetFloatingShapeVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrontendBackPlate_C::SetFloatingShapeVisibility(bool Show, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "SetFloatingShapeVisibility");

	Params::ABP_FrontendBackPlate_C_SetFloatingShapeVisibility_Params Parms{};

	Parms.Show = Show;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.SetSpecialEventUIColorScheme
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SetUIPanelColors                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Backing                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Backing_Hover                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Backing_Selection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SetFontColors                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Primary                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Secondary                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Tertiary                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Quaternary                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrontendBackPlate_C::SetSpecialEventUIColorScheme(bool SetUIPanelColors, const struct FLinearColor& Backing, const struct FLinearColor& Backing_Hover, const struct FLinearColor& Backing_Selection, bool SetFontColors, const struct FLinearColor& Primary, const struct FLinearColor& Secondary, const struct FLinearColor& Tertiary, const struct FLinearColor& Quaternary)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "SetSpecialEventUIColorScheme");

	Params::ABP_FrontendBackPlate_C_SetSpecialEventUIColorScheme_Params Parms{};

	Parms.SetUIPanelColors = SetUIPanelColors;
	Parms.Backing = Backing;
	Parms.Backing_Hover = Backing_Hover;
	Parms.Backing_Selection = Backing_Selection;
	Parms.SetFontColors = SetFontColors;
	Parms.Primary = Primary;
	Parms.Secondary = Secondary;
	Parms.Tertiary = Tertiary;
	Parms.Quaternary = Quaternary;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.HasUIColorOverride
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasUIColorOverride                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrontendBackPlate_C::HasUIColorOverride(bool* HasUIColorOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "HasUIColorOverride");

	Params::ABP_FrontendBackPlate_C_HasUIColorOverride_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HasUIColorOverride != nullptr)
		*HasUIColorOverride = Parms.HasUIColorOverride;

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.ResetUIColorScheme
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrontendBackPlate_C::ResetUIColorScheme(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "ResetUIColorScheme");

	Params::ABP_FrontendBackPlate_C_ResetUIColorScheme_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.GetUIColorScheme
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ColorScheme                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHasOverride                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrontendBackPlate_C::GetUIColorScheme(struct FLinearColor* ColorScheme, bool* bHasOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "GetUIColorScheme");

	Params::ABP_FrontendBackPlate_C_GetUIColorScheme_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ColorScheme != nullptr)
		*ColorScheme = std::move(Parms.ColorScheme);

	if (bHasOverride != nullptr)
		*bHasOverride = Parms.bHasOverride;

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.RequestUIColorScheme
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                MainUIColor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrontendBackPlate_C::RequestUIColorScheme(const struct FLinearColor& MainUIColor, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "RequestUIColorScheme");

	Params::ABP_FrontendBackPlate_C_RequestUIColorScheme_Params Parms{};

	Parms.MainUIColor = MainUIColor;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.UpdateRenderTargetRealtime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FrontendBackPlate_C::UpdateRenderTargetRealtime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "UpdateRenderTargetRealtime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.EnableRealtimeUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrontendBackPlate_C::EnableRealtimeUpdate(bool Enabled, bool Temp_bool_Variable, class UTexture* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "EnableRealtimeUpdate");

	Params::ABP_FrontendBackPlate_C_EnableRealtimeUpdate_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.UpdateRenderTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FrontendBackPlate_C::UpdateRenderTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "UpdateRenderTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.SetBackgroundTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                    InTexture                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          InMaterial                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          InPreBlurMaterial                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    LocalMIDTexture                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_CreateUniqueMaterialName_UniqueString                   (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_CreateUniqueMaterialName_UniqueString_1                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_CreateUniqueMaterialName_UniqueString_2                 (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrontendBackPlate_C::SetBackgroundTexture(class UTexture* InTexture, class UMaterialInterface* InMaterial, class UMaterialInterface* InPreBlurMaterial, class UTexture* LocalMIDTexture, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UMaterialInterface* K2Node_Select_Default, const class FString& CallFunc_CreateUniqueMaterialName_UniqueString, class FName CallFunc_Conv_StringToName_ReturnValue, const class FString& CallFunc_CreateUniqueMaterialName_UniqueString_1, const class FString& CallFunc_CreateUniqueMaterialName_UniqueString_2, class FName CallFunc_Conv_StringToName_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInterface* K2Node_Select_Default_1, class UTexture* K2Node_Select_Default_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "SetBackgroundTexture");

	Params::ABP_FrontendBackPlate_C_SetBackgroundTexture_Params Parms{};

	Parms.InTexture = InTexture;
	Parms.InMaterial = InMaterial;
	Parms.InPreBlurMaterial = InPreBlurMaterial;
	Parms.LocalMIDTexture = LocalMIDTexture;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CreateUniqueMaterialName_UniqueString = CallFunc_CreateUniqueMaterialName_UniqueString;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_CreateUniqueMaterialName_UniqueString_1 = CallFunc_CreateUniqueMaterialName_UniqueString_1;
	Parms.CallFunc_CreateUniqueMaterialName_UniqueString_2 = CallFunc_CreateUniqueMaterialName_UniqueString_2;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = CallFunc_Conv_StringToName_ReturnValue_2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_CreateUniqueMaterialName_UniqueString                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_CreateUniqueMaterialName_UniqueString_1                 (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_CreateUniqueMaterialName_UniqueString_2                 (ZeroConstructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ReferenceParm)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_SortActorArray_OutSortedActors                          (ReferenceParm)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrontendBackPlate_C::UserConstructionScript(const class FString& CallFunc_CreateUniqueMaterialName_UniqueString, const class FString& CallFunc_CreateUniqueMaterialName_UniqueString_1, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const class FString& CallFunc_CreateUniqueMaterialName_UniqueString_2, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, class FName CallFunc_Conv_StringToName_ReturnValue_2, TArray<class AActor*>& CallFunc_SortActorArray_OutSortedActors, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "UserConstructionScript");

	Params::ABP_FrontendBackPlate_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_CreateUniqueMaterialName_UniqueString = CallFunc_CreateUniqueMaterialName_UniqueString;
	Parms.CallFunc_CreateUniqueMaterialName_UniqueString_1 = CallFunc_CreateUniqueMaterialName_UniqueString_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_CreateUniqueMaterialName_UniqueString_2 = CallFunc_CreateUniqueMaterialName_UniqueString_2;
	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = CallFunc_Conv_StringToName_ReturnValue_2;
	Parms.CallFunc_SortActorArray_OutSortedActors = CallFunc_SortActorArray_OutSortedActors;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.UISpecailEventTransition__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_FrontendBackPlate_C::UISpecailEventTransition__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "UISpecailEventTransition__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.UISpecailEventTransition__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_FrontendBackPlate_C::UISpecailEventTransition__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "UISpecailEventTransition__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.HyperSpace__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_FrontendBackPlate_C::HyperSpace__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "HyperSpace__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.HyperSpace__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_FrontendBackPlate_C::HyperSpace__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "HyperSpace__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.StopHyperSpeed__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_FrontendBackPlate_C::StopHyperSpeed__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "StopHyperSpeed__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.StopHyperSpeed__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_FrontendBackPlate_C::StopHyperSpeed__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "StopHyperSpeed__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.UpdateSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FrontendBackPlate_C::UpdateSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "UpdateSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.SetEnableBlackMondayFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrontendBackPlate_C::SetEnableBlackMondayFX(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "SetEnableBlackMondayFX");

	Params::ABP_FrontendBackPlate_C_SetEnableBlackMondayFX_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.PlayUISpecialEventTransition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bTransitionToSpecialEvent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrontendBackPlate_C::PlayUISpecialEventTransition(bool bTransitionToSpecialEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "PlayUISpecialEventTransition");

	Params::ABP_FrontendBackPlate_C_PlayUISpecialEventTransition_Params Parms{};

	Parms.bTransitionToSpecialEvent = bTransitionToSpecialEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrontendBackPlate_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "ReceiveTick");

	Params::ABP_FrontendBackPlate_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.PlayEnterMatchmakingAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FrontendBackPlate_C::PlayEnterMatchmakingAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "PlayEnterMatchmakingAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.ResetMatchmakingAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FrontendBackPlate_C::ResetMatchmakingAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "ResetMatchmakingAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.SetAllowMatchmakingInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AllowInteraction                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrontendBackPlate_C::SetAllowMatchmakingInteraction(bool AllowInteraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "SetAllowMatchmakingInteraction");

	Params::ABP_FrontendBackPlate_C_SetAllowMatchmakingInteraction_Params Parms{};

	Parms.AllowInteraction = AllowInteraction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.TestBlur
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FrontendBackPlate_C::TestBlur()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "TestBlur");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.HandleSpecialEventAudioOnMatchmakingEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrontendBackPlate_C::HandleSpecialEventAudioOnMatchmakingEnd(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "HandleSpecialEventAudioOnMatchmakingEnd");

	Params::ABP_FrontendBackPlate_C_HandleSpecialEventAudioOnMatchmakingEnd_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_FrontendBackPlate_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.MatchmakingEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasSuccess                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrontendBackPlate_C::MatchmakingEnded(bool bWasSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "MatchmakingEnded");

	Params::ABP_FrontendBackPlate_C_MatchmakingEnded_Params Parms{};

	Parms.bWasSuccess = bWasSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.EnteringMatchmaking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FrontendBackPlate_C::EnteringMatchmaking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "EnteringMatchmaking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.ExecuteUbergraph_BP_FrontendBackPlate
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsEnabled                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bTransitionToSpecialEvent                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_AllowInteraction                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_CreateSound2D_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasSuccess                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrontendBackPlate_C::ExecuteUbergraph_BP_FrontendBackPlate(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, float CallFunc_Subtract_FloatFloat_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_1, bool K2Node_CustomEvent_IsEnabled, bool K2Node_Select_Default, bool K2Node_CustomEvent_bTransitionToSpecialEvent, float K2Node_Event_DeltaSeconds, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_AllowInteraction, bool K2Node_CustomEvent_Success, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, bool K2Node_Event_bWasSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "ExecuteUbergraph_BP_FrontendBackPlate");

	Params::ABP_FrontendBackPlate_C_ExecuteUbergraph_BP_FrontendBackPlate_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue_1 = CallFunc_GetVisualEffectQuality_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.K2Node_CustomEvent_IsEnabled = K2Node_CustomEvent_IsEnabled;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_bTransitionToSpecialEvent = K2Node_CustomEvent_bTransitionToSpecialEvent;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_AllowInteraction = K2Node_CustomEvent_AllowInteraction;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_CreateSound2D_ReturnValue = CallFunc_CreateSound2D_ReturnValue;
	Parms.K2Node_Event_bWasSuccess = K2Node_Event_bWasSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.RequestLobbyColorChanges__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color_A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseDefaultScheme                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrontendBackPlate_C::RequestLobbyColorChanges__DelegateSignature(const struct FLinearColor& Color_A, bool UseDefaultScheme)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "RequestLobbyColorChanges__DelegateSignature");

	Params::ABP_FrontendBackPlate_C_RequestLobbyColorChanges__DelegateSignature_Params Parms{};

	Parms.Color_A = Color_A;
	Parms.UseDefaultScheme = UseDefaultScheme;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.HidePlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FrontendBackPlate_C::HidePlayer__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "HidePlayer__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.OnRockyRidgeFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FrontendBackPlate_C::OnRockyRidgeFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "OnRockyRidgeFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.BeginRockyRidge__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FrontendBackPlate_C::BeginRockyRidge__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FrontendBackPlate_C", "BeginRockyRidge__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


