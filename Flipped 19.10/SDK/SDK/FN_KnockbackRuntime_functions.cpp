#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class KnockbackRuntime.FortAthenaMutator_Knockback
// (Actor)

class UClass* AFortAthenaMutator_Knockback::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_Knockback");

	return Clss;
}


// FortAthenaMutator_Knockback KnockbackRuntime.Default__FortAthenaMutator_Knockback
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_Knockback* AFortAthenaMutator_Knockback::GetDefaultObj()
{
	static class AFortAthenaMutator_Knockback* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_Knockback*>(AFortAthenaMutator_Knockback::StaticClass()->DefaultObject);

	return Default;
}


// Function KnockbackRuntime.FortAthenaMutator_Knockback.SetPlayersShouldBreakThroughStructures
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bActive                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Knockback::SetPlayersShouldBreakThroughStructures(bool bActive, class AFortPlayerPawn* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Knockback", "SetPlayersShouldBreakThroughStructures");

	Params::AFortAthenaMutator_Knockback_SetPlayersShouldBreakThroughStructures_Params Parms{};

	Parms.bActive = bActive;
	Parms.PlayerPawn = PlayerPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function KnockbackRuntime.FortAthenaMutator_Knockback.HandleBlockedCharacterMovement
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FHitResult                  InOutImpact                                                      (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class AFortPawn*                   FortPawn                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Knockback::HandleBlockedCharacterMovement(struct FHitResult* InOutImpact, class AFortPawn* FortPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Knockback", "HandleBlockedCharacterMovement");

	Params::AFortAthenaMutator_Knockback_HandleBlockedCharacterMovement_Params Parms{};

	Parms.FortPawn = FortPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InOutImpact != nullptr)
		*InOutImpact = std::move(Parms.InOutImpact);

}


// Function KnockbackRuntime.FortAthenaMutator_Knockback.GetPercentDamageMediumMaxThreshold
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortAthenaMutator_Knockback::GetPercentDamageMediumMaxThreshold()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Knockback", "GetPercentDamageMediumMaxThreshold");

	Params::AFortAthenaMutator_Knockback_GetPercentDamageMediumMaxThreshold_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function KnockbackRuntime.FortAthenaMutator_Knockback.GetPercentDamageLowMaxThreshold
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortAthenaMutator_Knockback::GetPercentDamageLowMaxThreshold()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Knockback", "GetPercentDamageLowMaxThreshold");

	Params::AFortAthenaMutator_Knockback_GetPercentDamageLowMaxThreshold_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function KnockbackRuntime.FortAthenaMutator_Knockback.GetKnockbackMultiplierInitialValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortAthenaMutator_Knockback::GetKnockbackMultiplierInitialValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Knockback", "GetKnockbackMultiplierInitialValue");

	Params::AFortAthenaMutator_Knockback_GetKnockbackMultiplierInitialValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function KnockbackRuntime.FortAthenaMutator_Knockback.GetAllPlayersKnockbackData
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FKnockbackMutatorData>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FKnockbackMutatorData> AFortAthenaMutator_Knockback::GetAllPlayersKnockbackData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Knockback", "GetAllPlayersKnockbackData");

	Params::AFortAthenaMutator_Knockback_GetAllPlayersKnockbackData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class KnockbackRuntime.FortGameplayAbility_KnockbackMutator
// (None)

class UClass* UFortGameplayAbility_KnockbackMutator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayAbility_KnockbackMutator");

	return Clss;
}


// FortGameplayAbility_KnockbackMutator KnockbackRuntime.Default__FortGameplayAbility_KnockbackMutator
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayAbility_KnockbackMutator* UFortGameplayAbility_KnockbackMutator::GetDefaultObj()
{
	static class UFortGameplayAbility_KnockbackMutator* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayAbility_KnockbackMutator*>(UFortGameplayAbility_KnockbackMutator::StaticClass()->DefaultObject);

	return Default;
}


// Function KnockbackRuntime.FortGameplayAbility_KnockbackMutator.SaveKnockbackData
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKnockbackMutatorData       InKnockbackData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortGameplayAbility_KnockbackMutator::SaveKnockbackData(struct FKnockbackMutatorData& InKnockbackData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_KnockbackMutator", "SaveKnockbackData");

	Params::UFortGameplayAbility_KnockbackMutator_SaveKnockbackData_Params Parms{};

	Parms.InKnockbackData = InKnockbackData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function KnockbackRuntime.FortGameplayAbility_KnockbackMutator.GetCachedMutator
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class AFortAthenaMutator_Knockback*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFortAthenaMutator_Knockback* UFortGameplayAbility_KnockbackMutator::GetCachedMutator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_KnockbackMutator", "GetCachedMutator");

	Params::UFortGameplayAbility_KnockbackMutator_GetCachedMutator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


