#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ButterCakeRuntime.ButterCakeKismetLibrary
// (None)

class UClass* UButterCakeKismetLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterCakeKismetLibrary");

	return Clss;
}


// ButterCakeKismetLibrary ButterCakeRuntime.Default__ButterCakeKismetLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UButterCakeKismetLibrary* UButterCakeKismetLibrary::GetDefaultObj()
{
	static class UButterCakeKismetLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterCakeKismetLibrary*>(UButterCakeKismetLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Class ButterCakeRuntime.ButterCakeUnstuckComponent
// (None)

class UClass* UButterCakeUnstuckComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterCakeUnstuckComponent");

	return Clss;
}


// ButterCakeUnstuckComponent ButterCakeRuntime.Default__ButterCakeUnstuckComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UButterCakeUnstuckComponent* UButterCakeUnstuckComponent::GetDefaultObj()
{
	static class UButterCakeUnstuckComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterCakeUnstuckComponent*>(UButterCakeUnstuckComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ButterCakeRuntime.ButterCakeUnstuckComponent.ResetUnstuckLocationSamples
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UButterCakeUnstuckComponent::ResetUnstuckLocationSamples()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ButterCakeUnstuckComponent", "ResetUnstuckLocationSamples");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ButterCakeRuntime.ButterCakeUnstuckComponent.HandleAthenaGamePhaseChanged
// (Final, Native, Private)
// Parameters:
// enum class EAthenaGamePhase        GamePhase                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UButterCakeUnstuckComponent::HandleAthenaGamePhaseChanged(enum class EAthenaGamePhase GamePhase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ButterCakeUnstuckComponent", "HandleAthenaGamePhaseChanged");

	Params::UButterCakeUnstuckComponent_HandleAthenaGamePhaseChanged_Params Parms{};

	Parms.GamePhase = GamePhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ButterCakeRuntime.FortAIAnimInstance_ButterCake
// (None)

class UClass* UFortAIAnimInstance_ButterCake::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIAnimInstance_ButterCake");

	return Clss;
}


// FortAIAnimInstance_ButterCake ButterCakeRuntime.Default__FortAIAnimInstance_ButterCake
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIAnimInstance_ButterCake* UFortAIAnimInstance_ButterCake::GetDefaultObj()
{
	static class UFortAIAnimInstance_ButterCake* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIAnimInstance_ButterCake*>(UFortAIAnimInstance_ButterCake::StaticClass()->DefaultObject);

	return Default;
}


// Function ButterCakeRuntime.FortAIAnimInstance_ButterCake.SetFootPhaseMembers
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIAnimInstance_ButterCake::SetFootPhaseMembers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIAnimInstance_ButterCake", "SetFootPhaseMembers");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ButterCakeRuntime.FortAIAnimInstance_ButterCake.ComputeLeanAngleByVelocity
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIAnimInstance_ButterCake::ComputeLeanAngleByVelocity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIAnimInstance_ButterCake", "ComputeLeanAngleByVelocity");

	Params::UFortAIAnimInstance_ButterCake_ComputeLeanAngleByVelocity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ButterCakeRuntime.FortAIAnimInstance_ButterCake.ComputeFootPhase
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EFortButterCakeFootPhaseReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortButterCakeFootPhase UFortAIAnimInstance_ButterCake::ComputeFootPhase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIAnimInstance_ButterCake", "ComputeFootPhase");

	Params::UFortAIAnimInstance_ButterCake_ComputeFootPhase_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ButterCakeRuntime.FortButterCakeComponent_Telemetry
// (None)

class UClass* UFortButterCakeComponent_Telemetry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortButterCakeComponent_Telemetry");

	return Clss;
}


// FortButterCakeComponent_Telemetry ButterCakeRuntime.Default__FortButterCakeComponent_Telemetry
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortButterCakeComponent_Telemetry* UFortButterCakeComponent_Telemetry::GetDefaultObj()
{
	static class UFortButterCakeComponent_Telemetry* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortButterCakeComponent_Telemetry*>(UFortButterCakeComponent_Telemetry::StaticClass()->DefaultObject);

	return Default;
}


// Function ButterCakeRuntime.FortButterCakeComponent_Telemetry.OnLured
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortButterCakeComponent_Telemetry::OnLured()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortButterCakeComponent_Telemetry", "OnLured");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ButterCakeRuntime.FortButterCakeComponent_Telemetry.OnItemsSneezed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ItemsCount                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortButterCakeComponent_Telemetry::OnItemsSneezed(int32 ItemsCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortButterCakeComponent_Telemetry", "OnItemsSneezed");

	Params::UFortButterCakeComponent_Telemetry_OnItemsSneezed_Params Parms{};

	Parms.ItemsCount = ItemsCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ButterCakeRuntime.FortButterCakeComponent_Telemetry.OnItemsEaten
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ItemsCount                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortButterCakeComponent_Telemetry::OnItemsEaten(int32 ItemsCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortButterCakeComponent_Telemetry", "OnItemsEaten");

	Params::UFortButterCakeComponent_Telemetry_OnItemsEaten_Params Parms{};

	Parms.ItemsCount = ItemsCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ButterCakeRuntime.FortButterCakeComponent_Telemetry.OnEnterBerserk
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AController*                 Instigator                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortButterCakeComponent_Telemetry::OnEnterBerserk(class AController* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortButterCakeComponent_Telemetry", "OnEnterBerserk");

	Params::UFortButterCakeComponent_Telemetry_OnEnterBerserk_Params Parms{};

	Parms.Instigator = Instigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ButterCakeRuntime.FortButterCakeComponent_Telemetry.OnBlowHoleUsed
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortButterCakeComponent_Telemetry::OnBlowHoleUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortButterCakeComponent_Telemetry", "OnBlowHoleUsed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ButterCakeRuntime.FortButterCakeControlRig
// (None)

class UClass* UFortButterCakeControlRig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortButterCakeControlRig");

	return Clss;
}


// FortButterCakeControlRig ButterCakeRuntime.Default__FortButterCakeControlRig
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortButterCakeControlRig* UFortButterCakeControlRig::GetDefaultObj()
{
	static class UFortButterCakeControlRig* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortButterCakeControlRig*>(UFortButterCakeControlRig::StaticClass()->DefaultObject);

	return Default;
}


// Function ButterCakeRuntime.FortButterCakeControlRig.GetGroundHitNormalAt
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortButterCakeControlRig::GetGroundHitNormalAt(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortButterCakeControlRig", "GetGroundHitNormalAt");

	Params::UFortButterCakeControlRig_GetGroundHitNormalAt_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ButterCakeRuntime.FortButterCakeControlRig.GetGroundHitLocationAt
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortButterCakeControlRig::GetGroundHitLocationAt(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortButterCakeControlRig", "GetGroundHitLocationAt");

	Params::UFortButterCakeControlRig_GetGroundHitLocationAt_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


