#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCNL_RollingEffects_Boulder.GCNL_RollingEffects_Boulder_C
// (Actor)

class UClass* AGCNL_RollingEffects_Boulder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCNL_RollingEffects_Boulder_C");

	return Clss;
}


// GCNL_RollingEffects_Boulder_C GCNL_RollingEffects_Boulder.Default__GCNL_RollingEffects_Boulder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGCNL_RollingEffects_Boulder_C* AGCNL_RollingEffects_Boulder_C::GetDefaultObj()
{
	static class AGCNL_RollingEffects_Boulder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGCNL_RollingEffects_Boulder_C*>(AGCNL_RollingEffects_Boulder_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCNL_RollingEffects_Boulder.GCNL_RollingEffects_Boulder_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_RollingEffects_Boulder_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_RollingEffects_Boulder_C", "ReceiveTick");

	Params::AGCNL_RollingEffects_Boulder_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_RollingEffects_Boulder.GCNL_RollingEffects_Boulder_C.OnLoopingStartNiagara
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UNiagaraComponent*>   ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCNL_RollingEffects_Boulder_C::OnLoopingStartNiagara(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UNiagaraComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_RollingEffects_Boulder_C", "OnLoopingStartNiagara");

	Params::AGCNL_RollingEffects_Boulder_C_OnLoopingStartNiagara_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_RollingEffects_Boulder.GCNL_RollingEffects_Boulder_C.ExecuteUbergraph_GCNL_RollingEffects_Boulder
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// TArray<class UNiagaraComponent*>   K2Node_Event_ParticleComponents                                  (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents                                     (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UNiagaraComponent*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABGA_Athena_Boulder_Prop_C*  K2Node_DynamicCast_AsBGA_Athena_Boulder_Prop                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBoxSphereBounds            CallFunc_GetBounds_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetMovingStateData_OutInstigator                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_GetMovingStateData_OutHitResult                         (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_GetMovingStateData_OutLinearSpeed                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPhysicsObjectMovementStateCallFunc_GetMovingStateData_OutMovementState                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_RollingEffects_Boulder_C::ExecuteUbergraph_GCNL_RollingEffects_Boulder(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UNiagaraComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UNiagaraComponent* CallFunc_Array_Get_Item, class ABGA_Athena_Boulder_Prop_C* K2Node_DynamicCast_AsBGA_Athena_Boulder_Prop, bool K2Node_DynamicCast_bSuccess, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AActor* CallFunc_GetMovingStateData_OutInstigator, const struct FHitResult& CallFunc_GetMovingStateData_OutHitResult, float CallFunc_GetMovingStateData_OutLinearSpeed, enum class EFortPhysicsObjectMovementState CallFunc_GetMovingStateData_OutMovementState, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCNL_RollingEffects_Boulder_C", "ExecuteUbergraph_GCNL_RollingEffects_Boulder");

	Params::AGCNL_RollingEffects_Boulder_C_ExecuteUbergraph_GCNL_RollingEffects_Boulder_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.K2Node_Event_ParticleComponents = K2Node_Event_ParticleComponents;
	Parms.K2Node_Event_AudioComponents = K2Node_Event_AudioComponents;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBGA_Athena_Boulder_Prop = K2Node_DynamicCast_AsBGA_Athena_Boulder_Prop;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBounds_ReturnValue = CallFunc_GetBounds_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetMovingStateData_OutInstigator = CallFunc_GetMovingStateData_OutInstigator;
	Parms.CallFunc_GetMovingStateData_OutHitResult = CallFunc_GetMovingStateData_OutHitResult;
	Parms.CallFunc_GetMovingStateData_OutLinearSpeed = CallFunc_GetMovingStateData_OutLinearSpeed;
	Parms.CallFunc_GetMovingStateData_OutMovementState = CallFunc_GetMovingStateData_OutMovementState;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


