#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C
// (Actor)

class UClass* AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Loop_SnowFlakes_CameraAttached_Niagara_C");

	return Clss;
}


// GCN_Loop_SnowFlakes_CameraAttached_Niagara_C GCN_Loop_SnowFlakes_CameraAttached_Niagara.Default__GCN_Loop_SnowFlakes_CameraAttached_Niagara_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C* AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C::GetDefaultObj()
{
	static class AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C*>(AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C.SpawnNiagara
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C::SpawnNiagara()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Loop_SnowFlakes_CameraAttached_Niagara_C", "SpawnNiagara");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C.OnRemoval
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UMatineeCameraShake*         BurstCameraShakeInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 BurstDecalInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C::OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UMatineeCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Loop_SnowFlakes_CameraAttached_Niagara_C", "OnRemoval");

	Params::AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemoval_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C.OnLoopingStart
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Loop_SnowFlakes_CameraAttached_Niagara_C", "OnLoopingStart");

	Params::AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStart_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C.OnRemovalNiagara
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UNiagaraComponent*>   ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UMatineeCameraShake*         BurstCameraShakeInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 BurstDecalInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C::OnRemovalNiagara(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UNiagaraComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UMatineeCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Loop_SnowFlakes_CameraAttached_Niagara_C", "OnRemovalNiagara");

	Params::AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemovalNiagara_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C.ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// TArray<class UNiagaraComponent*>   K2Node_Event_ParticleComponents                                  (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents                                     (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UMatineeCameraShake*         K2Node_Event_BurstCameraShakeInstance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 K2Node_Event_BurstDecalInstance                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_Event_MyTarget_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters_2                                        (ConstParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>K2Node_Event_ParticleComponents_2                                (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents_2                                   (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UMatineeCameraShake*         K2Node_Event_BurstCameraShakeInstance_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 K2Node_Event_BurstDecalInstance_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters_1                                        (ConstParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>K2Node_Event_ParticleComponents_1                                (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents_1                                   (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UNiagaraSystem*              CallFunc_GetAsset_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNiagaraEffectEnabled_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C::ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara(int32 EntryPoint, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UNiagaraComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UMatineeCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_Event_MyTarget_2, const struct FGameplayCueParameters& K2Node_Event_Parameters_2, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents_2, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_2, class UMatineeCameraShake* K2Node_Event_BurstCameraShakeInstance_1, class ADecalActor* K2Node_Event_BurstDecalInstance_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsActive_ReturnValue, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class UNiagaraSystem* CallFunc_GetAsset_ReturnValue, bool CallFunc_IsNiagaraEffectEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_Loop_SnowFlakes_CameraAttached_Niagara_C", "ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara");

	Params::AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.K2Node_Event_ParticleComponents = K2Node_Event_ParticleComponents;
	Parms.K2Node_Event_AudioComponents = K2Node_Event_AudioComponents;
	Parms.K2Node_Event_BurstCameraShakeInstance = K2Node_Event_BurstCameraShakeInstance;
	Parms.K2Node_Event_BurstDecalInstance = K2Node_Event_BurstDecalInstance;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_MyTarget_2 = K2Node_Event_MyTarget_2;
	Parms.K2Node_Event_Parameters_2 = K2Node_Event_Parameters_2;
	Parms.K2Node_Event_ParticleComponents_2 = K2Node_Event_ParticleComponents_2;
	Parms.K2Node_Event_AudioComponents_2 = K2Node_Event_AudioComponents_2;
	Parms.K2Node_Event_BurstCameraShakeInstance_1 = K2Node_Event_BurstCameraShakeInstance_1;
	Parms.K2Node_Event_BurstDecalInstance_1 = K2Node_Event_BurstDecalInstance_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.K2Node_Event_MyTarget_1 = K2Node_Event_MyTarget_1;
	Parms.K2Node_Event_Parameters_1 = K2Node_Event_Parameters_1;
	Parms.K2Node_Event_ParticleComponents_1 = K2Node_Event_ParticleComponents_1;
	Parms.K2Node_Event_AudioComponents_1 = K2Node_Event_AudioComponents_1;
	Parms.CallFunc_GetAsset_ReturnValue = CallFunc_GetAsset_ReturnValue;
	Parms.CallFunc_IsNiagaraEffectEnabled_ReturnValue = CallFunc_IsNiagaraEffectEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


