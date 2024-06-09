#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xAB0 - 0xAA8)
// BlueprintGeneratedClass GA_Ostrich_ReloadShotgun.GA_Ostrich_ReloadShotgun_C
class UGA_Ostrich_ReloadShotgun_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Ostrich_ReloadShotgun_C* GetDefaultObj();

	void ServerReload(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortWeaponRanged_Ostrich* K2Node_DynamicCast_AsFort_Weapon_Ranged_Ostrich, bool K2Node_DynamicCast_bSuccess_1);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Ostrich_ReloadShotgun(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetVehicleActor_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AFortCharacterVehicle_Ostrich* K2Node_DynamicCast_AsFort_Character_Vehicle_Ostrich, bool K2Node_DynamicCast_bSuccess_1);
};

}


