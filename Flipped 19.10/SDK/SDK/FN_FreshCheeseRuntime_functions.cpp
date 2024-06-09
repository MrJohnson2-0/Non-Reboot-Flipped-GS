#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FreshCheeseRuntime.FortCheatManager_FreshCheese
// (None)

class UClass* UFortCheatManager_FreshCheese::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCheatManager_FreshCheese");

	return Clss;
}


// FortCheatManager_FreshCheese FreshCheeseRuntime.Default__FortCheatManager_FreshCheese
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCheatManager_FreshCheese* UFortCheatManager_FreshCheese::GetDefaultObj()
{
	static class UFortCheatManager_FreshCheese* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCheatManager_FreshCheese*>(UFortCheatManager_FreshCheese::StaticClass()->DefaultObject);

	return Default;
}


// Function FreshCheeseRuntime.FortCheatManager_FreshCheese.SpawnFriendChests
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortCheatManager_FreshCheese::SpawnFriendChests()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_FreshCheese", "SpawnFriendChests");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FreshCheeseRuntime.FortCheatManager_FreshCheese.FreshCheeseInstancedLoot
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FName                        TierGroup                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumFriends                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_FreshCheese::FreshCheeseInstancedLoot(class FName TierGroup, int32 NumFriends)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_FreshCheese", "FreshCheeseInstancedLoot");

	Params::UFortCheatManager_FreshCheese_FreshCheeseInstancedLoot_Params Parms{};

	Parms.TierGroup = TierGroup;
	Parms.NumFriends = NumFriends;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FreshCheeseRuntime.FriendChestNative
// (Actor)

class UClass* AFriendChestNative::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FriendChestNative");

	return Clss;
}


// FriendChestNative FreshCheeseRuntime.Default__FriendChestNative
// (Public, ClassDefaultObject, ArchetypeObject)

class AFriendChestNative* AFriendChestNative::GetDefaultObj()
{
	static class AFriendChestNative* Default = nullptr;

	if (!Default)
		Default = static_cast<AFriendChestNative*>(AFriendChestNative::StaticClass()->DefaultObject);

	return Default;
}


