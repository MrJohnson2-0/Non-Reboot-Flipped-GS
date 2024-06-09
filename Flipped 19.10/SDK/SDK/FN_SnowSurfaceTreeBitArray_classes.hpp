#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xD8 - 0xB0)
// BlueprintGeneratedClass SnowSurfaceTreeBitArray.SnowSurfaceTreeBitArray_C
class USnowSurfaceTreeBitArray_C : public UGameFrameworkComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortGameStateComponent_SurfaceOverride* SurfaceOverrideComponent;                          // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AParent_Tree_Apollo_C*                 ParentTreeApollo;                                  // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                ParentActor;                                       // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Static_Mesh_Component;                             // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USnowSurfaceTreeBitArray_C* GetDefaultObj();

	void S_19_Is_Tree_in_Snow(bool* InSnow, float SearchRadius, const TArray<struct FVector>& Offsets, TArray<struct FVector>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsLocationInSpecialSurface_ReturnValue);
	void ReceiveBeginPlay();
	void IsTreeInSnow();
	void ExecuteUbergraph_SnowSurfaceTreeBitArray(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Artemis_Hedge_Parent_C* K2Node_DynamicCast_AsBP_Artemis_Hedge_Parent, bool K2Node_DynamicCast_bSuccess, class AParent_Tree_Apollo_C* K2Node_DynamicCast_AsParent_Tree_Apollo, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_Artemis_S19Progression_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_S_19_Is_Tree_in_Snow_InSnow, class AFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, class UFortGameStateComponent_SurfaceOverride* CallFunc_GetComponentByClass_ReturnValue);
};

}


