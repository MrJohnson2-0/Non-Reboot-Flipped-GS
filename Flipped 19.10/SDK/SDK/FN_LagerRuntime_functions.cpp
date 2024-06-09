#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LagerRuntime.FortAthenaLivingWorldConfigData
// (None)

class UClass* UFortAthenaLivingWorldConfigData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldConfigData");

	return Clss;
}


// FortAthenaLivingWorldConfigData LagerRuntime.Default__FortAthenaLivingWorldConfigData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldConfigData* UFortAthenaLivingWorldConfigData::GetDefaultObj()
{
	static class UFortAthenaLivingWorldConfigData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldConfigData*>(UFortAthenaLivingWorldConfigData::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortAthenaLivingWorldDebugDensityMiniMapIndicator
// (None)

class UClass* UFortAthenaLivingWorldDebugDensityMiniMapIndicator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldDebugDensityMiniMapIndicator");

	return Clss;
}


// FortAthenaLivingWorldDebugDensityMiniMapIndicator LagerRuntime.Default__FortAthenaLivingWorldDebugDensityMiniMapIndicator
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* UFortAthenaLivingWorldDebugDensityMiniMapIndicator::GetDefaultObj()
{
	static class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldDebugDensityMiniMapIndicator*>(UFortAthenaLivingWorldDebugDensityMiniMapIndicator::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortAthenaLivingWorldEncounter
// (None)

class UClass* UFortAthenaLivingWorldEncounter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldEncounter");

	return Clss;
}


// FortAthenaLivingWorldEncounter LagerRuntime.Default__FortAthenaLivingWorldEncounter
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldEncounter* UFortAthenaLivingWorldEncounter::GetDefaultObj()
{
	static class UFortAthenaLivingWorldEncounter* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldEncounter*>(UFortAthenaLivingWorldEncounter::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortAthenaLivingWorldEncounterInstance
// (None)

class UClass* UFortAthenaLivingWorldEncounterInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldEncounterInstance");

	return Clss;
}


// FortAthenaLivingWorldEncounterInstance LagerRuntime.Default__FortAthenaLivingWorldEncounterInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldEncounterInstance* UFortAthenaLivingWorldEncounterInstance::GetDefaultObj()
{
	static class UFortAthenaLivingWorldEncounterInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldEncounterInstance*>(UFortAthenaLivingWorldEncounterInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.ResumeEncounter
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldEncounterInstance::ResumeEncounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "ResumeEncounter");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.RequestEventGeneration
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldEncounterInstance::RequestEventGeneration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "RequestEventGeneration");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.PauseEncounter
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldEncounterInstance::PauseEncounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "PauseEncounter");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorSpawned__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldEncounterInstance::OnActorSpawned__DelegateSignature(class AActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "OnActorSpawned__DelegateSignature");

	Params::UFortAthenaLivingWorldEncounterInstance_OnActorSpawned__DelegateSignature_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorDestroyed__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldEncounterInstance::OnActorDestroyed__DelegateSignature(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "OnActorDestroyed__DelegateSignature");

	Params::UFortAthenaLivingWorldEncounterInstance_OnActorDestroyed__DelegateSignature_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.GetTotalActorCount
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAthenaLivingWorldEncounterInstance::GetTotalActorCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "GetTotalActorCount");

	Params::UFortAthenaLivingWorldEncounterInstance_GetTotalActorCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.AdvanceEncounterStage
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldEncounterInstance::AdvanceEncounterStage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "AdvanceEncounterStage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class LagerRuntime.FortAthenaLivingWorldEventData
// (None)

class UClass* UFortAthenaLivingWorldEventData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldEventData");

	return Clss;
}


