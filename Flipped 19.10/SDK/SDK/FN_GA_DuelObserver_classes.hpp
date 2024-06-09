#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xAC0 - 0xAB8)
// BlueprintGeneratedClass GA_DuelObserver.GA_DuelObserver_C
class UGA_DuelObserver_C : public UFortGameplayAbility_ObserveDuels
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_DuelObserver_C* GetDefaultObj();

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void UpdateDuelUI(enum class EDuelState Duel_State, const struct FDuelOverlayData& Cached_Duel_Overlay_Data);
	void OnDuelChange(enum class EDuelState NewDuelState, struct FDuelOverlayData& ChangedDuelOverlayData);
	void ExecuteUbergraph_GA_DuelObserver(int32 EntryPoint, enum class EDuelState K2Node_Event_NewDuelState, const struct FDuelOverlayData& K2Node_Event_ChangedDuelOverlayData, enum class EDuelState K2Node_CustomEvent_Duel_State, const struct FDuelOverlayData& K2Node_CustomEvent_Cached_Duel_Overlay_Data, bool CallFunc_IsServer_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


