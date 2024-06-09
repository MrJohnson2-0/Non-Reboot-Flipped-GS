#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x338 - 0x2E0)
// BlueprintGeneratedClass FortWaterBodyBP.FortWaterBodyBP_C
class AFortWaterBodyBP_C : public AFortWaterBodyActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FWaveSpectrumSettings                 Wave_Spectrum_Settings;                            // 0x2E8(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class ABP_FluidSim_FN_C*                     FluidSimBP;                                        // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFortWaterBodyBP_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnReceivedBulletImpact(struct FHitResult& Hit);
	void ExecuteUbergraph_FortWaterBodyBP(int32 EntryPoint, const struct FFluidForceImpulseTimedEffects& K2Node_MakeStruct_FluidForceImpulseTimedEffects, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FHitResult& K2Node_Event_Hit, TArray<class ABP_FluidSim_FN_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ABP_FluidSim_FN_C* CallFunc_Array_Get_Item, const struct FFluidForceImpulse& K2Node_MakeStruct_FluidForceImpulse, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


