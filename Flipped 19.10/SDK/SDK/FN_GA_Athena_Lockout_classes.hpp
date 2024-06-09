#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0xABC - 0xAA8)
// BlueprintGeneratedClass GA_Athena_Lockout.GA_Athena_Lockout_C
class UGA_Athena_Lockout_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          Timer_LockoutFailsafe;                             // 0xAB0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        LockoutFailsafeTime;                               // 0xAB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Athena_Lockout_C* GetDefaultObj();

	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void Failsafe();
	void ExecuteUbergraph_GA_Athena_Lockout(int32 EntryPoint, enum class EFortGetPlayerPawnExecutions CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec, class AFortPlayerPawn* CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortGetPlayerPawnExecutions CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec_1, class AFortPlayerPawn* CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn_1, bool K2Node_Event_bWasCancelled, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


