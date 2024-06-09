#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x45 (0x84D - 0x808)
// BlueprintGeneratedClass GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C
class AGCNL_CurieState_ElementAttached_Fire_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x808(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       OnFireAudioComponent;                              // 0x810(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnPlayerLoop;                                 // 0x818(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                PawnSkeletalMesh;                                  // 0x820(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                  Pawn;                                              // 0x828(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          FadeBodyFXTimerHandle;                             // 0x830(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        FadeInDuration;                                    // 0x838(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EB_Enum_PlayerFireStates          PlayerFireState;                                   // 0x83C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7583[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     BodyFXParticleSystem;                              // 0x840(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOutDuration;                                   // 0x848(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EB_Enum_PlayerFireStates          PreviousPlayerFireState;                           // 0x84C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGCNL_CurieState_ElementAttached_Fire_C* GetDefaultObj();

	void FadeOnFireAudioComponent(bool CallFunc_IsValid_ReturnValue);
	void ClearAllHandles();
	void UpdatePlayerVisualsByState(enum class EB_Enum_PlayerFireStates PlayerState, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
	void DeactivateBodyFX(bool CallFunc_IsValid_ReturnValue);
	void ActivateBodyFX(bool CallFunc_IsValid_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_IsActive_ReturnValue);
	void OnCurieStateChanged(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& StateIdentifier, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, enum class EB_Enum_PlayerFireStates CallFunc_GetPlayerFireState_Player_State, bool CallFunc_BooleanOR_ReturnValue);
	void GetPlayerFireState(enum class EB_Enum_PlayerFireStates* Player_State, bool CallFunc_HasCurieStateAttached_ReturnValue, bool CallFunc_HasCurieStateAttached_ReturnValue_1);
	void SetBodyFXParameters(enum class EB_Enum_PlayerFireStates PreviousPlayerFireState, enum class EB_Enum_PlayerFireStates Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, enum class EB_Enum_PlayerFireStates Temp_byte_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, float K2Node_Select_Default, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_Select_Default_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UMatineeCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnApplication(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UMatineeCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void FadeBodyFXOut();
	void ExecuteUbergraph_GCNL_CurieState_ElementAttached_Fire(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class UMatineeCameraShake* K2Node_Event_BurstCameraShakeInstance_1, class ADecalActor* K2Node_Event_BurstDecalInstance_1, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UMatineeCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class UFortCurieManager* CallFunc_GetCurieManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EB_Enum_PlayerFireStates CallFunc_GetPlayerFireState_Player_State, class UFortCurieManager* CallFunc_GetCurieManager_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, float CallFunc_GetGameTimeInSeconds_ReturnValue);
};

}


