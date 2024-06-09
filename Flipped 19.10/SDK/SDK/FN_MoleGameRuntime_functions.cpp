#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MoleGameRuntime.FortCinematicComponent
// (None)

class UClass* UFortCinematicComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCinematicComponent");

	return Clss;
}


// FortCinematicComponent MoleGameRuntime.Default__FortCinematicComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCinematicComponent* UFortCinematicComponent::GetDefaultObj()
{
	static class UFortCinematicComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCinematicComponent*>(UFortCinematicComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.FortCinematicComponent.RemoveCinematicState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                StateId                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCinematicComponent::RemoveCinematicState(struct FGameplayTag& StateId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCinematicComponent", "RemoveCinematicState");

	Params::UFortCinematicComponent_RemoveCinematicState_Params Parms{};

	Parms.StateId = StateId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.FortCinematicComponent.PushCinematicState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFortCinematicState         InState                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortCinematicComponent::PushCinematicState(struct FFortCinematicState& InState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCinematicComponent", "PushCinematicState");

	Params::UFortCinematicComponent_PushCinematicState_Params Parms{};

	Parms.InState = InState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.FortCinematicComponent.IsCinematicStateActive
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                StateTag                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortCinematicComponent::IsCinematicStateActive(struct FGameplayTag& StateTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCinematicComponent", "IsCinematicStateActive");

	Params::UFortCinematicComponent_IsCinematicStateActive_Params Parms{};

	Parms.StateTag = StateTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.FortCinematicComponent.FadeToBlackscreen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFadeTime                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInHold                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCinematicComponent::FadeToBlackscreen(float InFadeTime, bool bInHold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCinematicComponent", "FadeToBlackscreen");

	Params::UFortCinematicComponent_FadeToBlackscreen_Params Parms{};

	Parms.InFadeTime = InFadeTime;
	Parms.bInHold = bInHold;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.FortCinematicComponent.FadeFromBlackscreen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFadeTime                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCinematicComponent::FadeFromBlackscreen(float InFadeTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCinematicComponent", "FadeFromBlackscreen");

	Params::UFortCinematicComponent_FadeFromBlackscreen_Params Parms{};

	Parms.InFadeTime = InFadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.FortCinematicComponent.CancelBlackscreen
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortCinematicComponent::CancelBlackscreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCinematicComponent", "CancelBlackscreen");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MoleGameRuntime.MoleAFKComponent
// (None)

class UClass* UMoleAFKComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleAFKComponent");

	return Clss;
}


// MoleAFKComponent MoleGameRuntime.Default__MoleAFKComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleAFKComponent* UMoleAFKComponent::GetDefaultObj()
{
	static class UMoleAFKComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleAFKComponent*>(UMoleAFKComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleAFKComponent.OnPlayerLeftPOI
// (Final, Native, Protected)
// Parameters:
// class AActor*                      OverlapingVolume                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      EnteringActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleAFKComponent::OnPlayerLeftPOI(class AActor* OverlapingVolume, class AActor* EnteringActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleAFKComponent", "OnPlayerLeftPOI");

	Params::UMoleAFKComponent_OnPlayerLeftPOI_Params Parms{};

	Parms.OverlapingVolume = OverlapingVolume;
	Parms.EnteringActor = EnteringActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleAFKComponent.OnPlayerEnteredPOI
// (Final, Native, Protected)
// Parameters:
// class AActor*                      OverlapingVolume                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      EnteringActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleAFKComponent::OnPlayerEnteredPOI(class AActor* OverlapingVolume, class AActor* EnteringActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleAFKComponent", "OnPlayerEnteredPOI");

	Params::UMoleAFKComponent_OnPlayerEnteredPOI_Params Parms{};

	Parms.OverlapingVolume = OverlapingVolume;
	Parms.EnteringActor = EnteringActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleAFKComponent.IsPlayerAFK
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerState*                Player                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoleAFKComponent::IsPlayerAFK(class APlayerState* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleAFKComponent", "IsPlayerAFK");

	Params::UMoleAFKComponent_IsPlayerAFK_Params Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleAFKComponent.IsControllerAFK
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerController*       FortPC                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoleAFKComponent::IsControllerAFK(class AFortPlayerController* FortPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleAFKComponent", "IsControllerAFK");

	Params::UMoleAFKComponent_IsControllerAFK_Params Parms{};

	Parms.FortPC = FortPC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleAFKComponent.HasEverBeenAFKForTooLong
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerController*       FortPC                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoleAFKComponent::HasEverBeenAFKForTooLong(class AFortPlayerController* FortPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleAFKComponent", "HasEverBeenAFKForTooLong");

	Params::UMoleAFKComponent_HasEverBeenAFKForTooLong_Params Parms{};

	Parms.FortPC = FortPC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleAFKComponent.HasEverBeenAFK
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerController*       FortPC                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoleAFKComponent::HasEverBeenAFK(class AFortPlayerController* FortPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleAFKComponent", "HasEverBeenAFK");

	Params::UMoleAFKComponent_HasEverBeenAFK_Params Parms{};

	Parms.FortPC = FortPC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MoleGameRuntime.MoleAnalyticsComponent
// (None)

class UClass* UMoleAnalyticsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleAnalyticsComponent");

	return Clss;
}


// MoleAnalyticsComponent MoleGameRuntime.Default__MoleAnalyticsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleAnalyticsComponent* UMoleAnalyticsComponent::GetDefaultObj()
{
	static class UMoleAnalyticsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleAnalyticsComponent*>(UMoleAnalyticsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleAssetManagerComponent
// (None)

class UClass* UMoleAssetManagerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleAssetManagerComponent");

	return Clss;
}


// MoleAssetManagerComponent MoleGameRuntime.Default__MoleAssetManagerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleAssetManagerComponent* UMoleAssetManagerComponent::GetDefaultObj()
{
	static class UMoleAssetManagerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleAssetManagerComponent*>(UMoleAssetManagerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleAudioManagerComponent
// (None)

class UClass* UMoleAudioManagerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleAudioManagerComponent");

	return Clss;
}


// MoleAudioManagerComponent MoleGameRuntime.Default__MoleAudioManagerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleAudioManagerComponent* UMoleAudioManagerComponent::GetDefaultObj()
{
	static class UMoleAudioManagerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleAudioManagerComponent*>(UMoleAudioManagerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleCheatManager
// (None)

class UClass* UMoleCheatManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleCheatManager");

	return Clss;
}


// MoleCheatManager MoleGameRuntime.Default__MoleCheatManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleCheatManager* UMoleCheatManager::GetDefaultObj()
{
	static class UMoleCheatManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleCheatManager*>(UMoleCheatManager::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleCheatManager.SpawnMoleBots
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// int32                              NumBotsToSpawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleCheatManager::SpawnMoleBots(int32 NumBotsToSpawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleCheatManager", "SpawnMoleBots");

	Params::UMoleCheatManager_SpawnMoleBots_Params Parms{};

	Parms.NumBotsToSpawn = NumBotsToSpawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleCheatManager.SkipLobbyBackfillLogic
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UMoleCheatManager::SkipLobbyBackfillLogic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleCheatManager", "SkipLobbyBackfillLogic");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleCheatManager.MoleShowImpostorBias
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UMoleCheatManager::MoleShowImpostorBias()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleCheatManager", "MoleShowImpostorBias");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleCheatManager.MoleRequestSaboteur
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UMoleCheatManager::MoleRequestSaboteur()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleCheatManager", "MoleRequestSaboteur");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleCheatManager.MoleRecoverFromAFK
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UMoleCheatManager::MoleRecoverFromAFK()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleCheatManager", "MoleRecoverFromAFK");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleCheatManager.MoleInterruptSelfTasks
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UMoleCheatManager::MoleInterruptSelfTasks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleCheatManager", "MoleInterruptSelfTasks");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleCheatManager.MoleInterruptAllTasks
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UMoleCheatManager::MoleInterruptAllTasks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleCheatManager", "MoleInterruptAllTasks");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleCheatManager.MoleEnableSelfTasks
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UMoleCheatManager::MoleEnableSelfTasks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleCheatManager", "MoleEnableSelfTasks");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleCheatManager.MoleEnableAllTasks
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UMoleCheatManager::MoleEnableAllTasks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleCheatManager", "MoleEnableAllTasks");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleCheatManager.MoleDisableSelfTasks
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UMoleCheatManager::MoleDisableSelfTasks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleCheatManager", "MoleDisableSelfTasks");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleCheatManager.MoleDisableAllTasks
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UMoleCheatManager::MoleDisableAllTasks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleCheatManager", "MoleDisableAllTasks");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleCheatManager.MoleClearRequestSaboteur
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UMoleCheatManager::MoleClearRequestSaboteur()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleCheatManager", "MoleClearRequestSaboteur");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleCheatManager.MakeTargetMoleGhost
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UMoleCheatManager::MakeTargetMoleGhost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleCheatManager", "MakeTargetMoleGhost");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleCheatManager.MakeSelfMoleGhost
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UMoleCheatManager::MakeSelfMoleGhost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleCheatManager", "MakeSelfMoleGhost");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleCheatManager.GrantTask
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      TaskAssetName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleCheatManager::GrantTask(const class FString& TaskAssetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleCheatManager", "GrantTask");

	Params::UMoleCheatManager_GrantTask_Params Parms{};

	Parms.TaskAssetName = TaskAssetName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleCheatManager.GoToStateVoting
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UMoleCheatManager::GoToStateVoting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleCheatManager", "GoToStateVoting");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleCheatManager.GoToStateLobby
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UMoleCheatManager::GoToStateLobby()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleCheatManager", "GoToStateLobby");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleCheatManager.GoToStateGameplay
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UMoleCheatManager::GoToStateGameplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleCheatManager", "GoToStateGameplay");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleCheatManager.GoToStateGameover
// (Final, BlueprintAuthorityOnly, Exec, Native, Public, HasOutParams)
// Parameters:
// struct FGameplayTag                InTag                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleCheatManager::GoToStateGameover(struct FGameplayTag& InTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleCheatManager", "GoToStateGameover");

	Params::UMoleCheatManager_GoToStateGameover_Params Parms{};

	Parms.InTag = InTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MoleGameRuntime.MoleCinematicComponent
// (None)

class UClass* UMoleCinematicComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleCinematicComponent");

	return Clss;
}


// MoleCinematicComponent MoleGameRuntime.Default__MoleCinematicComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleCinematicComponent* UMoleCinematicComponent::GetDefaultObj()
{
	static class UMoleCinematicComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleCinematicComponent*>(UMoleCinematicComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleEliminationAbility
// (None)

class UClass* UMoleEliminationAbility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleEliminationAbility");

	return Clss;
}


// MoleEliminationAbility MoleGameRuntime.Default__MoleEliminationAbility
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleEliminationAbility* UMoleEliminationAbility::GetDefaultObj()
{
	static class UMoleEliminationAbility* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleEliminationAbility*>(UMoleEliminationAbility::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleEliminationAbility.ValidatePotentialEliminationTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortPlayerPawn*             PotentialTargetPawn                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoleEliminationAbility::ValidatePotentialEliminationTarget(class AFortPlayerPawn* PotentialTargetPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleEliminationAbility", "ValidatePotentialEliminationTarget");

	Params::UMoleEliminationAbility_ValidatePotentialEliminationTarget_Params Parms{};

	Parms.PotentialTargetPawn = PotentialTargetPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MoleGameRuntime.MoleEliminationMarker
// (Actor)

class UClass* AMoleEliminationMarker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleEliminationMarker");

	return Clss;
}


// MoleEliminationMarker MoleGameRuntime.Default__MoleEliminationMarker
// (Public, ClassDefaultObject, ArchetypeObject)

class AMoleEliminationMarker* AMoleEliminationMarker::GetDefaultObj()
{
	static class AMoleEliminationMarker* Default = nullptr;

	if (!Default)
		Default = static_cast<AMoleEliminationMarker*>(AMoleEliminationMarker::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleEliminationMarker.OnRepresentedPlayerSet
// (Event, Public, BlueprintEvent)
// Parameters:

void AMoleEliminationMarker::OnRepresentedPlayerSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleEliminationMarker", "OnRepresentedPlayerSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MoleGameRuntime.MoleEliminationMarker.OnRep_RepresentedPlayer
// (Final, Native, Protected)
// Parameters:

void AMoleEliminationMarker::OnRep_RepresentedPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleEliminationMarker", "OnRep_RepresentedPlayer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MoleGameRuntime.MoleGameBaseMutator
// (Actor)

class UClass* AMoleGameBaseMutator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleGameBaseMutator");

	return Clss;
}


// MoleGameBaseMutator MoleGameRuntime.Default__MoleGameBaseMutator
// (Public, ClassDefaultObject, ArchetypeObject)

class AMoleGameBaseMutator* AMoleGameBaseMutator::GetDefaultObj()
{
	static class AMoleGameBaseMutator* Default = nullptr;

	if (!Default)
		Default = static_cast<AMoleGameBaseMutator*>(AMoleGameBaseMutator::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleGameplayAbility_Voting
// (None)

class UClass* UMoleGameplayAbility_Voting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleGameplayAbility_Voting");

	return Clss;
}


// MoleGameplayAbility_Voting MoleGameRuntime.Default__MoleGameplayAbility_Voting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleGameplayAbility_Voting* UMoleGameplayAbility_Voting::GetDefaultObj()
{
	static class UMoleGameplayAbility_Voting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleGameplayAbility_Voting*>(UMoleGameplayAbility_Voting::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleGameplayAbility_Voting.OnVotingTargetChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleGameplayAbility_Voting::OnVotingTargetChanged(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleGameplayAbility_Voting", "OnVotingTargetChanged");

	Params::UMoleGameplayAbility_Voting_OnVotingTargetChanged_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MoleGameRuntime.MoleGamePlayerSpawningComponent
// (None)

class UClass* UMoleGamePlayerSpawningComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleGamePlayerSpawningComponent");

	return Clss;
}


// MoleGamePlayerSpawningComponent MoleGameRuntime.Default__MoleGamePlayerSpawningComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleGamePlayerSpawningComponent* UMoleGamePlayerSpawningComponent::GetDefaultObj()
{
	static class UMoleGamePlayerSpawningComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleGamePlayerSpawningComponent*>(UMoleGamePlayerSpawningComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleGamePlayspace
// (Actor)

class UClass* AMoleGamePlayspace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleGamePlayspace");

	return Clss;
}


// MoleGamePlayspace MoleGameRuntime.Default__MoleGamePlayspace
// (Public, ClassDefaultObject, ArchetypeObject)

class AMoleGamePlayspace* AMoleGamePlayspace::GetDefaultObj()
{
	static class AMoleGamePlayspace* Default = nullptr;

	if (!Default)
		Default = static_cast<AMoleGamePlayspace*>(AMoleGamePlayspace::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleGameplayState_Tasks
// (None)

class UClass* UMoleGameplayState_Tasks::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleGameplayState_Tasks");

	return Clss;
}


// MoleGameplayState_Tasks MoleGameRuntime.Default__MoleGameplayState_Tasks
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleGameplayState_Tasks* UMoleGameplayState_Tasks::GetDefaultObj()
{
	static class UMoleGameplayState_Tasks* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleGameplayState_Tasks*>(UMoleGameplayState_Tasks::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleGhostControllerComponent
// (None)

class UClass* UMoleGhostControllerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleGhostControllerComponent");

	return Clss;
}


// MoleGhostControllerComponent MoleGameRuntime.Default__MoleGhostControllerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleGhostControllerComponent* UMoleGhostControllerComponent::GetDefaultObj()
{
	static class UMoleGhostControllerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleGhostControllerComponent*>(UMoleGhostControllerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleGhostControllerComponent.OnPlayerBecameGhost
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMoleGhostControllerComponent::OnPlayerBecameGhost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleGhostControllerComponent", "OnPlayerBecameGhost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MoleGameRuntime.MoleGhostControllerComponent.CLientSetupGhost
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void UMoleGhostControllerComponent::CLientSetupGhost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleGhostControllerComponent", "CLientSetupGhost");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleGhostControllerComponent.ClientRevertGhost
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void UMoleGhostControllerComponent::ClientRevertGhost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleGhostControllerComponent", "ClientRevertGhost");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MoleGameRuntime.MoleGhostMannequin
// (Actor)

class UClass* AMoleGhostMannequin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleGhostMannequin");

	return Clss;
}


// MoleGhostMannequin MoleGameRuntime.Default__MoleGhostMannequin
// (Public, ClassDefaultObject, ArchetypeObject)

class AMoleGhostMannequin* AMoleGhostMannequin::GetDefaultObj()
{
	static class AMoleGhostMannequin* Default = nullptr;

	if (!Default)
		Default = static_cast<AMoleGhostMannequin*>(AMoleGhostMannequin::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleGhostMannequin.OnRepresentedPlayerSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMoleGhostMannequin::OnRepresentedPlayerSet(class APlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleGhostMannequin", "OnRepresentedPlayerSet");

	Params::AMoleGhostMannequin_OnRepresentedPlayerSet_Params Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MoleGameRuntime.MoleGhostMannequin.GetRepresentedPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerState*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APlayerState* AMoleGhostMannequin::GetRepresentedPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleGhostMannequin", "GetRepresentedPlayer");

	Params::AMoleGhostMannequin_GetRepresentedPlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MoleGameRuntime.MoleGlobals
// (None)

class UClass* UMoleGlobals::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleGlobals");

	return Clss;
}


// MoleGlobals MoleGameRuntime.Default__MoleGlobals
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleGlobals* UMoleGlobals::GetDefaultObj()
{
	static class UMoleGlobals* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleGlobals*>(UMoleGlobals::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleImpostorBiasComponent
// (None)

class UClass* UMoleImpostorBiasComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleImpostorBiasComponent");

	return Clss;
}


// MoleImpostorBiasComponent MoleGameRuntime.Default__MoleImpostorBiasComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleImpostorBiasComponent* UMoleImpostorBiasComponent::GetDefaultObj()
{
	static class UMoleImpostorBiasComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleImpostorBiasComponent*>(UMoleImpostorBiasComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleImpostorBiasComponent.SetRolePreference
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerController*       FortPC                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMoleRole               InRolePreference                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleImpostorBiasComponent::SetRolePreference(class AFortPlayerController* FortPC, enum class EMoleRole InRolePreference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleImpostorBiasComponent", "SetRolePreference");

	Params::UMoleImpostorBiasComponent_SetRolePreference_Params Parms{};

	Parms.FortPC = FortPC;
	Parms.InRolePreference = InRolePreference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleImpostorBiasComponent.OnRep_RolePreference
// (Final, Native, Protected)
// Parameters:

void UMoleImpostorBiasComponent::OnRep_RolePreference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleImpostorBiasComponent", "OnRep_RolePreference");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleImpostorBiasComponent.IsImpostorBiasEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoleImpostorBiasComponent::IsImpostorBiasEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleImpostorBiasComponent", "IsImpostorBiasEnabled");

	Params::UMoleImpostorBiasComponent_IsImpostorBiasEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MoleGameRuntime.MoleInitialPlayerCountModMagnitudeCalculation
// (None)

class UClass* UMoleInitialPlayerCountModMagnitudeCalculation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleInitialPlayerCountModMagnitudeCalculation");

	return Clss;
}


// MoleInitialPlayerCountModMagnitudeCalculation MoleGameRuntime.Default__MoleInitialPlayerCountModMagnitudeCalculation
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleInitialPlayerCountModMagnitudeCalculation* UMoleInitialPlayerCountModMagnitudeCalculation::GetDefaultObj()
{
	static class UMoleInitialPlayerCountModMagnitudeCalculation* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleInitialPlayerCountModMagnitudeCalculation*>(UMoleInitialPlayerCountModMagnitudeCalculation::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleLevelDataAsset
// (None)

class UClass* UMoleLevelDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleLevelDataAsset");

	return Clss;
}


// MoleLevelDataAsset MoleGameRuntime.Default__MoleLevelDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleLevelDataAsset* UMoleLevelDataAsset::GetDefaultObj()
{
	static class UMoleLevelDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleLevelDataAsset*>(UMoleLevelDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleLevelBalanceDataAsset
// (None)

class UClass* UMoleLevelBalanceDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleLevelBalanceDataAsset");

	return Clss;
}


// MoleLevelBalanceDataAsset MoleGameRuntime.Default__MoleLevelBalanceDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleLevelBalanceDataAsset* UMoleLevelBalanceDataAsset::GetDefaultObj()
{
	static class UMoleLevelBalanceDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleLevelBalanceDataAsset*>(UMoleLevelBalanceDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleLevelManagerComponent
// (None)

class UClass* UMoleLevelManagerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleLevelManagerComponent");

	return Clss;
}


// MoleLevelManagerComponent MoleGameRuntime.Default__MoleLevelManagerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleLevelManagerComponent* UMoleLevelManagerComponent::GetDefaultObj()
{
	static class UMoleLevelManagerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleLevelManagerComponent*>(UMoleLevelManagerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleLobbyStateMachine
// (None)

class UClass* UMoleLobbyStateMachine::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleLobbyStateMachine");

	return Clss;
}


// MoleLobbyStateMachine MoleGameRuntime.Default__MoleLobbyStateMachine
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleLobbyStateMachine* UMoleLobbyStateMachine::GetDefaultObj()
{
	static class UMoleLobbyStateMachine* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleLobbyStateMachine*>(UMoleLobbyStateMachine::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleLobbyState_Countdown
// (None)

class UClass* UMoleLobbyState_Countdown::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleLobbyState_Countdown");

	return Clss;
}


// MoleLobbyState_Countdown MoleGameRuntime.Default__MoleLobbyState_Countdown
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleLobbyState_Countdown* UMoleLobbyState_Countdown::GetDefaultObj()
{
	static class UMoleLobbyState_Countdown* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleLobbyState_Countdown*>(UMoleLobbyState_Countdown::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleLobbyState_Countdown.OnRep_LobbyTransitionServerTime
// (Final, Native, Protected)
// Parameters:

void UMoleLobbyState_Countdown::OnRep_LobbyTransitionServerTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleLobbyState_Countdown", "OnRep_LobbyTransitionServerTime");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MoleGameRuntime.MoleLobbyState_Loading
// (None)

class UClass* UMoleLobbyState_Loading::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleLobbyState_Loading");

	return Clss;
}


// MoleLobbyState_Loading MoleGameRuntime.Default__MoleLobbyState_Loading
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleLobbyState_Loading* UMoleLobbyState_Loading::GetDefaultObj()
{
	static class UMoleLobbyState_Loading* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleLobbyState_Loading*>(UMoleLobbyState_Loading::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleLobbyState_Login
// (None)

class UClass* UMoleLobbyState_Login::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleLobbyState_Login");

	return Clss;
}


// MoleLobbyState_Login MoleGameRuntime.Default__MoleLobbyState_Login
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleLobbyState_Login* UMoleLobbyState_Login::GetDefaultObj()
{
	static class UMoleLobbyState_Login* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleLobbyState_Login*>(UMoleLobbyState_Login::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleLobbyState_Matchmake
// (None)

class UClass* UMoleLobbyState_Matchmake::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleLobbyState_Matchmake");

	return Clss;
}


// MoleLobbyState_Matchmake MoleGameRuntime.Default__MoleLobbyState_Matchmake
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleLobbyState_Matchmake* UMoleLobbyState_Matchmake::GetDefaultObj()
{
	static class UMoleLobbyState_Matchmake* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleLobbyState_Matchmake*>(UMoleLobbyState_Matchmake::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleLobbyState_Matchmake.OnAcquiringMorePlayersCompleted
// (Final, Native, Protected)
// Parameters:

void UMoleLobbyState_Matchmake::OnAcquiringMorePlayersCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleLobbyState_Matchmake", "OnAcquiringMorePlayersCompleted");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MoleGameRuntime.MoleLobbyState_Waiting
// (None)

class UClass* UMoleLobbyState_Waiting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleLobbyState_Waiting");

	return Clss;
}


// MoleLobbyState_Waiting MoleGameRuntime.Default__MoleLobbyState_Waiting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleLobbyState_Waiting* UMoleLobbyState_Waiting::GetDefaultObj()
{
	static class UMoleLobbyState_Waiting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleLobbyState_Waiting*>(UMoleLobbyState_Waiting::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MolePawnComponent
// (None)

class UClass* UMolePawnComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MolePawnComponent");

	return Clss;
}


// MolePawnComponent MoleGameRuntime.Default__MolePawnComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMolePawnComponent* UMolePawnComponent::GetDefaultObj()
{
	static class UMolePawnComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMolePawnComponent*>(UMolePawnComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MolePawnComponent.OnRep_bIsGhost
// (Final, Native, Protected)
// Parameters:

void UMolePawnComponent::OnRep_bIsGhost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePawnComponent", "OnRep_bIsGhost");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MolePawnComponent.OnBecameHuman
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMolePawnComponent::OnBecameHuman()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePawnComponent", "OnBecameHuman");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MoleGameRuntime.MolePawnComponent.OnBecameGhost
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMolePawnComponent::OnBecameGhost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePawnComponent", "OnBecameGhost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MoleGameRuntime.MolePawnComponent.HandlePawnCustomizationComplete
// (Final, Native, Protected)
// Parameters:
// class AFortPlayerPawn*             Pawn                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMolePawnComponent::HandlePawnCustomizationComplete(class AFortPlayerPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePawnComponent", "HandlePawnCustomizationComplete");

	Params::UMolePawnComponent_HandlePawnCustomizationComplete_Params Parms{};

	Parms.Pawn = Pawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MoleGameRuntime.MolePerformanceComponent
// (None)

class UClass* UMolePerformanceComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MolePerformanceComponent");

	return Clss;
}


// MolePerformanceComponent MoleGameRuntime.Default__MolePerformanceComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMolePerformanceComponent* UMolePerformanceComponent::GetDefaultObj()
{
	static class UMolePerformanceComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMolePerformanceComponent*>(UMolePerformanceComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MolePlayerControllerComponent
// (None)

class UClass* UMolePlayerControllerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MolePlayerControllerComponent");

	return Clss;
}


// MolePlayerControllerComponent MoleGameRuntime.Default__MolePlayerControllerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMolePlayerControllerComponent* UMolePlayerControllerComponent::GetDefaultObj()
{
	static class UMolePlayerControllerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMolePlayerControllerComponent*>(UMolePlayerControllerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MolePlayerStart
// (Actor)

class UClass* AMolePlayerStart::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MolePlayerStart");

	return Clss;
}


// MolePlayerStart MoleGameRuntime.Default__MolePlayerStart
// (Public, ClassDefaultObject, ArchetypeObject)

class AMolePlayerStart* AMolePlayerStart::GetDefaultObj()
{
	static class AMolePlayerStart* Default = nullptr;

	if (!Default)
		Default = static_cast<AMolePlayerStart*>(AMolePlayerStart::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MolePlayerStateComponent
// (None)

class UClass* UMolePlayerStateComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MolePlayerStateComponent");

	return Clss;
}


// MolePlayerStateComponent MoleGameRuntime.Default__MolePlayerStateComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMolePlayerStateComponent* UMolePlayerStateComponent::GetDefaultObj()
{
	static class UMolePlayerStateComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMolePlayerStateComponent*>(UMolePlayerStateComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MolePlayerStateComponent.SetMoleKiller
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerState*                Victim                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerState*                Killer                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMolePlayerStateComponent::SetMoleKiller(class APlayerState* Victim, class APlayerState* Killer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerStateComponent", "SetMoleKiller");

	Params::UMolePlayerStateComponent_SetMoleKiller_Params Parms{};

	Parms.Victim = Victim;
	Parms.Killer = Killer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MolePlayerStateComponent.OnRep_Role
// (Final, Native, Protected)
// Parameters:

void UMolePlayerStateComponent::OnRep_Role()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerStateComponent", "OnRep_Role");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MolePlayerStateComponent.OnRep_PlayerTeleportedData
// (Final, Native, Protected)
// Parameters:

void UMolePlayerStateComponent::OnRep_PlayerTeleportedData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerStateComponent", "OnRep_PlayerTeleportedData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MolePlayerStateComponent.OnRep_PlayerNumber
// (Final, Native, Protected)
// Parameters:

void UMolePlayerStateComponent::OnRep_PlayerNumber()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerStateComponent", "OnRep_PlayerNumber");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MolePlayerStateComponent.OnRep_KillerPlayerState
// (Final, Native, Protected)
// Parameters:

void UMolePlayerStateComponent::OnRep_KillerPlayerState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerStateComponent", "OnRep_KillerPlayerState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MolePlayerStateComponent.OnRep_EnemyPlayerStates
// (Final, Native, Protected)
// Parameters:

void UMolePlayerStateComponent::OnRep_EnemyPlayerStates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerStateComponent", "OnRep_EnemyPlayerStates");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MolePlayerStateComponent.OnRep_DeathInfo
// (Final, Native, Protected)
// Parameters:

void UMolePlayerStateComponent::OnRep_DeathInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerStateComponent", "OnRep_DeathInfo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MolePlayerStateComponent.OnRep_bIsRevealedEnemy
// (Final, Native, Protected)
// Parameters:

void UMolePlayerStateComponent::OnRep_bIsRevealedEnemy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerStateComponent", "OnRep_bIsRevealedEnemy");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MolePlayerStateComponent.OnRep_bHasLeftGame
// (Final, Native, Protected)
// Parameters:

void UMolePlayerStateComponent::OnRep_bHasLeftGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerStateComponent", "OnRep_bHasLeftGame");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MolePlayerStateComponent.IsMolePlayerDisconnected
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerState*                PlayerState                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMolePlayerStateComponent::IsMolePlayerDisconnected(class APlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerStateComponent", "IsMolePlayerDisconnected");

	Params::UMolePlayerStateComponent_IsMolePlayerDisconnected_Params Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MolePlayerStateComponent.IsMoleGhost
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerState*                PlayerState                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMolePlayerStateComponent::IsMoleGhost(class APlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerStateComponent", "IsMoleGhost");

	Params::UMolePlayerStateComponent_IsMoleGhost_Params Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MolePlayerStateComponent.IsMoleEnemyFor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerState*                PlayerState                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerState*                TargetPlayerState                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMolePlayerStateComponent::IsMoleEnemyFor(class APlayerState* PlayerState, class APlayerState* TargetPlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerStateComponent", "IsMoleEnemyFor");

	Params::UMolePlayerStateComponent_IsMoleEnemyFor_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.TargetPlayerState = TargetPlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MolePlayerStateComponent.IsMoleEnemy
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMolePlayerStateComponent::IsMoleEnemy(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerStateComponent", "IsMoleEnemy");

	Params::UMolePlayerStateComponent_IsMoleEnemy_Params Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MolePlayerStateComponent.IsMoleEliminated
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerState*                PlayerState                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMolePlayerStateComponent::IsMoleEliminated(class APlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerStateComponent", "IsMoleEliminated");

	Params::UMolePlayerStateComponent_IsMoleEliminated_Params Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MolePlayerStateComponent.GetPlayerNumber
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMolePlayerStateComponent::GetPlayerNumber()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerStateComponent", "GetPlayerNumber");

	Params::UMolePlayerStateComponent_GetPlayerNumber_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MolePlayerStateComponent.GetMoleRole
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AController*                 User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMoleRole               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMoleRole UMolePlayerStateComponent::GetMoleRole(class AController* User)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerStateComponent", "GetMoleRole");

	Params::UMolePlayerStateComponent_GetMoleRole_Params Parms{};

	Parms.User = User;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MolePlayerStateComponent.GetMolePlayerItemDefinition
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerState*                PlayerState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItemDefinition*         ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortItemDefinition* UMolePlayerStateComponent::GetMolePlayerItemDefinition(class APlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerStateComponent", "GetMolePlayerItemDefinition");

	Params::UMolePlayerStateComponent_GetMolePlayerItemDefinition_Params Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MolePlayerStateComponent.GetMolePlayerCosmeticData
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerState*                PlayerState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMolePlayerCosmeticData     OutPlayerCosmeticData                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UMolePlayerStateComponent::GetMolePlayerCosmeticData(class APlayerState* PlayerState, struct FMolePlayerCosmeticData* OutPlayerCosmeticData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerStateComponent", "GetMolePlayerCosmeticData");

	Params::UMolePlayerStateComponent_GetMolePlayerCosmeticData_Params Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPlayerCosmeticData != nullptr)
		*OutPlayerCosmeticData = std::move(Parms.OutPlayerCosmeticData);

}


// Function MoleGameRuntime.MolePlayerStateComponent.BlueprintSetIsPlayerGhost
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerState*                PlayerState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsPlayerGhost                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMolePlayerStateComponent::BlueprintSetIsPlayerGhost(class APlayerState* PlayerState, bool bIsPlayerGhost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerStateComponent", "BlueprintSetIsPlayerGhost");

	Params::UMolePlayerStateComponent_BlueprintSetIsPlayerGhost_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.bIsPlayerGhost = bIsPlayerGhost;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MoleGameRuntime.MolePlayerTaskManagementComponent
// (None)

class UClass* UMolePlayerTaskManagementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MolePlayerTaskManagementComponent");

	return Clss;
}


// MolePlayerTaskManagementComponent MoleGameRuntime.Default__MolePlayerTaskManagementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMolePlayerTaskManagementComponent* UMolePlayerTaskManagementComponent::GetDefaultObj()
{
	static class UMolePlayerTaskManagementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMolePlayerTaskManagementComponent*>(UMolePlayerTaskManagementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MolePlayerTaskManagementComponent.ServerTaskObjectInteractEvent
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FEventMessageTag            EventMessageTag                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTaskGenericPayload         Payload                                                          (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UMolePlayerTaskManagementComponent::ServerTaskObjectInteractEvent(const struct FEventMessageTag& EventMessageTag, struct FTaskGenericPayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerTaskManagementComponent", "ServerTaskObjectInteractEvent");

	Params::UMolePlayerTaskManagementComponent_ServerTaskObjectInteractEvent_Params Parms{};

	Parms.EventMessageTag = EventMessageTag;
	Parms.Payload = Payload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MolePlayerTaskManagementComponent.ServerRequestCancelPrimaryActiveTask
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:

void UMolePlayerTaskManagementComponent::ServerRequestCancelPrimaryActiveTask()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerTaskManagementComponent", "ServerRequestCancelPrimaryActiveTask");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MolePlayerTaskManagementComponent.OnLeashActorEndOverlap
// (Final, Native, Private)
// Parameters:
// class AActor*                      OriginatingActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ActorEndingOverlap                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMolePlayerTaskManagementComponent::OnLeashActorEndOverlap(class AActor* OriginatingActor, class AActor* ActorEndingOverlap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerTaskManagementComponent", "OnLeashActorEndOverlap");

	Params::UMolePlayerTaskManagementComponent_OnLeashActorEndOverlap_Params Parms{};

	Parms.OriginatingActor = OriginatingActor;
	Parms.ActorEndingOverlap = ActorEndingOverlap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MolePlayerTaskManagementComponent.OnCompletedTaskAdded
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FMoleCompletedTask          InAddedCompletedTask                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UMolePlayerTaskManagementComponent::OnCompletedTaskAdded(struct FMoleCompletedTask& InAddedCompletedTask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerTaskManagementComponent", "OnCompletedTaskAdded");

	Params::UMolePlayerTaskManagementComponent_OnCompletedTaskAdded_Params Parms{};

	Parms.InAddedCompletedTask = InAddedCompletedTask;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MolePlayerTaskManagementComponent.GetNumCompletedTasks
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMolePlayerTaskManagementComponent::GetNumCompletedTasks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerTaskManagementComponent", "GetNumCompletedTasks");

	Params::UMolePlayerTaskManagementComponent_GetNumCompletedTasks_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MolePlayerTaskManagementComponent.CompleteTaskForGameplayState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayState*              State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMolePlayerTaskManagementComponent::CompleteTaskForGameplayState(class UGameplayState* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerTaskManagementComponent", "CompleteTaskForGameplayState");

	Params::UMolePlayerTaskManagementComponent_CompleteTaskForGameplayState_Params Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MolePlayerTaskManagementComponent.ClientTasksInterrupted
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// TArray<class UMoleTaskDataAsset*>  TasksInterrupted                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EMoleTaskInterruptionTypeInterruptionType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMolePlayerTaskManagementComponent::ClientTasksInterrupted(TArray<class UMoleTaskDataAsset*>& TasksInterrupted, enum class EMoleTaskInterruptionType InterruptionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerTaskManagementComponent", "ClientTasksInterrupted");

	Params::UMolePlayerTaskManagementComponent_ClientTasksInterrupted_Params Parms{};

	Parms.TasksInterrupted = TasksInterrupted;
	Parms.InterruptionType = InterruptionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MolePlayerTaskManagementComponent.ClientSetPrimaryActiveTask
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// struct FMoleActiveTaskStateHandle  NewPrimaryHandle                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMolePlayerTaskManagementComponent::ClientSetPrimaryActiveTask(const struct FMoleActiveTaskStateHandle& NewPrimaryHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerTaskManagementComponent", "ClientSetPrimaryActiveTask");

	Params::UMolePlayerTaskManagementComponent_ClientSetPrimaryActiveTask_Params Parms{};

	Parms.NewPrimaryHandle = NewPrimaryHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MolePlayerTaskManagementComponent.ClientAllTasksInterrupted
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// enum class EMoleTaskInterruptionTypeInterruptionType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMolePlayerTaskManagementComponent::ClientAllTasksInterrupted(enum class EMoleTaskInterruptionType InterruptionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerTaskManagementComponent", "ClientAllTasksInterrupted");

	Params::UMolePlayerTaskManagementComponent_ClientAllTasksInterrupted_Params Parms{};

	Parms.InterruptionType = InterruptionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MolePlayerTaskManagementComponent.ClientAllTasksEnabled
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:

void UMolePlayerTaskManagementComponent::ClientAllTasksEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerTaskManagementComponent", "ClientAllTasksEnabled");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MolePlayerTaskManagementComponent.ClientAdvanceLogicThroughPhases
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// class UMoleTaskLogic*              Logic                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      AdvancedPhases                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMolePlayerTaskManagementComponent::ClientAdvanceLogicThroughPhases(class UMoleTaskLogic* Logic, TArray<int32>& AdvancedPhases)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerTaskManagementComponent", "ClientAdvanceLogicThroughPhases");

	Params::UMolePlayerTaskManagementComponent_ClientAdvanceLogicThroughPhases_Params Parms{};

	Parms.Logic = Logic;
	Parms.AdvancedPhases = AdvancedPhases;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MolePlayerTaskManagementComponent.BlueprintServerTaskObjectInteractEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AController*                 User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventMessageTag            EventMessageTag                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTaskGenericPayload         Payload                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMolePlayerTaskManagementComponent::BlueprintServerTaskObjectInteractEvent(class AController* User, const struct FEventMessageTag& EventMessageTag, struct FTaskGenericPayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MolePlayerTaskManagementComponent", "BlueprintServerTaskObjectInteractEvent");

	Params::UMolePlayerTaskManagementComponent_BlueprintServerTaskObjectInteractEvent_Params Parms{};

	Parms.User = User;
	Parms.EventMessageTag = EventMessageTag;
	Parms.Payload = Payload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MoleGameRuntime.MolePlayerVisibilityManagerComponent
// (None)

class UClass* UMolePlayerVisibilityManagerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MolePlayerVisibilityManagerComponent");

	return Clss;
}


// MolePlayerVisibilityManagerComponent MoleGameRuntime.Default__MolePlayerVisibilityManagerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMolePlayerVisibilityManagerComponent* UMolePlayerVisibilityManagerComponent::GetDefaultObj()
{
	static class UMolePlayerVisibilityManagerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMolePlayerVisibilityManagerComponent*>(UMolePlayerVisibilityManagerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleQuestComponent
// (None)

class UClass* UMoleQuestComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleQuestComponent");

	return Clss;
}


// MoleQuestComponent MoleGameRuntime.Default__MoleQuestComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleQuestComponent* UMoleQuestComponent::GetDefaultObj()
{
	static class UMoleQuestComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleQuestComponent*>(UMoleQuestComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleQuickChatComponent
// (None)

class UClass* UMoleQuickChatComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleQuickChatComponent");

	return Clss;
}


// MoleQuickChatComponent MoleGameRuntime.Default__MoleQuickChatComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleQuickChatComponent* UMoleQuickChatComponent::GetDefaultObj()
{
	static class UMoleQuickChatComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleQuickChatComponent*>(UMoleQuickChatComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleQuickChatComponent.ServerSendMessage
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FMoleQuickChatMessageInfo   Message                                                          (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleQuickChatComponent::ServerSendMessage(struct FMoleQuickChatMessageInfo& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleQuickChatComponent", "ServerSendMessage");

	Params::UMoleQuickChatComponent_ServerSendMessage_Params Parms{};

	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleQuickChatComponent.OnRep_MessageInfo
// (Final, Native, Private)
// Parameters:

void UMoleQuickChatComponent::OnRep_MessageInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleQuickChatComponent", "OnRep_MessageInfo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MoleGameRuntime.MoleReplicationGraphNode
// (None)

class UClass* UMoleReplicationGraphNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleReplicationGraphNode");

	return Clss;
}


// MoleReplicationGraphNode MoleGameRuntime.Default__MoleReplicationGraphNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleReplicationGraphNode* UMoleReplicationGraphNode::GetDefaultObj()
{
	static class UMoleReplicationGraphNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleReplicationGraphNode*>(UMoleReplicationGraphNode::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleSabotageAbility
// (None)

class UClass* UMoleSabotageAbility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleSabotageAbility");

	return Clss;
}


// MoleSabotageAbility MoleGameRuntime.Default__MoleSabotageAbility
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleSabotageAbility* UMoleSabotageAbility::GetDefaultObj()
{
	static class UMoleSabotageAbility* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleSabotageAbility*>(UMoleSabotageAbility::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleSabotageAbility.RevertSabotageForPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                Player                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleSabotageAbility::RevertSabotageForPlayer(class APlayerState* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleSabotageAbility", "RevertSabotageForPlayer");

	Params::UMoleSabotageAbility_RevertSabotageForPlayer_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MoleGameRuntime.MoleSabotageAbility.OnSabotageResumedEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void UMoleSabotageAbility::OnSabotageResumedEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleSabotageAbility", "OnSabotageResumedEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MoleGameRuntime.MoleSabotageAbility.OnSabotageInterruptedEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void UMoleSabotageAbility::OnSabotageInterruptedEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleSabotageAbility", "OnSabotageInterruptedEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MoleGameRuntime.MoleSabotageAbility.GetInterruptionType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMoleSabotageInterruptionTypeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMoleSabotageInterruptionType UMoleSabotageAbility::GetInterruptionType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleSabotageAbility", "GetInterruptionType");

	Params::UMoleSabotageAbility_GetInterruptionType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleSabotageAbility.GetAllValidSabotageTargets
// (Native, Protected, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<class APlayerState*>        OutValidTargets                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMoleSabotageAbility::GetAllValidSabotageTargets(TArray<class APlayerState*>* OutValidTargets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleSabotageAbility", "GetAllValidSabotageTargets");

	Params::UMoleSabotageAbility_GetAllValidSabotageTargets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValidTargets != nullptr)
		*OutValidTargets = std::move(Parms.OutValidTargets);

}


// Function MoleGameRuntime.MoleSabotageAbility.GetAllSaboteurs
// (Final, Native, Protected, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<class APlayerState*>        OutAllSaboteurs                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMoleSabotageAbility::GetAllSaboteurs(TArray<class APlayerState*>* OutAllSaboteurs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleSabotageAbility", "GetAllSaboteurs");

	Params::UMoleSabotageAbility_GetAllSaboteurs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAllSaboteurs != nullptr)
		*OutAllSaboteurs = std::move(Parms.OutAllSaboteurs);

}


// Class MoleGameRuntime.MoleSabotageData
// (None)

class UClass* UMoleSabotageData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleSabotageData");

	return Clss;
}


// MoleSabotageData MoleGameRuntime.Default__MoleSabotageData
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleSabotageData* UMoleSabotageData::GetDefaultObj()
{
	static class UMoleSabotageData* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleSabotageData*>(UMoleSabotageData::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleSabotageManagerComponent
// (None)

class UClass* UMoleSabotageManagerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleSabotageManagerComponent");

	return Clss;
}


// MoleSabotageManagerComponent MoleGameRuntime.Default__MoleSabotageManagerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleSabotageManagerComponent* UMoleSabotageManagerComponent::GetDefaultObj()
{
	static class UMoleSabotageManagerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleSabotageManagerComponent*>(UMoleSabotageManagerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleSabotageManagerComponent.SendMoleSabotageTimerStartedEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMoleSabotageAbility*        SabotageAbility                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMoleTimerInfo              TimerInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UMoleSabotageManagerComponent::SendMoleSabotageTimerStartedEvent(class UMoleSabotageAbility* SabotageAbility, struct FMoleTimerInfo& TimerInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleSabotageManagerComponent", "SendMoleSabotageTimerStartedEvent");

	Params::UMoleSabotageManagerComponent_SendMoleSabotageTimerStartedEvent_Params Parms{};

	Parms.SabotageAbility = SabotageAbility;
	Parms.TimerInfo = TimerInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleSabotageManagerComponent.SendMoleLightingModeChangeEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMoleSabotageAbility*        SabotageAbility                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMoleLightingMode           LightingMode                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UMoleSabotageManagerComponent::SendMoleLightingModeChangeEvent(class UMoleSabotageAbility* SabotageAbility, struct FMoleLightingMode& LightingMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleSabotageManagerComponent", "SendMoleLightingModeChangeEvent");

	Params::UMoleSabotageManagerComponent_SendMoleLightingModeChangeEvent_Params Parms{};

	Parms.SabotageAbility = SabotageAbility;
	Parms.LightingMode = LightingMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleSabotageManagerComponent.OnRep_CurrentSabotageStatus
// (Final, Native, Private)
// Parameters:

void UMoleSabotageManagerComponent::OnRep_CurrentSabotageStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleSabotageManagerComponent", "OnRep_CurrentSabotageStatus");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleSabotageManagerComponent.OnRep_CurrentLightingMode
// (Final, Native, Private)
// Parameters:

void UMoleSabotageManagerComponent::OnRep_CurrentLightingMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleSabotageManagerComponent", "OnRep_CurrentLightingMode");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleSabotageManagerComponent.OnRep_ActiveSabotageTimerInfo
// (Final, Native, Private)
// Parameters:

void UMoleSabotageManagerComponent::OnRep_ActiveSabotageTimerInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleSabotageManagerComponent", "OnRep_ActiveSabotageTimerInfo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MoleGameRuntime.MoleStateMachine
// (None)

class UClass* UMoleStateMachine::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleStateMachine");

	return Clss;
}


// MoleStateMachine MoleGameRuntime.Default__MoleStateMachine
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleStateMachine* UMoleStateMachine::GetDefaultObj()
{
	static class UMoleStateMachine* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleStateMachine*>(UMoleStateMachine::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleStateMachine.GetMoleStartOfMatchPlayerCountForPlayspace
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AMoleGamePlayspace*          PlayspaceContext                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMoleStateMachine::GetMoleStartOfMatchPlayerCountForPlayspace(class AMoleGamePlayspace* PlayspaceContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleStateMachine", "GetMoleStartOfMatchPlayerCountForPlayspace");

	Params::UMoleStateMachine_GetMoleStartOfMatchPlayerCountForPlayspace_Params Parms{};

	Parms.PlayspaceContext = PlayspaceContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleStateMachine.GetMoleStartOfMatchPlayerCount
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           ContextPlayer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMoleStateMachine::GetMoleStartOfMatchPlayerCount(class APlayerController* ContextPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleStateMachine", "GetMoleStartOfMatchPlayerCount");

	Params::UMoleStateMachine_GetMoleStartOfMatchPlayerCount_Params Parms{};

	Parms.ContextPlayer = ContextPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleStateMachine.GetMoleRemainingSaboteurCount
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           ContextPlayer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMoleStateMachine::GetMoleRemainingSaboteurCount(class APlayerController* ContextPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleStateMachine", "GetMoleRemainingSaboteurCount");

	Params::UMoleStateMachine_GetMoleRemainingSaboteurCount_Params Parms{};

	Parms.ContextPlayer = ContextPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MoleGameRuntime.MoleState_Gameover
// (None)

class UClass* UMoleState_Gameover::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleState_Gameover");

	return Clss;
}


// MoleState_Gameover MoleGameRuntime.Default__MoleState_Gameover
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleState_Gameover* UMoleState_Gameover::GetDefaultObj()
{
	static class UMoleState_Gameover* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleState_Gameover*>(UMoleState_Gameover::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleState_Gameover.OnRep_MoleStateGameOverEventData
// (Final, Native, Private)
// Parameters:

void UMoleState_Gameover::OnRep_MoleStateGameOverEventData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleState_Gameover", "OnRep_MoleStateGameOverEventData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleState_Gameover.OnRep_ImposterPlayerStates
// (Final, Native, Private)
// Parameters:

void UMoleState_Gameover::OnRep_ImposterPlayerStates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleState_Gameover", "OnRep_ImposterPlayerStates");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MoleGameRuntime.MoleState_Gameplay
// (None)

class UClass* UMoleState_Gameplay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleState_Gameplay");

	return Clss;
}


// MoleState_Gameplay MoleGameRuntime.Default__MoleState_Gameplay
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleState_Gameplay* UMoleState_Gameplay::GetDefaultObj()
{
	static class UMoleState_Gameplay* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleState_Gameplay*>(UMoleState_Gameplay::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleState_Gameplay.RequestEmergencyMeeting
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      ActorContext                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMoleEmergencyMeetingData   MeetingData                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoleState_Gameplay::RequestEmergencyMeeting(class AActor* ActorContext, const struct FMoleEmergencyMeetingData& MeetingData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleState_Gameplay", "RequestEmergencyMeeting");

	Params::UMoleState_Gameplay_RequestEmergencyMeeting_Params Parms{};

	Parms.ActorContext = ActorContext;
	Parms.MeetingData = MeetingData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleState_Gameplay.OnRep_LastSummonedEmergencyMeetingData
// (Final, Native, Protected)
// Parameters:

void UMoleState_Gameplay::OnRep_LastSummonedEmergencyMeetingData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleState_Gameplay", "OnRep_LastSummonedEmergencyMeetingData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleState_Gameplay.HandleScoreChanged
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FEventMessageTag            EventChannel                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMoleTaskScoreEventData     ScoreEventData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UMoleState_Gameplay::HandleScoreChanged(const struct FEventMessageTag& EventChannel, struct FMoleTaskScoreEventData& ScoreEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleState_Gameplay", "HandleScoreChanged");

	Params::UMoleState_Gameplay_HandleScoreChanged_Params Parms{};

	Parms.EventChannel = EventChannel;
	Parms.ScoreEventData = ScoreEventData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleState_Gameplay.HandlePlayerStateDied
// (Final, Native, Protected)
// Parameters:
// class APlayerState*                GhostPlayerState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleState_Gameplay::HandlePlayerStateDied(class APlayerState* GhostPlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleState_Gameplay", "HandlePlayerStateDied");

	Params::UMoleState_Gameplay_HandlePlayerStateDied_Params Parms{};

	Parms.GhostPlayerState = GhostPlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleState_Gameplay.GetAllMoleFreshlyKilledGhosts
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerContext                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class APlayerState*>        OutFreshlyKilledGhosts                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMoleState_Gameplay::GetAllMoleFreshlyKilledGhosts(class APlayerController* PlayerContext, TArray<class APlayerState*>* OutFreshlyKilledGhosts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleState_Gameplay", "GetAllMoleFreshlyKilledGhosts");

	Params::UMoleState_Gameplay_GetAllMoleFreshlyKilledGhosts_Params Parms{};

	Parms.PlayerContext = PlayerContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutFreshlyKilledGhosts != nullptr)
		*OutFreshlyKilledGhosts = std::move(Parms.OutFreshlyKilledGhosts);

}


// Class MoleGameRuntime.MoleState_Setup
// (None)

class UClass* UMoleState_Setup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleState_Setup");

	return Clss;
}


// MoleState_Setup MoleGameRuntime.Default__MoleState_Setup
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleState_Setup* UMoleState_Setup::GetDefaultObj()
{
	static class UMoleState_Setup* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleState_Setup*>(UMoleState_Setup::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleSupplyDropSabotageAbility
// (None)

class UClass* UMoleSupplyDropSabotageAbility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleSupplyDropSabotageAbility");

	return Clss;
}


// MoleSupplyDropSabotageAbility MoleGameRuntime.Default__MoleSupplyDropSabotageAbility
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleSupplyDropSabotageAbility* UMoleSupplyDropSabotageAbility::GetDefaultObj()
{
	static class UMoleSupplyDropSabotageAbility* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleSupplyDropSabotageAbility*>(UMoleSupplyDropSabotageAbility::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleSupplyDropSabotageAbility.HandleFixPointInteracted
// (Final, Native, Public)
// Parameters:
// class UMoleTaskLinkComponent*      TaskLinkComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInteractionBeingAttemptedInteractionType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleSupplyDropSabotageAbility::HandleFixPointInteracted(class UMoleTaskLinkComponent* TaskLinkComponent, class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleSupplyDropSabotageAbility", "HandleFixPointInteracted");

	Params::UMoleSupplyDropSabotageAbility_HandleFixPointInteracted_Params Parms{};

	Parms.TaskLinkComponent = TaskLinkComponent;
	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionType = InteractionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MoleGameRuntime.MoleTargetingSelectionTask_BaseMoleTrace
// (None)

class UClass* UMoleTargetingSelectionTask_BaseMoleTrace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTargetingSelectionTask_BaseMoleTrace");

	return Clss;
}


// MoleTargetingSelectionTask_BaseMoleTrace MoleGameRuntime.Default__MoleTargetingSelectionTask_BaseMoleTrace
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTargetingSelectionTask_BaseMoleTrace* UMoleTargetingSelectionTask_BaseMoleTrace::GetDefaultObj()
{
	static class UMoleTargetingSelectionTask_BaseMoleTrace* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTargetingSelectionTask_BaseMoleTrace*>(UMoleTargetingSelectionTask_BaseMoleTrace::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleTargetingSelectionTask_BestEnemyTarget
// (None)

class UClass* UMoleTargetingSelectionTask_BestEnemyTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTargetingSelectionTask_BestEnemyTarget");

	return Clss;
}


// MoleTargetingSelectionTask_BestEnemyTarget MoleGameRuntime.Default__MoleTargetingSelectionTask_BestEnemyTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTargetingSelectionTask_BestEnemyTarget* UMoleTargetingSelectionTask_BestEnemyTarget::GetDefaultObj()
{
	static class UMoleTargetingSelectionTask_BestEnemyTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTargetingSelectionTask_BestEnemyTarget*>(UMoleTargetingSelectionTask_BestEnemyTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleTaskDataAsset
// (None)

class UClass* UMoleTaskDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskDataAsset");

	return Clss;
}


// MoleTaskDataAsset MoleGameRuntime.Default__MoleTaskDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskDataAsset* UMoleTaskDataAsset::GetDefaultObj()
{
	static class UMoleTaskDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskDataAsset*>(UMoleTaskDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleTaskLinkComponent
// (None)

class UClass* UMoleTaskLinkComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskLinkComponent");

	return Clss;
}


// MoleTaskLinkComponent MoleGameRuntime.Default__MoleTaskLinkComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskLinkComponent* UMoleTaskLinkComponent::GetDefaultObj()
{
	static class UMoleTaskLinkComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskLinkComponent*>(UMoleTaskLinkComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleTaskLinkComponent.UpdatePlayerInteractionData
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AController*                 User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InteractionInfoRowName                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLinkComponent::UpdatePlayerInteractionData(class AController* User, class FName InteractionInfoRowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLinkComponent", "UpdatePlayerInteractionData");

	Params::UMoleTaskLinkComponent_UpdatePlayerInteractionData_Params Parms{};

	Parms.User = User;
	Parms.InteractionInfoRowName = InteractionInfoRowName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLinkComponent.SendGenericObjectiveStatUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AController*                 User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ObjectiveStatTag                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ObjectiveStatDelta                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLinkComponent::SendGenericObjectiveStatUpdate(class AController* User, const struct FGameplayTag& ObjectiveStatTag, float ObjectiveStatDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLinkComponent", "SendGenericObjectiveStatUpdate");

	Params::UMoleTaskLinkComponent_SendGenericObjectiveStatUpdate_Params Parms{};

	Parms.User = User;
	Parms.ObjectiveStatTag = ObjectiveStatTag;
	Parms.ObjectiveStatDelta = ObjectiveStatDelta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLinkComponent.RemovePlayerPermission
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AController*                 User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLinkComponent::RemovePlayerPermission(class AController* User)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLinkComponent", "RemovePlayerPermission");

	Params::UMoleTaskLinkComponent_RemovePlayerPermission_Params Parms{};

	Parms.User = User;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLinkComponent.RemovePlayerInteractionData
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AController*                 User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAlsoRemovePermission                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLinkComponent::RemovePlayerInteractionData(class AController* User, bool bAlsoRemovePermission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLinkComponent", "RemovePlayerInteractionData");

	Params::UMoleTaskLinkComponent_RemovePlayerInteractionData_Params Parms{};

	Parms.User = User;
	Parms.bAlsoRemovePermission = bAlsoRemovePermission;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction MoleGameRuntime.MoleTaskLinkComponent.OnTaskPermissionChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AController*                 User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasPermission                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLinkComponent::OnTaskPermissionChanged__DelegateSignature(class AController* User, bool bHasPermission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLinkComponent", "OnTaskPermissionChanged__DelegateSignature");

	Params::UMoleTaskLinkComponent_OnTaskPermissionChanged__DelegateSignature_Params Parms{};

	Parms.User = User;
	Parms.bHasPermission = bHasPermission;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction MoleGameRuntime.MoleTaskLinkComponent.OnTaskLinkOwnerActorInteract__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UMoleTaskLinkComponent*      TaskLinkComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInteractionBeingAttemptedInteractionType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLinkComponent::OnTaskLinkOwnerActorInteract__DelegateSignature(class UMoleTaskLinkComponent* TaskLinkComponent, class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLinkComponent", "OnTaskLinkOwnerActorInteract__DelegateSignature");

	Params::UMoleTaskLinkComponent_OnTaskLinkOwnerActorInteract__DelegateSignature_Params Parms{};

	Parms.TaskLinkComponent = TaskLinkComponent;
	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionType = InteractionType;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction MoleGameRuntime.MoleTaskLinkComponent.OnTaskInteractionChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AController*                 User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLinkComponent::OnTaskInteractionChanged__DelegateSignature(class AController* User)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLinkComponent", "OnTaskInteractionChanged__DelegateSignature");

	Params::UMoleTaskLinkComponent_OnTaskInteractionChanged__DelegateSignature_Params Parms{};

	Parms.User = User;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction MoleGameRuntime.MoleTaskLinkComponent.OnTaskGenericObjectiveStatChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UMoleTaskLinkComponent*      TaskLinkComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ObjectiveStatTag                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ObjectiveStatDelta                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLinkComponent::OnTaskGenericObjectiveStatChanged__DelegateSignature(class UMoleTaskLinkComponent* TaskLinkComponent, class AController* User, const struct FGameplayTag& ObjectiveStatTag, float ObjectiveStatDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLinkComponent", "OnTaskGenericObjectiveStatChanged__DelegateSignature");

	Params::UMoleTaskLinkComponent_OnTaskGenericObjectiveStatChanged__DelegateSignature_Params Parms{};

	Parms.TaskLinkComponent = TaskLinkComponent;
	Parms.User = User;
	Parms.ObjectiveStatTag = ObjectiveStatTag;
	Parms.ObjectiveStatDelta = ObjectiveStatDelta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MoleGameRuntime.MoleTaskLinkComponent.OnRep_bTaskLinkDisabled
// (Final, Native, Private)
// Parameters:

void UMoleTaskLinkComponent::OnRep_bTaskLinkDisabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLinkComponent", "OnRep_bTaskLinkDisabled");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLinkComponent.OnOwnerActorInteract
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInteractionBeingAttemptedInteraction                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLinkComponent::OnOwnerActorInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted Interaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLinkComponent", "OnOwnerActorInteract");

	Params::UMoleTaskLinkComponent_OnOwnerActorInteract_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.Interaction = Interaction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLinkComponent.IsTaskLinkDisabled
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoleTaskLinkComponent::IsTaskLinkDisabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLinkComponent", "IsTaskLinkDisabled");

	Params::UMoleTaskLinkComponent_IsTaskLinkDisabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskLinkComponent.HasPlayerPermission
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AController*                 User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoleTaskLinkComponent::HasPlayerPermission(class AController* User)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLinkComponent", "HasPlayerPermission");

	Params::UMoleTaskLinkComponent_HasPlayerPermission_Params Parms{};

	Parms.User = User;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskLinkComponent.GivePlayerPermission
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AController*                 User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLinkComponent::GivePlayerPermission(class AController* User)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLinkComponent", "GivePlayerPermission");

	Params::UMoleTaskLinkComponent_GivePlayerPermission_Params Parms{};

	Parms.User = User;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLinkComponent.GetTaskTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag UMoleTaskLinkComponent::GetTaskTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLinkComponent", "GetTaskTag");

	Params::UMoleTaskLinkComponent_GetTaskTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskLinkComponent.GetTaskComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      TaskActor                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoleTaskLinkComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoleTaskLinkComponent* UMoleTaskLinkComponent::GetTaskComponent(class AActor* TaskActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLinkComponent", "GetTaskComponent");

	Params::UMoleTaskLinkComponent_GetTaskComponent_Params Parms{};

	Parms.TaskActor = TaskActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskLinkComponent.GetInteractionTime
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInteractionBeingAttemptedInteractionBeingAttempted                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMoleTaskLinkComponent::GetInteractionTime(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLinkComponent", "GetInteractionTime");

	Params::UMoleTaskLinkComponent_GetInteractionTime_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskLinkComponent.GetInteractionString
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInteractionBeingAttemptedInteractionBeingAttempted                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UMoleTaskLinkComponent::GetInteractionString(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLinkComponent", "GetInteractionString");

	Params::UMoleTaskLinkComponent_GetInteractionString_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskLinkComponent.DisableTaskLink
// (Final, BlueprintAuthorityOnly, Native, Private, BlueprintCallable)
// Parameters:

void UMoleTaskLinkComponent::DisableTaskLink()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLinkComponent", "DisableTaskLink");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLinkComponent.CanInteract
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInteractionBeingAttemptedInteractionBeingAttempted                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETInteractionType       InteractionType                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoleTaskLinkComponent::CanInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class ETInteractionType InteractionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLinkComponent", "CanInteract");

	Params::UMoleTaskLinkComponent_CanInteract_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;
	Parms.InteractionType = InteractionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskLinkComponent.AddPlayerInteractionData
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AController*                 User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InteractionInfoRowName                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGivePermission                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLinkComponent::AddPlayerInteractionData(class AController* User, class FName InteractionInfoRowName, bool bGivePermission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLinkComponent", "AddPlayerInteractionData");

	Params::UMoleTaskLinkComponent_AddPlayerInteractionData_Params Parms{};

	Parms.User = User;
	Parms.InteractionInfoRowName = InteractionInfoRowName;
	Parms.bGivePermission = bGivePermission;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MoleGameRuntime.MoleTaskLogic
// (None)

class UClass* UMoleTaskLogic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskLogic");

	return Clss;
}


// MoleTaskLogic MoleGameRuntime.Default__MoleTaskLogic
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskLogic* UMoleTaskLogic::GetDefaultObj()
{
	static class UMoleTaskLogic* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskLogic*>(UMoleTaskLogic::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleTaskLogic.OnRep_ParentTaskHandle
// (Native, Protected)
// Parameters:

void UMoleTaskLogic::OnRep_ParentTaskHandle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogic", "OnRep_ParentTaskHandle");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLogic.OnRep_ParentTaskAsset
// (Native, Protected)
// Parameters:

void UMoleTaskLogic::OnRep_ParentTaskAsset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogic", "OnRep_ParentTaskAsset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MoleGameRuntime.MoleTaskLogicSubobject
// (None)

class UClass* UMoleTaskLogicSubobject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskLogicSubobject");

	return Clss;
}


// MoleTaskLogicSubobject MoleGameRuntime.Default__MoleTaskLogicSubobject
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskLogicSubobject* UMoleTaskLogicSubobject::GetDefaultObj()
{
	static class UMoleTaskLogicSubobject* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskLogicSubobject*>(UMoleTaskLogicSubobject::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleTaskLogicSubobject.OnTaskRemoved
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UMoleTaskLogicSubobject::OnTaskRemoved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicSubobject", "OnTaskRemoved");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLogicSubobject.OnTaskExternalInterruption
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// enum class EMoleTaskInterruptionTypeInterruptionType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLogicSubobject::OnTaskExternalInterruption(enum class EMoleTaskInterruptionType InterruptionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicSubobject", "OnTaskExternalInterruption");

	Params::UMoleTaskLogicSubobject_OnTaskExternalInterruption_Params Parms{};

	Parms.InterruptionType = InterruptionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLogicSubobject.OnOwningTaskNoLongerPrimaryActiveTask
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsActivePhase                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLogicSubobject::OnOwningTaskNoLongerPrimaryActiveTask(bool bIsActivePhase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicSubobject", "OnOwningTaskNoLongerPrimaryActiveTask");

	Params::UMoleTaskLogicSubobject_OnOwningTaskNoLongerPrimaryActiveTask_Params Parms{};

	Parms.bIsActivePhase = bIsActivePhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLogicSubobject.OnOwningTaskBecomePrimaryActiveTask
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsActivePhase                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLogicSubobject::OnOwningTaskBecomePrimaryActiveTask(bool bIsActivePhase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicSubobject", "OnOwningTaskBecomePrimaryActiveTask");

	Params::UMoleTaskLogicSubobject_OnOwningTaskBecomePrimaryActiveTask_Params Parms{};

	Parms.bIsActivePhase = bIsActivePhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLogicSubobject.OnExitOwningPhase
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UMoleTaskLogicSubobject::OnExitOwningPhase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicSubobject", "OnExitOwningPhase");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLogicSubobject.OnEnterOwningPhase
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UMoleTaskLogicSubobject::OnEnterOwningPhase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicSubobject", "OnEnterOwningPhase");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLogicSubobject.OnAssociatedTaskActorsPendingRemoval
// (Native, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              InPendingRemovalTaskActors                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMoleTaskLogicSubobject::OnAssociatedTaskActorsPendingRemoval(TArray<class AActor*>& InPendingRemovalTaskActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicSubobject", "OnAssociatedTaskActorsPendingRemoval");

	Params::UMoleTaskLogicSubobject_OnAssociatedTaskActorsPendingRemoval_Params Parms{};

	Parms.InPendingRemovalTaskActors = InPendingRemovalTaskActors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLogicSubobject.OnAssociatedTaskActorsAdded
// (Native, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              InNewlyAddedTaskActors                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMoleTaskLogicSubobject::OnAssociatedTaskActorsAdded(TArray<class AActor*>& InNewlyAddedTaskActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicSubobject", "OnAssociatedTaskActorsAdded");

	Params::UMoleTaskLogicSubobject_OnAssociatedTaskActorsAdded_Params Parms{};

	Parms.InNewlyAddedTaskActors = InNewlyAddedTaskActors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLogicSubobject.GetOwningPlayerTaskComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMolePlayerTaskManagementComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMolePlayerTaskManagementComponent* UMoleTaskLogicSubobject::GetOwningPlayerTaskComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicSubobject", "GetOwningPlayerTaskComponent");

	Params::UMoleTaskLogicSubobject_GetOwningPlayerTaskComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskLogicSubobject.GetOwningController
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AController*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AController* UMoleTaskLogicSubobject::GetOwningController()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicSubobject", "GetOwningController");

	Params::UMoleTaskLogicSubobject_GetOwningController_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskLogicSubobject.GetOwnerRole
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ENetRole                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ENetRole UMoleTaskLogicSubobject::GetOwnerRole()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicSubobject", "GetOwnerRole");

	Params::UMoleTaskLogicSubobject_GetOwnerRole_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskLogicSubobject.GetAssociatedTaskActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class AActor*> UMoleTaskLogicSubobject::GetAssociatedTaskActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicSubobject", "GetAssociatedTaskActors");

	Params::UMoleTaskLogicSubobject_GetAssociatedTaskActors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MoleGameRuntime.MoleTaskLogicAction
// (None)

class UClass* UMoleTaskLogicAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskLogicAction");

	return Clss;
}


// MoleTaskLogicAction MoleGameRuntime.Default__MoleTaskLogicAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskLogicAction* UMoleTaskLogicAction::GetDefaultObj()
{
	static class UMoleTaskLogicAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskLogicAction*>(UMoleTaskLogicAction::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleTaskLogicAction.OnActionRemovalPolicyInvoked
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UMoleTaskLogicAction::OnActionRemovalPolicyInvoked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicAction", "OnActionRemovalPolicyInvoked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MoleGameRuntime.MoleTaskLogicAction_GrantAbilitySet
// (None)

class UClass* UMoleTaskLogicAction_GrantAbilitySet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskLogicAction_GrantAbilitySet");

	return Clss;
}


// MoleTaskLogicAction_GrantAbilitySet MoleGameRuntime.Default__MoleTaskLogicAction_GrantAbilitySet
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskLogicAction_GrantAbilitySet* UMoleTaskLogicAction_GrantAbilitySet::GetDefaultObj()
{
	static class UMoleTaskLogicAction_GrantAbilitySet* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskLogicAction_GrantAbilitySet*>(UMoleTaskLogicAction_GrantAbilitySet::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleTaskLogicAction_GrantItem
// (None)

class UClass* UMoleTaskLogicAction_GrantItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskLogicAction_GrantItem");

	return Clss;
}


// MoleTaskLogicAction_GrantItem MoleGameRuntime.Default__MoleTaskLogicAction_GrantItem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskLogicAction_GrantItem* UMoleTaskLogicAction_GrantItem::GetDefaultObj()
{
	static class UMoleTaskLogicAction_GrantItem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskLogicAction_GrantItem*>(UMoleTaskLogicAction_GrantItem::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleTaskLogicAction_GrantTag
// (None)

class UClass* UMoleTaskLogicAction_GrantTag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskLogicAction_GrantTag");

	return Clss;
}


// MoleTaskLogicAction_GrantTag MoleGameRuntime.Default__MoleTaskLogicAction_GrantTag
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskLogicAction_GrantTag* UMoleTaskLogicAction_GrantTag::GetDefaultObj()
{
	static class UMoleTaskLogicAction_GrantTag* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskLogicAction_GrantTag*>(UMoleTaskLogicAction_GrantTag::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleTaskLogicAction_GrantWeapon
// (None)

class UClass* UMoleTaskLogicAction_GrantWeapon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskLogicAction_GrantWeapon");

	return Clss;
}


// MoleTaskLogicAction_GrantWeapon MoleGameRuntime.Default__MoleTaskLogicAction_GrantWeapon
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskLogicAction_GrantWeapon* UMoleTaskLogicAction_GrantWeapon::GetDefaultObj()
{
	static class UMoleTaskLogicAction_GrantWeapon* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskLogicAction_GrantWeapon*>(UMoleTaskLogicAction_GrantWeapon::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleTaskLogicAction_HighlightActors
// (None)

class UClass* UMoleTaskLogicAction_HighlightActors::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskLogicAction_HighlightActors");

	return Clss;
}


// MoleTaskLogicAction_HighlightActors MoleGameRuntime.Default__MoleTaskLogicAction_HighlightActors
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskLogicAction_HighlightActors* UMoleTaskLogicAction_HighlightActors::GetDefaultObj()
{
	static class UMoleTaskLogicAction_HighlightActors* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskLogicAction_HighlightActors*>(UMoleTaskLogicAction_HighlightActors::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleTaskLogicAction_SetInteractionData
// (None)

class UClass* UMoleTaskLogicAction_SetInteractionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskLogicAction_SetInteractionData");

	return Clss;
}


// MoleTaskLogicAction_SetInteractionData MoleGameRuntime.Default__MoleTaskLogicAction_SetInteractionData
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskLogicAction_SetInteractionData* UMoleTaskLogicAction_SetInteractionData::GetDefaultObj()
{
	static class UMoleTaskLogicAction_SetInteractionData* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskLogicAction_SetInteractionData*>(UMoleTaskLogicAction_SetInteractionData::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleTaskLogicAction_SetPermission
// (None)

class UClass* UMoleTaskLogicAction_SetPermission::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskLogicAction_SetPermission");

	return Clss;
}


// MoleTaskLogicAction_SetPermission MoleGameRuntime.Default__MoleTaskLogicAction_SetPermission
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskLogicAction_SetPermission* UMoleTaskLogicAction_SetPermission::GetDefaultObj()
{
	static class UMoleTaskLogicAction_SetPermission* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskLogicAction_SetPermission*>(UMoleTaskLogicAction_SetPermission::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleTaskLogicAction_SetPlayerLeash
// (None)

class UClass* UMoleTaskLogicAction_SetPlayerLeash::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskLogicAction_SetPlayerLeash");

	return Clss;
}


// MoleTaskLogicAction_SetPlayerLeash MoleGameRuntime.Default__MoleTaskLogicAction_SetPlayerLeash
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskLogicAction_SetPlayerLeash* UMoleTaskLogicAction_SetPlayerLeash::GetDefaultObj()
{
	static class UMoleTaskLogicAction_SetPlayerLeash* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskLogicAction_SetPlayerLeash*>(UMoleTaskLogicAction_SetPlayerLeash::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleTaskLogicObjective
// (None)

class UClass* UMoleTaskLogicObjective::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskLogicObjective");

	return Clss;
}


// MoleTaskLogicObjective MoleGameRuntime.Default__MoleTaskLogicObjective
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskLogicObjective* UMoleTaskLogicObjective::GetDefaultObj()
{
	static class UMoleTaskLogicObjective* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskLogicObjective*>(UMoleTaskLogicObjective::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleTaskLogicObjective.SetObjectiveStatus
// (Native, Protected, BlueprintCallable)
// Parameters:
// enum class EMoleTaskObjectiveStatusInNewStatus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLogicObjective::SetObjectiveStatus(enum class EMoleTaskObjectiveStatus InNewStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective", "SetObjectiveStatus");

	Params::UMoleTaskLogicObjective_SetObjectiveStatus_Params Parms{};

	Parms.InNewStatus = InNewStatus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLogicObjective.ServerSuggestObjectiveStatus
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// enum class EMoleTaskObjectiveStatusInNewSuggestedStatus                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLogicObjective::ServerSuggestObjectiveStatus(enum class EMoleTaskObjectiveStatus InNewSuggestedStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective", "ServerSuggestObjectiveStatus");

	Params::UMoleTaskLogicObjective_ServerSuggestObjectiveStatus_Params Parms{};

	Parms.InNewSuggestedStatus = InNewSuggestedStatus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLogicObjective.ServerSetAsPrimaryActiveTask
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void UMoleTaskLogicObjective::ServerSetAsPrimaryActiveTask()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective", "ServerSetAsPrimaryActiveTask");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLogicObjective.OnRep_CurrentValue
// (Native, Protected)
// Parameters:

void UMoleTaskLogicObjective::OnRep_CurrentValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective", "OnRep_CurrentValue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLogicObjective.OnRep_CurrentStatus
// (Native, Protected)
// Parameters:

void UMoleTaskLogicObjective::OnRep_CurrentStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective", "OnRep_CurrentStatus");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLogicObjective.OnRep_CapturedTargetValue
// (Native, Protected)
// Parameters:

void UMoleTaskLogicObjective::OnRep_CapturedTargetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective", "OnRep_CapturedTargetValue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLogicObjective.OnRep_CapturedInitialValue
// (Native, Protected)
// Parameters:

void UMoleTaskLogicObjective::OnRep_CapturedInitialValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective", "OnRep_CapturedInitialValue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction MoleGameRuntime.MoleTaskLogicObjective.OnObjectiveTargetValueChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                              NewTargetValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLogicObjective::OnObjectiveTargetValueChanged__DelegateSignature(float NewTargetValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective", "OnObjectiveTargetValueChanged__DelegateSignature");

	Params::UMoleTaskLogicObjective_OnObjectiveTargetValueChanged__DelegateSignature_Params Parms{};

	Parms.NewTargetValue = NewTargetValue;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction MoleGameRuntime.MoleTaskLogicObjective.OnObjectiveCurrentValueChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                              NewCurrentValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLogicObjective::OnObjectiveCurrentValueChanged__DelegateSignature(float NewCurrentValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective", "OnObjectiveCurrentValueChanged__DelegateSignature");

	Params::UMoleTaskLogicObjective_OnObjectiveCurrentValueChanged__DelegateSignature_Params Parms{};

	Parms.NewCurrentValue = NewCurrentValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MoleGameRuntime.MoleTaskLogicObjective.GetObjectiveText
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

class FText UMoleTaskLogicObjective::GetObjectiveText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective", "GetObjectiveText");

	Params::UMoleTaskLogicObjective_GetObjectiveText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskLogicObjective.GetObjectiveStatus
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMoleTaskObjectiveStatusReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMoleTaskObjectiveStatus UMoleTaskLogicObjective::GetObjectiveStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective", "GetObjectiveStatus");

	Params::UMoleTaskLogicObjective_GetObjectiveStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskLogicObjective.GetCurrentValue
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMoleTaskLogicObjective::GetCurrentValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective", "GetCurrentValue");

	Params::UMoleTaskLogicObjective_GetCurrentValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskLogicObjective.GetCapturedTargetValue
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMoleTaskLogicObjective::GetCapturedTargetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective", "GetCapturedTargetValue");

	Params::UMoleTaskLogicObjective_GetCapturedTargetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskLogicObjective.GetCapturedInitialValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMoleTaskLogicObjective::GetCapturedInitialValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective", "GetCapturedInitialValue");

	Params::UMoleTaskLogicObjective_GetCapturedInitialValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskLogicObjective.CheckObjectiveStatus
// (Native, Protected, BlueprintCallable)
// Parameters:

void UMoleTaskLogicObjective::CheckObjectiveStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective", "CheckObjectiveStatus");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLogicObjective.CaptureTargetValue
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMoleTaskLogicObjective::CaptureTargetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective", "CaptureTargetValue");

	Params::UMoleTaskLogicObjective_CaptureTargetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskLogicObjective.CaptureInitialValue
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMoleTaskLogicObjective::CaptureInitialValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective", "CaptureInitialValue");

	Params::UMoleTaskLogicObjective_CaptureInitialValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskLogicObjective.ApplyCurrentValueDelta
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              Delta                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLogicObjective::ApplyCurrentValueDelta(float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective", "ApplyCurrentValueDelta");

	Params::UMoleTaskLogicObjective_ApplyCurrentValueDelta_Params Parms{};

	Parms.Delta = Delta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MoleGameRuntime.MoleTaskLogicObjective_DamageActors
// (None)

class UClass* UMoleTaskLogicObjective_DamageActors::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskLogicObjective_DamageActors");

	return Clss;
}


// MoleTaskLogicObjective_DamageActors MoleGameRuntime.Default__MoleTaskLogicObjective_DamageActors
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskLogicObjective_DamageActors* UMoleTaskLogicObjective_DamageActors::GetDefaultObj()
{
	static class UMoleTaskLogicObjective_DamageActors* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskLogicObjective_DamageActors*>(UMoleTaskLogicObjective_DamageActors::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleTaskLogicObjective_DamageActors.OnPawnDamaged
// (Final, Native, Protected, HasDefaults)
// Parameters:
// class AActor*                      DamagedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 InstigatedBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLogicObjective_DamageActors::OnPawnDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective_DamageActors", "OnPawnDamaged");

	Params::UMoleTaskLogicObjective_DamageActors_OnPawnDamaged_Params Parms{};

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


// Function MoleGameRuntime.MoleTaskLogicObjective_DamageActors.OnBuildingActorDamaged
// (Final, Native, Protected, HasDefaults)
// Parameters:
// class AActor*                      DamagedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 InstigatedBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLogicObjective_DamageActors::OnBuildingActorDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective_DamageActors", "OnBuildingActorDamaged");

	Params::UMoleTaskLogicObjective_DamageActors_OnBuildingActorDamaged_Params Parms{};

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


// Class MoleGameRuntime.MoleTaskLogicObjective_DestroyActors
// (None)

class UClass* UMoleTaskLogicObjective_DestroyActors::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskLogicObjective_DestroyActors");

	return Clss;
}


// MoleTaskLogicObjective_DestroyActors MoleGameRuntime.Default__MoleTaskLogicObjective_DestroyActors
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskLogicObjective_DestroyActors* UMoleTaskLogicObjective_DestroyActors::GetDefaultObj()
{
	static class UMoleTaskLogicObjective_DestroyActors* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskLogicObjective_DestroyActors*>(UMoleTaskLogicObjective_DestroyActors::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleTaskLogicObjective_DestroyActors.OnPawnDied
// (Final, Native, Protected, HasDefaults)
// Parameters:
// class AActor*                      DamagedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 InstigatedBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLogicObjective_DestroyActors::OnPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective_DestroyActors", "OnPawnDied");

	Params::UMoleTaskLogicObjective_DestroyActors_OnPawnDied_Params Parms{};

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


// Function MoleGameRuntime.MoleTaskLogicObjective_DestroyActors.OnGenericActorDestroyed
// (Final, Native, Protected)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLogicObjective_DestroyActors::OnGenericActorDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective_DestroyActors", "OnGenericActorDestroyed");

	Params::UMoleTaskLogicObjective_DestroyActors_OnGenericActorDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskLogicObjective_DestroyActors.OnBuildingActorDied
// (Final, Native, Protected, HasDefaults)
// Parameters:
// class AActor*                      DamagedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 InstigatedBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLogicObjective_DestroyActors::OnBuildingActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective_DestroyActors", "OnBuildingActorDied");

	Params::UMoleTaskLogicObjective_DestroyActors_OnBuildingActorDied_Params Parms{};

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


// Class MoleGameRuntime.MoleTaskLogicObjective_FixSabotage
// (None)

class UClass* UMoleTaskLogicObjective_FixSabotage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskLogicObjective_FixSabotage");

	return Clss;
}


// MoleTaskLogicObjective_FixSabotage MoleGameRuntime.Default__MoleTaskLogicObjective_FixSabotage
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskLogicObjective_FixSabotage* UMoleTaskLogicObjective_FixSabotage::GetDefaultObj()
{
	static class UMoleTaskLogicObjective_FixSabotage* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskLogicObjective_FixSabotage*>(UMoleTaskLogicObjective_FixSabotage::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleTaskLogicObjective_GenericStat
// (None)

class UClass* UMoleTaskLogicObjective_GenericStat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskLogicObjective_GenericStat");

	return Clss;
}


// MoleTaskLogicObjective_GenericStat MoleGameRuntime.Default__MoleTaskLogicObjective_GenericStat
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskLogicObjective_GenericStat* UMoleTaskLogicObjective_GenericStat::GetDefaultObj()
{
	static class UMoleTaskLogicObjective_GenericStat* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskLogicObjective_GenericStat*>(UMoleTaskLogicObjective_GenericStat::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleTaskLogicObjective_GenericStat.OnTaskLinkComponentGenericStatChanged
// (Native, Protected)
// Parameters:
// class UMoleTaskLinkComponent*      InTaskLinkComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 InUser                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                InObjectiveStatTag                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InObjectiveStatDelta                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLogicObjective_GenericStat::OnTaskLinkComponentGenericStatChanged(class UMoleTaskLinkComponent* InTaskLinkComponent, class AController* InUser, const struct FGameplayTag& InObjectiveStatTag, float InObjectiveStatDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective_GenericStat", "OnTaskLinkComponentGenericStatChanged");

	Params::UMoleTaskLogicObjective_GenericStat_OnTaskLinkComponentGenericStatChanged_Params Parms{};

	Parms.InTaskLinkComponent = InTaskLinkComponent;
	Parms.InUser = InUser;
	Parms.InObjectiveStatTag = InObjectiveStatTag;
	Parms.InObjectiveStatDelta = InObjectiveStatDelta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MoleGameRuntime.MoleTaskLogicObjective_Interact
// (None)

class UClass* UMoleTaskLogicObjective_Interact::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskLogicObjective_Interact");

	return Clss;
}


// MoleTaskLogicObjective_Interact MoleGameRuntime.Default__MoleTaskLogicObjective_Interact
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskLogicObjective_Interact* UMoleTaskLogicObjective_Interact::GetDefaultObj()
{
	static class UMoleTaskLogicObjective_Interact* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskLogicObjective_Interact*>(UMoleTaskLogicObjective_Interact::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleTaskLogicObjective_Interact.OnTaskLinkComponentInteract
// (Native, Protected)
// Parameters:
// class UMoleTaskLinkComponent*      TaskLinkComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInteractionBeingAttemptedInteractionType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTaskLogicObjective_Interact::OnTaskLinkComponentInteract(class UMoleTaskLinkComponent* TaskLinkComponent, class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskLogicObjective_Interact", "OnTaskLinkComponentInteract");

	Params::UMoleTaskLogicObjective_Interact_OnTaskLinkComponentInteract_Params Parms{};

	Parms.TaskLinkComponent = TaskLinkComponent;
	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionType = InteractionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MoleGameRuntime.MoleTaskManagerComponent
// (None)

class UClass* UMoleTaskManagerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskManagerComponent");

	return Clss;
}


// MoleTaskManagerComponent MoleGameRuntime.Default__MoleTaskManagerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskManagerComponent* UMoleTaskManagerComponent::GetDefaultObj()
{
	static class UMoleTaskManagerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskManagerComponent*>(UMoleTaskManagerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleTaskManagerComponent.OnRep_ScoreData
// (Final, Native, Private)
// Parameters:

void UMoleTaskManagerComponent::OnRep_ScoreData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskManagerComponent", "OnRep_ScoreData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskManagerComponent.OnRep_AvailableTaskList
// (Final, Native, Protected)
// Parameters:

void UMoleTaskManagerComponent::OnRep_AvailableTaskList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskManagerComponent", "OnRep_AvailableTaskList");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleTaskManagerComponent.GetTaskActorsMatchingGameplayTagContainer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       TaskTagContainer                                                 (Parm, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AActor*> UMoleTaskManagerComponent::GetTaskActorsMatchingGameplayTagContainer(class UObject* WorldContextObject, const struct FGameplayTagContainer& TaskTagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskManagerComponent", "GetTaskActorsMatchingGameplayTagContainer");

	Params::UMoleTaskManagerComponent_GetTaskActorsMatchingGameplayTagContainer_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.TaskTagContainer = TaskTagContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskManagerComponent.GetTaskActorsMatchingGameplayTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                TaskRootTag                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AActor*> UMoleTaskManagerComponent::GetTaskActorsMatchingGameplayTag(class UObject* WorldContextObject, const struct FGameplayTag& TaskRootTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskManagerComponent", "GetTaskActorsMatchingGameplayTag");

	Params::UMoleTaskManagerComponent_GetTaskActorsMatchingGameplayTag_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.TaskRootTag = TaskRootTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskManagerComponent.GetTaskActorForGameplayTag
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                TaskTag                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UMoleTaskManagerComponent::GetTaskActorForGameplayTag(class UObject* WorldContextObject, const struct FGameplayTag& TaskTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskManagerComponent", "GetTaskActorForGameplayTag");

	Params::UMoleTaskManagerComponent_GetTaskActorForGameplayTag_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.TaskTag = TaskTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskManagerComponent.GetTaskActorComponentsMatchingGameplayTagContainer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       TaskTagContainer                                                 (Parm, NativeAccessSpecifierPublic)
// TArray<class UMoleTaskLinkComponent*>ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UMoleTaskLinkComponent*> UMoleTaskManagerComponent::GetTaskActorComponentsMatchingGameplayTagContainer(class UObject* WorldContextObject, const struct FGameplayTagContainer& TaskTagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskManagerComponent", "GetTaskActorComponentsMatchingGameplayTagContainer");

	Params::UMoleTaskManagerComponent_GetTaskActorComponentsMatchingGameplayTagContainer_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.TaskTagContainer = TaskTagContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskManagerComponent.GetTaskActorComponentsMatchingGameplayTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                TaskRootTag                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UMoleTaskLinkComponent*>ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UMoleTaskLinkComponent*> UMoleTaskManagerComponent::GetTaskActorComponentsMatchingGameplayTag(class UObject* WorldContextObject, const struct FGameplayTag& TaskRootTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskManagerComponent", "GetTaskActorComponentsMatchingGameplayTag");

	Params::UMoleTaskManagerComponent_GetTaskActorComponentsMatchingGameplayTag_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.TaskRootTag = TaskRootTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskManagerComponent.GetTaskActorComponentForGameplayTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                TaskTag                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoleTaskLinkComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoleTaskLinkComponent* UMoleTaskManagerComponent::GetTaskActorComponentForGameplayTag(class UObject* WorldContextObject, const struct FGameplayTag& TaskTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskManagerComponent", "GetTaskActorComponentForGameplayTag");

	Params::UMoleTaskManagerComponent_GetTaskActorComponentForGameplayTag_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.TaskTag = TaskTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskManagerComponent.GetMoleScoreGoal
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMoleTaskManagerComponent::GetMoleScoreGoal(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskManagerComponent", "GetMoleScoreGoal");

	Params::UMoleTaskManagerComponent_GetMoleScoreGoal_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MoleGameRuntime.MoleTaskManagerComponent.GetMoleCurrentScore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMoleTaskManagerComponent::GetMoleCurrentScore(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskManagerComponent", "GetMoleCurrentScore");

	Params::UMoleTaskManagerComponent_GetMoleCurrentScore_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MoleGameRuntime.MoleTaskPoint
// (Actor)

class UClass* AMoleTaskPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskPoint");

	return Clss;
}


// MoleTaskPoint MoleGameRuntime.Default__MoleTaskPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class AMoleTaskPoint* AMoleTaskPoint::GetDefaultObj()
{
	static class AMoleTaskPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<AMoleTaskPoint*>(AMoleTaskPoint::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleTaskPoint.GetMoleTaskLinkComponent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMoleTaskLinkComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoleTaskLinkComponent* AMoleTaskPoint::GetMoleTaskLinkComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskPoint", "GetMoleTaskLinkComponent");

	Params::AMoleTaskPoint_GetMoleTaskLinkComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class MoleGameRuntime.MoleTaskPointManagerComponent
// (None)

class UClass* UMoleTaskPointManagerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskPointManagerComponent");

	return Clss;
}


// MoleTaskPointManagerComponent MoleGameRuntime.Default__MoleTaskPointManagerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskPointManagerComponent* UMoleTaskPointManagerComponent::GetDefaultObj()
{
	static class UMoleTaskPointManagerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskPointManagerComponent*>(UMoleTaskPointManagerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleTaskPointManagerComponent.ResetTaskPointManager
// (Event, Public, BlueprintEvent)
// Parameters:

void UMoleTaskPointManagerComponent::ResetTaskPointManager()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTaskPointManagerComponent", "ResetTaskPointManager");



	UObject::ProcessEvent(Func, nullptr);

}


// Class MoleGameRuntime.MoleTaskStateMachine
// (None)

class UClass* UMoleTaskStateMachine::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTaskStateMachine");

	return Clss;
}


// MoleTaskStateMachine MoleGameRuntime.Default__MoleTaskStateMachine
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTaskStateMachine* UMoleTaskStateMachine::GetDefaultObj()
{
	static class UMoleTaskStateMachine* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTaskStateMachine*>(UMoleTaskStateMachine::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleTeleportAllSabotageAbility
// (None)

class UClass* UMoleTeleportAllSabotageAbility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTeleportAllSabotageAbility");

	return Clss;
}


// MoleTeleportAllSabotageAbility MoleGameRuntime.Default__MoleTeleportAllSabotageAbility
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleTeleportAllSabotageAbility* UMoleTeleportAllSabotageAbility::GetDefaultObj()
{
	static class UMoleTeleportAllSabotageAbility* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleTeleportAllSabotageAbility*>(UMoleTeleportAllSabotageAbility::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleTeleportAllSabotageAbility.OnPlayerTeleported
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerState*                TeleportedPlayer                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoleTeleportAllSabotageAbility::OnPlayerTeleported(class APlayerState* TeleportedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleTeleportAllSabotageAbility", "OnPlayerTeleported");

	Params::UMoleTeleportAllSabotageAbility_OnPlayerTeleported_Params Parms{};

	Parms.TeleportedPlayer = TeleportedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MoleGameRuntime.MoleTeleportPoint
// (Actor)

class UClass* AMoleTeleportPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleTeleportPoint");

	return Clss;
}


// MoleTeleportPoint MoleGameRuntime.Default__MoleTeleportPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class AMoleTeleportPoint* AMoleTeleportPoint::GetDefaultObj()
{
	static class AMoleTeleportPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<AMoleTeleportPoint*>(AMoleTeleportPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleUIIndicatorManagerComponentInterface
// (None)

class UClass* IMoleUIIndicatorManagerComponentInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleUIIndicatorManagerComponentInterface");

	return Clss;
}


// MoleUIIndicatorManagerComponentInterface MoleGameRuntime.Default__MoleUIIndicatorManagerComponentInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IMoleUIIndicatorManagerComponentInterface* IMoleUIIndicatorManagerComponentInterface::GetDefaultObj()
{
	static class IMoleUIIndicatorManagerComponentInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IMoleUIIndicatorManagerComponentInterface*>(IMoleUIIndicatorManagerComponentInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleVoiceComponent
// (None)

class UClass* UMoleVoiceComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleVoiceComponent");

	return Clss;
}


// MoleVoiceComponent MoleGameRuntime.Default__MoleVoiceComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleVoiceComponent* UMoleVoiceComponent::GetDefaultObj()
{
	static class UMoleVoiceComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleVoiceComponent*>(UMoleVoiceComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleVotingComponent
// (None)

class UClass* UMoleVotingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleVotingComponent");

	return Clss;
}


// MoleVotingComponent MoleGameRuntime.Default__MoleVotingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleVotingComponent* UMoleVotingComponent::GetDefaultObj()
{
	static class UMoleVotingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleVotingComponent*>(UMoleVotingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleVotingComponent.ServerVote
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:

void UMoleVotingComponent::ServerVote()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleVotingComponent", "ServerVote");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MoleGameRuntime.MoleVotingComponent.ServerSkipVote
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void UMoleVotingComponent::ServerSkipVote()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleVotingComponent", "ServerSkipVote");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MoleGameRuntime.MoleVotingStateMachine
// (None)

class UClass* UMoleVotingStateMachine::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleVotingStateMachine");

	return Clss;
}


// MoleVotingStateMachine MoleGameRuntime.Default__MoleVotingStateMachine
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleVotingStateMachine* UMoleVotingStateMachine::GetDefaultObj()
{
	static class UMoleVotingStateMachine* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleVotingStateMachine*>(UMoleVotingStateMachine::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleVotingStateMachine.OnRep_VoteList
// (Native, Protected)
// Parameters:

void UMoleVotingStateMachine::OnRep_VoteList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleVotingStateMachine", "OnRep_VoteList");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MoleGameRuntime.MoleVotingState_Discussion
// (None)

class UClass* UMoleVotingState_Discussion::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleVotingState_Discussion");

	return Clss;
}


// MoleVotingState_Discussion MoleGameRuntime.Default__MoleVotingState_Discussion
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleVotingState_Discussion* UMoleVotingState_Discussion::GetDefaultObj()
{
	static class UMoleVotingState_Discussion* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleVotingState_Discussion*>(UMoleVotingState_Discussion::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleVotingState_Discussion.OnRep_DiscussionFinishServerTime
// (Final, Native, Protected)
// Parameters:

void UMoleVotingState_Discussion::OnRep_DiscussionFinishServerTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleVotingState_Discussion", "OnRep_DiscussionFinishServerTime");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MoleGameRuntime.MoleVotingState_ResultDisplay
// (None)

class UClass* UMoleVotingState_ResultDisplay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleVotingState_ResultDisplay");

	return Clss;
}


// MoleVotingState_ResultDisplay MoleGameRuntime.Default__MoleVotingState_ResultDisplay
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleVotingState_ResultDisplay* UMoleVotingState_ResultDisplay::GetDefaultObj()
{
	static class UMoleVotingState_ResultDisplay* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleVotingState_ResultDisplay*>(UMoleVotingState_ResultDisplay::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleVotingState_ResultDisplay.OnRep_VotingResolutionData
// (Final, Native, Protected)
// Parameters:

void UMoleVotingState_ResultDisplay::OnRep_VotingResolutionData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleVotingState_ResultDisplay", "OnRep_VotingResolutionData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MoleGameRuntime.MoleVotingState_SummaryDisplay
// (None)

class UClass* UMoleVotingState_SummaryDisplay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleVotingState_SummaryDisplay");

	return Clss;
}


// MoleVotingState_SummaryDisplay MoleGameRuntime.Default__MoleVotingState_SummaryDisplay
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleVotingState_SummaryDisplay* UMoleVotingState_SummaryDisplay::GetDefaultObj()
{
	static class UMoleVotingState_SummaryDisplay* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleVotingState_SummaryDisplay*>(UMoleVotingState_SummaryDisplay::StaticClass()->DefaultObject);

	return Default;
}


// Class MoleGameRuntime.MoleVotingState_VoteCasting
// (None)

class UClass* UMoleVotingState_VoteCasting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleVotingState_VoteCasting");

	return Clss;
}


// MoleVotingState_VoteCasting MoleGameRuntime.Default__MoleVotingState_VoteCasting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoleVotingState_VoteCasting* UMoleVotingState_VoteCasting::GetDefaultObj()
{
	static class UMoleVotingState_VoteCasting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleVotingState_VoteCasting*>(UMoleVotingState_VoteCasting::StaticClass()->DefaultObject);

	return Default;
}


// Function MoleGameRuntime.MoleVotingState_VoteCasting.OnRep_ServerFinishTime
// (Final, Native, Private)
// Parameters:

void UMoleVotingState_VoteCasting::OnRep_ServerFinishTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoleVotingState_VoteCasting", "OnRep_ServerFinishTime");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


