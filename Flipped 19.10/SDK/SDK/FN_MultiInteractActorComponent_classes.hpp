#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x144 - 0x120)
// BlueprintGeneratedClass MultiInteractActorComponent.MultiInteractActorComponent_C
class UMultiInteractActorComponent_C : public UFortActorComponent_MultiInteract
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          RemoveInteractPlayerTag;                           // 0x128(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AddInteractPlayerTag;                              // 0x130(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          LoopingMultiInteractTag;                           // 0x138(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        RequiredDuration;                                  // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMultiInteractActorComponent_C* GetDefaultObj();

	void AddGCNL(class AFortPlayerPawn*& PlayerPawn, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);
	void RemoveGCNL(class AFortPlayerPawn*& PlayerPawn, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);
	void ExecuteGCNFromTag(class AFortPlayerPawn*& PlayerPawn, struct FGameplayTag& InteractTag, int32 PreviousInteractPlayerCount, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetInteractionDuration_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);
	void SetRequiredDuration(float NewRequiredDuration);
	void UpdateForPlayerJustJoinedInteraction();
	void UpdateForPlayerJustLeftInteraction(bool bLocalPlayerInteracting, bool bLocalPlayerJustLeft);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MultiInteractActorComponent(int32 EntryPoint, bool K2Node_Event_bLocalPlayerInteracting, bool K2Node_Event_bLocalPlayerJustLeft, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
};

}


