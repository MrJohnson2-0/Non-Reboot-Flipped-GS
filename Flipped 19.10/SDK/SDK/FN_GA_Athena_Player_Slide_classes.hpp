#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA50 (0x14F8 - 0xAA8)
// BlueprintGeneratedClass GA_Athena_Player_Slide.GA_Athena_Player_Slide_C
class UGA_Athena_Player_Slide_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSubclassOf<class UCameraShakeBase>          CameraShake;                                       // 0xAB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UFortCameraMode>           Camera_Mode_Class;                                 // 0xAB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FGameplayTag                          CameraShakeGCNL;                                   // 0xAC0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UCameraModifier>           CameraModifier;                                    // 0xAC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        MinAngleForMomentum;                               // 0xAD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          SpeedlinesCue;                                     // 0xAD4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EB4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCameraShakeBase>          StartSlideCameraShake;                             // 0xAE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        AdditionalLaunchVelocityOffRamp;                   // 0xAE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EB5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlidingControlParams                 DefaultSlidingParams;                              // 0xAF0(0x4A0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlidingControlParams                 PostDashGroundSlidingParams;                       // 0xF90(0x4A0)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        LevelGroundSlideDuration;                          // 0x1430(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EB6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          EndLevelGroundSlideTimerHandle;                    // 0x1438(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        DashDuration;                                      // 0x1440(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          CameraFXDelay;                                     // 0x1468(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          PlayerGameplayCue;                                 // 0x1470(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        CameraShakeDelay;                                  // 0x1478(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EB7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        MinAdditionalMomentum;                             // 0x1480(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        MaxAdditionalMomentum;                             // 0x14A8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        MinAngleForAdditionalMomentum;                     // 0x14D0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_Athena_Player_Slide_C* GetDefaultObj();

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void AddMomentum();
	void EndLevelGroundSlide();
	void CameraFX();
	void OnFinishedCharacterCustomization_Event_0(class AFortPlayerPawn* Pawn);
	void ExecuteUbergraph_GA_Athena_Player_Slide(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool K2Node_Event_bWasCancelled, bool CallFunc_Greater_FloatFloat_ReturnValue, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_1, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class UFortMovementComp_CharacterAthena* K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_3, class UFortMovementComp_CharacterAthena* K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena_1, bool K2Node_DynamicCast_bSuccess_1, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_4, class UFortMovementComp_CharacterAthena* K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena_2, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetValueAtLevel_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_2, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UCameraModifier* CallFunc_AddCameraModifierForOwningPlayerController_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class UCameraModifier_Athena_Sliding_C* K2Node_DynamicCast_AsCamera_Modifier_Athena_Sliding, bool K2Node_DynamicCast_bSuccess_3, const struct FGameplayEventData& K2Node_Event_EventData, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_6, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_2, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_7, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, class UCameraShakeBase* CallFunc_StartCameraShake_ReturnValue, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_8, class APlayerPawn_Athena_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsServer_ReturnValue_2, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_9, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class APlayerPawn_Athena_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic_1, bool K2Node_DynamicCast_bSuccess_5, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_5, class AFortPlayerPawn* K2Node_CustomEvent_Pawn, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_6, bool Temp_bool_Has_Been_Initd_Variable);
};

}


