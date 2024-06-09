#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod
// (Actor)

class UClass* AFortAthenaMutator_PlayerSpawnPod::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_PlayerSpawnPod");

	return Clss;
}


// FortAthenaMutator_PlayerSpawnPod PhosphorusRuntime.Default__FortAthenaMutator_PlayerSpawnPod
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_PlayerSpawnPod* AFortAthenaMutator_PlayerSpawnPod::GetDefaultObj()
{
	static class AFortAthenaMutator_PlayerSpawnPod* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_PlayerSpawnPod*>(AFortAthenaMutator_PlayerSpawnPod::StaticClass()->DefaultObject);

	return Default;
}


// Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.SetViewTarget
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class AFortPlayerControllerAthena* Controller                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ViewTarget                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FViewTargetTransitionParams ViewTargetTransitionParams                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bDestroyOldViewTarget                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_PlayerSpawnPod::SetViewTarget(class AFortPlayerControllerAthena* Controller, class AActor* ViewTarget, struct FViewTargetTransitionParams& ViewTargetTransitionParams, bool bDestroyOldViewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_PlayerSpawnPod", "SetViewTarget");

	Params::AFortAthenaMutator_PlayerSpawnPod_SetViewTarget_Params Parms{};

	Parms.Controller = Controller;
	Parms.ViewTarget = ViewTarget;
	Parms.ViewTargetTransitionParams = ViewTargetTransitionParams;
	Parms.bDestroyOldViewTarget = bDestroyOldViewTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.OnSingleTeleportComplete
// (Final, Native, Private)
// Parameters:
// class AFortPlayerStateAthena*      PlayerState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_PlayerSpawnPod::OnSingleTeleportComplete(class AFortPlayerStateAthena* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_PlayerSpawnPod", "OnSingleTeleportComplete");

	Params::AFortAthenaMutator_PlayerSpawnPod_OnSingleTeleportComplete_Params Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.OnRep_PodDataArray
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<struct FPlayerSpawnPodData> OldPodDataArray                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void AFortAthenaMutator_PlayerSpawnPod::OnRep_PodDataArray(TArray<struct FPlayerSpawnPodData>* OldPodDataArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_PlayerSpawnPod", "OnRep_PodDataArray");

	Params::AFortAthenaMutator_PlayerSpawnPod_OnRep_PodDataArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OldPodDataArray != nullptr)
		*OldPodDataArray = std::move(Parms.OldPodDataArray);

}


// Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.OnRep_BlockedAbilitySystemComponents
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_PlayerSpawnPod::OnRep_BlockedAbilitySystemComponents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_PlayerSpawnPod", "OnRep_BlockedAbilitySystemComponents");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.OnPodDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_PlayerSpawnPod::OnPodDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_PlayerSpawnPod", "OnPodDestroyed");

	Params::AFortAthenaMutator_PlayerSpawnPod_OnPodDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.OnAllTeleportComplete
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_PlayerSpawnPod::OnAllTeleportComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_PlayerSpawnPod", "OnAllTeleportComplete");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.HandlePodLanded
// (Final, Native, Private)
// Parameters:
// class UActorComponent*             InComponent                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_PlayerSpawnPod::HandlePodLanded(class UActorComponent* InComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_PlayerSpawnPod", "HandlePodLanded");

	Params::AFortAthenaMutator_PlayerSpawnPod_HandlePodLanded_Params Parms{};

	Parms.InComponent = InComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.GetPodDataForID
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ID                                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPlayerSpawnPodData         OutPodData                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
// class FString                      ContextString                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaMutator_PlayerSpawnPod::GetPodDataForID(int32 ID, struct FPlayerSpawnPodData* OutPodData, const class FString& ContextString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_PlayerSpawnPod", "GetPodDataForID");

	Params::AFortAthenaMutator_PlayerSpawnPod_GetPodDataForID_Params Parms{};

	Parms.ID = ID;
	Parms.ContextString = ContextString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPodData != nullptr)
		*OutPodData = std::move(Parms.OutPodData);

	return Parms.ReturnValue;

}


// Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.GetPodDataForActor
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPlayerSpawnPodData         OutPodData                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
// class FString                      ContextString                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaMutator_PlayerSpawnPod::GetPodDataForActor(class AActor* Actor, struct FPlayerSpawnPodData* OutPodData, const class FString& ContextString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_PlayerSpawnPod", "GetPodDataForActor");

	Params::AFortAthenaMutator_PlayerSpawnPod_GetPodDataForActor_Params Parms{};

	Parms.Actor = Actor;
	Parms.ContextString = ContextString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPodData != nullptr)
		*OutPodData = std::move(Parms.OutPodData);

	return Parms.ReturnValue;

}


// Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.GetFallDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortAthenaMutator_PlayerSpawnPod::GetFallDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_PlayerSpawnPod", "GetFallDuration");

	Params::AFortAthenaMutator_PlayerSpawnPod_GetFallDuration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PhosphorusRuntime.FortAthenaMutator_InventoryOverride_Phosphorus
// (Actor)

class UClass* AFortAthenaMutator_InventoryOverride_Phosphorus::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_InventoryOverride_Phosphorus");

	return Clss;
}


// FortAthenaMutator_InventoryOverride_Phosphorus PhosphorusRuntime.Default__FortAthenaMutator_InventoryOverride_Phosphorus
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_InventoryOverride_Phosphorus* AFortAthenaMutator_InventoryOverride_Phosphorus::GetDefaultObj()
{
	static class AFortAthenaMutator_InventoryOverride_Phosphorus* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_InventoryOverride_Phosphorus*>(AFortAthenaMutator_InventoryOverride_Phosphorus::StaticClass()->DefaultObject);

	return Default;
}


// Class PhosphorusRuntime.FortCheatManager_Phosphorus
// (None)

class UClass* UFortCheatManager_Phosphorus::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCheatManager_Phosphorus");

	return Clss;
}


// FortCheatManager_Phosphorus PhosphorusRuntime.Default__FortCheatManager_Phosphorus
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCheatManager_Phosphorus* UFortCheatManager_Phosphorus::GetDefaultObj()
{
	static class UFortCheatManager_Phosphorus* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCheatManager_Phosphorus*>(UFortCheatManager_Phosphorus::StaticClass()->DefaultObject);

	return Default;
}


// Function PhosphorusRuntime.FortCheatManager_Phosphorus.PhosphorusSetNumRoundsToWin
// (Final, Exec, Native, Public)
// Parameters:
// int32                              NumRounds                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_Phosphorus::PhosphorusSetNumRoundsToWin(int32 NumRounds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_Phosphorus", "PhosphorusSetNumRoundsToWin");

	Params::UFortCheatManager_Phosphorus_PhosphorusSetNumRoundsToWin_Params Parms{};

	Parms.NumRounds = NumRounds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusRuntime.FortCheatManager_Phosphorus.PhosphorusForceStartMatch
// (Final, Exec, Native, Public)
// Parameters:

void UFortCheatManager_Phosphorus::PhosphorusForceStartMatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_Phosphorus", "PhosphorusForceStartMatch");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusRuntime.FortCheatManager_Phosphorus.PhosphorusEndRound
// (Final, Exec, Native, Public)
// Parameters:

void UFortCheatManager_Phosphorus::PhosphorusEndRound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_Phosphorus", "PhosphorusEndRound");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusRuntime.FortCheatManager_Phosphorus.PhosphorusEndMatch
// (Final, Exec, Native, Public)
// Parameters:

void UFortCheatManager_Phosphorus::PhosphorusEndMatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_Phosphorus", "PhosphorusEndMatch");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusRuntime.FortCheatManager_Phosphorus.PhosphorusDebug
// (Final, Exec, Native, Public)
// Parameters:
// float                              TextScale                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_Phosphorus::PhosphorusDebug(float TextScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_Phosphorus", "PhosphorusDebug");

	Params::UFortCheatManager_Phosphorus_PhosphorusDebug_Params Parms{};

	Parms.TextScale = TextScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PhosphorusRuntime.FortAthenaMutator_Phosphorus
// (Actor)

class UClass* AFortAthenaMutator_Phosphorus::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_Phosphorus");

	return Clss;
}


// FortAthenaMutator_Phosphorus PhosphorusRuntime.Default__FortAthenaMutator_Phosphorus
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_Phosphorus* AFortAthenaMutator_Phosphorus::GetDefaultObj()
{
	static class AFortAthenaMutator_Phosphorus* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_Phosphorus*>(AFortAthenaMutator_Phosphorus::StaticClass()->DefaultObject);

	return Default;
}


// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.OnRep_PhosphorusPhase
// (RequiredAPI, Native, Protected)
// Parameters:

