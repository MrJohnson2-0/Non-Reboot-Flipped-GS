#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x848 - 0x808)
// BlueprintGeneratedClass GCNL_Athena_ShieldGenerator_Heal.GCNL_Athena_ShieldGenerator_Heal_C
class AGCNL_Athena_ShieldGenerator_Heal_C : public AFortGameplayCueNotify_Loop
{
public:
	class UParticleSystemComponent*              BeamFX;                                            // 0x808(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TargetActor;                                       // 0x810(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                SourceActor;                                       // 0x818(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Row_ShieldCap;                                     // 0x820(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AGCNL_Athena_ShieldGenerator_Heal_C* GetDefaultObj();

};

}


