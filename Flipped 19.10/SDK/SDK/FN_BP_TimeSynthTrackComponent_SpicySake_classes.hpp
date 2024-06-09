#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x254 - 0x230)
// BlueprintGeneratedClass BP_TimeSynthTrackComponent_SpicySake.BP_TimeSynthTrackComponent_SpicySake_C
class UBP_TimeSynthTrackComponent_SpicySake_C : public UBP_TimeSynthTrackComponent_DataTracker_C
{
public:
	float                                        InterpFloat_Circling;                              // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InterpFloat_Attacking;                             // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventTag_Circling;                                 // 0x238(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventTag_Attacking;                                // 0x240(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        CirclingID;                                        // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AttackID;                                          // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Attack_FacingID;                                   // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_TimeSynthTrackComponent_SpicySake_C* GetDefaultObj();

	void OnDataTrackerStart(int32 CallFunc_GetMixStateIndexFromName_Array_Index, int32 CallFunc_GetMixStateIndexFromName_Array_Index_1, int32 CallFunc_GetMixStateIndexFromName_Array_Index_2);
	void HandleMixState(float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_2);
	void GetRemainingEventCooldown(float* Cooldown, float CallFunc_Add_FloatFloat_ReturnValue);
	void OnDataTrackerUpdate(float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, class UFortGameplayDataTrackerComponent* CallFunc_GetDataTrackerComponent_DataTrackerComponent, float CallFunc_GetEventValue_ReturnValue, class UFortGameplayDataTrackerComponent* CallFunc_GetDataTrackerComponent_DataTrackerComponent_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetEventValue_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue_1);
};

}