// FortAthenaLivingWorldEventData LagerRuntime.Default__FortAthenaLivingWorldEventData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldEventData* UFortAthenaLivingWorldEventData::GetDefaultObj()
{
	static class UFortAthenaLivingWorldEventData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldEventData*>(UFortAthenaLivingWorldEventData::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortAthenaLivingWorldManager
// (None)

class UClass* UFortAthenaLivingWorldManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldManager");

	return Clss;
}


// FortAthenaLivingWorldManager LagerRuntime.Default__FortAthenaLivingWorldManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldManager* UFortAthenaLivingWorldManager::GetDefaultObj()
{
	static class UFortAthenaLivingWorldManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldManager*>(UFortAthenaLivingWorldManager::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaLivingWorldManager.TrySpawnEvent
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         EventEntry                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  SpawnLocation                                                    (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnRequestFinished                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaLivingWorldManager::TrySpawnEvent(const struct FDataTableRowHandle& EventEntry, const struct FTransform& SpawnLocation, FDelegateProperty_& OnRequestFinished)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "TrySpawnEvent");

	Params::UFortAthenaLivingWorldManager_TrySpawnEvent_Params Parms{};

	Parms.EventEntry = EventEntry;
	Parms.SpawnLocation = SpawnLocation;
	Parms.OnRequestFinished = OnRequestFinished;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.StartEncounter
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UFortAthenaLivingWorldEncounter>EncounterType                                                    (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>>EncounterPointProviders                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
// class AActor*                      ActorDensityReservoir                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaLivingWorldEncounterInstance*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaLivingWorldEncounterInstance* UFortAthenaLivingWorldManager::StartEncounter(TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> EncounterType, TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>>& EncounterPointProviders, class AActor* ActorDensityReservoir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "StartEncounter");

	Params::UFortAthenaLivingWorldManager_StartEncounter_Params Parms{};

	Parms.EncounterType = EncounterType;
	Parms.EncounterPointProviders = EncounterPointProviders;
	Parms.ActorDensityReservoir = ActorDensityReservoir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.RequestEventGeneration
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldManager::RequestEventGeneration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "RequestEventGeneration");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.QueryEventBudget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         EventEntry                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class AActor*                      SpawnLocation                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAthenaLivingWorldManager::QueryEventBudget(const struct FDataTableRowHandle& EventEntry, class AActor* SpawnLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "QueryEventBudget");

	Params::UFortAthenaLivingWorldManager_QueryEventBudget_Params Parms{};

	Parms.EventEntry = EventEntry;
	Parms.SpawnLocation = SpawnLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnWorldFinishedInitialization
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FGameplayTagContainer       ContextTags                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnWorldFinishedInitialization(struct FGameplayTagContainer& ContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnWorldFinishedInitialization");

	Params::UFortAthenaLivingWorldManager_OnWorldFinishedInitialization_Params Parms{};

	Parms.ContextTags = ContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnUnmanagedDensityReservoirActorDestroy
// (Final, Native, Private)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnUnmanagedDensityReservoirActorDestroy(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnUnmanagedDensityReservoirActorDestroy");

	Params::UFortAthenaLivingWorldManager_OnUnmanagedDensityReservoirActorDestroy_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnSpawnedActorDestroy
// (Final, Native, Private)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnSpawnedActorDestroy(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnSpawnedActorDestroy");

	Params::UFortAthenaLivingWorldManager_OnSpawnedActorDestroy_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnRep_DebugDensityMinimapIndicator
// (Final, Native, Private)
// Parameters:
// class UFortAthenaLivingWorldDebugDensityMiniMapIndicator*OldMapIndicator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnRep_DebugDensityMinimapIndicator(class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* OldMapIndicator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnRep_DebugDensityMinimapIndicator");

	Params::UFortAthenaLivingWorldManager_OnRep_DebugDensityMinimapIndicator_Params Parms{};

	Parms.OldMapIndicator = OldMapIndicator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnRep_ActorClassToPreloadOnClient
// (Final, Native, Private)
// Parameters:

void UFortAthenaLivingWorldManager::OnRep_ActorClassToPreloadOnClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnRep_ActorClassToPreloadOnClient");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnPatrolPathAdded
// (Final, Native, Private)
// Parameters:
// class AFortAthenaPatrolPath*       PatrolPath                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnPatrolPathAdded(class AFortAthenaPatrolPath* PatrolPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnPatrolPathAdded");

	Params::UFortAthenaLivingWorldManager_OnPatrolPathAdded_Params Parms{};

	Parms.PatrolPath = PatrolPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnCurrentPlaylistLoaded");

	Params::UFortAthenaLivingWorldManager_OnCurrentPlaylistLoaded_Params Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnActorSpawned
// (Final, Native, Private)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RequestID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnActorSpawned(class AActor* Actor, int32 RequestID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnActorSpawned");

	Params::UFortAthenaLivingWorldManager_OnActorSpawned_Params Parms{};

	Parms.Actor = Actor;
	Parms.RequestID = RequestID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerUnregisterPointProvider
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      PointProvider                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerUnregisterPointProvider(class AActor* PointProvider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerUnregisterPointProvider");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerUnregisterPointProvider_Params Parms{};

	Parms.PointProvider = PointProvider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleVerboseLogging
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleVerboseLogging()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerToggleVerboseLogging");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleGenerateEvents
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleGenerateEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerToggleGenerateEvents");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleDensityDisplay
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleDensityDisplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerToggleDensityDisplay");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleActorMinimap
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleActorMinimap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerToggleActorMinimap");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerRegisterPointProvider
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      PointProvider                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerRegisterPointProvider(class AActor* PointProvider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerRegisterPointProvider");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerRegisterPointProvider_Params Parms{};

	Parms.PointProvider = PointProvider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerProviderDebugActor
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// int32                              ProviderIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerProviderDebugActor(int32 ProviderIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerProviderDebugActor");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerProviderDebugActor_Params Parms{};

	Parms.ProviderIndex = ProviderIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerGenerateEvents
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerGenerateEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerGenerateEvents");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerFlush
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerFlush()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerFlush");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.EndEncounter
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAthenaLivingWorldEncounterInstance*EncounterInstance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::EndEncounter(class UFortAthenaLivingWorldEncounterInstance* EncounterInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "EndEncounter");

	Params::UFortAthenaLivingWorldManager_EndEncounter_Params Parms{};

	Parms.EncounterInstance = EncounterInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LagerRuntime.FortAthenaLivingWorldPointProviderInterface
// (None)

class UClass* IFortAthenaLivingWorldPointProviderInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldPointProviderInterface");

	return Clss;
}


// FortAthenaLivingWorldPointProviderInterface LagerRuntime.Default__FortAthenaLivingWorldPointProviderInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IFortAthenaLivingWorldPointProviderInterface* IFortAthenaLivingWorldPointProviderInterface::GetDefaultObj()
{
	static class IFortAthenaLivingWorldPointProviderInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IFortAthenaLivingWorldPointProviderInterface*>(IFortAthenaLivingWorldPointProviderInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnSpawnedActorFailed
// (Native, Public, BlueprintCallable)
// Parameters:

void IFortAthenaLivingWorldPointProviderInterface::OnSpawnedActorFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "OnSpawnedActorFailed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnSpawnedActorDestroyed
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IFortAthenaLivingWorldPointProviderInterface::OnSpawnedActorDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "OnSpawnedActorDestroyed");

	Params::IFortAthenaLivingWorldPointProviderInterface_OnSpawnedActorDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnSpawnedActor
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     PositionFromProvider                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IFortAthenaLivingWorldPointProviderInterface::OnSpawnedActor(class AActor* SpawnedActor, struct FVector& PositionFromProvider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "OnSpawnedActor");

	Params::IFortAthenaLivingWorldPointProviderInterface_OnSpawnedActor_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;
	Parms.PositionFromProvider = PositionFromProvider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnEventRequested
// (Native, Public, BlueprintCallable)
// Parameters:

void IFortAthenaLivingWorldPointProviderInterface::OnEventRequested()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "OnEventRequested");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.IsEnabled
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFortAthenaLivingWorldPointProviderFilterRulesPointFilter                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IFortAthenaLivingWorldPointProviderInterface::IsEnabled(struct FFortAthenaLivingWorldPointProviderFilterRules& PointFilter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "IsEnabled");

	Params::IFortAthenaLivingWorldPointProviderInterface_IsEnabled_Params Parms{};

	Parms.PointFilter = PointFilter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetValidLocation
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFortAthenaLivingWorldPointProviderFilterRulesPointFilter                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     OutPosition                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    OutRotation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IFortAthenaLivingWorldPointProviderInterface::GetValidLocation(struct FFortAthenaLivingWorldPointProviderFilterRules& PointFilter, struct FVector* OutPosition, struct FRotator* OutRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "GetValidLocation");

	Params::IFortAthenaLivingWorldPointProviderInterface_GetValidLocation_Params Parms{};

	Parms.PointFilter = PointFilter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPosition != nullptr)
		*OutPosition = std::move(Parms.OutPosition);

	if (OutRotation != nullptr)
		*OutRotation = std::move(Parms.OutRotation);

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetPointProviderLocation
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector IFortAthenaLivingWorldPointProviderInterface::GetPointProviderLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "GetPointProviderLocation");

	Params::IFortAthenaLivingWorldPointProviderInterface_GetPointProviderLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetFiltersTags
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       FilterTags                                                       (Parm, OutParm, NativeAccessSpecifierPublic)

void IFortAthenaLivingWorldPointProviderInterface::GetFiltersTags(struct FGameplayTagContainer* FilterTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "GetFiltersTags");

	Params::IFortAthenaLivingWorldPointProviderInterface_GetFiltersTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FilterTags != nullptr)
		*FilterTags = std::move(Parms.FilterTags);

}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.EnablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void IFortAthenaLivingWorldPointProviderInterface::EnablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "EnablePointProvider");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.DisablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void IFortAthenaLivingWorldPointProviderInterface::DisablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "DisablePointProvider");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler
// (Actor)

