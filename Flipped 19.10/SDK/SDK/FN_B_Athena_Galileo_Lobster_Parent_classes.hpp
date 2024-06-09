#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13E (0x1708 - 0x15CA)
// BlueprintGeneratedClass B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C
class AB_Athena_Galileo_Lobster_Parent_C : public AB_Melee_Generic_C
{
public:
	uint8                                        Pad_941[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_Galileo_Lobster_BlockBreakWarning;               // 0x15D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Galileo_Lobster_Blade_Masked_VisibleUnderwater_; // 0x15E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Galileo_Lobster_Blade;                          // 0x15E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       IdleAudio;                                         // 0x15F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x15F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_1_Activation_A485AC534A744AA4695BBF8F84A8850F; // 0x1600(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_1__Direction_A485AC534A744AA4695BBF8F84A8850F; // 0x1604(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_944[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_1;                                        // 0x1608(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BladeVisibility;                                   // 0x1610(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_945[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       PlayerCharacter;                                   // 0x1618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    ImpactDecal;                                       // 0x1620(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ImpactTipLocation;                                 // 0x1628(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SlashImpactColor;                                  // 0x1634(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              MeleeImpact;                                       // 0x1640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            OpenSound;                                         // 0x1648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CloseSound;                                        // 0x1650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BladeHueColorShift;                                // 0x1658(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BladeRedBlueSwitch;                                // 0x165C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BladeEmissiveIntensity;                            // 0x1660(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               BlockingImpactColor;                               // 0x1664(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSkeletalAudioComponent*           SkeletalAudioComponent;                            // 0x1670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 T_MeleeAttackAbility;                              // 0x1678(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 T_HudElementToHide;                                // 0x1698(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          Timer_ShowReticleStatus;                           // 0x16B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AEmitterCameraLensEffectBase*          BlockBreakWarningLensFX;                           // 0x16C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentPoise;                                      // 0x16C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_947[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Timer_BlockBreakWarning;                           // 0x16D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_ActionsThatHideBlade;                           // 0x16D8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	TScriptInterface<class ICameraLensEffectInterface> LensEffectInterface_BlockBreakWarning;             // 0x16F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Athena_Galileo_Lobster_Parent_C* GetDefaultObj();

	void OnRep_BladeVisibility(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EAudioComponentPlayState CallFunc_GetPlayState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void CreateSkeletalAudioComp(class UFortSkeletalAudioComponent** Component, const struct FTransform& Temp_struct_Variable, class UFortSkeletalAudioComponent* CallFunc_AddComponent_ReturnValue);
	void Unholstered(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void Holstered(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void UserConstructionScript();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void DoBulletBlockEffect(const struct FVector& ImpactLocation);
	void OnPlayImpactFX(struct FHitResult& HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC);
	void ToggleDynamicAudio(bool CanPlayIdleAudio);
	void StartIdleFX();
	void K2_OnUnEquip();
	void ToggleDodgePrompt(bool Visible);
	void CurrentPoiseChanged(float CurrentPoise);
	void BlockBreak();
	void TurnOnLobster();
	void SetBladeVisibility(bool Visible);
	void OnWeaponAttached();
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);
	void ReceiveBeginPlay();
	void ReticleStatusDisplay(bool Hide);
	void ShowReticleStatusDisplay();
	void DeactivateBlockBreakWarning();
	void RPCUnequip();
	void ExecuteUbergraph_B_Athena_Galileo_Lobster_Parent(int32 EntryPoint, class UFXSystemComponent* CallFunc_GetPrimaryParticleComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& K2Node_CustomEvent_ImpactLocation, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue, const struct FHitResult& K2Node_Event_HitResult, enum class EPhysicalSurface K2Node_Event_ImpactPhysicalSurface, class UFXSystemComponent* K2Node_Event_SpawnedPSC, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AB_Galileo_Lobster_Block_Collision_C* K2Node_DynamicCast_AsB_Galileo_Lobster_Block_Collision, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, bool K2Node_CustomEvent_CanPlayIdleAudio, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_1, class UFortHUDContext* CallFunc_GetContext_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool K2Node_CustomEvent_Visible_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_SetHudKeyActionVisibility_ReturnValue, float K2Node_CustomEvent_CurrentPoise, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool K2Node_CustomEvent_Visible, class APawn* CallFunc_GetInstigator_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_2, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_Event_bVisible, bool K2Node_Event_bSetForLocalControllerOnly, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_3, class UFortSkeletalAudioComponent* CallFunc_CreateSkeletalAudioComp_Component, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_3, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_CustomEvent_Hide, bool CallFunc_IsDedicatedServer_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, TScriptInterface<class ICameraLensEffectInterface> CallFunc_SpawnGenericCameraLensEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_Lerp_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue_4, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_4, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput_1, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1);
};

}


