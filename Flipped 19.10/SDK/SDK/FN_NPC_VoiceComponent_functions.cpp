#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NPC_VoiceComponent.NPC_VoiceComponent_C
// (None)

class UClass* UNPC_VoiceComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPC_VoiceComponent_C");

	return Clss;
}


// NPC_VoiceComponent_C NPC_VoiceComponent.Default__NPC_VoiceComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNPC_VoiceComponent_C* UNPC_VoiceComponent_C::GetDefaultObj()
{
	static class UNPC_VoiceComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNPC_VoiceComponent_C*>(UNPC_VoiceComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NPC_VoiceComponent.NPC_VoiceComponent_C.SetSourceEffectChainToApply
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundEffectSourcePresetChain*SourceEffectChain                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_VoiceComponent_C::SetSourceEffectChainToApply(class USoundEffectSourcePresetChain* SourceEffectChain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_VoiceComponent_C", "SetSourceEffectChainToApply");

	Params::UNPC_VoiceComponent_C_SetSourceEffectChainToApply_Params Parms{};

	Parms.SourceEffectChain = SourceEffectChain;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_VoiceComponent.NPC_VoiceComponent_C.Internal Get Voice Sound Bank
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortTaggedSoundBank*        Sound_Bank                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTaggedSoundBank*        CallFunc_GetVoiceSoundBank_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_VoiceComponent_C::Internal_Get_Voice_Sound_Bank(class UFortTaggedSoundBank** Sound_Bank, class UFortTaggedSoundBank* CallFunc_GetVoiceSoundBank_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_VoiceComponent_C", "Internal Get Voice Sound Bank");

	Params::UNPC_VoiceComponent_C_Internal_Get_Voice_Sound_Bank_Params Parms{};

	Parms.CallFunc_GetVoiceSoundBank_ReturnValue = CallFunc_GetVoiceSoundBank_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Sound_Bank != nullptr)
		*Sound_Bank = Parms.Sound_Bank;

}


// Function NPC_VoiceComponent.NPC_VoiceComponent_C.Deprecated Set Sound Bank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortTaggedSoundBank*        SoundBank                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_VoiceComponent_C::Deprecated_Set_Sound_Bank(class UFortTaggedSoundBank* SoundBank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_VoiceComponent_C", "Deprecated Set Sound Bank");

	Params::UNPC_VoiceComponent_C_Deprecated_Set_Sound_Bank_Params Parms{};

	Parms.SoundBank = SoundBank;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_VoiceComponent.NPC_VoiceComponent_C.PlayVoiceLine
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Gameplay_Tag                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             AudioComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  SoundToPlay                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CurrentVOTag                                                     (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// class UFortTaggedSoundBank*        SoundBankToUse                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTaggedSoundBank*        CallFunc_Internal_Get_Voice_Sound_Bank_Sound_Bank                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue             (None)
// float                              CallFunc_GetTimeSeconds_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  CallFunc_GetSoundToPlay_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_VoiceComponent_C::PlayVoiceLine(struct FGameplayTag& Gameplay_Tag, class UAudioComponent* AudioComponent, bool* Success, class USoundBase* SoundToPlay, const struct FGameplayTag& CurrentVOTag, class UFortTaggedSoundBank* SoundBankToUse, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortTaggedSoundBank* CallFunc_Internal_Get_Voice_Sound_Bank_Sound_Bank, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsGameplayTagValid_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, class USoundBase* CallFunc_GetSoundToPlay_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_VoiceComponent_C", "PlayVoiceLine");

	Params::UNPC_VoiceComponent_C_PlayVoiceLine_Params Parms{};

	Parms.Gameplay_Tag = Gameplay_Tag;
	Parms.AudioComponent = AudioComponent;
	Parms.SoundToPlay = SoundToPlay;
	Parms.CurrentVOTag = CurrentVOTag;
	Parms.SoundBankToUse = SoundBankToUse;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Internal_Get_Voice_Sound_Bank_Sound_Bank = CallFunc_Internal_Get_Voice_Sound_Bank_Sound_Bank;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue_1 = CallFunc_GetTimeSeconds_ReturnValue_1;
	Parms.CallFunc_GetSoundToPlay_ReturnValue = CallFunc_GetSoundToPlay_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}

}


