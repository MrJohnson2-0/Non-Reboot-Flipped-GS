#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MadmanRuntime.FortAthenaMutator_Madman
// (Actor)

class UClass* AFortAthenaMutator_Madman::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_Madman");

	return Clss;
}


// FortAthenaMutator_Madman MadmanRuntime.Default__FortAthenaMutator_Madman
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_Madman* AFortAthenaMutator_Madman::GetDefaultObj()
{
	static class AFortAthenaMutator_Madman* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_Madman*>(AFortAthenaMutator_Madman::StaticClass()->DefaultObject);

	return Default;
}


// Class MadmanRuntime.FortAthenaMutator_Madman_PlayerSpawnPod
// (Actor)

class UClass* AFortAthenaMutator_Madman_PlayerSpawnPod::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_Madman_PlayerSpawnPod");

	return Clss;
}


// FortAthenaMutator_Madman_PlayerSpawnPod MadmanRuntime.Default__FortAthenaMutator_Madman_PlayerSpawnPod
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_Madman_PlayerSpawnPod* AFortAthenaMutator_Madman_PlayerSpawnPod::GetDefaultObj()
{
	static class AFortAthenaMutator_Madman_PlayerSpawnPod* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_Madman_PlayerSpawnPod*>(AFortAthenaMutator_Madman_PlayerSpawnPod::StaticClass()->DefaultObject);

	return Default;
}


// Function MadmanRuntime.FortAthenaMutator_Madman_PlayerSpawnPod.OnGamePhaseChanged
// (Final, Native, Public)
// Parameters:
// enum class EAthenaGamePhase        NewPhase                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Madman_PlayerSpawnPod::OnGamePhaseChanged(enum class EAthenaGamePhase NewPhase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Madman_PlayerSpawnPod", "OnGamePhaseChanged");

	Params::AFortAthenaMutator_Madman_PlayerSpawnPod_OnGamePhaseChanged_Params Parms{};

	Parms.NewPhase = NewPhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MadmanRuntime.SpawnCampingDetectionConsumer
// (None)

class UClass* ISpawnCampingDetectionConsumer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnCampingDetectionConsumer");

	return Clss;
}


// SpawnCampingDetectionConsumer MadmanRuntime.Default__SpawnCampingDetectionConsumer
// (Public, ClassDefaultObject, ArchetypeObject)

class ISpawnCampingDetectionConsumer* ISpawnCampingDetectionConsumer::GetDefaultObj()
{
	static class ISpawnCampingDetectionConsumer* Default = nullptr;

	if (!Default)
		Default = static_cast<ISpawnCampingDetectionConsumer*>(ISpawnCampingDetectionConsumer::StaticClass()->DefaultObject);

	return Default;
}


// Class MadmanRuntime.FortCheatManager_SpawnCampingDetection
// (None)

class UClass* UFortCheatManager_SpawnCampingDetection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCheatManager_SpawnCampingDetection");

	return Clss;
}


// FortCheatManager_SpawnCampingDetection MadmanRuntime.Default__FortCheatManager_SpawnCampingDetection
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCheatManager_SpawnCampingDetection* UFortCheatManager_SpawnCampingDetection::GetDefaultObj()
{
	static class UFortCheatManager_SpawnCampingDetection* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCheatManager_SpawnCampingDetection*>(UFortCheatManager_SpawnCampingDetection::StaticClass()->DefaultObject);

	return Default;
}


// Function MadmanRuntime.FortCheatManager_SpawnCampingDetection.SpawnCampingDetectionTriggerSpawnCamp
// (Final, Exec, Native, Public)
// Parameters:
// uint8                              TeamId                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SpawnCampType                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpawnCampingDetection::SpawnCampingDetectionTriggerSpawnCamp(uint8 TeamId, int32 SpawnCampType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpawnCampingDetection", "SpawnCampingDetectionTriggerSpawnCamp");

	Params::UFortCheatManager_SpawnCampingDetection_SpawnCampingDetectionTriggerSpawnCamp_Params Parms{};

	Parms.TeamId = TeamId;
	Parms.SpawnCampType = SpawnCampType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MadmanRuntime.FortCheatManager_SpawnCampingDetection.SpawnCampingDetectionTriggerPawnWasSpawnCampDamaged
// (Final, Exec, Native, Public)
// Parameters:

