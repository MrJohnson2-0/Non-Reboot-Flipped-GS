#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x240 (0x508 - 0x2C8)
// Class KnockbackRuntime.FortAthenaMutator_Knockback
class AFortAthenaMutator_Knockback : public AFortAthenaMutator
{
public:
	bool                                         bStorePlayerKnockbackData;                         // 0x2C8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicatePlayerKnockbackData;                     // 0x2C9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24AF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPlayerKnockbackDataChanged;                      // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FKnockbackMutatorDataArray            AllPlayersKnockbackData;                           // 0x2E0(0x120)(Net, NativeAccessSpecifierPublic)
	struct FScalableFloat                        bDisplayKnockbackDamageNumbersAsPercentage;        // 0x400(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ConvertToKnockbackDamageMultiplier;                // 0x428(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PercentDamageLowMaxThreshold;                      // 0x450(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PercentDamageMediumMaxThreshold;                   // 0x478(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        KnockbackMultiplierInitialValue;                   // 0x4A0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24B1[0x64];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortAthenaMutator_Knockback* GetDefaultObj();

	void SetPlayersShouldBreakThroughStructures(bool bActive, class AFortPlayerPawn* PlayerPawn);
	void HandleBlockedCharacterMovement(struct FHitResult* InOutImpact, class AFortPawn* FortPawn);
	float GetPercentDamageMediumMaxThreshold();
	float GetPercentDamageLowMaxThreshold();
	float GetKnockbackMultiplierInitialValue();
	TArray<struct FKnockbackMutatorData> GetAllPlayersKnockbackData();
};

// 0x10 (0xAB8 - 0xAA8)
// Class KnockbackRuntime.FortGameplayAbility_KnockbackMutator
class UFortGameplayAbility_KnockbackMutator : public UFortGameplayAbility
{
public:
	class AFortAthenaMutator_Knockback*          CachedMutator;                                     // 0xAA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class AFortAthenaMutator_Knockback> MutatorClassToGet;                                 // 0xAB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortGameplayAbility_KnockbackMutator* GetDefaultObj();

	void SaveKnockbackData(struct FKnockbackMutatorData& InKnockbackData);
	class AFortAthenaMutator_Knockback* GetCachedMutator();
};

}


