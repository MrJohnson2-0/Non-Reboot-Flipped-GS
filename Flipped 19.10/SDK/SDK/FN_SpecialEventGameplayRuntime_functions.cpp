#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy
// (None)

class UClass* UFortCheatManager_FakeKillRelevancy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCheatManager_FakeKillRelevancy");

	return Clss;
}


// FortCheatManager_FakeKillRelevancy SpecialEventGameplayRuntime.Default__FortCheatManager_FakeKillRelevancy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCheatManager_FakeKillRelevancy* UFortCheatManager_FakeKillRelevancy::GetDefaultObj()
{
	static class UFortCheatManager_FakeKillRelevancy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCheatManager_FakeKillRelevancy*>(UFortCheatManager_FakeKillRelevancy::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyTestAlgorithm
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// int32                              NumPlayers                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MaxPlayersRemainingAfterPhases                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinSquadSize                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxSquadSize                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Iterations                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LogVerbosity                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_FakeKillRelevancy::FakeKillRelevancyTestAlgorithm(int32 NumPlayers, const class FString& MaxPlayersRemainingAfterPhases, int32 MinSquadSize, int32 MaxSquadSize, int32 Iterations, int32 LogVerbosity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_FakeKillRelevancy", "FakeKillRelevancyTestAlgorithm");

	Params::UFortCheatManager_FakeKillRelevancy_FakeKillRelevancyTestAlgorithm_Params Parms{};

	Parms.NumPlayers = NumPlayers;
	Parms.MaxPlayersRemainingAfterPhases = MaxPlayersRemainingAfterPhases;
	Parms.MinSquadSize = MinSquadSize;
	Parms.MaxSquadSize = MaxSquadSize;
	Parms.Iterations = Iterations;
	Parms.LogVerbosity = LogVerbosity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyStartNextWave
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortCheatManager_FakeKillRelevancy::FakeKillRelevancyStartNextWave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_FakeKillRelevancy", "FakeKillRelevancyStartNextWave");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancySetUpPhase
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// int32                              MaxPlayersRemaining                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReasonGameplayTagString                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumWaves                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RelevancyDelay                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_FakeKillRelevancy::FakeKillRelevancySetUpPhase(int32 MaxPlayersRemaining, const class FString& ReasonGameplayTagString, int32 NumWaves, float RelevancyDelay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_FakeKillRelevancy", "FakeKillRelevancySetUpPhase");

	Params::UFortCheatManager_FakeKillRelevancy_FakeKillRelevancySetUpPhase_Params Parms{};

	Parms.MaxPlayersRemaining = MaxPlayersRemaining;
	Parms.ReasonGameplayTagString = ReasonGameplayTagString;
	Parms.NumWaves = NumWaves;
	Parms.RelevancyDelay = RelevancyDelay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyReset
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortCheatManager_FakeKillRelevancy::FakeKillRelevancyReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_FakeKillRelevancy", "FakeKillRelevancyReset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyDebug
// (Final, Exec, Native, Public)
// Parameters:
// float                              TextScale                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_FakeKillRelevancy::FakeKillRelevancyDebug(float TextScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_FakeKillRelevancy", "FakeKillRelevancyDebug");

	Params::UFortCheatManager_FakeKillRelevancy_FakeKillRelevancyDebug_Params Parms{};

	Parms.TextScale = TextScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy
// (None)

class UClass* UFortControllerComponent_FakeKillRelevancy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortControllerComponent_FakeKillRelevancy");

	return Clss;
}


// FortControllerComponent_FakeKillRelevancy SpecialEventGameplayRuntime.Default__FortControllerComponent_FakeKillRelevancy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortControllerComponent_FakeKillRelevancy* UFortControllerComponent_FakeKillRelevancy::GetDefaultObj()
{
	static class UFortControllerComponent_FakeKillRelevancy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortControllerComponent_FakeKillRelevancy*>(UFortControllerComponent_FakeKillRelevancy::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.ResetRelevancy
// (Final, BlueprintAuthorityOnly, Native, Protected)
// Parameters:

void UFortControllerComponent_FakeKillRelevancy::ResetRelevancy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_FakeKillRelevancy", "ResetRelevancy");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.PlayKillEffects
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFakeKillRelevancyPlayerDataEntryFakeKillData                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              RelevancyDelay                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_FakeKillRelevancy::PlayKillEffects(struct FFakeKillRelevancyPlayerDataEntry& FakeKillData, float RelevancyDelay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_FakeKillRelevancy", "PlayKillEffects");

	Params::UFortControllerComponent_FakeKillRelevancy_PlayKillEffects_Params Parms{};

	Parms.FakeKillData = FakeKillData;
	Parms.RelevancyDelay = RelevancyDelay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.OnRep_ResetCounter
// (Final, Native, Private)
// Parameters:

void UFortControllerComponent_FakeKillRelevancy::OnRep_ResetCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_FakeKillRelevancy", "OnRep_ResetCounter");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.OnKillEffectsPlayed
// (Final, BlueprintCosmetic, Native, Protected, BlueprintCallable)
// Parameters:
// class AFortPlayerStateAthena*      PlayerState                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_FakeKillRelevancy::OnKillEffectsPlayed(class AFortPlayerStateAthena* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_FakeKillRelevancy", "OnKillEffectsPlayed");

	Params::UFortControllerComponent_FakeKillRelevancy_OnKillEffectsPlayed_Params Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.GetDeathLocation
// (Final, Native, Protected, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortPlayerStateAthena*      PlayerState                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortControllerComponent_FakeKillRelevancy::GetDeathLocation(class AFortPlayerStateAthena* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_FakeKillRelevancy", "GetDeathLocation");

	Params::UFortControllerComponent_FakeKillRelevancy_GetDeathLocation_Params Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.CancelKillEffectsOnServer
// (BlueprintAuthorityOnly, Event, Protected, BlueprintEvent)
// Parameters:

void UFortControllerComponent_FakeKillRelevancy::CancelKillEffectsOnServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_FakeKillRelevancy", "CancelKillEffectsOnServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.CancelKillEffectsOnClient
// (BlueprintCosmetic, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class AFortPlayerStateAthena*>PlayerStates                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortControllerComponent_FakeKillRelevancy::CancelKillEffectsOnClient(TArray<class AFortPlayerStateAthena*>& PlayerStates)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_FakeKillRelevancy", "CancelKillEffectsOnClient");

	Params::UFortControllerComponent_FakeKillRelevancy_CancelKillEffectsOnClient_Params Parms{};

	Parms.PlayerStates = PlayerStates;

	UObject::ProcessEvent(Func, &Parms);

}


// Class SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy
// (Actor)

class UClass* AFortAthenaMutator_FakeKillRelevancy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_FakeKillRelevancy");

	return Clss;
}


// FortAthenaMutator_FakeKillRelevancy SpecialEventGameplayRuntime.Default__FortAthenaMutator_FakeKillRelevancy
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_FakeKillRelevancy* AFortAthenaMutator_FakeKillRelevancy::GetDefaultObj()
{
	static class AFortAthenaMutator_FakeKillRelevancy* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_FakeKillRelevancy*>(AFortAthenaMutator_FakeKillRelevancy::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.StartNextKillWave
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_FakeKillRelevancy::StartNextKillWave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_FakeKillRelevancy", "StartNextKillWave");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.SetUpKillPhase
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              MaxPlayersRemaining                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Reason                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumWaves                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RelevancyDelay                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_FakeKillRelevancy::SetUpKillPhase(int32 MaxPlayersRemaining, struct FGameplayTag& Reason, int32 NumWaves, float RelevancyDelay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_FakeKillRelevancy", "SetUpKillPhase");

	Params::AFortAthenaMutator_FakeKillRelevancy_SetUpKillPhase_Params Parms{};

	Parms.MaxPlayersRemaining = MaxPlayersRemaining;
	Parms.Reason = Reason;
	Parms.NumWaves = NumWaves;
	Parms.RelevancyDelay = RelevancyDelay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.ResetRelevancy
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_FakeKillRelevancy::ResetRelevancy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_FakeKillRelevancy", "ResetRelevancy");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.EndWave
// (Final, Native, Private)
// Parameters:
// int32                              EndPhaseNum                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WaveNum                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_FakeKillRelevancy::EndWave(int32 EndPhaseNum, int32 WaveNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_FakeKillRelevancy", "EndWave");

	Params::AFortAthenaMutator_FakeKillRelevancy_EndWave_Params Parms{};

	Parms.EndPhaseNum = EndPhaseNum;
	Parms.WaveNum = WaveNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortAthenaMutator_LoadGameFeature
// (Actor)

class UClass* AFortAthenaMutator_LoadGameFeature::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_LoadGameFeature");

	return Clss;
}


// FortAthenaMutator_LoadGameFeature SpecialEventGameplayRuntime.Default__FortAthenaMutator_LoadGameFeature
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_LoadGameFeature* AFortAthenaMutator_LoadGameFeature::GetDefaultObj()
{
	static class AFortAthenaMutator_LoadGameFeature* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_LoadGameFeature*>(AFortAthenaMutator_LoadGameFeature::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_LoadGameFeature.OnPlaylistDataReady
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class AFortGameStateAthena*        GameState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlaylist*               Playlist                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaMutator_LoadGameFeature::OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_LoadGameFeature", "OnPlaylistDataReady");

	Params::AFortAthenaMutator_LoadGameFeature_OnPlaylistDataReady_Params Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortAthenaMutator_RemoveGameFeatures
// (Actor)

class UClass* AFortAthenaMutator_RemoveGameFeatures::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_RemoveGameFeatures");

	return Clss;
}


// FortAthenaMutator_RemoveGameFeatures SpecialEventGameplayRuntime.Default__FortAthenaMutator_RemoveGameFeatures
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_RemoveGameFeatures* AFortAthenaMutator_RemoveGameFeatures::GetDefaultObj()
{
	static class AFortAthenaMutator_RemoveGameFeatures* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_RemoveGameFeatures*>(AFortAthenaMutator_RemoveGameFeatures::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_RemoveGameFeatures.OnPlaylistDataReady
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class AFortGameStateAthena*        GameState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlaylist*               Playlist                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaMutator_RemoveGameFeatures::OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_RemoveGameFeatures", "OnPlaylistDataReady");

	Params::AFortAthenaMutator_RemoveGameFeatures_OnPlaylistDataReady_Params Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent
// (None)

class UClass* UFortCheatManager_SpecialEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCheatManager_SpecialEvent");

	return Clss;
}


// FortCheatManager_SpecialEvent SpecialEventGameplayRuntime.Default__FortCheatManager_SpecialEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCheatManager_SpecialEvent* UFortCheatManager_SpecialEvent::GetDefaultObj()
{
	static class UFortCheatManager_SpecialEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCheatManager_SpecialEvent*>(UFortCheatManager_SpecialEvent::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.UnloadTerrainMaps
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// class FName                        MapTag                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::UnloadTerrainMaps(class FName MapTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "UnloadTerrainMaps");

	Params::UFortCheatManager_SpecialEvent_UnloadTerrainMaps_Params Parms{};

	Parms.MapTag = MapTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ToggleDisableParachutes
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// bool                               bIsDisabled                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::ToggleDisableParachutes(bool bIsDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ToggleDisableParachutes");

	Params::UFortCheatManager_SpecialEvent_ToggleDisableParachutes_Params Parms{};

	Parms.bIsDisabled = bIsDisabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.TeleportAllPlayers
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// int32                              SafeZoneIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::TeleportAllPlayers(int32 SafeZoneIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "TeleportAllPlayers");

	Params::UFortCheatManager_SpecialEvent_TeleportAllPlayers_Params Parms{};

	Parms.SafeZoneIndex = SafeZoneIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.StartEventScript
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// int32                              InStartingIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::StartEventScript(int32 InStartingIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "StartEventScript");

	Params::UFortCheatManager_SpecialEvent_StartEventScript_Params Parms{};

	Parms.InStartingIndex = InStartingIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SpecialEventSetAdditionalViewpoint
// (Final, Exec, Native, Protected)
// Parameters:
// float                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Z                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::SpecialEventSetAdditionalViewpoint(float X, float Y, float Z)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SpecialEventSetAdditionalViewpoint");

	Params::UFortCheatManager_SpecialEvent_SpecialEventSetAdditionalViewpoint_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SpecialEventClearAdditionalViewpoint
// (Final, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::SpecialEventClearAdditionalViewpoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SpecialEventClearAdditionalViewpoint");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ShrinkSafeZone
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::ShrinkSafeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ShrinkSafeZone");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetReturnToMainMenuDelay
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// float                              MinDelayReturnToMainMenu                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDelayReturnToMainMenu                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SetReturnToMainMenuDelay");

	Params::UFortCheatManager_SpecialEvent_SetReturnToMainMenuDelay_Params Parms{};

	Parms.MinDelayReturnToMainMenu = MinDelayReturnToMainMenu;
	Parms.MaxDelayReturnToMainMenu = MaxDelayReturnToMainMenu;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetMatchTime
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// int32                              NewMatchTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::SetMatchTime(int32 NewMatchTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SetMatchTime");

	Params::UFortCheatManager_SpecialEvent_SetMatchTime_Params Parms{};

	Parms.NewMatchTime = NewMatchTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetLockingOnFocalPoint
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// bool                               bInLockingOnFocalPoint                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::SetLockingOnFocalPoint(bool bInLockingOnFocalPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SetLockingOnFocalPoint");

	Params::UFortCheatManager_SpecialEvent_SetLockingOnFocalPoint_Params Parms{};

	Parms.bInLockingOnFocalPoint = bInLockingOnFocalPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetIsSimulatingDamage
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// bool                               bIsSimulating                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::SetIsSimulatingDamage(bool bIsSimulating)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SetIsSimulatingDamage");

	Params::UFortCheatManager_SpecialEvent_SetIsSimulatingDamage_Params Parms{};

	Parms.bIsSimulating = bIsSimulating;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetDestroyVehiclesInStorm
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// bool                               bDestroyVehiclesInStorm                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SetDestroyVehiclesInStorm");

	Params::UFortCheatManager_SpecialEvent_SetDestroyVehiclesInStorm_Params Parms{};

	Parms.bDestroyVehiclesInStorm = bDestroyVehiclesInStorm;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SendToNightNight
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::SendToNightNight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "SendToNightNight");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResumeWinCondition
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::ResumeWinCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ResumeWinCondition");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetWinConditionProgressToZero
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::ResetWinConditionProgressToZero()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ResetWinConditionProgressToZero");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetWinCondition
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::ResetWinCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ResetWinCondition");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetSpecialEventAircraft
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::ResetSpecialEventAircraft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ResetSpecialEventAircraft");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetMatchTimeToPrevious
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::ResetMatchTimeToPrevious()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ResetMatchTimeToPrevious");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.PlacePlayersInAircraft
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::PlacePlayersInAircraft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "PlacePlayersInAircraft");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.PauseWinCondition
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// bool                               bLockScores                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::PauseWinCondition(bool bLockScores)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "PauseWinCondition");

	Params::UFortCheatManager_SpecialEvent_PauseWinCondition_Params Parms{};

	Parms.bLockScores = bLockScores;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.CloseParachutes
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::CloseParachutes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "CloseParachutes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ChangeWinCondition
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// float                              NewGoalScore                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::ChangeWinCondition(float NewGoalScore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "ChangeWinCondition");

	Params::UFortCheatManager_SpecialEvent_ChangeWinCondition_Params Parms{};

	Parms.NewGoalScore = NewGoalScore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.AutobalanceTargetScore
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:

void UFortCheatManager_SpecialEvent::AutobalanceTargetScore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "AutobalanceTargetScore");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.AddCSVEvent
// (Final, BlueprintAuthorityOnly, Exec, Native, Protected)
// Parameters:
// class FString                      CSVEventName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_SpecialEvent::AddCSVEvent(const class FString& CSVEventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_SpecialEvent", "AddCSVEvent");

	Params::UFortCheatManager_SpecialEvent_AddCSVEvent_Params Parms{};

	Parms.CSVEventName = CSVEventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent
// (Actor)

class UClass* AFortAthenaMutator_SpecialEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_SpecialEvent");

	return Clss;
}


// FortAthenaMutator_SpecialEvent SpecialEventGameplayRuntime.Default__FortAthenaMutator_SpecialEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_SpecialEvent* AFortAthenaMutator_SpecialEvent::GetDefaultObj()
{
	static class AFortAthenaMutator_SpecialEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_SpecialEvent*>(AFortAthenaMutator_SpecialEvent::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.WarmUpIslandUpdated
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::WarmUpIslandUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "WarmUpIslandUpdated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.UnloadTerrainMaps
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                MapTag                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::UnloadTerrainMaps(struct FGameplayTag& MapTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "UnloadTerrainMaps");

	Params::AFortAthenaMutator_SpecialEvent_UnloadTerrainMaps_Params Parms{};

	Parms.MapTag = MapTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleHUDs
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bHide                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::ToggleHUDs(bool bHide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ToggleHUDs");

	Params::AFortAthenaMutator_SpecialEvent_ToggleHUDs_Params Parms{};

	Parms.bHide = bHide;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleDisableWeapons
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDisableWeapons                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::ToggleDisableWeapons(bool bDisableWeapons)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ToggleDisableWeapons");

	Params::AFortAthenaMutator_SpecialEvent_ToggleDisableWeapons_Params Parms{};

	Parms.bDisableWeapons = bDisableWeapons;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleDisableParachutes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDisable                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::ToggleDisableParachutes(bool bDisable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ToggleDisableParachutes");

	Params::AFortAthenaMutator_SpecialEvent_ToggleDisableParachutes_Params Parms{};

	Parms.bDisable = bDisable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleAllPlayersInvincibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInvincible                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::ToggleAllPlayersInvincibility(bool bInvincible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ToggleAllPlayersInvincibility");

	Params::AFortAthenaMutator_SpecialEvent_ToggleAllPlayersInvincibility_Params Parms{};

	Parms.bInvincible = bInvincible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.TeleportAllPlayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       EventTags                                                        (Parm, NativeAccessSpecifierPublic)
// int32                              TeleportsPerFrame                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SafeZoneIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::TeleportAllPlayers(const struct FGameplayTagContainer& EventTags, int32 TeleportsPerFrame, int32 SafeZoneIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "TeleportAllPlayers");

	Params::AFortAthenaMutator_SpecialEvent_TeleportAllPlayers_Params Parms{};

	Parms.EventTags = EventTags;
	Parms.TeleportsPerFrame = TeleportsPerFrame;
	Parms.SafeZoneIndex = SafeZoneIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SwapBodyParts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ArrayIndex                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerController*       FortPC                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::SwapBodyParts(int32 ArrayIndex, class AFortPlayerController* FortPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SwapBodyParts");

	Params::AFortAthenaMutator_SpecialEvent_SwapBodyParts_Params Parms{};

	Parms.ArrayIndex = ArrayIndex;
	Parms.FortPC = FortPC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.StartSafeZoneOverrideForEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SafeZoneIndexForEvent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::StartSafeZoneOverrideForEvent(int32 SafeZoneIndexForEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "StartSafeZoneOverrideForEvent");

	Params::AFortAthenaMutator_SpecialEvent_StartSafeZoneOverrideForEvent_Params Parms{};

	Parms.SafeZoneIndexForEvent = SafeZoneIndexForEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ShrinkSafeZone
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::ShrinkSafeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ShrinkSafeZone");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetWeightForContainerLootRoll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Weight                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::SetWeightForContainerLootRoll(float Weight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetWeightForContainerLootRoll");

	Params::AFortAthenaMutator_SpecialEvent_SetWeightForContainerLootRoll_Params Parms{};

	Parms.Weight = Weight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetReturnToMainMenuDelay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              MinDelayReturnToMainMenu                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDelayReturnToMainMenu                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetReturnToMainMenuDelay");

	Params::AFortAthenaMutator_SpecialEvent_SetReturnToMainMenuDelay_Params Parms{};

	Parms.MinDelayReturnToMainMenu = MinDelayReturnToMainMenu;
	Parms.MaxDelayReturnToMainMenu = MaxDelayReturnToMainMenu;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetNamedWeightForContainerLootRoll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        WeightName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::SetNamedWeightForContainerLootRoll(class FName WeightName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetNamedWeightForContainerLootRoll");

	Params::AFortAthenaMutator_SpecialEvent_SetNamedWeightForContainerLootRoll_Params Parms{};

	Parms.WeightName = WeightName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetMatchTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewMatchTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::SetMatchTime(int32 NewMatchTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetMatchTime");

	Params::AFortAthenaMutator_SpecialEvent_SetMatchTime_Params Parms{};

	Parms.NewMatchTime = NewMatchTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetLockingOnFocalPoint
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInLockingOnFocalPoint                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::SetLockingOnFocalPoint(bool bInLockingOnFocalPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetLockingOnFocalPoint");

	Params::AFortAthenaMutator_SpecialEvent_SetLockingOnFocalPoint_Params Parms{};

	Parms.bInLockingOnFocalPoint = bInLockingOnFocalPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetIsSimulatingDamage
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsSimulating                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::SetIsSimulatingDamage(bool bIsSimulating)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetIsSimulatingDamage");

	Params::AFortAthenaMutator_SpecialEvent_SetIsSimulatingDamage_Params Parms{};

	Parms.bIsSimulating = bIsSimulating;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetDestroyVehiclesInStorm
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDestroyVehiclesInStorm                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetDestroyVehiclesInStorm");

	Params::AFortAthenaMutator_SpecialEvent_SetDestroyVehiclesInStorm_Params Parms{};

	Parms.bDestroyVehiclesInStorm = bDestroyVehiclesInStorm;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetCanStreamBuildingFoundationsIn
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::SetCanStreamBuildingFoundationsIn(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetCanStreamBuildingFoundationsIn");

	Params::AFortAthenaMutator_SpecialEvent_SetCanStreamBuildingFoundationsIn_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetAdditionalViewpoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     WorldLocation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::SetAdditionalViewpoint(const struct FVector& WorldLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SetAdditionalViewpoint");

	Params::AFortAthenaMutator_SpecialEvent_SetAdditionalViewpoint_Params Parms{};

	Parms.WorldLocation = WorldLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SendToNightNight
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::SendToNightNight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "SendToNightNight");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResumeWinCondition
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::ResumeWinCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ResumeWinCondition");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetWinConditionProgressToZero
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::ResetWinConditionProgressToZero()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ResetWinConditionProgressToZero");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetWinCondition
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::ResetWinCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ResetWinCondition");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetSpecialEventAircraft
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::ResetSpecialEventAircraft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ResetSpecialEventAircraft");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetSafeZoneOverrideAfterEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              MinResetSafeZoneIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinDelayReturnToMainMenu                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDelayReturnToMainMenu                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::ResetSafeZoneOverrideAfterEvent(int32 MinResetSafeZoneIndex, float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ResetSafeZoneOverrideAfterEvent");

	Params::AFortAthenaMutator_SpecialEvent_ResetSafeZoneOverrideAfterEvent_Params Parms{};

	Parms.MinResetSafeZoneIndex = MinResetSafeZoneIndex;
	Parms.MinDelayReturnToMainMenu = MinDelayReturnToMainMenu;
	Parms.MaxDelayReturnToMainMenu = MaxDelayReturnToMainMenu;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetMatchTimeToPrevious
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::ResetMatchTimeToPrevious()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ResetMatchTimeToPrevious");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.RemoveFromBlockedNativeActions
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       Actions                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::RemoveFromBlockedNativeActions(struct FGameplayTagContainer& Actions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "RemoveFromBlockedNativeActions");

	Params::AFortAthenaMutator_SpecialEvent_RemoveFromBlockedNativeActions_Params Parms{};

	Parms.Actions = Actions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PushSpecialEventEmoteInputComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::PushSpecialEventEmoteInputComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "PushSpecialEventEmoteInputComponent");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PopSpecialEventEmoteInputComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::PopSpecialEventEmoteInputComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "PopSpecialEventEmoteInputComponent");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PlacePlayersInAircraft
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::PlacePlayersInAircraft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "PlacePlayersInAircraft");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseWinCondition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bLockScores                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::PauseWinCondition(bool bLockScores)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "PauseWinCondition");

	Params::AFortAthenaMutator_SpecialEvent_PauseWinCondition_Params Parms{};

	Parms.bLockScores = bLockScores;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseSupplyDrops
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bPause                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::PauseSupplyDrops(bool bPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "PauseSupplyDrops");

	Params::AFortAthenaMutator_SpecialEvent_PauseSupplyDrops_Params Parms{};

	Parms.bPause = bPause;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseStormProgression
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bPause                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::PauseStormProgression(bool bPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "PauseStormProgression");

	Params::AFortAthenaMutator_SpecialEvent_PauseStormProgression_Params Parms{};

	Parms.bPause = bPause;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseStormDamage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bPause                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::PauseStormDamage(bool bPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "PauseStormDamage");

	Params::AFortAthenaMutator_SpecialEvent_PauseStormDamage_Params Parms{};

	Parms.bPause = bPause;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnWarmUpTeleportComplete
// (Final, Native, Protected)
// Parameters:
// class AFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::OnWarmUpTeleportComplete(class AFortPlayerPawn* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnWarmUpTeleportComplete");

	Params::AFortAthenaMutator_SpecialEvent_OnWarmUpTeleportComplete_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_TerrainMapsToUnload
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_SpecialEvent::OnRep_TerrainMapsToUnload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_TerrainMapsToUnload");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_LastCSVEventName
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_SpecialEvent::OnRep_LastCSVEventName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_LastCSVEventName");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_GameResumed
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_SpecialEvent::OnRep_GameResumed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_GameResumed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_DelayPlayersFromReturningToLobbyData
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_SpecialEvent::OnRep_DelayPlayersFromReturningToLobbyData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_DelayPlayersFromReturningToLobbyData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bPlayersAreInvincible
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_SpecialEvent::OnRep_bPlayersAreInvincible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_bPlayersAreInvincible");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bLockingOnFocalPoint
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_SpecialEvent::OnRep_bLockingOnFocalPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_bLockingOnFocalPoint");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bDisableHUD
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_SpecialEvent::OnRep_bDisableHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_bDisableHUD");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bCanStreamBuildingFoundationsIn
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_SpecialEvent::OnRep_bCanStreamBuildingFoundationsIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_bCanStreamBuildingFoundationsIn");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_AllPlayerTeleportedCount
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_SpecialEvent::OnRep_AllPlayerTeleportedCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_AllPlayerTeleportedCount");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_Aircraft
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_SpecialEvent::OnRep_Aircraft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_Aircraft");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_AdditionalViewpoint
// (Final, Native, Protected)
// Parameters:

void AFortAthenaMutator_SpecialEvent::OnRep_AdditionalViewpoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnRep_AdditionalViewpoint");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnGameViewportActivationChanged
// (Final, Native, Public)
// Parameters:
// bool                               bHasFocus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::OnGameViewportActivationChanged(bool bHasFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnGameViewportActivationChanged");

	Params::AFortAthenaMutator_SpecialEvent_OnGameViewportActivationChanged_Params Parms{};

	Parms.bHasFocus = bHasFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnGamePhaseStepChanged
// (Final, Native, Protected, HasOutParams)
// Parameters:
// TScriptInterface<class IFortSafeZoneInterface>SafeZoneInterface                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAthenaGamePhaseStep    GamePhaseStep                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::OnGamePhaseStepChanged(TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnGamePhaseStepChanged");

	Params::AFortAthenaMutator_SpecialEvent_OnGamePhaseStepChanged_Params Parms{};

	Parms.SafeZoneInterface = SafeZoneInterface;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftFlightEnded
// (Final, Native, Protected)
// Parameters:
// class AFortAthenaAircraft*         FortAthenaAircraft                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::OnAircraftFlightEnded(class AFortAthenaAircraft* FortAthenaAircraft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnAircraftFlightEnded");

	Params::AFortAthenaMutator_SpecialEvent_OnAircraftFlightEnded_Params Parms{};

	Parms.FortAthenaAircraft = FortAthenaAircraft;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftExitedDropZone
// (Final, Native, Protected)
// Parameters:
// class AFortAthenaAircraft*         FortAthenaAircraft                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::OnAircraftExitedDropZone(class AFortAthenaAircraft* FortAthenaAircraft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnAircraftExitedDropZone");

	Params::AFortAthenaMutator_SpecialEvent_OnAircraftExitedDropZone_Params Parms{};

	Parms.FortAthenaAircraft = FortAthenaAircraft;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftEnteredDropZone
// (Final, Native, Protected)
// Parameters:
// class AFortAthenaAircraft*         FortAthenaAircraft                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::OnAircraftEnteredDropZone(class AFortAthenaAircraft* FortAthenaAircraft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnAircraftEnteredDropZone");

	Params::AFortAthenaMutator_SpecialEvent_OnAircraftEnteredDropZone_Params Parms{};

	Parms.FortAthenaAircraft = FortAthenaAircraft;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnActorSpawned
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::OnActorSpawned(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnActorSpawned");

	Params::AFortAthenaMutator_SpecialEvent_OnActorSpawned_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnActorPreSpawnInitialization
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::OnActorPreSpawnInitialization(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "OnActorPreSpawnInitialization");

	Params::AFortAthenaMutator_SpecialEvent_OnActorPreSpawnInitialization_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.NotifyClientsGameResumed
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::NotifyClientsGameResumed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "NotifyClientsGameResumed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.JumpToSafeZonePhase
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     PawnSpawnCenterLocation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PawnSpawnMinDistance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PawnSpawnMaxDistance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::JumpToSafeZonePhase(const struct FVector& PawnSpawnCenterLocation, float PawnSpawnMinDistance, float PawnSpawnMaxDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "JumpToSafeZonePhase");

	Params::AFortAthenaMutator_SpecialEvent_JumpToSafeZonePhase_Params Parms{};

	Parms.PawnSpawnCenterLocation = PawnSpawnCenterLocation;
	Parms.PawnSpawnMinDistance = PawnSpawnMinDistance;
	Parms.PawnSpawnMaxDistance = PawnSpawnMaxDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.GetScript
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ASpecialEventScript*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ASpecialEventScript* AFortAthenaMutator_SpecialEvent::GetScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "GetScript");

	Params::AFortAthenaMutator_SpecialEvent_GetScript_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.GetHasInfiniteSafeZonePhase
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaMutator_SpecialEvent::GetHasInfiniteSafeZonePhase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "GetHasInfiniteSafeZonePhase");

	Params::AFortAthenaMutator_SpecialEvent_GetHasInfiniteSafeZonePhase_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ForceSafeZoneFinalLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     NewFinalLocation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DefaultAircraftOffsetFromMidLine                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinDefaultMidlineAngle                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDefaultMidlineAngle                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::ForceSafeZoneFinalLocation(const struct FVector& NewFinalLocation, float DefaultAircraftOffsetFromMidLine, float MinDefaultMidlineAngle, float MaxDefaultMidlineAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ForceSafeZoneFinalLocation");

	Params::AFortAthenaMutator_SpecialEvent_ForceSafeZoneFinalLocation_Params Parms{};

	Parms.NewFinalLocation = NewFinalLocation;
	Parms.DefaultAircraftOffsetFromMidLine = DefaultAircraftOffsetFromMidLine;
	Parms.MinDefaultMidlineAngle = MinDefaultMidlineAngle;
	Parms.MaxDefaultMidlineAngle = MaxDefaultMidlineAngle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.FlushUnhandledPlayerControllers
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::FlushUnhandledPlayerControllers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "FlushUnhandledPlayerControllers");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.CloseParachutes
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::CloseParachutes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "CloseParachutes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ClearBlockedNativeActions
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::ClearBlockedNativeActions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ClearBlockedNativeActions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ClearAdditionalViewpoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::ClearAdditionalViewpoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ClearAdditionalViewpoint");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ChangeWinCondition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewGoalScore                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::ChangeWinCondition(float NewGoalScore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "ChangeWinCondition");

	Params::AFortAthenaMutator_SpecialEvent_ChangeWinCondition_Params Parms{};

	Parms.NewGoalScore = NewGoalScore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AutobalanceTargetScore
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaMutator_SpecialEvent::AutobalanceTargetScore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "AutobalanceTargetScore");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddToBlockedNativeActions
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       Actions                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bCancelAbilities                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::AddToBlockedNativeActions(struct FGameplayTagContainer& Actions, bool bCancelAbilities)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "AddToBlockedNativeActions");

	Params::AFortAthenaMutator_SpecialEvent_AddToBlockedNativeActions_Params Parms{};

	Parms.Actions = Actions;
	Parms.bCancelAbilities = bCancelAbilities;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddCSVEvent
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      CSVEventName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldRepToClient                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::AddCSVEvent(const class FString& CSVEventName, bool bShouldRepToClient)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "AddCSVEvent");

	Params::AFortAthenaMutator_SpecialEvent_AddCSVEvent_Params Parms{};

	Parms.CSVEventName = CSVEventName;
	Parms.bShouldRepToClient = bShouldRepToClient;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddClientCSVEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      CSVEventName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_SpecialEvent::AddClientCSVEvent(const class FString& CSVEventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_SpecialEvent", "AddClientCSVEvent");

	Params::AFortAthenaMutator_SpecialEvent_AddClientCSVEvent_Params Parms{};

	Parms.CSVEventName = CSVEventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent
// (None)

class UClass* UFortCharacterMovementMutatorComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCharacterMovementMutatorComponent");

	return Clss;
}


// FortCharacterMovementMutatorComponent SpecialEventGameplayRuntime.Default__FortCharacterMovementMutatorComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCharacterMovementMutatorComponent* UFortCharacterMovementMutatorComponent::GetDefaultObj()
{
	static class UFortCharacterMovementMutatorComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCharacterMovementMutatorComponent*>(UFortCharacterMovementMutatorComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesIntroTargetTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  Transform                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UFortCharacterMovementMutatorComponent::SetBuffetBubblesIntroTargetTransform(struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "SetBuffetBubblesIntroTargetTransform");

	Params::UFortCharacterMovementMutatorComponent_SetBuffetBubblesIntroTargetTransform_Params Parms{};

	Parms.Transform = Transform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesInitialFollowBoxOffsetPercent
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     BoxOffsetPercent                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCharacterMovementMutatorComponent::SetBuffetBubblesInitialFollowBoxOffsetPercent(const struct FVector& BoxOffsetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "SetBuffetBubblesInitialFollowBoxOffsetPercent");

	Params::UFortCharacterMovementMutatorComponent_SetBuffetBubblesInitialFollowBoxOffsetPercent_Params Parms{};

	Parms.BoxOffsetPercent = BoxOffsetPercent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesFollowActor
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCharacterMovementMutatorComponent::SetBuffetBubblesFollowActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "SetBuffetBubblesFollowActor");

	Params::UFortCharacterMovementMutatorComponent_SetBuffetBubblesFollowActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OverrideBuffetFlyingVelocityDirectionInterpSpeed
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAsMultiplier                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCharacterMovementMutatorComponent::OverrideBuffetFlyingVelocityDirectionInterpSpeed(float Value, bool bAsMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "OverrideBuffetFlyingVelocityDirectionInterpSpeed");

	Params::UFortCharacterMovementMutatorComponent_OverrideBuffetFlyingVelocityDirectionInterpSpeed_Params Parms{};

	Parms.Value = Value;
	Parms.bAsMultiplier = bAsMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OverrideBuffetFlyingMaxSpeed
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAsMultiplier                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpSpeed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCharacterMovementMutatorComponent::OverrideBuffetFlyingMaxSpeed(float Value, bool bAsMultiplier, float InterpSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "OverrideBuffetFlyingMaxSpeed");

	Params::UFortCharacterMovementMutatorComponent_OverrideBuffetFlyingMaxSpeed_Params Parms{};

	Parms.Value = Value;
	Parms.bAsMultiplier = bAsMultiplier;
	Parms.InterpSpeed = InterpSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnRep_BuffetFlyingRicochetReplicatedData
// (Final, Native, Private)
// Parameters:

void UFortCharacterMovementMutatorComponent::OnRep_BuffetFlyingRicochetReplicatedData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "OnRep_BuffetFlyingRicochetReplicatedData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnRep_BuffetBubblesFollowActor
// (Final, Native, Protected)
// Parameters:

void UFortCharacterMovementMutatorComponent::OnRep_BuffetBubblesFollowActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "OnRep_BuffetBubblesFollowActor");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnMovementModeChanged
// (Final, Native, Private)
// Parameters:
// class ACharacter*                  Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PreviousMovementMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCharacterMovementMutatorComponent::OnMovementModeChanged(class ACharacter* Character, enum class EMovementMode PreviousMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCharacterMovementMutatorComponent", "OnMovementModeChanged");

	Params::UFortCharacterMovementMutatorComponent_OnMovementModeChanged_Params Parms{};

	Parms.Character = Character;
	Parms.PreviousMovementMode = PreviousMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortCharacterMovementMutator
// (Actor)

class UClass* AFortCharacterMovementMutator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCharacterMovementMutator");

	return Clss;
}


// FortCharacterMovementMutator SpecialEventGameplayRuntime.Default__FortCharacterMovementMutator
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortCharacterMovementMutator* AFortCharacterMovementMutator::GetDefaultObj()
{
	static class AFortCharacterMovementMutator* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortCharacterMovementMutator*>(AFortCharacterMovementMutator::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortCharacterMovementMutator.OnFortPawnChanged
// (Final, Native, Protected)
// Parameters:
// class AFortPawn*                   NewPawn                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortCharacterMovementMutator::OnFortPawnChanged(class AFortPawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCharacterMovementMutator", "OnFortPawnChanged");

	Params::AFortCharacterMovementMutator_OnFortPawnChanged_Params Parms{};

	Parms.NewPawn = NewPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic
// (None)

class UClass* UFortControllerComponent_GameplayCinematic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortControllerComponent_GameplayCinematic");

	return Clss;
}


// FortControllerComponent_GameplayCinematic SpecialEventGameplayRuntime.Default__FortControllerComponent_GameplayCinematic
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortControllerComponent_GameplayCinematic* UFortControllerComponent_GameplayCinematic::GetDefaultObj()
{
	static class UFortControllerComponent_GameplayCinematic* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortControllerComponent_GameplayCinematic*>(UFortControllerComponent_GameplayCinematic::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.ShowCinematicWidget
// (Final, BlueprintCosmetic, Exec, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        WidgetName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_GameplayCinematic::ShowCinematicWidget(class FName WidgetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_GameplayCinematic", "ShowCinematicWidget");

	Params::UFortControllerComponent_GameplayCinematic_ShowCinematicWidget_Params Parms{};

	Parms.WidgetName = WidgetName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.SetReadyForGameplay
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsReady                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_GameplayCinematic::SetReadyForGameplay(bool bIsReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_GameplayCinematic", "SetReadyForGameplay");

	Params::UFortControllerComponent_GameplayCinematic_SetReadyForGameplay_Params Parms{};

	Parms.bIsReady = bIsReady;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.ServerOnGameplayIntroFinished
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:

void UFortControllerComponent_GameplayCinematic::ServerOnGameplayIntroFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_GameplayCinematic", "ServerOnGameplayIntroFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.OnRep_bIsReadyForGameplay
// (Final, Native, Protected)
// Parameters:

void UFortControllerComponent_GameplayCinematic::OnRep_bIsReadyForGameplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_GameplayCinematic", "OnRep_bIsReadyForGameplay");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.HideHUDElementsForLoadingScreen
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bHideElements                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_GameplayCinematic::HideHUDElementsForLoadingScreen(bool bHideElements)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_GameplayCinematic", "HideHUDElementsForLoadingScreen");

	Params::UFortControllerComponent_GameplayCinematic_HideHUDElementsForLoadingScreen_Params Parms{};

	Parms.bHideElements = bHideElements;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent
// (None)

class UClass* UFortControllerComponent_SpecialEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortControllerComponent_SpecialEvent");

	return Clss;
}


// FortControllerComponent_SpecialEvent SpecialEventGameplayRuntime.Default__FortControllerComponent_SpecialEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortControllerComponent_SpecialEvent* UFortControllerComponent_SpecialEvent::GetDefaultObj()
{
	static class UFortControllerComponent_SpecialEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortControllerComponent_SpecialEvent*>(UFortControllerComponent_SpecialEvent::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent.ServerHandleSpecialClientEvent
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// struct FGameplayTag                EventTag                                                         (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_SpecialEvent::ServerHandleSpecialClientEvent(struct FGameplayTag& EventTag, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_SpecialEvent", "ServerHandleSpecialClientEvent");

	Params::UFortControllerComponent_SpecialEvent_ServerHandleSpecialClientEvent_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent.SendSpecialClientEvent
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                EventTag                                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_SpecialEvent::SendSpecialClientEvent(const struct FGameplayTag& EventTag, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_SpecialEvent", "SendSpecialClientEvent");

	Params::UFortControllerComponent_SpecialEvent_SendSpecialClientEvent_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortSpecialRelevancyActorSpawner
// (Actor)

class UClass* AFortSpecialRelevancyActorSpawner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSpecialRelevancyActorSpawner");

	return Clss;
}


// FortSpecialRelevancyActorSpawner SpecialEventGameplayRuntime.Default__FortSpecialRelevancyActorSpawner
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortSpecialRelevancyActorSpawner* AFortSpecialRelevancyActorSpawner::GetDefaultObj()
{
	static class AFortSpecialRelevancyActorSpawner* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortSpecialRelevancyActorSpawner*>(AFortSpecialRelevancyActorSpawner::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortSpecialRelevancyActorSpawner.BP_OnActorSpawnedPerRelevancyGroup
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              InSpawnedActors                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void AFortSpecialRelevancyActorSpawner::BP_OnActorSpawnedPerRelevancyGroup(TArray<class AActor*>& InSpawnedActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSpecialRelevancyActorSpawner", "BP_OnActorSpawnedPerRelevancyGroup");

	Params::AFortSpecialRelevancyActorSpawner_BP_OnActorSpawnedPerRelevancyGroup_Params Parms{};

	Parms.InSpawnedActors = InSpawnedActors;

	UObject::ProcessEvent(Func, &Parms);

}


// Class SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent
// (None)

class UClass* USpecialEventAudioAnalysisBaseComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventAudioAnalysisBaseComponent");

	return Clss;
}


// SpecialEventAudioAnalysisBaseComponent SpecialEventGameplayRuntime.Default__SpecialEventAudioAnalysisBaseComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialEventAudioAnalysisBaseComponent* USpecialEventAudioAnalysisBaseComponent::GetDefaultObj()
{
	static class USpecialEventAudioAnalysisBaseComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventAudioAnalysisBaseComponent*>(USpecialEventAudioAnalysisBaseComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateTime
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewTime                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventAudioAnalysisBaseComponent::UpdateTime(float NewTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "UpdateTime");

	Params::USpecialEventAudioAnalysisBaseComponent_UpdateTime_Params Parms{};

	Parms.NewTime = NewTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateOnset
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventAudioAnalysisBaseComponent::UpdateOnset(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "UpdateOnset");

	Params::USpecialEventAudioAnalysisBaseComponent_UpdateOnset_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateLoudness
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventAudioAnalysisBaseComponent::UpdateLoudness(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "UpdateLoudness");

	Params::USpecialEventAudioAnalysisBaseComponent_UpdateLoudness_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateConstantQ
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventAudioAnalysisBaseComponent::UpdateConstantQ(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "UpdateConstantQ");

	Params::USpecialEventAudioAnalysisBaseComponent_UpdateConstantQ_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetOnsetNRT
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UOnsetNRT*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOnsetNRT* USpecialEventAudioAnalysisBaseComponent::GetOnsetNRT()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "GetOnsetNRT");

	Params::USpecialEventAudioAnalysisBaseComponent_GetOnsetNRT_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetLoudnessNRT
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULoudnessNRT*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULoudnessNRT* USpecialEventAudioAnalysisBaseComponent::GetLoudnessNRT()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "GetLoudnessNRT");

	Params::USpecialEventAudioAnalysisBaseComponent_GetLoudnessNRT_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetCurrentNormalizedLoudness
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpecialEventAudioAnalysisBaseComponent::GetCurrentNormalizedLoudness()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "GetCurrentNormalizedLoudness");

	Params::USpecialEventAudioAnalysisBaseComponent_GetCurrentNormalizedLoudness_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetConstantQNRT
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UConstantQNRT*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UConstantQNRT* USpecialEventAudioAnalysisBaseComponent::GetConstantQNRT()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAudioAnalysisBaseComponent", "GetConstantQNRT");

	Params::USpecialEventAudioAnalysisBaseComponent_GetConstantQNRT_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent
// (None)

class UClass* USpecialEventAudioHapticsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventAudioHapticsComponent");

	return Clss;
}


// SpecialEventAudioHapticsComponent SpecialEventGameplayRuntime.Default__SpecialEventAudioHapticsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialEventAudioHapticsComponent* USpecialEventAudioHapticsComponent::GetDefaultObj()
{
	static class USpecialEventAudioHapticsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventAudioHapticsComponent*>(USpecialEventAudioHapticsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.StopHaptics
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpecialEventAudioHapticsComponent::StopHaptics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAudioHapticsComponent", "StopHaptics");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.StartHaptics
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpecialEventAudioHapticsComponent::StartHaptics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAudioHapticsComponent", "StartHaptics");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.AreHapticsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventAudioHapticsComponent::AreHapticsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventAudioHapticsComponent", "AreHapticsActive");

	Params::USpecialEventAudioHapticsComponent_AreHapticsActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SpecialEventGameplayRuntime.SpecialEventGameplayGlobals
// (None)

class UClass* USpecialEventGameplayGlobals::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventGameplayGlobals");

	return Clss;
}


// SpecialEventGameplayGlobals SpecialEventGameplayRuntime.Default__SpecialEventGameplayGlobals
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialEventGameplayGlobals* USpecialEventGameplayGlobals::GetDefaultObj()
{
	static class USpecialEventGameplayGlobals* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventGameplayGlobals*>(USpecialEventGameplayGlobals::StaticClass()->DefaultObject);

	return Default;
}


// Class SpecialEventGameplayRuntime.SpecialEventGameplayLibrary
// (None)

class UClass* USpecialEventGameplayLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventGameplayLibrary");

	return Clss;
}


// SpecialEventGameplayLibrary SpecialEventGameplayRuntime.Default__SpecialEventGameplayLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialEventGameplayLibrary* USpecialEventGameplayLibrary::GetDefaultObj()
{
	static class USpecialEventGameplayLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventGameplayLibrary*>(USpecialEventGameplayLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.StreamOutAllBuildingFoundations
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::StreamOutAllBuildingFoundations(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "StreamOutAllBuildingFoundations");

	Params::USpecialEventGameplayLibrary_StreamOutAllBuildingFoundations_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.SetNextLoadingScreen
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAthenaLoadingScreenItemDefinition*LoadingScreenDefinition                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCanShowLoadingBar                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::SetNextLoadingScreen(class UObject* WorldContextObject, class UAthenaLoadingScreenItemDefinition* LoadingScreenDefinition, bool bCanShowLoadingBar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "SetNextLoadingScreen");

	Params::USpecialEventGameplayLibrary_SetNextLoadingScreen_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LoadingScreenDefinition = LoadingScreenDefinition;
	Parms.bCanShowLoadingBar = bCanShowLoadingBar;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.HideSkydivingShadowProxy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::HideSkydivingShadowProxy(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "HideSkydivingShadowProxy");

	Params::USpecialEventGameplayLibrary_HideSkydivingShadowProxy_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventScript
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ASpecialEventScript*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ASpecialEventScript* USpecialEventGameplayLibrary::GetSpecialEventScript(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "GetSpecialEventScript");

	Params::USpecialEventGameplayLibrary_GetSpecialEventScript_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventPlayerDisplayName
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerControllerAthena* LocalController                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerStateAthena*      PlayerState                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USpecialEventGameplayLibrary::GetSpecialEventPlayerDisplayName(class AFortPlayerControllerAthena* LocalController, class AFortPlayerStateAthena* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "GetSpecialEventPlayerDisplayName");

	Params::USpecialEventGameplayLibrary_GetSpecialEventPlayerDisplayName_Params Parms{};

	Parms.LocalController = LocalController;
	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventMutator
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortAthenaMutator_SpecialEvent*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFortAthenaMutator_SpecialEvent* USpecialEventGameplayLibrary::GetSpecialEventMutator(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "GetSpecialEventMutator");

	Params::USpecialEventGameplayLibrary_GetSpecialEventMutator_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetLocalPlayerLoadout
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortAthenaLoadout          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FFortAthenaLoadout USpecialEventGameplayLibrary::GetLocalPlayerLoadout(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "GetLocalPlayerLoadout");

	Params::USpecialEventGameplayLibrary_GetLocalPlayerLoadout_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetHasInfiniteSafeZonePhase
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpecialEventGameplayLibrary::GetHasInfiniteSafeZonePhase(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "GetHasInfiniteSafeZonePhase");

	Params::USpecialEventGameplayLibrary_GetHasInfiniteSafeZonePhase_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.ForceUpdateGrass
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::ForceUpdateGrass(class UObject* WorldContextObject, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "ForceUpdateGrass");

	Params::USpecialEventGameplayLibrary_ForceUpdateGrass_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.ForceDestroyComponents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UActorComponent*>     Components                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bPromoteChildren                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      LogContext                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::ForceDestroyComponents(TArray<class UActorComponent*>& Components, bool bPromoteChildren, const class FString& LogContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "ForceDestroyComponents");

	Params::USpecialEventGameplayLibrary_ForceDestroyComponents_Params Parms{};

	Parms.Components = Components;
	Parms.bPromoteChildren = bPromoteChildren;
	Parms.LogContext = LogContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.FindSpecialEventComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AController*                 Controller                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortControllerComponent_SpecialEvent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortControllerComponent_SpecialEvent* USpecialEventGameplayLibrary::FindSpecialEventComponent(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "FindSpecialEventComponent");

	Params::USpecialEventGameplayLibrary_FindSpecialEventComponent_Params Parms{};

	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.FindGameplayCinematicComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AController*                 Controller                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortControllerComponent_GameplayCinematic*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortControllerComponent_GameplayCinematic* USpecialEventGameplayLibrary::FindGameplayCinematicComponent(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "FindGameplayCinematicComponent");

	Params::USpecialEventGameplayLibrary_FindGameplayCinematicComponent_Params Parms{};

	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.CreateSpecialEventPlayerEliminationWorldMarker
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AFortPlayerControllerAthena* LocalController                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerStateAthena*      VictimPlayerState                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     DeathLocation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::CreateSpecialEventPlayerEliminationWorldMarker(class AFortPlayerControllerAthena* LocalController, class AFortPlayerStateAthena* VictimPlayerState, struct FVector& DeathLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "CreateSpecialEventPlayerEliminationWorldMarker");

	Params::USpecialEventGameplayLibrary_CreateSpecialEventPlayerEliminationWorldMarker_Params Parms{};

	Parms.LocalController = LocalController;
	Parms.VictimPlayerState = VictimPlayerState;
	Parms.DeathLocation = DeathLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.AddSpecialEventRecentElimination
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerStateAthena*      PlayerState                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::AddSpecialEventRecentElimination(struct FVector& Location, class AFortPlayerStateAthena* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "AddSpecialEventRecentElimination");

	Params::USpecialEventGameplayLibrary_AddSpecialEventRecentElimination_Params Parms{};

	Parms.Location = Location;
	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.AddSpecialEventKillFeedEntry
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerStateAthena*      VictimPlayerState                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerStateAthena*      KillerPlayerState                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        NonPlayerVictimName                                              (ConstParm, Parm, NativeAccessSpecifierPublic)
// class FText                        NonPlayerKillerName                                              (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FGameplayTag                DeathCauseTag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDeathCauseReason       DeathCauseReason                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Distance                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventGameplayLibrary::AddSpecialEventKillFeedEntry(class UObject* WorldContextObject, class AFortPlayerStateAthena* VictimPlayerState, class AFortPlayerStateAthena* KillerPlayerState, class FText NonPlayerVictimName, class FText NonPlayerKillerName, struct FGameplayTag& DeathCauseTag, enum class EDeathCauseReason DeathCauseReason, float Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventGameplayLibrary", "AddSpecialEventKillFeedEntry");

	Params::USpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.VictimPlayerState = VictimPlayerState;
	Parms.KillerPlayerState = KillerPlayerState;
	Parms.NonPlayerVictimName = NonPlayerVictimName;
	Parms.NonPlayerKillerName = NonPlayerKillerName;
	Parms.DeathCauseTag = DeathCauseTag;
	Parms.DeathCauseReason = DeathCauseReason;
	Parms.Distance = Distance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady
// (None)

class UClass* UFortAsyncAction_GameplayCinematicComponentReady::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAsyncAction_GameplayCinematicComponentReady");

	return Clss;
}


// FortAsyncAction_GameplayCinematicComponentReady SpecialEventGameplayRuntime.Default__FortAsyncAction_GameplayCinematicComponentReady
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAsyncAction_GameplayCinematicComponentReady* UFortAsyncAction_GameplayCinematicComponentReady::GetDefaultObj()
{
	static class UFortAsyncAction_GameplayCinematicComponentReady* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAsyncAction_GameplayCinematicComponentReady*>(UFortAsyncAction_GameplayCinematicComponentReady::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady.FindGameplayCinematicComponentAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AController*                 Conroller                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAsyncAction_GameplayCinematicComponentReady*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAsyncAction_GameplayCinematicComponentReady* UFortAsyncAction_GameplayCinematicComponentReady::FindGameplayCinematicComponentAsync(class AController* Conroller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAsyncAction_GameplayCinematicComponentReady", "FindGameplayCinematicComponentAsync");

	Params::UFortAsyncAction_GameplayCinematicComponentReady_FindGameplayCinematicComponentAsync_Params Parms{};

	Parms.Conroller = Conroller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SpecialEventGameplayRuntime.SpecialEventPhase
// (Actor)

class UClass* ASpecialEventPhase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventPhase");

	return Clss;
}


// SpecialEventPhase SpecialEventGameplayRuntime.Default__SpecialEventPhase
// (Public, ClassDefaultObject, ArchetypeObject)

class ASpecialEventPhase* ASpecialEventPhase::GetDefaultObj()
{
	static class ASpecialEventPhase* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpecialEventPhase*>(ASpecialEventPhase::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.SetHUDElementVisibility
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       HUDElementTags                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bHideElements                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASpecialEventPhase::SetHUDElementVisibility(struct FGameplayTagContainer& HUDElementTags, bool bHideElements)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPhase", "SetHUDElementVisibility");

	Params::ASpecialEventPhase_SetHUDElementVisibility_Params Parms{};

	Parms.HUDElementTags = HUDElementTags;
	Parms.bHideElements = bHideElements;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.PrePhaseActivation_Server
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpecialEventPhase::PrePhaseActivation_Server()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPhase", "PrePhaseActivation_Server");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnRep_PhaseState
// (Final, Native, Protected)
// Parameters:

void ASpecialEventPhase::OnRep_PhaseState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPhase", "OnRep_PhaseState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseFinished
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void ASpecialEventPhase::OnPhaseFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPhase", "OnPhaseFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseDeactivation_Server
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpecialEventPhase::OnPhaseDeactivation_Server()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPhase", "OnPhaseDeactivation_Server");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseDeactivation_Client
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpecialEventPhase::OnPhaseDeactivation_Client()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPhase", "OnPhaseDeactivation_Client");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseActivation_Server
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpecialEventPhase::OnPhaseActivation_Server()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPhase", "OnPhaseActivation_Server");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseActivation_Client
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpecialEventPhase::OnPhaseActivation_Client()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPhase", "OnPhaseActivation_Client");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.GetPhaseTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag ASpecialEventPhase::GetPhaseTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPhase", "GetPhaseTag");

	Params::ASpecialEventPhase_GetPhaseTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayRuntime.SpecialEventPhase.DebugActivatePhase
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void ASpecialEventPhase::DebugActivatePhase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPhase", "DebugActivatePhase");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.SpecialEventScript
// (Actor)

class UClass* ASpecialEventScript::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventScript");

	return Clss;
}


// SpecialEventScript SpecialEventGameplayRuntime.Default__SpecialEventScript
// (Public, ClassDefaultObject, ArchetypeObject)

class ASpecialEventScript* ASpecialEventScript::GetDefaultObj()
{
	static class ASpecialEventScript* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpecialEventScript*>(ASpecialEventScript::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.SpecialEventScript.UpdateMasterSequence
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASpecialEventScript::UpdateMasterSequence(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScript", "UpdateMasterSequence");

	Params::ASpecialEventScript_UpdateMasterSequence_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventScript.StartEventAtIndex
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InStartingIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASpecialEventScript::StartEventAtIndex(int32 InStartingIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScript", "StartEventAtIndex");

	Params::ASpecialEventScript_StartEventAtIndex_Params Parms{};

	Parms.InStartingIndex = InStartingIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventScript.OnRep_ReplicatedActivePhaseIndex
// (Final, Native, Protected)
// Parameters:

void ASpecialEventScript::OnRep_ReplicatedActivePhaseIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScript", "OnRep_ReplicatedActivePhaseIndex");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventScript.BP_OnScriptReady
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpecialEventScript::BP_OnScriptReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScript", "BP_OnScriptReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpecialEventGameplayRuntime.SpecialEventScript.BP_OnScriptFinished
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpecialEventScript::BP_OnScriptFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScript", "BP_OnScriptFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpecialEventGameplayRuntime.SpecialEventScript.AttemptStartNextPhase
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                CurrentPhaseTag                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASpecialEventScript::AttemptStartNextPhase(const struct FGameplayTag& CurrentPhaseTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScript", "AttemptStartNextPhase");

	Params::ASpecialEventScript_AttemptStartNextPhase_Params Parms{};

	Parms.CurrentPhaseTag = CurrentPhaseTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventScript.AttemptFinishPhase
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                PhaseTag                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASpecialEventScript::AttemptFinishPhase(const struct FGameplayTag& PhaseTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScript", "AttemptFinishPhase");

	Params::ASpecialEventScript_AttemptFinishPhase_Params Parms{};

	Parms.PhaseTag = PhaseTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayRuntime.SpecialEventScriptMeshActor
// (Actor)

class UClass* ASpecialEventScriptMeshActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventScriptMeshActor");

	return Clss;
}


// SpecialEventScriptMeshActor SpecialEventGameplayRuntime.Default__SpecialEventScriptMeshActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ASpecialEventScriptMeshActor* ASpecialEventScriptMeshActor::GetDefaultObj()
{
	static class ASpecialEventScriptMeshActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpecialEventScriptMeshActor*>(ASpecialEventScriptMeshActor::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.OnRep_RootStartTime
// (Final, Native, Protected)
// Parameters:

void ASpecialEventScriptMeshActor::OnRep_RootStartTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScriptMeshActor", "OnRep_RootStartTime");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartEvent
// (Final, Exec, Native, Public)
// Parameters:

void ASpecialEventScriptMeshActor::MeshRootStartEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScriptMeshActor", "MeshRootStartEvent");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootResetEvent
// (Final, Exec, Native, Public)
// Parameters:

void ASpecialEventScriptMeshActor::MeshRootResetEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventScriptMeshActor", "MeshRootResetEvent");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