void AFortAthenaMutator_Phosphorus::OnRep_PhosphorusPhase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Phosphorus", "OnRep_PhosphorusPhase");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.OnRep_CurrentRound
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_Phosphorus::OnRep_CurrentRound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Phosphorus", "OnRep_CurrentRound");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.OnPrePodLaunch
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_Phosphorus::OnPrePodLaunch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Phosphorus", "OnPrePodLaunch");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.OnPawnEjectedFromPod
// (Final, Native, Private)
// Parameters:
// class AFortPlayerPawnAthena*       Pawn                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Phosphorus::OnPawnEjectedFromPod(class AFortPlayerPawnAthena* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Phosphorus", "OnPawnEjectedFromPod");

	Params::AFortAthenaMutator_Phosphorus_OnPawnEjectedFromPod_Params Parms{};

	Parms.Pawn = Pawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.OnAllPodsLaunched
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_Phosphorus::OnAllPodsLaunched()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Phosphorus", "OnAllPodsLaunched");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.OnAllPodsLanded
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_Phosphorus::OnAllPodsLanded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Phosphorus", "OnAllPodsLanded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.IsTeamValid
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              TeamNum                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaMutator_Phosphorus::IsTeamValid(uint8 TeamNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Phosphorus", "IsTeamValid");

	Params::AFortAthenaMutator_Phosphorus_IsTeamValid_Params Parms{};

	Parms.TeamNum = TeamNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.IsTeamAlive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              TeamNum                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaMutator_Phosphorus::IsTeamAlive(uint8 TeamNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Phosphorus", "IsTeamAlive");

	Params::AFortAthenaMutator_Phosphorus_IsTeamAlive_Params Parms{};

	Parms.TeamNum = TeamNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.IsOnWinningTeam
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortPlayerPawnAthena*       Pawn                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaMutator_Phosphorus::IsOnWinningTeam(class AFortPlayerPawnAthena* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Phosphorus", "IsOnWinningTeam");

	Params::AFortAthenaMutator_Phosphorus_IsOnWinningTeam_Params Parms{};

	Parms.Pawn = Pawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.HandlePawnStormStatusChanged
// (Final, Native, Private)
// Parameters:
// class AFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsInSafeZone                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Phosphorus::HandlePawnStormStatusChanged(class AFortPlayerPawn* PlayerPawn, bool bIsInSafeZone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Phosphorus", "HandlePawnStormStatusChanged");

	Params::AFortAthenaMutator_Phosphorus_HandlePawnStormStatusChanged_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.bIsInSafeZone = bIsInSafeZone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetTeamSize
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              TeamNum                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AFortAthenaMutator_Phosphorus::GetTeamSize(uint8 TeamNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Phosphorus", "GetTeamSize");

	Params::AFortAthenaMutator_Phosphorus_GetTeamSize_Params Parms{};

	Parms.TeamNum = TeamNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetTeamMVP
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              TeamNum                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerStateAthena*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFortPlayerStateAthena* AFortAthenaMutator_Phosphorus::GetTeamMVP(uint8 TeamNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Phosphorus", "GetTeamMVP");

	Params::AFortAthenaMutator_Phosphorus_GetTeamMVP_Params Parms{};

	Parms.TeamNum = TeamNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetTeamDataCopy
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              TeamNum                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPhosphorusTeamData         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPhosphorusTeamData AFortAthenaMutator_Phosphorus::GetTeamDataCopy(uint8 TeamNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Phosphorus", "GetTeamDataCopy");

	Params::AFortAthenaMutator_Phosphorus_GetTeamDataCopy_Params Parms{};

	Parms.TeamNum = TeamNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetTeamDataArray
// (Final, Native, Protected, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FPhosphorusTeamData> OutTeamDataArray                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bMustBeValid                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMustBeAlive                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSortByScore                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Phosphorus::GetTeamDataArray(TArray<struct FPhosphorusTeamData>* OutTeamDataArray, bool bMustBeValid, bool bMustBeAlive, bool bSortByScore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Phosphorus", "GetTeamDataArray");

	Params::AFortAthenaMutator_Phosphorus_GetTeamDataArray_Params Parms{};

	Parms.bMustBeValid = bMustBeValid;
	Parms.bMustBeAlive = bMustBeAlive;
	Parms.bSortByScore = bSortByScore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutTeamDataArray != nullptr)
		*OutTeamDataArray = std::move(Parms.OutTeamDataArray);

}


// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetRoundWinningTeamNum
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 AFortAthenaMutator_Phosphorus::GetRoundWinningTeamNum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Phosphorus", "GetRoundWinningTeamNum");

	Params::AFortAthenaMutator_Phosphorus_GetRoundWinningTeamNum_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetNumValidTeams
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AFortAthenaMutator_Phosphorus::GetNumValidTeams()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Phosphorus", "GetNumValidTeams");

	Params::AFortAthenaMutator_Phosphorus_GetNumValidTeams_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetNumAliveTeams
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AFortAthenaMutator_Phosphorus::GetNumAliveTeams()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Phosphorus", "GetNumAliveTeams");

	Params::AFortAthenaMutator_Phosphorus_GetNumAliveTeams_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetLeadingTeamNums
// (Final, Native, Protected, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<uint8>                      LeadingTeamNums                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Phosphorus::GetLeadingTeamNums(TArray<uint8>* LeadingTeamNums)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Phosphorus", "GetLeadingTeamNums");

	Params::AFortAthenaMutator_Phosphorus_GetLeadingTeamNums_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LeadingTeamNums != nullptr)
		*LeadingTeamNums = std::move(Parms.LeadingTeamNums);

}


// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetCachedStormMutator
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AFortAthenaMutator_CustomStormMovement*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFortAthenaMutator_CustomStormMovement* AFortAthenaMutator_Phosphorus::GetCachedStormMutator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Phosphorus", "GetCachedStormMutator");

	Params::AFortAthenaMutator_Phosphorus_GetCachedStormMutator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.FadeToFirstRound
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_Phosphorus::FadeToFirstRound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Phosphorus", "FadeToFirstRound");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.AudioFadeChangeEvent
// (Final, RequiredAPI, Native, Protected)
// Parameters:
// bool                               bFadeOut                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FadeTime                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Phosphorus::AudioFadeChangeEvent(bool bFadeOut, float FadeTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Phosphorus", "AudioFadeChangeEvent");

	Params::AFortAthenaMutator_Phosphorus_AudioFadeChangeEvent_Params Parms{};

	Parms.bFadeOut = bFadeOut;
	Parms.FadeTime = FadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.AdvanceRound
// (RequiredAPI, Native, Protected)
// Parameters:

void AFortAthenaMutator_Phosphorus::AdvanceRound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Phosphorus", "AdvanceRound");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class PhosphorusRuntime.FortCheatManager_PlayerSpawnPod
// (None)

class UClass* UFortCheatManager_PlayerSpawnPod::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCheatManager_PlayerSpawnPod");

	return Clss;
}


// FortCheatManager_PlayerSpawnPod PhosphorusRuntime.Default__FortCheatManager_PlayerSpawnPod
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCheatManager_PlayerSpawnPod* UFortCheatManager_PlayerSpawnPod::GetDefaultObj()
{
	static class UFortCheatManager_PlayerSpawnPod* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCheatManager_PlayerSpawnPod*>(UFortCheatManager_PlayerSpawnPod::StaticClass()->DefaultObject);

	return Default;
}


// Function PhosphorusRuntime.FortCheatManager_PlayerSpawnPod.PlayerSpawnPodTestAllPlayers
// (Final, Exec, Native, Public)
// Parameters:
// bool                               bIndividualPods                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_PlayerSpawnPod::PlayerSpawnPodTestAllPlayers(bool bIndividualPods)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_PlayerSpawnPod", "PlayerSpawnPodTestAllPlayers");

	Params::UFortCheatManager_PlayerSpawnPod_PlayerSpawnPodTestAllPlayers_Params Parms{};

	Parms.bIndividualPods = bIndividualPods;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusRuntime.FortCheatManager_PlayerSpawnPod.PlayerSpawnPodTest
// (Final, Exec, Native, Public)
// Parameters:

void UFortCheatManager_PlayerSpawnPod::PlayerSpawnPodTest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_PlayerSpawnPod", "PlayerSpawnPodTest");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PhosphorusRuntime.FortCheatManager_PlayerSpawnPod.PlayerSpawnPodDebug
// (Final, Exec, Native, Public)
// Parameters:
// float                              TextScale                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_PlayerSpawnPod::PlayerSpawnPodDebug(float TextScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_PlayerSpawnPod", "PlayerSpawnPodDebug");

	Params::UFortCheatManager_PlayerSpawnPod_PlayerSpawnPodDebug_Params Parms{};

	Parms.TextScale = TextScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PhosphorusRuntime.PlayerSpawnPodCameraActor
// (Actor)

class UClass* APlayerSpawnPodCameraActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerSpawnPodCameraActor");

	return Clss;
}


// PlayerSpawnPodCameraActor PhosphorusRuntime.Default__PlayerSpawnPodCameraActor
// (Public, ClassDefaultObject, ArchetypeObject)

class APlayerSpawnPodCameraActor* APlayerSpawnPodCameraActor::GetDefaultObj()
{
	static class APlayerSpawnPodCameraActor* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayerSpawnPodCameraActor*>(APlayerSpawnPodCameraActor::StaticClass()->DefaultObject);

	return Default;
}

}


