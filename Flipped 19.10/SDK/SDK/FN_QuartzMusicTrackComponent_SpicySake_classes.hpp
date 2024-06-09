#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x200 - 0x1E8)
// BlueprintGeneratedClass QuartzMusicTrackComponent_SpicySake.QuartzMusicTrackComponent_SpicySake_C
class UQuartzMusicTrackComponent_SpicySake_C : public UQuartzMusicTrackComponent_DataTracker_C
{
public:
	float                                        InterpFloat_Circling;                              // 0x1E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InterpFloat_Attacking;                             // 0x1EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventTag_Circling;                                 // 0x1F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventTag_Attacking;                                // 0x1F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQuartzMusicTrackComponent_SpicySake_C* GetDefaultObj();

	void HandleMixState(float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue);
	float UpdateInterpValue(float InterpValue, struct FGameplayTag& EventTag, float Attack_Speed, float Release_Speed, class UFortGameplayDataTrackerComponent* CallFunc_GetDataTrackerComponent_DataTracker, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetEventValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue);
	void OnDataTrackerUpdate(class UFortGameplayDataTrackerComponent* CallFunc_GetDataTrackerComponent_DataTracker, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetEventValue_ReturnValue, float CallFunc_GetEventValue_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FInterpTo_ReturnValue_1);
};

}


