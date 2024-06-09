#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBB (0x3301 - 0x3246)
// BlueprintGeneratedClass NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C
class ANPC_Pawn_Wildlife_Parent_C : public ANPC_Pawn_Parent_C
{
public:
	uint8                                        Pad_3C4[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Wildlife_FootDust;                                 // 0x3250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortPawnComponent_Convert*            ConvertComponent;                                  // 0x3258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UAnimInstance>           Layer_Idle;                                        // 0x3260(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UAnimInstance>           Layer_Locomotion;                                  // 0x3288(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UAnimInstance>           Layer_Jump;                                        // 0x32B0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        LeaderTeam;                                        // 0x32D8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundEffectSourcePresetChain*         VocalSourceEffectChainOverride;                    // 0x32E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bTamingEnabled;                                    // 0x32E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPickupGrabbed_Destroyed;                         // 0x32F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bCanBeInteractedWithWhileTamed;                    // 0x3300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ANPC_Pawn_Wildlife_Parent_C* GetDefaultObj();

	void CanBeInteractedWithWhenTamed(bool* bCanInteract, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded, float CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat, bool CallFunc_BooleanAND_ReturnValue);
	void NPC_PickupGrabbed_Destroyed(class AActor* ActorGrabbed);
	void SetTamingEnabled(bool EnableTaming, bool CallFunc_NPC_CanBeInteractedWith_CanInteract, class UFortPawnComponent_Convert* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void NPC_CanBeInteractedWith(bool* CanInteract, bool CallFunc_NPC_CanBeInteractedWith_CanInteract, bool CallFunc_BooleanAND_ReturnValue);
	void AttachAndApplyVocalFX(struct FSoundLibraryPlaySoundResult& SoundLibraryResult, int32 Temp_int_Array_Index_Variable, class UAudioComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Play_Water_Splash_at_Water_Surface(class AFortWaterBodyActor* Water_Body, bool Enter_Water);
	bool IsValidAutoFireTarget(class AActor* Attacker, uint8 CallFunc_GetActorTeam_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliationBetweenTeams_ReturnValue, float CallFunc_GetHealth_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void Play_Sound_Lib(const struct FGameplayTag& Event_Name, const struct FSimpleSoundLibraryContextSettings& K2Node_MakeStruct_SimpleSoundLibraryContextSettings, class USimpleSoundLibraryContext* CallFunc_SpawnObject_ReturnValue, class USoundLibrarySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, const struct FSoundLibraryPlaySoundResult& CallFunc_PlaySound_OutResults, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void UpdateTamingIndicator(bool CallFunc_HasAuthority_ReturnValue, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnRep_LeaderTeam();
	void OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06(TSubclassOf<class UObject> Loaded);
	void LinkAnimationLayers();
	void AsyncLinkAnimationLayer(TSoftClassPtr<class UAnimInstance> AnimationLayer);
	void ReceiveBeginPlay();
	void OnCustomizationsLoaded_BP();
	void On_NPC_PawnInteractedWith(class AActor* AIPawn, class AFortPlayerPawn* InteractingPlayerPawn);
	void BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature(class AFortPawn* InstigatorPawn);
	void BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature();
	void NPC_AlertLevelChangedServer(enum class Enum_NPC_AlertLevel NPCAlertLevel);
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void NPC_LeaderSet(bool Success_, class AActor* Leader);
	void BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature(struct FSoundLibraryPlaySoundResult& Results, class USoundLibraryContext* Context);
	void OnBeingControlledChanged(bool bControlled);
	void ExecuteUbergraph_NPC_Pawn_Wildlife_Parent(int32 EntryPoint, bool CallFunc_CanBeInteractedWithWhenTamed_bCanInteract, TSoftClassPtr<class UAnimInstance> K2Node_CustomEvent_AnimationLayer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValidSoftClassReference_ReturnValue, class AActor* K2Node_Event_AIPawn, class AFortPlayerPawn* K2Node_Event_InteractingPlayerPawn, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPawn* K2Node_ComponentBoundEvent_InstigatorPawn, uint8 CallFunc_GetActorTeam_ReturnValue, enum class Enum_NPC_AlertLevel K2Node_Event_NPCAlertLevel, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_Event_Success_, class AActor* K2Node_Event_Leader, int32 CallFunc_GetConsoleVariableIntValue_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FSoundLibraryPlaySoundResult& K2Node_ComponentBoundEvent_Results, class USoundLibraryContext* K2Node_ComponentBoundEvent_Context, bool K2Node_Event_bControlled, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsAnim_Instance, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, bool CallFunc_NPC_CanBeInteractedWith_CanInteract, bool CallFunc_NPC_UpdateInteract_EnabledInteract);
	void OnPickupGrabbed_Destroyed__DelegateSignature(class ANPC_Pawn_Wildlife_Parent_C* WildlifePawn, class AActor* ActorGrabbed);
};

}


