#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0xB58 - 0xAD0)
// BlueprintGeneratedClass GA_Melee_Mantis_Parent.GA_Melee_Mantis_Parent_C
class UGA_Melee_Mantis_Parent_C : public UFortGameplayAbility_Mantis
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerCharacter;                                   // 0xAD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanSwingInWater;                                   // 0xAE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7605[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                GE_KnockBackImmunity;                              // 0xAE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           Handle_KnockbackImmunity;                          // 0xAF0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  SavedCollisionChannel;                             // 0xAF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AdditionalLevels;                                  // 0xB00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GELevel;                                           // 0xB04(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DefaultLevel;                                      // 0xB08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          RarityUncommon;                                    // 0xB0C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          RarityRare;                                        // 0xB14(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          RarityEpic;                                        // 0xB1C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          RarityLegendary;                                   // 0xB24(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          RarityMythic;                                      // 0xB2C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7606[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                AimAssistTarget;                                   // 0xB38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasAimAssistTarget;                                // 0xB40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7607[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeOfLastTarget;                                  // 0xB44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinDistanceToTarget_0;                             // 0xB48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinTimeBetweenTargets;                             // 0xB4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTargetingPreset*                      Targeting_Preset;                                  // 0xB50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Melee_Mantis_Parent_C* GetDefaultObj();

	bool Should_Switch_Targets(TArray<class AActor*>& AllTarget, class AActor*& CurrentTarget, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	bool IsValidTarget(class AActor* Actor, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDead_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, float CallFunc_GetDistanceBetweenActors_Distance, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void ConfigureRootMotionWarping(class AActor** OutTargetActor, bool* bOutAllowTranslationWarp, bool* bOutAllowRotationWarp, bool* bOutSnapshotTargetLocation, bool CallFunc_IsValidTarget_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void InitAbility(class AFortPlayerPawn** Output_Get, bool CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue, bool CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue_1, bool CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue_2, bool CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue_3, bool CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue_4, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void SetPawnCollision(class AFortPawn* Fort_Pawn, bool Collision_On, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_GetCollisionProfileName_ReturnValue);
	void SetKnockbackImmunity(bool ImmunityOn, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue);
	void Added_9D0C0593477CDD4D8DCFB8ABA9C68A6D();
	void Targeted_A97B41C34D59B42DF83C0EAAB120D871(const struct FTargetingRequestHandle& TargetingHandle);
	void K2_ActivateAbility();
	void BP_OnMantisTechniqueHit(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTag& ApplicationTag);
	void K2_OnEndAbility(bool bWasCancelled);
	void GetAimAssistTarget();
	void ExecuteUbergraph_GA_Melee_Mantis_Parent(int32 EntryPoint, const struct FTargetingRequestHandle& K2Node_CustomEvent_TargetingHandle, const struct FTargetingRequestHandle& Temp_struct_Variable, TArray<class AActor*>& CallFunc_GetTargetingResultsActors_Targets, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValidTarget_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_Event_TargetDataHandle, const struct FGameplayTag& K2Node_Event_ApplicationTag, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AB_Mantis_Weapon_Parent_C* K2Node_DynamicCast_AsB_Mantis_Weapon_Parent, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bWasCancelled, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue_1, class AB_Mantis_Weapon_Parent_C* K2Node_DynamicCast_AsB_Mantis_Weapon_Parent_1, bool K2Node_DynamicCast_bSuccess_1, class AFortPlayerPawn* CallFunc_InitAbility_Output_Get, int32 CallFunc_FTrunc_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue, bool CallFunc_Should_Switch_Targets_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UAsyncAction_PerformTargeting* CallFunc_PerformTargetingRequest_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
};

}


