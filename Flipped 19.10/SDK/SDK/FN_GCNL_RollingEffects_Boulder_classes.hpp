#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x8F8 - 0x8E8)
// BlueprintGeneratedClass GCNL_RollingEffects_Boulder.GCNL_RollingEffects_Boulder_C
class AGCNL_RollingEffects_Boulder_C : public AGCNL_RollingEffects_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     FX_Reference;                                      // 0x8F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGCNL_RollingEffects_Boulder_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void OnLoopingStartNiagara(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UNiagaraComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void ExecuteUbergraph_GCNL_RollingEffects_Boulder(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UNiagaraComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UNiagaraComponent* CallFunc_Array_Get_Item, class ABGA_Athena_Boulder_Prop_C* K2Node_DynamicCast_AsBGA_Athena_Boulder_Prop, bool K2Node_DynamicCast_bSuccess, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AActor* CallFunc_GetMovingStateData_OutInstigator, const struct FHitResult& CallFunc_GetMovingStateData_OutHitResult, float CallFunc_GetMovingStateData_OutLinearSpeed, enum class EFortPhysicsObjectMovementState CallFunc_GetMovingStateData_OutMovementState, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


