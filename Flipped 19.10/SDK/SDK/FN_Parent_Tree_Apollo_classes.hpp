#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0xDA8 - 0xD48)
// BlueprintGeneratedClass Parent_Tree_Apollo.Parent_Tree_Apollo_C
class AParent_Tree_Apollo_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Has_Bugs;                                          // 0xD50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_761A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Use_Lightning_Bug;                                 // 0xD54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               BugOffset;                                         // 0xD58(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Has_Falling_Leaves;                                // 0xD64(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_761B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LeavesOffset;                                      // 0xD68(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Priority;                                          // 0xD74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETree_Color_options               Tree_Color_Option;                                 // 0xD78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_761C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0xD7C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HueVariation;                                      // 0xD8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ValueVariation;                                    // 0xD90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PrioritySetbyVolume;                               // 0xD94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTreeSeasonColor_Data_C*               TreeSeasonColor_Data;                              // 0xD98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGameStateComponent_SurfaceOverride* SurfaceOverrideComponent;                          // 0xDA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AParent_Tree_Apollo_C* GetDefaultObj();

	void SetSeasonPresetColors(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FTree_SeasonColorStruct& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateColor(enum class ETree_Color_options Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float K2Node_Select_Default, const struct FVector4& CallFunc_MakeVector4_ReturnValue);
	bool IsSubmergedByWater(class UWaterSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UWaterSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, float CallFunc_GetOceanFloodHeight_ReturnValue, float CallFunc_GetOceanTotalHeight_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Greater_FloatFloat_ReturnValue_1);
	void UserConstructionScript(bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_1, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue_1);
	void OnWaterLevelSetOffline();
	void RemoveUnderwaterTrees();
	void ExecuteUbergraph_Parent_Tree_Apollo(int32 EntryPoint);
};

}


