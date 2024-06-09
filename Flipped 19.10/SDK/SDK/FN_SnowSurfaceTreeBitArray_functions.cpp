#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SnowSurfaceTreeBitArray.SnowSurfaceTreeBitArray_C
// (None)

class UClass* USnowSurfaceTreeBitArray_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SnowSurfaceTreeBitArray_C");

	return Clss;
}


// SnowSurfaceTreeBitArray_C SnowSurfaceTreeBitArray.Default__SnowSurfaceTreeBitArray_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USnowSurfaceTreeBitArray_C* USnowSurfaceTreeBitArray_C::GetDefaultObj()
{
	static class USnowSurfaceTreeBitArray_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USnowSurfaceTreeBitArray_C*>(USnowSurfaceTreeBitArray_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SnowSurfaceTreeBitArray.SnowSurfaceTreeBitArray_C.S 19 Is Tree in Snow
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InSnow                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SearchRadius                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             Offsets                                                          (Edit, BlueprintVisible)
// TArray<struct FVector>             K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocationInSpecialSurface_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USnowSurfaceTreeBitArray_C::S_19_Is_Tree_in_Snow(bool* InSnow, float SearchRadius, const TArray<struct FVector>& Offsets, TArray<struct FVector>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsLocationInSpecialSurface_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SnowSurfaceTreeBitArray_C", "S 19 Is Tree in Snow");

	Params::USnowSurfaceTreeBitArray_C_S_19_Is_Tree_in_Snow_Params Parms{};

	Parms.SearchRadius = SearchRadius;
	Parms.Offsets = Offsets;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_IsLocationInSpecialSurface_ReturnValue = CallFunc_IsLocationInSpecialSurface_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InSnow != nullptr)
		*InSnow = Parms.InSnow;

}


// Function SnowSurfaceTreeBitArray.SnowSurfaceTreeBitArray_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void USnowSurfaceTreeBitArray_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SnowSurfaceTreeBitArray_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SnowSurfaceTreeBitArray.SnowSurfaceTreeBitArray_C.IsTreeInSnow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USnowSurfaceTreeBitArray_C::IsTreeInSnow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SnowSurfaceTreeBitArray_C", "IsTreeInSnow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SnowSurfaceTreeBitArray.SnowSurfaceTreeBitArray_C.ExecuteUbergraph_SnowSurfaceTreeBitArray
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Artemis_Hedge_Parent_C*  K2Node_DynamicCast_AsBP_Artemis_Hedge_Parent                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AParent_Tree_Apollo_C*       K2Node_DynamicCast_AsParent_Tree_Apollo                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class ABP_Artemis_S19Progression_C*CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_S_19_Is_Tree_in_Snow_InSnow                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        CallFunc_GetGameStateAthena_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameStateComponent_SurfaceOverride*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USnowSurfaceTreeBitArray_C::ExecuteUbergraph_SnowSurfaceTreeBitArray(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Artemis_Hedge_Parent_C* K2Node_DynamicCast_AsBP_Artemis_Hedge_Parent, bool K2Node_DynamicCast_bSuccess, class AParent_Tree_Apollo_C* K2Node_DynamicCast_AsParent_Tree_Apollo, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_Artemis_S19Progression_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_S_19_Is_Tree_in_Snow_InSnow, class AFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, class UFortGameStateComponent_SurfaceOverride* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SnowSurfaceTreeBitArray_C", "ExecuteUbergraph_SnowSurfaceTreeBitArray");

	Params::USnowSurfaceTreeBitArray_C_ExecuteUbergraph_SnowSurfaceTreeBitArray_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Artemis_Hedge_Parent = K2Node_DynamicCast_AsBP_Artemis_Hedge_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsParent_Tree_Apollo = K2Node_DynamicCast_AsParent_Tree_Apollo;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_S_19_Is_Tree_in_Snow_InSnow = CallFunc_S_19_Is_Tree_in_Snow_InSnow;
	Parms.CallFunc_GetGameStateAthena_ReturnValue = CallFunc_GetGameStateAthena_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


