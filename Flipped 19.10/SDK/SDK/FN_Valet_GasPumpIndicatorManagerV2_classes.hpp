#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0xDC - 0xB0)
// BlueprintGeneratedClass Valet_GasPumpIndicatorManagerV2.Valet_GasPumpIndicatorManagerV2_C
class UValet_GasPumpIndicatorManagerV2_C : public UFortGameStateComponent
{
public:
	class UClass*                                FuelIndicatorClass;                                // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UB_GasPump_Valet_Component_C*>  GasPumpList;                                       // 0xB8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AFuelIndicator_C*>              FuelIndicatorList;                                 // 0xC8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                        FuelIndicatorRangeSquared;                         // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UValet_GasPumpIndicatorManagerV2_C* GetDefaultObj();

	void RemoveGasPump(class UB_GasPump_Valet_Component_C* Gas_Pump, bool FoundNearbyGasPump, const TArray<class AFuelIndicator_C*>& RemovalList, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class AFuelIndicator_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class UB_GasPump_Valet_Component_C* CallFunc_Array_Get_Item_1, class AFuelIndicator_C* CallFunc_Array_Get_Item_2, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Vector_Distance2DSquared_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void AddGasPump(class UB_GasPump_Valet_Component_C* Gas_Pump, bool FoundNearbyFuelIndicator, bool Temp_bool_True_if_break_was_hit_Variable, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class AFuelIndicator_C* K2Node_DynamicCast_AsFuel_Indicator, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, class AFuelIndicator_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_Vector_Distance2DSquared_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


