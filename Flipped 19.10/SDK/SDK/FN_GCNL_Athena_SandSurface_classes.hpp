#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0x840 - 0x819)
// BlueprintGeneratedClass GCNL_Athena_SandSurface.GCNL_Athena_SandSurface_C
class AGCNL_Athena_SandSurface_C : public AGCNL_Athena_Surface_Parent_C
{
public:
	uint8                                        Pad_53CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x820(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     FootStepFX;                                        // 0x828(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bNotValid;                                         // 0x830(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bReplayMode;                                       // 0x831(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53CF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortReplaySpectatorAthena*            ReplayController;                                  // 0x838(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGCNL_Athena_SandSurface_C* GetDefaultObj();

	void OnPlayerFootstep(bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_OnSameTeam_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FTransform& CallFunc_SelectTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector4& CallFunc_MakeVector4_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, TArray<struct FVector4>& K2Node_MakeArray_Array, const struct FVector& CallFunc_SelectVector_ReturnValue);
	void OnLoopingStartNiagara(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UNiagaraComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void ExecuteUbergraph_GCNL_Athena_SandSurface(int32 EntryPoint, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UNiagaraComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UNiagaraComponent* CallFunc_Array_Get_Item, bool CallFunc_OnLocalPlayersTeam_Return_Value, bool CallFunc_GetIsPlayingReplay_ReturnValue, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, class AFortReplaySpectatorAthena* K2Node_DynamicCast_AsFort_Replay_Spectator_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
};

}


