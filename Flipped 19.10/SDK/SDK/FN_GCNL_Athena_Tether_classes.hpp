#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x880 - 0x808)
// BlueprintGeneratedClass GCNL_Athena_Tether.GCNL_Athena_Tether_C
class AGCNL_Athena_Tether_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x808(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortLayeredAudioComponent*            FortLayeredAudio;                                  // 0x810(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     LandFX;                                            // 0x818(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     WaterFX;                                           // 0x820(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  RightSki;                                          // 0x828(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  LeftSki;                                           // 0x830(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleInSkis_SkiScalar_93783D4A4F91BF9F887B16977978DDB4; // 0x838(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScaleInSkis__Direction_93783D4A4F91BF9F887B16977978DDB4; // 0x83C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_631A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScaleInSkis;                                       // 0x840(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       OwningFPP;                                         // 0x848(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInWater;                                         // 0x850(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_631E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NormalizedSpeed;                                   // 0x854(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TurnSpeed;                                         // 0x858(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ForceFeedbackIntensity;                            // 0x85C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ScaleInSkisTimerHandle;                            // 0x860(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        SkiScaleInDelay;                                   // 0x868(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6323[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ICameraLensEffectInterface> CameraLensEffectInterface;                         // 0x870(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGCNL_Athena_Tether_C* GetDefaultObj();

	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_K2_IsValidTimerHandle_ReturnValue);
	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void UpdateAudio(int32 Surface, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue);
	void ScaleInSkis__FinishedFunc();
	void ScaleInSkis__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void OnApplication(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UMatineeCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UMatineeCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature(class UAudioComponent* AudioComponent, class FName ParameterName, int32 OneshotIndex);
	void StartFF();
	void UpdateFF();
	void StopFF();
	void InitializeTetherGCNL(class UObject* Object);
	void ReceiveBeginPlay();
	void ScaleInSkisForPlayer();
	void ExecuteUbergraph_GCNL_Athena_Tether(int32 EntryPoint, class UFXSystemComponent* CallFunc_GetPrimaryParticleComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, enum class EInterfaceValidResult CallFunc_IsInterfaceValid_Result, enum class EDynamicForceFeedbackAction Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, float K2Node_Event_DeltaSeconds, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class UMatineeCameraShake* K2Node_Event_BurstCameraShakeInstance_1, class ADecalActor* K2Node_Event_BurstDecalInstance_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UMatineeCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, bool CallFunc_K2_AttachToComponent_ReturnValue_1, class UAudioComponent* K2Node_ComponentBoundEvent_AudioComponent, class FName K2Node_ComponentBoundEvent_ParameterName, int32 K2Node_ComponentBoundEvent_OneshotIndex, int32 CallFunc_Conv_BoolToInt_ReturnValue, TScriptInterface<class IAudioParameterInterface> CallFunc_SetIntParameter_self_CastInput, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, class AActor* CallFunc_GetViewTarget_ReturnValue, class ANPC_Pawn_Wildlife_Parent_C* K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ICameraLensEffectInterface> CallFunc_AddGenericCameraLensEffect_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_Abs_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, class AFortWaterBodyActor* CallFunc_GetCurrentWaterBody_ReturnValue, float CallFunc_VSize_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_1, class UObject* K2Node_CustomEvent_Object, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_SetCommonWaterFXParams_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_FClamp_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, class UFXSystemComponent* CallFunc_GetPrimaryParticleComponent_ReturnValue_1, enum class EInterfaceValidResult CallFunc_IsInterfaceValid_Result_1, bool K2Node_SwitchEnum_CmpSuccess_1, class AActor* K2Node_DynamicCast_AsActor_1, bool K2Node_DynamicCast_bSuccess_3, enum class EInterfaceValidResult CallFunc_IsInterfaceValid_Result_2, bool K2Node_SwitchEnum_CmpSuccess_2, class UFXSystemComponent* CallFunc_GetPrimaryParticleComponent_ReturnValue_2, class AActor* K2Node_DynamicCast_AsActor_2, bool K2Node_DynamicCast_bSuccess_4, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, float CallFunc_Dot_VectorVector_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue);
};

}


