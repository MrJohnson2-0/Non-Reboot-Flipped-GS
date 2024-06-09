#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xAB0 - 0xAA8)
// BlueprintGeneratedClass GA_Athena_Player_PreSlideFeedback.GA_Athena_Player_PreSlideFeedback_C
class UGA_Athena_Player_PreSlideFeedback_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Athena_Player_PreSlideFeedback_C* GetDefaultObj();

	void K2_ActivateAbility();
	void CustomEvent_0();
	void ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UCameraShakeBase* CallFunc_StartCameraShake_ReturnValue);
};

}


