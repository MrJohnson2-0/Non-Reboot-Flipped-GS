#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0xACC - 0xAA8)
// BlueprintGeneratedClass GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C
class UGA_Athena_SCMachine_Passive_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawnAthena*                 PlayerPawn;                                        // 0xAB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SpawnZOffset;                                      // 0xAB8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          BlockChipSpawnTag;                                 // 0xAC4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Athena_SCMachine_Passive_C* GetDefaultObj();

	void CheckPlayerChipSpawnEnabled(bool* IsChipSpawnEnabled, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Check_Resurrection_Active(bool* bEnabled, class AFortGameStateAthena* GameStateAthena, bool PlaylistValid, class FName TestPlaylist, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsResurrectionEnabled_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess);
	void SaveOutPlayer(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess);
	void Spawn();
	void HandleOnFortPlayerDied(class AFortPlayerPawnAthena* FortPlayerPawnAthena);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_SCMachine_Passive(int32 EntryPoint, bool CallFunc_CheckPlayerChipSpawnEnabled_IsChipSpawnEnabled, uint8 CallFunc_GetActorTeam_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_Check_Resurrection_Active_bEnabled, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ABGA_Athena_SCMachine_Pickup_C* CallFunc_FinishSpawningActor_ReturnValue, class AFortPlayerPawnAthena* K2Node_CustomEvent_FortPlayerPawnAthena, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess_1, class AFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsBattleLabModePlaylist_ReturnValue, bool CallFunc_IsRespawningAllowed_ReturnValue, bool CallFunc_IsCreativeLTMPlaylist_ReturnValue, bool CallFunc_IsCreativeOrPlaygroundModePlaylist_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue);
};

}


