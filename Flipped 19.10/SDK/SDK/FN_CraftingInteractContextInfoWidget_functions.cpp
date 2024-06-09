#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CraftingInteractContextInfoWidget.CraftingInteractContextInfoWidget_C
// (None)

class UClass* UCraftingInteractContextInfoWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CraftingInteractContextInfoWidget_C");

	return Clss;
}


// CraftingInteractContextInfoWidget_C CraftingInteractContextInfoWidget.Default__CraftingInteractContextInfoWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCraftingInteractContextInfoWidget_C* UCraftingInteractContextInfoWidget_C::GetDefaultObj()
{
	static class UCraftingInteractContextInfoWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCraftingInteractContextInfoWidget_C*>(UCraftingInteractContextInfoWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CraftingInteractContextInfoWidget.CraftingInteractContextInfoWidget_C.SetCraftingPreviewImage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemAndCount               ItemAndCount                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class UTexture*                    ItemIcon                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityDataForItemDef_ReturnValue                   (None)

void UCraftingInteractContextInfoWidget_C::SetCraftingPreviewImage(struct FItemAndCount& ItemAndCount, class UTexture* ItemIcon, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityDataForItemDef_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CraftingInteractContextInfoWidget_C", "SetCraftingPreviewImage");

	Params::UCraftingInteractContextInfoWidget_C_SetCraftingPreviewImage_Params Parms{};

	Parms.ItemAndCount = ItemAndCount;
	Parms.ItemIcon = ItemIcon;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_BPGetRarityDataForItemDef_ReturnValue = CallFunc_BPGetRarityDataForItemDef_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingInteractContextInfoWidget.CraftingInteractContextInfoWidget_C.SetCraftingResult
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortInteractContextInfo*    ContextInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemAndCount               CraftingResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UCraftingInteractContextInfoWidget_C::SetCraftingResult(class UFortInteractContextInfo*& ContextInfo, struct FItemAndCount& CraftingResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CraftingInteractContextInfoWidget_C", "SetCraftingResult");

	Params::UCraftingInteractContextInfoWidget_C_SetCraftingResult_Params Parms{};

	Parms.ContextInfo = ContextInfo;
	Parms.CraftingResult = CraftingResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingInteractContextInfoWidget.CraftingInteractContextInfoWidget_C.SetDefaultText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortInteractContextInfo*    ContextInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftingInteractContextInfoWidget_C::SetDefaultText(class UFortInteractContextInfo*& ContextInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CraftingInteractContextInfoWidget_C", "SetDefaultText");

	Params::UCraftingInteractContextInfoWidget_C_SetDefaultText_Params Parms{};

	Parms.ContextInfo = ContextInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingInteractContextInfoWidget.CraftingInteractContextInfoWidget_C.OnLoaded_5CA0AB9C4E28FABDE17BA4B37923A52F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftingInteractContextInfoWidget_C::OnLoaded_5CA0AB9C4E28FABDE17BA4B37923A52F(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CraftingInteractContextInfoWidget_C", "OnLoaded_5CA0AB9C4E28FABDE17BA4B37923A52F");

	Params::UCraftingInteractContextInfoWidget_C_OnLoaded_5CA0AB9C4E28FABDE17BA4B37923A52F_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingInteractContextInfoWidget.CraftingInteractContextInfoWidget_C.OnContextInfoUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortInteractContextInfo*    ContextInfo                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftingInteractContextInfoWidget_C::OnContextInfoUpdated(class UFortInteractContextInfo* ContextInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CraftingInteractContextInfoWidget_C", "OnContextInfoUpdated");

	Params::UCraftingInteractContextInfoWidget_C_OnContextInfoUpdated_Params Parms{};

	Parms.ContextInfo = ContextInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingInteractContextInfoWidget.CraftingInteractContextInfoWidget_C.ExecuteUbergraph_CraftingInteractContextInfoWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortInteractContextInfo*    K2Node_Event_ContextInfo                                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPickupInteractOverrideComponent_Crafting*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemAndCount>       CallFunc_GetCraftingResultsForRowName_OutResults                 (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetSmallPreviewImage_ReturnValue                        (UObjectWrapper, HasGetValueTypeHash)

void UCraftingInteractContextInfoWidget_C::ExecuteUbergraph_CraftingInteractContextInfoWidget(int32 EntryPoint, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortInteractContextInfo* K2Node_Event_ContextInfo, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortPickupInteractOverrideComponent_Crafting* CallFunc_GetComponentByClass_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FItemAndCount>& CallFunc_GetCraftingResultsForRowName_OutResults, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CraftingInteractContextInfoWidget_C", "ExecuteUbergraph_CraftingInteractContextInfoWidget");

	Params::UCraftingInteractContextInfoWidget_C_ExecuteUbergraph_CraftingInteractContextInfoWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_ContextInfo = K2Node_Event_ContextInfo;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCraftingResultsForRowName_OutResults = CallFunc_GetCraftingResultsForRowName_OutResults;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetSmallPreviewImage_ReturnValue = CallFunc_GetSmallPreviewImage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


