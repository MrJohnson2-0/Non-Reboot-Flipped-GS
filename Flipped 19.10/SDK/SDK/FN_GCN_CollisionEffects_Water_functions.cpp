#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_CollisionEffects_Water.GCN_CollisionEffects_Water_C
// (None)

class UClass* UGCN_CollisionEffects_Water_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_CollisionEffects_Water_C");

	return Clss;
}


// GCN_CollisionEffects_Water_C GCN_CollisionEffects_Water.Default__GCN_CollisionEffects_Water_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_CollisionEffects_Water_C* UGCN_CollisionEffects_Water_C::GetDefaultObj()
{
	static class UGCN_CollisionEffects_Water_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_CollisionEffects_Water_C*>(UGCN_CollisionEffects_Water_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GCN_CollisionEffects_Water.GCN_CollisionEffects_Water_C.OnBurst
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UMatineeCameraShake*         BurstCameraShakeInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 BurstDecalInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakGameplayCueParameters_NormalizedMagnitude          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakGameplayCueParameters_RawMagnitude                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_BreakGameplayCueParameters_EffectContext                (None)
// struct FGameplayTag                CallFunc_BreakGameplayCueParameters_MatchedTagName               (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_BreakGameplayCueParameters_OriginalTag                  (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_BreakGameplayCueParameters_AggregatedSourceTags         (None)
// struct FGameplayTagContainer       CallFunc_BreakGameplayCueParameters_AggregatedTargetTags         (None)
// struct FVector                     CallFunc_BreakGameplayCueParameters_Location                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakGameplayCueParameters_Normal                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakGameplayCueParameters_Instigator                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakGameplayCueParameters_EffectCauser                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_BreakGameplayCueParameters_SourceObject                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakGameplayCueParameters_PhysicalMaterial             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakGameplayCueParameters_GameplayEffectLevel          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakGameplayCueParameters_AbilityLevel                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_BreakGameplayCueParameters_TargetAttachComponent        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetObjectSizeParam_Size                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_SpawnFXAtLocation_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCN_CollisionEffects_Water_C::OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UMatineeCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, float CallFunc_BreakGameplayCueParameters_NormalizedMagnitude, float CallFunc_BreakGameplayCueParameters_RawMagnitude, const struct FGameplayEffectContextHandle& CallFunc_BreakGameplayCueParameters_EffectContext, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_MatchedTagName, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_OriginalTag, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedSourceTags, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedTargetTags, const struct FVector& CallFunc_BreakGameplayCueParameters_Location, const struct FVector& CallFunc_BreakGameplayCueParameters_Normal, class AActor* CallFunc_BreakGameplayCueParameters_Instigator, class AActor* CallFunc_BreakGameplayCueParameters_EffectCauser, class UObject* CallFunc_BreakGameplayCueParameters_SourceObject, class UPhysicalMaterial* CallFunc_BreakGameplayCueParameters_PhysicalMaterial, int32 CallFunc_BreakGameplayCueParameters_GameplayEffectLevel, int32 CallFunc_BreakGameplayCueParameters_AbilityLevel, class USceneComponent* CallFunc_BreakGameplayCueParameters_TargetAttachComponent, bool CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy, int32 CallFunc_GetObjectSizeParam_Size, class UNiagaraSystem* CallFunc_Array_Get_Item, class UFXSystemComponent* CallFunc_SpawnFXAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_CollisionEffects_Water_C", "OnBurst");

	Params::UGCN_CollisionEffects_Water_C_OnBurst_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;
	Parms.CallFunc_BreakGameplayCueParameters_NormalizedMagnitude = CallFunc_BreakGameplayCueParameters_NormalizedMagnitude;
	Parms.CallFunc_BreakGameplayCueParameters_RawMagnitude = CallFunc_BreakGameplayCueParameters_RawMagnitude;
	Parms.CallFunc_BreakGameplayCueParameters_EffectContext = CallFunc_BreakGameplayCueParameters_EffectContext;
	Parms.CallFunc_BreakGameplayCueParameters_MatchedTagName = CallFunc_BreakGameplayCueParameters_MatchedTagName;
	Parms.CallFunc_BreakGameplayCueParameters_OriginalTag = CallFunc_BreakGameplayCueParameters_OriginalTag;
	Parms.CallFunc_BreakGameplayCueParameters_AggregatedSourceTags = CallFunc_BreakGameplayCueParameters_AggregatedSourceTags;
	Parms.CallFunc_BreakGameplayCueParameters_AggregatedTargetTags = CallFunc_BreakGameplayCueParameters_AggregatedTargetTags;
	Parms.CallFunc_BreakGameplayCueParameters_Location = CallFunc_BreakGameplayCueParameters_Location;
	Parms.CallFunc_BreakGameplayCueParameters_Normal = CallFunc_BreakGameplayCueParameters_Normal;
	Parms.CallFunc_BreakGameplayCueParameters_Instigator = CallFunc_BreakGameplayCueParameters_Instigator;
	Parms.CallFunc_BreakGameplayCueParameters_EffectCauser = CallFunc_BreakGameplayCueParameters_EffectCauser;
	Parms.CallFunc_BreakGameplayCueParameters_SourceObject = CallFunc_BreakGameplayCueParameters_SourceObject;
	Parms.CallFunc_BreakGameplayCueParameters_PhysicalMaterial = CallFunc_BreakGameplayCueParameters_PhysicalMaterial;
	Parms.CallFunc_BreakGameplayCueParameters_GameplayEffectLevel = CallFunc_BreakGameplayCueParameters_GameplayEffectLevel;
	Parms.CallFunc_BreakGameplayCueParameters_AbilityLevel = CallFunc_BreakGameplayCueParameters_AbilityLevel;
	Parms.CallFunc_BreakGameplayCueParameters_TargetAttachComponent = CallFunc_BreakGameplayCueParameters_TargetAttachComponent;
	Parms.CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy = CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy;
	Parms.CallFunc_GetObjectSizeParam_Size = CallFunc_GetObjectSizeParam_Size;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SpawnFXAtLocation_ReturnValue = CallFunc_SpawnFXAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_CollisionEffects_Water.GCN_CollisionEffects_Water_C.GetObjectSizeParam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      PhysicsObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Size                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPhysicsSimSize     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPhysicsSimSize     CallFunc_GetPhysicsObjectSimSize_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGCN_CollisionEffects_Water_C::GetObjectSizeParam(class AActor* PhysicsObject, int32* Size, enum class EFortPhysicsSimSize Temp_byte_Variable, enum class EFortPhysicsSimSize CallFunc_GetPhysicsObjectSimSize_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GCN_CollisionEffects_Water_C", "GetObjectSizeParam");

	Params::UGCN_CollisionEffects_Water_C_GetObjectSizeParam_Params Parms{};

	Parms.PhysicsObject = PhysicsObject;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetPhysicsObjectSimSize_ReturnValue = CallFunc_GetPhysicsObjectSimSize_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Size != nullptr)
		*Size = Parms.Size;

}

}