class UClass* AFortAthenaLivingWorldPointProvidersEnabler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldPointProvidersEnabler");

	return Clss;
}


// FortAthenaLivingWorldPointProvidersEnabler LagerRuntime.Default__FortAthenaLivingWorldPointProvidersEnabler
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaLivingWorldPointProvidersEnabler* AFortAthenaLivingWorldPointProvidersEnabler::GetDefaultObj()
{
	static class AFortAthenaLivingWorldPointProvidersEnabler* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaLivingWorldPointProvidersEnabler*>(AFortAthenaLivingWorldPointProvidersEnabler::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.RemoveClosestPointProvidersToPoint
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Point                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaximumDistance                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PointsToDisable                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldPointProvidersEnabler::RemoveClosestPointProvidersToPoint(struct FVector& Point, float MaximumDistance, int32 PointsToDisable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "RemoveClosestPointProvidersToPoint");

	Params::AFortAthenaLivingWorldPointProvidersEnabler_RemoveClosestPointProvidersToPoint_Params Parms{};

	Parms.Point = Point;
	Parms.MaximumDistance = MaximumDistance;
	Parms.PointsToDisable = PointsToDisable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldPointProvidersEnabler::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "OnCurrentPlaylistLoaded");

	Params::AFortAthenaLivingWorldPointProvidersEnabler_OnCurrentPlaylistLoaded_Params Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.OnCompletedEvaluation__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>>EnabledPointProviders                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldPointProvidersEnabler::OnCompletedEvaluation__DelegateSignature(TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>>& EnabledPointProviders)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "OnCompletedEvaluation__DelegateSignature");

	Params::AFortAthenaLivingWorldPointProvidersEnabler_OnCompletedEvaluation__DelegateSignature_Params Parms{};

	Parms.EnabledPointProviders = EnabledPointProviders;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.HasCompletedEvaluation
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaLivingWorldPointProvidersEnabler::HasCompletedEvaluation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "HasCompletedEvaluation");

	Params::AFortAthenaLivingWorldPointProvidersEnabler_HasCompletedEvaluation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.GetEnablerTags
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer AFortAthenaLivingWorldPointProvidersEnabler::GetEnablerTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "GetEnablerTags");

	Params::AFortAthenaLivingWorldPointProvidersEnabler_GetEnablerTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.GetEnabledLinkedPointProviders
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> AFortAthenaLivingWorldPointProvidersEnabler::GetEnabledLinkedPointProviders()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "GetEnabledLinkedPointProviders");

	Params::AFortAthenaLivingWorldPointProvidersEnabler_GetEnabledLinkedPointProviders_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.EvaluateAndEnablePointProviders
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaLivingWorldPointProvidersEnabler::EvaluateAndEnablePointProviders()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "EvaluateAndEnablePointProviders");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.DoesStartEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaLivingWorldPointProvidersEnabler::DoesStartEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "DoesStartEnabled");

	Params::AFortAthenaLivingWorldPointProvidersEnabler_DoesStartEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride
