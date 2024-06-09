#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x948 (0x13F0 - 0xAA8)
// BlueprintGeneratedClass GA_SurfaceChange_Ice_Sliding.GA_SurfaceChange_Ice_Sliding_C
class UGA_SurfaceChange_Ice_Sliding_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FSlidingControlParams                 DefaultSlidingParams;                              // 0xAB0(0x4A0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlidingControlParams                 IceSlidingParams;                                  // 0xF50(0x4A0)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_SurfaceChange_Ice_Sliding_C* GetDefaultObj();

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_SurfaceChange_Ice_Sliding(int32 EntryPoint, bool K2Node_Event_bWasCancelled, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue, class UFortMovementComp_CharacterAthena* K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena, bool K2Node_DynamicCast_bSuccess);
};

}


