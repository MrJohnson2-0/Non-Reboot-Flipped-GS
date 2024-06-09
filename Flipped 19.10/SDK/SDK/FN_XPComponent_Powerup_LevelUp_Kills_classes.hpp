#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x100 - 0xC8)
// BlueprintGeneratedClass XPComponent_Powerup_LevelUp_Kills.XPComponent_Powerup_LevelUp_Kills_C
class UXPComponent_Powerup_LevelUp_Kills_C : public UFortWorldMultiItemXPComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          Killed_Event_Tag;                                  // 0xD0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        IncrementalXP;                                     // 0xD8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UXPComponent_Powerup_LevelUp_Kills_C* GetDefaultObj();

	void EventReceived_05AD7EE7427E2756D60D2A91EB87AA4E(const struct FGameplayEventData& Payload);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_XPComponent_Powerup_LevelUp_Kills(int32 EntryPoint, float CallFunc_GetValueAtLevel_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable, class AFortPawn* CallFunc_GetOwningPawn_ReturnValue, class AFortWeapon* CallFunc_GetWeaponActor_ReturnValue, class UFortWorldMultiItem* CallFunc_GetOwningMultiItem_ReturnValue, class UAbilityAsync_WaitGameplayEvent* CallFunc_WaitGameplayEventToActor_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPawn* CallFunc_GetOwningPawn_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