// (Actor)

class UClass* AFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride");

	return Clss;
}


// FortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride LagerRuntime.Default__FortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride* AFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride::GetDefaultObj()
{
	static class AFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride*>(AFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortAthenaLivingWorldSpawnAction
// (None)

class UClass* UFortAthenaLivingWorldSpawnAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldSpawnAction");

	return Clss;
}


// FortAthenaLivingWorldSpawnAction LagerRuntime.Default__FortAthenaLivingWorldSpawnAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldSpawnAction* UFortAthenaLivingWorldSpawnAction::GetDefaultObj()
{
	static class UFortAthenaLivingWorldSpawnAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldSpawnAction*>(UFortAthenaLivingWorldSpawnAction::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint
// (None)

class UClass* UFortAthenaLivingWorldSpawnActionBlueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldSpawnActionBlueprint");

	return Clss;
}


// FortAthenaLivingWorldSpawnActionBlueprint LagerRuntime.Default__FortAthenaLivingWorldSpawnActionBlueprint
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldSpawnActionBlueprint* UFortAthenaLivingWorldSpawnActionBlueprint::GetDefaultObj()
{
	static class UFortAthenaLivingWorldSpawnActionBlueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldSpawnActionBlueprint*>(UFortAthenaLivingWorldSpawnActionBlueprint::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint.K2_OnAllActorSpawned
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// TArray<class AActor*>              SpawnedActor                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldSpawnActionBlueprint::K2_OnAllActorSpawned(TArray<class AActor*>& SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldSpawnActionBlueprint", "K2_OnAllActorSpawned");

	Params::UFortAthenaLivingWorldSpawnActionBlueprint_K2_OnAllActorSpawned_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Class LagerRuntime.FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle
// (None)

class UClass* UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle");

	return Clss;
}


// FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle LagerRuntime.Default__FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle* UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle::GetDefaultObj()
{
	static class UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle*>(UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortAthenaLivingWorldVolume
// (Actor)

class UClass* AFortAthenaLivingWorldVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldVolume");

	return Clss;
}


// FortAthenaLivingWorldVolume LagerRuntime.Default__FortAthenaLivingWorldVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaLivingWorldVolume* AFortAthenaLivingWorldVolume::GetDefaultObj()
{
	static class AFortAthenaLivingWorldVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaLivingWorldVolume*>(AFortAthenaLivingWorldVolume::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaLivingWorldVolume.SetFiltersTags
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldVolume::SetFiltersTags(struct FGameplayTagContainer& TagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "SetFiltersTags");

	Params::AFortAthenaLivingWorldVolume_SetFiltersTags_Params Parms{};

	Parms.TagContainer = TagContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.SetEQSQueryConfigParam
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldVolume::SetEQSQueryConfigParam(class FName ParameterName, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "SetEQSQueryConfigParam");

	Params::AFortAthenaLivingWorldVolume_SetEQSQueryConfigParam_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.SetEQSQuery
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UEnvQuery*                   Query                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldVolume::SetEQSQuery(class UEnvQuery* Query)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "SetEQSQuery");

	Params::AFortAthenaLivingWorldVolume_SetEQSQuery_Params Parms{};

	Parms.Query = Query;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.RunEQS
// (Final, Native, Private)
// Parameters:

void AFortAthenaLivingWorldVolume::RunEQS()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "RunEQS");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.OnWorldFinishedInitialization
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FGameplayTagContainer       ContextTags                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldVolume::OnWorldFinishedInitialization(struct FGameplayTagContainer& ContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "OnWorldFinishedInitialization");

	Params::AFortAthenaLivingWorldVolume_OnWorldFinishedInitialization_Params Parms{};

	Parms.ContextTags = ContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldVolume.OnPointProviderRegistered__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AFortAthenaLivingWorldVolume*PointProviderVolume                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldVolume::OnPointProviderRegistered__DelegateSignature(class AFortAthenaLivingWorldVolume* PointProviderVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "OnPointProviderRegistered__DelegateSignature");

	Params::AFortAthenaLivingWorldVolume_OnPointProviderRegistered__DelegateSignature_Params Parms{};

	Parms.PointProviderVolume = PointProviderVolume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldVolume::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "OnCurrentPlaylistLoaded");

	Params::AFortAthenaLivingWorldVolume_OnCurrentPlaylistLoaded_Params Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldVolume.OnActorSpawnedResult__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResult                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldVolume::OnActorSpawnedResult__DelegateSignature(class AActor* SpawnedActor, bool bResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "OnActorSpawnedResult__DelegateSignature");

	Params::AFortAthenaLivingWorldVolume_OnActorSpawnedResult__DelegateSignature_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;
	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.IsPointProviderEnabled
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaLivingWorldVolume::IsPointProviderEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "IsPointProviderEnabled");

	Params::AFortAthenaLivingWorldVolume_IsPointProviderEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.EnablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaLivingWorldVolume::EnablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "EnablePointProvider");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.DoesStartEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaLivingWorldVolume::DoesStartEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "DoesStartEnabled");

	Params::AFortAthenaLivingWorldVolume_DoesStartEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.DisablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaLivingWorldVolume::DisablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "DisablePointProvider");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class LagerRuntime.FortAthenaPatrolPathPointProvider