// Function FreshCheeseRuntime.FriendChestNative.SimulateDisconnect
// (Final, Native, Protected, HasOutParams)
// Parameters:
// TArray<class FString>              SquadUserIds                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void AFriendChestNative::SimulateDisconnect(TArray<class FString>& SquadUserIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestNative", "SimulateDisconnect");

	Params::AFriendChestNative_SimulateDisconnect_Params Parms{};

	Parms.SquadUserIds = SquadUserIds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FreshCheeseRuntime.FriendChestNative.RollInstancedLootForSquadMembers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AGameModeBase*               GameMode                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              SquadId                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFriendChestNative::RollInstancedLootForSquadMembers(class AGameModeBase* GameMode, uint8 SquadId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestNative", "RollInstancedLootForSquadMembers");

	Params::AFriendChestNative_RollInstancedLootForSquadMembers_Params Parms{};

	Parms.GameMode = GameMode;
	Parms.SquadId = SquadId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FreshCheeseRuntime.FriendChestNative.ResetLootTierForAssociatedSquad
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bOnlyAlive                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFriendChestNative::ResetLootTierForAssociatedSquad(bool bOnlyAlive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestNative", "ResetLootTierForAssociatedSquad");

	Params::AFriendChestNative_ResetLootTierForAssociatedSquad_Params Parms{};

	Parms.bOnlyAlive = bOnlyAlive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FreshCheeseRuntime.FriendChestNative.RefreshChestState
// (Event, Public, BlueprintEvent)
// Parameters:

void AFriendChestNative::RefreshChestState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestNative", "RefreshChestState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FreshCheeseRuntime.FriendChestNative.PlayerRemoved
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawnAthena*       Player                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFriendChestNative::PlayerRemoved(class AFortPlayerPawnAthena* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestNative", "PlayerRemoved");

	Params::AFriendChestNative_PlayerRemoved_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FreshCheeseRuntime.FriendChestNative.PlayerAdded
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawnAthena*       Player                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFriendChestNative::PlayerAdded(class AFortPlayerPawnAthena* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestNative", "PlayerAdded");

	Params::AFriendChestNative_PlayerAdded_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FreshCheeseRuntime.FriendChestNative.OnXpEvent
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FXPEventInfo                XPEvent                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFriendChestNative::OnXpEvent(struct FXPEventInfo& XPEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestNative", "OnXpEvent");

	Params::AFriendChestNative_OnXpEvent_Params Parms{};

	Parms.XPEvent = XPEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FreshCheeseRuntime.FriendChestNative.OnTriggerComponentEndOverlap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFriendChestNative::OnTriggerComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestNative", "OnTriggerComponentEndOverlap");

	Params::AFriendChestNative_OnTriggerComponentEndOverlap_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FreshCheeseRuntime.FriendChestNative.OnTriggerComponentBeginOverlap
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AFriendChestNative::OnTriggerComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestNative", "OnTriggerComponentBeginOverlap");

	Params::AFriendChestNative_OnTriggerComponentBeginOverlap_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FreshCheeseRuntime.FriendChestNative.OnPlayerTimeout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerStateAthena*      Player                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFriendChestNative::OnPlayerTimeout(class AFortPlayerStateAthena* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestNative", "OnPlayerTimeout");

	Params::AFriendChestNative_OnPlayerTimeout_Params Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FreshCheeseRuntime.FriendChestNative.OnPlayerPawnDied
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             DeadPawn                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFriendChestNative::OnPlayerPawnDied(class AFortPlayerPawn* DeadPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestNative", "OnPlayerPawnDied");

	Params::AFriendChestNative_OnPlayerPawnDied_Params Parms{};

	Parms.DeadPawn = DeadPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FreshCheeseRuntime.FriendChestNative.OnPlayerLeave
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerStateAthena*      Player                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFriendChestNative::OnPlayerLeave(class AFortPlayerStateAthena* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestNative", "OnPlayerLeave");

	Params::AFriendChestNative_OnPlayerLeave_Params Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FreshCheeseRuntime.FriendChestNative.OnPlayerHit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerStateAthena*      Player                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFriendChestNative::OnPlayerHit(class AFortPlayerStateAthena* Player, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestNative", "OnPlayerHit");

	Params::AFriendChestNative_OnPlayerHit_Params Parms{};

	Parms.Player = Player;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FreshCheeseRuntime.FriendChestNative.OnPlayerEnter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerStateAthena*      Player                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFriendChestNative::OnPlayerEnter(class AFortPlayerStateAthena* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestNative", "OnPlayerEnter");

	Params::AFriendChestNative_OnPlayerEnter_Params Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FreshCheeseRuntime.FriendChestNative.HandlePlayerDeadStateChanged
// (Final, Native, Private)
// Parameters:
// class AFortPlayerStateAthena*      PlayerState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsDead                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFriendChestNative::HandlePlayerDeadStateChanged(class AFortPlayerStateAthena* PlayerState, bool bIsDead)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestNative", "HandlePlayerDeadStateChanged");

	Params::AFriendChestNative_HandlePlayerDeadStateChanged_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.bIsDead = bIsDead;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FreshCheeseRuntime.FriendChestNative.GetWeakpointTransformForButtonID
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// class UInstancedStaticMeshComponent*InstancedStaticMesh                                              (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InstanceIndex                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WeakpointOffset                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform AFriendChestNative::GetWeakpointTransformForButtonID(class UInstancedStaticMeshComponent* InstancedStaticMesh, int32 InstanceIndex, struct FVector& WeakpointOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestNative", "GetWeakpointTransformForButtonID");

	Params::AFriendChestNative_GetWeakpointTransformForButtonID_Params Parms{};

	Parms.InstancedStaticMesh = InstancedStaticMesh;
	Parms.InstanceIndex = InstanceIndex;
	Parms.WeakpointOffset = WeakpointOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FreshCheeseRuntime.FriendChestNative.GetNumTargetsForNextRound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SquadSize                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RemainingTargets                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AFriendChestNative::GetNumTargetsForNextRound(int32 SquadSize, int32 RemainingTargets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestNative", "GetNumTargetsForNextRound");

	Params::AFriendChestNative_GetNumTargetsForNextRound_Params Parms{};

	Parms.SquadSize = SquadSize;
	Parms.RemainingTargets = RemainingTargets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FreshCheeseRuntime.FriendChestNative.GetAssociatedSquadMembers
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// bool                               bIncludeDead                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeResurectable                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeDisconnected                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AFortPlayerStateAthena*>OutSquadMembers                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void AFriendChestNative::GetAssociatedSquadMembers(bool bIncludeDead, bool bIncludeResurectable, bool bIncludeDisconnected, TArray<class AFortPlayerStateAthena*>* OutSquadMembers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestNative", "GetAssociatedSquadMembers");

	Params::AFriendChestNative_GetAssociatedSquadMembers_Params Parms{};

	Parms.bIncludeDead = bIncludeDead;
	Parms.bIncludeResurectable = bIncludeResurectable;
	Parms.bIncludeDisconnected = bIncludeDisconnected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSquadMembers != nullptr)
		*OutSquadMembers = std::move(Parms.OutSquadMembers);

}


// Function FreshCheeseRuntime.FriendChestNative.GetAssociatedSquadID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 AFriendChestNative::GetAssociatedSquadID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestNative", "GetAssociatedSquadID");

	Params::AFriendChestNative_GetAssociatedSquadID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FreshCheeseRuntime.FriendChestNative.CreateIndicators
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void AFriendChestNative::CreateIndicators()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestNative", "CreateIndicators");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FreshCheeseRuntime.FriendChestNative.ClearSimulatedDisconnects
// (Final, Native, Protected)
// Parameters:

void AFriendChestNative::ClearSimulatedDisconnects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestNative", "ClearSimulatedDisconnects");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FreshCheeseRuntime.FriendChestNative.CalculatePlayerChangedAlpha
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// int32                              NumberInPosition                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Delta                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFriendChestNative::CalculatePlayerChangedAlpha(int32 NumberInPosition, int32 Delta, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestNative", "CalculatePlayerChangedAlpha");

	Params::AFriendChestNative_CalculatePlayerChangedAlpha_Params Parms{};

	Parms.NumberInPosition = NumberInPosition;
	Parms.Delta = Delta;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FreshCheeseRuntime.FriendChestAnalytics
// (None)

class UClass* UFriendChestAnalytics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FriendChestAnalytics");

	return Clss;
}


// FriendChestAnalytics FreshCheeseRuntime.Default__FriendChestAnalytics
// (Public, ClassDefaultObject, ArchetypeObject)

class UFriendChestAnalytics* UFriendChestAnalytics::GetDefaultObj()
{
	static class UFriendChestAnalytics* Default = nullptr;

	if (!Default)
		Default = static_cast<UFriendChestAnalytics*>(UFriendChestAnalytics::StaticClass()->DefaultObject);

	return Default;
}


// Class FreshCheeseRuntime.FriendChestLibrary
// (None)

class UClass* UFriendChestLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FriendChestLibrary");

	return Clss;
}


// FriendChestLibrary FreshCheeseRuntime.Default__FriendChestLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UFriendChestLibrary* UFriendChestLibrary::GetDefaultObj()
{
	static class UFriendChestLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UFriendChestLibrary*>(UFriendChestLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function FreshCheeseRuntime.FriendChestLibrary.GetFilteredSquadMembers
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              SquadId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeDead                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeResurectable                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeDisconnected                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AFortPlayerStateAthena*>OutSquadMembers                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFriendChestLibrary::GetFilteredSquadMembers(class UObject* WorldContextObject, uint8 SquadId, bool bIncludeDead, bool bIncludeResurectable, bool bIncludeDisconnected, TArray<class AFortPlayerStateAthena*>* OutSquadMembers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestLibrary", "GetFilteredSquadMembers");

	Params::UFriendChestLibrary_GetFilteredSquadMembers_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SquadId = SquadId;
	Parms.bIncludeDead = bIncludeDead;
	Parms.bIncludeResurectable = bIncludeResurectable;
	Parms.bIncludeDisconnected = bIncludeDisconnected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSquadMembers != nullptr)
		*OutSquadMembers = std::move(Parms.OutSquadMembers);

}


// Class FreshCheeseRuntime.FriendChestSpawner
// (Actor)

class UClass* AFriendChestSpawner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FriendChestSpawner");

	return Clss;
}


// FriendChestSpawner FreshCheeseRuntime.Default__FriendChestSpawner
// (Public, ClassDefaultObject, ArchetypeObject)

class AFriendChestSpawner* AFriendChestSpawner::GetDefaultObj()
{
	static class AFriendChestSpawner* Default = nullptr;

	if (!Default)
		Default = static_cast<AFriendChestSpawner*>(AFriendChestSpawner::StaticClass()->DefaultObject);

	return Default;
}


// Function FreshCheeseRuntime.FriendChestSpawner.TriggerFriendChestSpawn
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFriendChestSpawner::TriggerFriendChestSpawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestSpawner", "TriggerFriendChestSpawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FreshCheeseRuntime.FriendChestSpawner.SendEndSpawnAnalytics
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFriendChestSpawner::SendEndSpawnAnalytics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestSpawner", "SendEndSpawnAnalytics");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FreshCheeseRuntime.FriendChestSpawner.NotifySpawnFailure
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Reason                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SquadId                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFriendChestSpawner::NotifySpawnFailure(const class FString& Reason, int32 SquadId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestSpawner", "NotifySpawnFailure");

	Params::AFriendChestSpawner_NotifySpawnFailure_Params Parms{};

	Parms.Reason = Reason;
	Parms.SquadId = SquadId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FreshCheeseRuntime.FriendChestSpawner.LogSpawnerMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFriendChestSpawner::LogSpawnerMessage(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendChestSpawner", "LogSpawnerMessage");

	Params::AFriendChestSpawner_LogSpawnerMessage_Params Parms{};

	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


