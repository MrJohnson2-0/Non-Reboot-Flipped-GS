#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xAD8 - 0xAA8)
// BlueprintGeneratedClass GA_Athena_HidingProp_LandedOn.GA_Athena_HidingProp_LandedOn_C
class UGA_Athena_HidingProp_LandedOn_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FScalableFloat                        HidingEnabled;                                     // 0xAB0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_Athena_HidingProp_LandedOn_C* GetDefaultObj();

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Athena_HidingProp_LandedOn(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, float CallFunc_GetValueAtLevel_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
};

}


