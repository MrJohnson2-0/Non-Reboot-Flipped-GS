#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x338 (0x2B40 - 0x2808)
// BlueprintGeneratedClass EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C
class AEnemyPawn_Parent_Deimos_C : public AFortAIPawn
{
public:
	uint8                                        Pad_410C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2810(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundLibraryComponent*                SoundLibrary;                                      // 0x2818(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     WeaponCapsuleCollision;                            // 0x2820(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Elemental_Layer_Audio_Loop;                        // 0x2828(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Enemy_Spawn_Out_TL_ColorFadeOutTrack_37A083E44F5772C5FFF36680D2AD7D94; // 0x2830(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Enemy_Spawn_Out_TL_FadeInTrack_37A083E44F5772C5FFF36680D2AD7D94; // 0x2834(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Enemy_Spawn_Out_TL__Direction_37A083E44F5772C5FFF36680D2AD7D94; // 0x2838(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_410D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Enemy_Spawn_Out_TL;                                // 0x2840(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EnemySpawnInTL_ColorFadeOutTrack_515E6B424789F427A1B9ACAD857FFF5D; // 0x2848(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EnemySpawnInTL_FadeInTrack_515E6B424789F427A1B9ACAD857FFF5D; // 0x284C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                EnemySpawnInTL__Direction_515E6B424789F427A1B9ACAD857FFF5D; // 0x2850(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_410F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EnemySpawnInTL;                                    // 0x2858(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            SpawnParticlesTransform;                           // 0x2860(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                       SpawnParticles;                                    // 0x2890(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CharacterElementalParticles;                       // 0x2898(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowHeadshot;                                     // 0x28A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4110[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TC_RangedWeapon;                                   // 0x28A8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*              HeadshotParticleSystemComp;                        // 0x28C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Additive_Hit_React_Montage;                        // 0x28D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Death_Normal_Sound;                                // 0x28D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Elemental_Audio_Layer_Sound;                       // 0x28E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Headshot_FX_Socket;                                // 0x28E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class USkeletalMeshComponent*, class UFXSkeletonMeshComponent_C*> AwakenFXSkeletalMeshes;                            // 0x28F0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class UStaticMeshComponent*, class UFXStaticMeshComponent_C*> AwakenFXStaticMeshes;                              // 0x2940(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        AwokenMaxDistance;                                 // 0x2990(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AwakenDuration;                                    // 0x2994(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          DestroyAwakenFXTimer;                              // 0x2998(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class USkeletalMeshComponent*, class UFXSkeletonMeshComponent_C*> BuildingHitFXSkeletalMeshes;                       // 0x29A0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class UStaticMeshComponent*, class UFXStaticMeshComponent_C*> BuildingHitFXStaticMeshes;                         // 0x29F0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        BuildingHitDuration;                               // 0x2A40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4113[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          DestroyBuildingHitFXTimer;                         // 0x2A48(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFXSkeletonMeshComponent_C*            TempFXSkeletalMesh;                                // 0x2A50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>        RegisteredSkeletalMeshesForEffects;                // 0x2A58(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UStaticMeshComponent*>          RegisteredStaticMeshesForEffects;                  // 0x2A68(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         HasGlowColorsAssigned;                             // 0x2A78(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SpawnInTimelineCompletedSuccessfully;              // 0x2A79(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4116[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CharacterSpawnInSafetyCheckHandle;                 // 0x2A80(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>      Previous_MID;                                      // 0x2A88(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                       CharacterAmbientParticlesTemplate;                 // 0x2A98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CharacterAmbientParticles;                         // 0x2AA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                DuplicateCharacterMesh;                            // 0x2AA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DuplicateCharacterMID;                             // 0x2AB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                       Auxillary_Objects;                                 // 0x2AB8(0x10)(Edit, BlueprintVisible)
	TArray<class UObject*>                       Duplicate_Auxillary_Objects;                       // 0x2AC8(0x10)(Edit, BlueprintVisible)
	class UParticleSystemComponent*              MinibossPSComponent;                               // 0x2AD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CharacterParticlesMaxDrawDistance;                 // 0x2AE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4117[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPhysicalMaterial*>             Original_Phys_Material;                            // 0x2AE8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      Previous_MID_AuxObjs;                              // 0x2AF8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Restoring_Array_Index;                             // 0x2B08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseHeadShotFX;                                     // 0x2B0C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_411A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Death_Dematerialize_Sound;                         // 0x2B10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            HeadShot_Sound;                                    // 0x2B18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AdditiveHitReactRetriggerDelay;                    // 0x2B20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_SidewaysSpawnFx;                                // 0x2B24(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_411C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USimpleSoundLibraryContext*            SoundLibraryContext;                               // 0x2B30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_OnSpawnFX;                                      // 0x2B38(0x8)(Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AEnemyPawn_Parent_Deimos_C* GetDefaultObj();

	void Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn);
	void PlaySoundLibraryAudio(const struct FGameplayTag& Event_Name, class USoundLibrarySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, const struct FSimpleSoundLibraryContextSettings& K2Node_MakeStruct_SimpleSoundLibraryContextSettings, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USimpleSoundLibraryContext* CallFunc_SpawnObject_ReturnValue, const struct FSoundLibraryPlaySoundResult& CallFunc_PlaySound_OutResults);
	void DeregisterEffectSkeletalMesh(class USkeletalMeshComponent* Mesh, bool CallFunc_IsValid_ReturnValue, class UFXSkeletonMeshComponent_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Map_Remove_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue, class UFXSkeletonMeshComponent_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void DeregisterEffectStaticMesh(class UStaticMeshComponent* Mesh, bool CallFunc_IsValid_ReturnValue, class UFXStaticMeshComponent_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFXStaticMeshComponent_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Map_Remove_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue);
	void ApplyAwakenEffectToStaticMesh(class UStaticMeshComponent* Mesh, class UFXStaticMeshComponent_C* FXStaticMesh, bool CallFunc_IsValid_ReturnValue, class UFXStaticMeshComponent_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FTransform& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_1, class UFXStaticMeshComponent_C* CallFunc_AddComponent_ReturnValue);
	void ApplyAwakenEffectToSkeletalMesh(class USkeletalMeshComponent* Mesh, class UFXSkeletonMeshComponent_C* FXSkeletalMesh, bool CallFunc_IsValid_ReturnValue, class UFXSkeletonMeshComponent_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FTransform& Temp_struct_Variable, class UFXSkeletonMeshComponent_C* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void RegisterEffectStaticMesh(class UStaticMeshComponent* Mesh, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void RegisterEffectSkeletalMesh(class USkeletalMeshComponent* Mesh, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void ApplyBuildingHitEffectToStaticMesh(class UStaticMeshComponent* Mesh, class UFXStaticMeshComponent_C* FXStaticMesh, bool CallFunc_IsValid_ReturnValue, class UFXStaticMeshComponent_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& Temp_struct_Variable, class UFXStaticMeshComponent_C* CallFunc_AddComponent_ReturnValue);
	void ApplyBuildingHitEffectToSkeletalMesh(class USkeletalMeshComponent* Mesh, class UFXSkeletonMeshComponent_C* FXSkeletalMesh, bool CallFunc_IsValid_ReturnValue, class UFXSkeletonMeshComponent_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FTransform& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_1, class UFXSkeletonMeshComponent_C* CallFunc_AddComponent_ReturnValue);
	void CharacterSpawnInSafetyCheck();
	void SpawnParticleSystemOnCharacterMesh(class UParticleSystem* ParticleSystemTemplate, class UParticleSystemComponent* ParticleSystemComponentReferenceVar, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TArray<struct FParticleSysParam>& InstanceParameters, bool AutoActivate, bool AutoDestroy, bool AbsoluteLocation, bool AbsoluteRotation, bool AbsoluteScale, class UParticleSystemComponent** PSComponentReference, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
	void PlayAdditiveHitReacts(const struct FVector& Hit_Direction, class UAnimMontage* Anim_Montage);
	void SetScalarParameterOnAllCharacterMIDs(class FName Parameter_Name, float Scalar_Value, bool AlsoModifyOriginalMIDs, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UObject* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class UMeshComponent* K2Node_DynamicCast_AsMesh_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_4, class UObject* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_3, class UMeshComponent* K2Node_DynamicCast_AsMesh_Component_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void SetVectorParameterOnAllCharacterMIDs(class FName Parameter_Name, const struct FVector& Vector_Value, bool Propagate_to_Auxiliary_Meshes, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, class UMeshComponent* K2Node_DynamicCast_AsMesh_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UObject* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_2, class UMeshComponent* K2Node_DynamicCast_AsMesh_Component_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_3);
	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue);
	void Enemy_Spawn_Out_TL__FinishedFunc();
	void Enemy_Spawn_Out_TL__UpdateFunc();
	void EnemySpawnInTL__FinishedFunc();
	void EnemySpawnInTL__UpdateFunc();
	void EnemySpawnInTL__Spawn__EventFunc();
	void OnBeginDance();
	void OnEndDance();
	void TriggerDeathFX();
	void ReceiveBeginPlay();
	void OnBeginDeepWaterInteraction(const struct FVector& WaterSurfaceLocation, float WaterDepth);
	void OnWaterDeepNavMeshEnter();
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ManualDespawnEnemy(const struct FVector& RiftLocationWS);
	void ManualEnemySpawnIn(const struct FVector& RiftLocationWS);
	void SpawnInSafetyCheck();
	void PostSpawnIn();
	void DespawnEnemy(const struct FVector& RiftLocationWS);
	void DebugEnemySpawnIn();
	void OnFinishedEncounterSpawn();
	void OnStartedEncounterSpawn();
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void AdditiveHitReactDelay();
	void DestroyBuildingHitEffect();
	void OnBuildingHitPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, const struct FGameplayEffectContextHandle& EffectContext, bool bPlayerPlaced);
	void ExecuteUbergraph_EnemyPawn_Parent_Deimos(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& K2Node_Event_WaterSurfaceLocation, float K2Node_Event_WaterDepth, const struct FLinearColor& Temp_struct_Variable, class AController* CallFunc_GetController_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, bool CallFunc_NotEqual_GameplayTag_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, float K2Node_Event_Damage_2, const struct FGameplayTagContainer& K2Node_Event_DamageTags_2, const struct FVector& K2Node_Event_Momentum_2, const struct FHitResult& K2Node_Event_HitInfo_2, class AFortPawn* K2Node_Event_InstigatedBy_1, class AActor* K2Node_Event_DamageCauser_1, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext_2, enum class EFortDamageZone CallFunc_GetDamageZone_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FLinearColor& Temp_struct_Variable_1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_1, bool Temp_bool_Variable, const struct FVector& K2Node_CustomEvent_RiftLocationWS_2, const struct FVector& K2Node_CustomEvent_RiftLocationWS_1, const struct FLinearColor& K2Node_Select_Default, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, const struct FVector& K2Node_CustomEvent_RiftLocationWS, bool Temp_bool_Option_B___If_false__use_Option_A_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, int32 Temp_int_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_EqualEqual_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class ABuildingRift* K2Node_DynamicCast_AsBuilding_Rift, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& K2Node_Select_Default_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Not_PreBool_ReturnValue_1, float K2Node_Event_Damage_1, const struct FGameplayTagContainer& K2Node_Event_DamageTags_1, const struct FVector& K2Node_Event_Momentum_1, const struct FHitResult& K2Node_Event_HitInfo_1, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext_1, bool CallFunc_Not_PreBool_ReturnValue_2, class AFortProjectileBase* K2Node_DynamicCast_AsFort_Projectile_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, class AFortWeapon* K2Node_DynamicCast_AsFort_Weapon, bool K2Node_DynamicCast_bSuccess_2, enum class EFortDamageZone CallFunc_GetDamageZone_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_IsClosed_Variable, class USkeletalMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UFXSkeletonMeshComponent_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UStaticMeshComponent* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class UFXStaticMeshComponent_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_WeaponDataHasAnyMatchingGameplayTags_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UStaticMeshComponent* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue_3, bool CallFunc_IsDedicatedServer_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, bool K2Node_Event_bPlayerPlaced, bool CallFunc_ShouldApplyBuildingHitEffect_ReturnValue);
};

}

