#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x470 - 0x470)
// BlueprintGeneratedClass GC_HuskDeath.GC_HuskDeath_C
class AGC_HuskDeath_C : public AFortGameplayCueNotify_BurstLatent
{
public:

	static class UClass* StaticClass();
	static class AGC_HuskDeath_C* GetDefaultObj();

	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UMatineeCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
};

}


