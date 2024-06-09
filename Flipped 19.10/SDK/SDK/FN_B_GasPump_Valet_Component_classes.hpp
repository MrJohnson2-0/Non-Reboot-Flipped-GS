#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xD0 - 0xB0)
// BlueprintGeneratedClass B_GasPump_Valet_Component.B_GasPump_Valet_Component_C
class UB_GasPump_Valet_Component_C : public UGameFrameworkComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  Gas_Pump_Icon_Enabled;                             // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Gas_Pump_IndicatorManager_Class;                   // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UValet_GasPumpIndicatorManagerV2_C*    Gas_Pump_IndicatorManager;                         // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UB_GasPump_Valet_Component_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_B_GasPump_Valet_Component(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_Greater_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AActor* CallFunc_GetOwner_ReturnValue_1, class AFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_1, class UFortGameStateComponent* CallFunc_GetComponentByClass_ReturnValue, class UValet_GasPumpIndicatorManagerV2_C* K2Node_DynamicCast_AsValet_Gas_Pump_Indicator_Manager_V2, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_3);
};

}


