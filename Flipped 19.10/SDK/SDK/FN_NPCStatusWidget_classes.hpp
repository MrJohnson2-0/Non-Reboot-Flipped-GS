#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x284 - 0x248)
// WidgetBlueprintGeneratedClass NPCStatusWidget.NPCStatusWidget_C
class UNPCStatusWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNPCStatusWidgetBar_C*                 Bar_Health;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNPCStatusWidgetBar_C*                 Bar_Shield;                                        // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          VisibiltyTimer;                                    // 0x260(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            VisibilityChanged;                                 // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        StatusWidgetVisibleDuration;                       // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentHealthPercent;                              // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentShieldPercent;                              // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UNPCStatusWidget_C* GetDefaultObj();

	void Construct();
	void EventUpdateStatus(float Health, float Shield, bool ShowShield);
	void EventHideStatus();
	void ChangeWidgetVisibleDuration(float StatusWidgetVisibleDuration);
	void ExecuteUbergraph_NPCStatusWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_StatusWidgetVisibleDuration, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, float K2Node_CustomEvent_health, float K2Node_CustomEvent_shield, bool K2Node_CustomEvent_ShowShield);
	void VisibilityChanged__DelegateSignature(bool bVisible);
};

}