// (Actor)

class UClass* AFortAthenaPatrolPathPointProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaPatrolPathPointProvider");

	return Clss;
}


// FortAthenaPatrolPathPointProvider LagerRuntime.Default__FortAthenaPatrolPathPointProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaPatrolPathPointProvider* AFortAthenaPatrolPathPointProvider::GetDefaultObj()
{
	static class AFortAthenaPatrolPathPointProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaPatrolPathPointProvider*>(AFortAthenaPatrolPathPointProvider::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaPatrolPathPointProvider.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaPatrolPathPointProvider::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPatrolPathPointProvider", "OnCurrentPlaylistLoaded");

	Params::AFortAthenaPatrolPathPointProvider_OnCurrentPlaylistLoaded_Params Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LagerRuntime.FortAthenaPatrolPathPointProvider.OnActorSpawnedResult__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResult                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaPatrolPathPointProvider::OnActorSpawnedResult__DelegateSignature(class AActor* SpawnedActor, bool bResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPatrolPathPointProvider", "OnActorSpawnedResult__DelegateSignature");

	Params::AFortAthenaPatrolPathPointProvider_OnActorSpawnedResult__DelegateSignature_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;
	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaPatrolPathPointProvider.EnablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaPatrolPathPointProvider::EnablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPatrolPathPointProvider", "EnablePointProvider");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaPatrolPathPointProvider.DisablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaPatrolPathPointProvider::DisablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPatrolPathPointProvider", "DisablePointProvider");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class LagerRuntime.FortAthenaPointAroundPlayerProvider
// (Actor)

class UClass* AFortAthenaPointAroundPlayerProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaPointAroundPlayerProvider");

	return Clss;
}


// FortAthenaPointAroundPlayerProvider LagerRuntime.Default__FortAthenaPointAroundPlayerProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaPointAroundPlayerProvider* AFortAthenaPointAroundPlayerProvider::GetDefaultObj()
{
	static class AFortAthenaPointAroundPlayerProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaPointAroundPlayerProvider*>(AFortAthenaPointAroundPlayerProvider::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaPointAroundPlayerProvider.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaPointAroundPlayerProvider::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPointAroundPlayerProvider", "OnCurrentPlaylistLoaded");

	Params::AFortAthenaPointAroundPlayerProvider_OnCurrentPlaylistLoaded_Params Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LagerRuntime.FortAthenaPointAroundPlayerProvider.OnActorSpawnedResult__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResult                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaPointAroundPlayerProvider::OnActorSpawnedResult__DelegateSignature(class AActor* SpawnedActor, bool bResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPointAroundPlayerProvider", "OnActorSpawnedResult__DelegateSignature");

	Params::AFortAthenaPointAroundPlayerProvider_OnActorSpawnedResult__DelegateSignature_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;
	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaPointAroundPlayerProvider.EnablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaPointAroundPlayerProvider::EnablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPointAroundPlayerProvider", "EnablePointProvider");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaPointAroundPlayerProvider.DisablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaPointAroundPlayerProvider::DisablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPointAroundPlayerProvider", "DisablePointProvider");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class LagerRuntime.FortCheatManager_LivingWorldManager
// (None)

class UClass* UFortCheatManager_LivingWorldManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCheatManager_LivingWorldManager");

	return Clss;
}


// FortCheatManager_LivingWorldManager LagerRuntime.Default__FortCheatManager_LivingWorldManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCheatManager_LivingWorldManager* UFortCheatManager_LivingWorldManager::GetDefaultObj()
{
	static class UFortCheatManager_LivingWorldManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCheatManager_LivingWorldManager*>(UFortCheatManager_LivingWorldManager::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTeleportToSpawnPosition
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LivingWorldManagerTeleportToSpawnPosition(const class FString& EventDataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerTeleportToSpawnPosition");

	Params::UFortCheatManager_LivingWorldManager_LivingWorldManagerTeleportToSpawnPosition_Params Parms{};

	Parms.EventDataName = EventDataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTeleportTo
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LivingWorldManagerTeleportTo(const class FString& EventDataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerTeleportTo");

	Params::UFortCheatManager_LivingWorldManager_LivingWorldManagerTeleportTo_Params Parms{};

	Parms.EventDataName = EventDataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnAtLocation
// (Final, BlueprintAuthorityOnly, Exec, Native, Public, HasDefaults)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LivingWorldManagerSpawnAtLocation(const class FString& EventDataName, const struct FVector& Location, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerSpawnAtLocation");

	Params::UFortCheatManager_LivingWorldManager_LivingWorldManagerSpawnAtLocation_Params Parms{};

	Parms.EventDataName = EventDataName;
	Parms.Location = Location;
	Parms.Rotation = Rotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawn
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LivingWorldManagerSpawn(const class FString& EventDataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerSpawn");

	Params::UFortCheatManager_LivingWorldManager_LivingWorldManagerSpawn_Params Parms{};

	Parms.EventDataName = EventDataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LagerRuntime.FortGameFeatureAction_AddLagerConfig
// (None)

class UClass* UFortGameFeatureAction_AddLagerConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameFeatureAction_AddLagerConfig");

	return Clss;
}


// FortGameFeatureAction_AddLagerConfig LagerRuntime.Default__FortGameFeatureAction_AddLagerConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameFeatureAction_AddLagerConfig* UFortGameFeatureAction_AddLagerConfig::GetDefaultObj()
{
	static class UFortGameFeatureAction_AddLagerConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameFeatureAction_AddLagerConfig*>(UFortGameFeatureAction_AddLagerConfig::StaticClass()->DefaultObject);

	return Default;
}

}


