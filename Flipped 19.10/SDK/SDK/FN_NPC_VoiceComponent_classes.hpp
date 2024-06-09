#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xE0 - 0xB8)
// BlueprintGeneratedClass NPC_VoiceComponent.NPC_VoiceComponent_C
class UNPC_VoiceComponent_C : public UFortAIComponent_Voice
{
public:
	class UFortTaggedSoundBank*                  DeprecatedBPSoundBank;                             // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       AttachComponent;                                   // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggerTimeThreshold;                              // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastTriggerTime;                                   // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio_Component;                                   // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundEffectSourcePresetChain*         SourceChainToApply;                                // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UNPC_VoiceComponent_C* GetDefaultObj();

	void SetSourceEffectChainToApply(class USoundEffectSourcePresetChain* SourceEffectChain);
	void Internal_Get_Voice_Sound_Bank(class UFortTaggedSoundBank** Sound_Bank, class UFortTaggedSoundBank* CallFunc_GetVoiceSoundBank_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Deprecated_Set_Sound_Bank(class UFortTaggedSoundBank* SoundBank);
	void PlayVoiceLine(struct FGameplayTag& Gameplay_Tag, class UAudioComponent* AudioComponent, bool* Success, class USoundBase* SoundToPlay, const struct FGameplayTag& CurrentVOTag, class UFortTaggedSoundBank* SoundBankToUse, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortTaggedSoundBank* CallFunc_Internal_Get_Voice_Sound_Bank_Sound_Bank, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsGameplayTagValid_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, class USoundBase* CallFunc_GetSoundToPlay_ReturnValue);
};

}


