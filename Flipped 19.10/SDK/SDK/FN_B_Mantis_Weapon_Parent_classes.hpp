#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x66 (0x1630 - 0x15CA)
// BlueprintGeneratedClass B_Mantis_Weapon_Parent.B_Mantis_Weapon_Parent_C
class AB_Mantis_Weapon_Parent_C : public AB_Melee_Generic_C
{
public:
	uint8                                        Pad_5598[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortMantisWeaponComponent*            FortMantisWeapon;                                  // 0x15D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       PlayerCharacter;                                   // 0x15E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 T_MeleeAttackAbility;                              // 0x15E8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 T_HudElementToHide;                                // 0x1608(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          Timer_ShowReticleStatus;                           // 0x1628(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Mantis_Weapon_Parent_C* GetDefaultObj();

	void ReticleStatusDisplay(bool Hide);
	void ShowReticleStatusDisplay();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Mantis_Weapon_Parent(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_CustomEvent_Hide, class UFortHUDContext* CallFunc_GetContext_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue);
};

}