void UFortCheatManager_SpawnCampingDetection::SpawnCampingDetectionTriggerPawnWasSpawnCampDamaged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpawnCampingDetection", "SpawnCampingDetectionTriggerPawnWasSpawnCampDamaged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MadmanRuntime.FortCheatManager_SpawnCampingDetection.SpawnCampingDetectionSetEnabled
// (Final, Exec, Native, Public)
// Parameters:
// bool                               bInEnable                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpawnCampingDetection::SpawnCampingDetectionSetEnabled(bool bInEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpawnCampingDetection", "SpawnCampingDetectionSetEnabled");

	Params::UFortCheatManager_SpawnCampingDetection_SpawnCampingDetectionSetEnabled_Params Parms{};

	Parms.bInEnable = bInEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MadmanRuntime.FortAthenaMutator_SpawnCampingDetection
// (Actor)

class UClass* AFortAthenaMutator_SpawnCampingDetection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_SpawnCampingDetection");

	return Clss;
}


// FortAthenaMutator_SpawnCampingDetection MadmanRuntime.Default__FortAthenaMutator_SpawnCampingDetection
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_SpawnCampingDetection* AFortAthenaMutator_SpawnCampingDetection::GetDefaultObj()
{
	static class AFortAthenaMutator_SpawnCampingDetection* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_SpawnCampingDetection*>(AFortAthenaMutator_SpawnCampingDetection::StaticClass()->DefaultObject);

	return Default;
}


// Function MadmanRuntime.FortAthenaMutator_SpawnCampingDetection.ClearLastSpawnLocationSuggestionTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpawnCampingDetection::ClearLastSpawnLocationSuggestionTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpawnCampingDetection", "ClearLastSpawnLocationSuggestionTime");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MadmanRuntime.FortAthenaMutator_SpawnCampingDetection.AreSpawnLocationSuggestionsOnCooldown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaMutator_SpawnCampingDetection::AreSpawnLocationSuggestionsOnCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpawnCampingDetection", "AreSpawnLocationSuggestionsOnCooldown");

	Params::AFortAthenaMutator_SpawnCampingDetection_AreSpawnLocationSuggestionsOnCooldown_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MadmanRuntime.FortPoiVolume_Madman
// (Actor)

class UClass* AFortPoiVolume_Madman::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPoiVolume_Madman");

	return Clss;
}


// FortPoiVolume_Madman MadmanRuntime.Default__FortPoiVolume_Madman
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortPoiVolume_Madman* AFortPoiVolume_Madman::GetDefaultObj()
{
	static class AFortPoiVolume_Madman* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortPoiVolume_Madman*>(AFortPoiVolume_Madman::StaticClass()->DefaultObject);

	return Default;
}


// Class MadmanRuntime.SpawnCampingDetection_PawnComponent
// (None)

class UClass* USpawnCampingDetection_PawnComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnCampingDetection_PawnComponent");

	return Clss;
}


// SpawnCampingDetection_PawnComponent MadmanRuntime.Default__SpawnCampingDetection_PawnComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnCampingDetection_PawnComponent* USpawnCampingDetection_PawnComponent::GetDefaultObj()
{
	static class USpawnCampingDetection_PawnComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnCampingDetection_PawnComponent*>(USpawnCampingDetection_PawnComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MadmanRuntime.SpawnCampingDetection_PawnComponent.OnDamaged
// (Final, Native, Private, HasDefaults)
// Parameters:
// class AActor*                      DamagedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 InstigatedBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpawnCampingDetection_PawnComponent::OnDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnCampingDetection_PawnComponent", "OnDamaged");

	Params::USpawnCampingDetection_PawnComponent_OnDamaged_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MadmanRuntime.SynchronizedTeleportPlayerComponent_Madman
// (None)

class UClass* USynchronizedTeleportPlayerComponent_Madman::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SynchronizedTeleportPlayerComponent_Madman");

	return Clss;
}


// SynchronizedTeleportPlayerComponent_Madman MadmanRuntime.Default__SynchronizedTeleportPlayerComponent_Madman
// (Public, ClassDefaultObject, ArchetypeObject)

class USynchronizedTeleportPlayerComponent_Madman* USynchronizedTeleportPlayerComponent_Madman::GetDefaultObj()
{
	static class USynchronizedTeleportPlayerComponent_Madman* Default = nullptr;

	if (!Default)
		Default = static_cast<USynchronizedTeleportPlayerComponent_Madman*>(USynchronizedTeleportPlayerComponent_Madman::StaticClass()->DefaultObject);

	return Default;
}

}


