#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SOMRuntime.ScriptedObjectMovement_StaticPath
// (Actor)

class UClass* AScriptedObjectMovement_StaticPath::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScriptedObjectMovement_StaticPath");

	return Clss;
}


// ScriptedObjectMovement_StaticPath SOMRuntime.Default__ScriptedObjectMovement_StaticPath
// (Public, ClassDefaultObject, ArchetypeObject)

class AScriptedObjectMovement_StaticPath* AScriptedObjectMovement_StaticPath::GetDefaultObj()
{
	static class AScriptedObjectMovement_StaticPath* Default = nullptr;

	if (!Default)
		Default = static_cast<AScriptedObjectMovement_StaticPath*>(AScriptedObjectMovement_StaticPath::StaticClass()->DefaultObject);

	return Default;
}


// Function SOMRuntime.ScriptedObjectMovement_StaticPath.UnlockAllPathsFromBeingRegenerated
// (Final, Native, Public)
// Parameters:

void AScriptedObjectMovement_StaticPath::UnlockAllPathsFromBeingRegenerated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedObjectMovement_StaticPath", "UnlockAllPathsFromBeingRegenerated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SOMRuntime.ScriptedObjectMovement_StaticPath.LockAllPathNodesFromBeingRegenerated
// (Final, Native, Public)
// Parameters:

void AScriptedObjectMovement_StaticPath::LockAllPathNodesFromBeingRegenerated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedObjectMovement_StaticPath", "LockAllPathNodesFromBeingRegenerated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventUpdated
// (Native, Protected, HasDefaults)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimespan                   TimeUntilEnd                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimespan                   TimeSinceBegin                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimespanRatio                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AScriptedObjectMovement_StaticPath::HandleCalendarEventUpdated(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedObjectMovement_StaticPath", "HandleCalendarEventUpdated");

	Params::AScriptedObjectMovement_StaticPath_HandleCalendarEventUpdated_Params Parms{};

	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;
	Parms.TimespanRatio = TimespanRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventEnded
// (Native, Protected, HasDefaults)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimespan                   TimeUntilEnd                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimespan                   TimeSinceBegin                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimespanRatio                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AScriptedObjectMovement_StaticPath::HandleCalendarEventEnded(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedObjectMovement_StaticPath", "HandleCalendarEventEnded");

	Params::AScriptedObjectMovement_StaticPath_HandleCalendarEventEnded_Params Parms{};

	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;
	Parms.TimespanRatio = TimespanRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventActive
// (Native, Protected, HasDefaults)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimespan                   TimeUntilEnd                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimespan                   TimeSinceBegin                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimespanRatio                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AScriptedObjectMovement_StaticPath::HandleCalendarEventActive(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedObjectMovement_StaticPath", "HandleCalendarEventActive");

	Params::AScriptedObjectMovement_StaticPath_HandleCalendarEventActive_Params Parms{};

	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;
	Parms.TimespanRatio = TimespanRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SOMRuntime.ScriptedObjectMovement_StaticPath.GeneratePathData
// (Final, Native, Public)
// Parameters:

void AScriptedObjectMovement_StaticPath::GeneratePathData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedObjectMovement_StaticPath", "GeneratePathData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class SOMRuntime.FortScriptedObjectMovement_GridProviderInterface
// (None)

class UClass* IFortScriptedObjectMovement_GridProviderInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortScriptedObjectMovement_GridProviderInterface");

	return Clss;
}


// FortScriptedObjectMovement_GridProviderInterface SOMRuntime.Default__FortScriptedObjectMovement_GridProviderInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IFortScriptedObjectMovement_GridProviderInterface* IFortScriptedObjectMovement_GridProviderInterface::GetDefaultObj()
{
	static class IFortScriptedObjectMovement_GridProviderInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IFortScriptedObjectMovement_GridProviderInterface*>(IFortScriptedObjectMovement_GridProviderInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class SOMRuntime.FortGameStateComponent_ScriptedObjectMovementManager
// (None)

class UClass* UFortGameStateComponent_ScriptedObjectMovementManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameStateComponent_ScriptedObjectMovementManager");

	return Clss;
}


// FortGameStateComponent_ScriptedObjectMovementManager SOMRuntime.Default__FortGameStateComponent_ScriptedObjectMovementManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameStateComponent_ScriptedObjectMovementManager* UFortGameStateComponent_ScriptedObjectMovementManager::GetDefaultObj()
{
	static class UFortGameStateComponent_ScriptedObjectMovementManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameStateComponent_ScriptedObjectMovementManager*>(UFortGameStateComponent_ScriptedObjectMovementManager::StaticClass()->DefaultObject);

	return Default;
}


// Function SOMRuntime.FortGameStateComponent_ScriptedObjectMovementManager.HandleCurrentPlaylistReady
// (Final, Native, Private, HasOutParams)
// Parameters:
// class AFortGameStateAthena*        GameState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlaylist*               Playlist                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortGameStateComponent_ScriptedObjectMovementManager::HandleCurrentPlaylistReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameStateComponent_ScriptedObjectMovementManager", "HandleCurrentPlaylistReady");

	Params::UFortGameStateComponent_ScriptedObjectMovementManager_HandleCurrentPlaylistReady_Params Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SOMRuntime.FortScriptedObjectMovement_MovableObjectBase
// (Actor)

class UClass* AFortScriptedObjectMovement_MovableObjectBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortScriptedObjectMovement_MovableObjectBase");

	return Clss;
}


// FortScriptedObjectMovement_MovableObjectBase SOMRuntime.Default__FortScriptedObjectMovement_MovableObjectBase
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortScriptedObjectMovement_MovableObjectBase* AFortScriptedObjectMovement_MovableObjectBase::GetDefaultObj()
{
	static class AFortScriptedObjectMovement_MovableObjectBase* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortScriptedObjectMovement_MovableObjectBase*>(AFortScriptedObjectMovement_MovableObjectBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.SetCanEverAffectNavigation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCanEverAffectNavigation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActorComponent*             TargetActorComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortScriptedObjectMovement_MovableObjectBase::SetCanEverAffectNavigation(bool bCanEverAffectNavigation, class UActorComponent* TargetActorComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "SetCanEverAffectNavigation");

	Params::AFortScriptedObjectMovement_MovableObjectBase_SetCanEverAffectNavigation_Params Parms{};

	Parms.bCanEverAffectNavigation = bCanEverAffectNavigation;
	Parms.TargetActorComponent = TargetActorComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.OnRep_CurrentStepData
// (Final, Native, Private)
// Parameters:

void AFortScriptedObjectMovement_MovableObjectBase::OnRep_CurrentStepData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "OnRep_CurrentStepData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.NotifyStaticPathStepComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bReachedBeginPlaySkipStep                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortScriptedObjectMovement_MovableObjectBase::NotifyStaticPathStepComplete(bool bReachedBeginPlaySkipStep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "NotifyStaticPathStepComplete");

	Params::AFortScriptedObjectMovement_MovableObjectBase_NotifyStaticPathStepComplete_Params Parms{};

	Parms.bReachedBeginPlaySkipStep = bReachedBeginPlaySkipStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.HandleSlotDefinitionSlotted
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UFortScriptedObjectMovement_SlotDefinition*SlotDefinition                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortScriptedObjectMovement_MovableObjectBase::HandleSlotDefinitionSlotted(class UFortScriptedObjectMovement_SlotDefinition* SlotDefinition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "HandleSlotDefinitionSlotted");

	Params::AFortScriptedObjectMovement_MovableObjectBase_HandleSlotDefinitionSlotted_Params Parms{};

	Parms.SlotDefinition = SlotDefinition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetStaticPathZOffsetHeight
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortScriptedObjectMovement_MovableObjectBase::GetStaticPathZOffsetHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "GetStaticPathZOffsetHeight");

	Params::AFortScriptedObjectMovement_MovableObjectBase_GetStaticPathZOffsetHeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetStaticPathTravelingBounds
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     OutBoxExtent                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortScriptedObjectMovement_MovableObjectBase::GetStaticPathTravelingBounds(struct FVector* OutBoxExtent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "GetStaticPathTravelingBounds");

	Params::AFortScriptedObjectMovement_MovableObjectBase_GetStaticPathTravelingBounds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutBoxExtent != nullptr)
		*OutBoxExtent = std::move(Parms.OutBoxExtent);

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetScriptedObjectStaticMeshComponent
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UStaticMeshComponent* AFortScriptedObjectMovement_MovableObjectBase::GetScriptedObjectStaticMeshComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "GetScriptedObjectStaticMeshComponent");

	Params::AFortScriptedObjectMovement_MovableObjectBase_GetScriptedObjectStaticMeshComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_TryJumpToStartStep
// (Final, Native, Public)
// Parameters:

void AFortScriptedObjectMovement_MovableObjectBase::Editor_TryJumpToStartStep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "Editor_TryJumpToStartStep");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_ResetObject
// (Final, Native, Public)
// Parameters:

void AFortScriptedObjectMovement_MovableObjectBase::Editor_ResetObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "Editor_ResetObject");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_PreviousStep
// (Final, Native, Public)
// Parameters:

void AFortScriptedObjectMovement_MovableObjectBase::Editor_PreviousStep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "Editor_PreviousStep");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_NextStep
// (Final, Native, Public)
// Parameters:

void AFortScriptedObjectMovement_MovableObjectBase::Editor_NextStep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "Editor_NextStep");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_DebugLogStaticPathTravelIndex
// (Final, Native, Public)
// Parameters:

void AFortScriptedObjectMovement_MovableObjectBase::Editor_DebugLogStaticPathTravelIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "Editor_DebugLogStaticPathTravelIndex");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_ClearResetObjectLocation
// (Final, Native, Public)
// Parameters:

void AFortScriptedObjectMovement_MovableObjectBase::Editor_ClearResetObjectLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "Editor_ClearResetObjectLocation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.ConfigureStaticMeshToSlotDefinition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortScriptedObjectMovement_SlotDefinition*SlotDefinition                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMeshComponent*        StaticMeshComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortScriptedObjectMovement_MovableObjectBase::ConfigureStaticMeshToSlotDefinition(class UFortScriptedObjectMovement_SlotDefinition* SlotDefinition, class UStaticMeshComponent* StaticMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "ConfigureStaticMeshToSlotDefinition");

	Params::AFortScriptedObjectMovement_MovableObjectBase_ConfigureStaticMeshToSlotDefinition_Params Parms{};

	Parms.SlotDefinition = SlotDefinition;
	Parms.StaticMeshComponent = StaticMeshComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.CheatDrawKeyframes
// (Final, Native, Public)
// Parameters:

void AFortScriptedObjectMovement_MovableObjectBase::CheatDrawKeyframes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "CheatDrawKeyframes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Cheat_NetMulticast_SendDebugTimerInfo
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// float                              ServerTimeWhenQueryInvoked                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RemainingTime                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortScriptedObjectMovement_MovableObjectBase::Cheat_NetMulticast_SendDebugTimerInfo(float ServerTimeWhenQueryInvoked, float RemainingTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "Cheat_NetMulticast_SendDebugTimerInfo");

	Params::AFortScriptedObjectMovement_MovableObjectBase_Cheat_NetMulticast_SendDebugTimerInfo_Params Parms{};

	Parms.ServerTimeWhenQueryInvoked = ServerTimeWhenQueryInvoked;
	Parms.RemainingTime = RemainingTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.BlockOverlappingStaticPathSteps
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortScriptedObjectMovement_MovableObjectBase::BlockOverlappingStaticPathSteps()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "BlockOverlappingStaticPathSteps");

	Params::AFortScriptedObjectMovement_MovableObjectBase_BlockOverlappingStaticPathSteps_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.BeginMovingToStaticPathNode
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FScriptedObjectMovement_StaticPathStepDataStepData                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortScriptedObjectMovement_MovableObjectBase::BeginMovingToStaticPathNode(struct FScriptedObjectMovement_StaticPathStepData& StepData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "BeginMovingToStaticPathNode");

	Params::AFortScriptedObjectMovement_MovableObjectBase_BeginMovingToStaticPathNode_Params Parms{};

	Parms.StepData = StepData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SOMRuntime.FortScriptedObjectMovement_WorldPhaseSite
// (Actor)

class UClass* AFortScriptedObjectMovement_WorldPhaseSite::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortScriptedObjectMovement_WorldPhaseSite");

	return Clss;
}


// FortScriptedObjectMovement_WorldPhaseSite SOMRuntime.Default__FortScriptedObjectMovement_WorldPhaseSite
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortScriptedObjectMovement_WorldPhaseSite* AFortScriptedObjectMovement_WorldPhaseSite::GetDefaultObj()
{
	static class AFortScriptedObjectMovement_WorldPhaseSite* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortScriptedObjectMovement_WorldPhaseSite*>(AFortScriptedObjectMovement_WorldPhaseSite::StaticClass()->DefaultObject);

	return Default;
}


// Class SOMRuntime.FortScriptedObjectMovement_SlotDefinition
// (None)

class UClass* UFortScriptedObjectMovement_SlotDefinition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortScriptedObjectMovement_SlotDefinition");

	return Clss;
}


// FortScriptedObjectMovement_SlotDefinition SOMRuntime.Default__FortScriptedObjectMovement_SlotDefinition
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortScriptedObjectMovement_SlotDefinition* UFortScriptedObjectMovement_SlotDefinition::GetDefaultObj()
{
	static class UFortScriptedObjectMovement_SlotDefinition* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortScriptedObjectMovement_SlotDefinition*>(UFortScriptedObjectMovement_SlotDefinition::StaticClass()->DefaultObject);

	return Default;
}


// Class SOMRuntime.FortScriptedObjectMovement_Slot
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UFortScriptedObjectMovement_Slot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortScriptedObjectMovement_Slot");

	return Clss;
}


// FortScriptedObjectMovement_Slot SOMRuntime.Default__FortScriptedObjectMovement_Slot
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortScriptedObjectMovement_Slot* UFortScriptedObjectMovement_Slot::GetDefaultObj()
{
	static class UFortScriptedObjectMovement_Slot* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortScriptedObjectMovement_Slot*>(UFortScriptedObjectMovement_Slot::StaticClass()->DefaultObject);

	return Default;
}


// Class SOMRuntime.FortScriptedObjectMovement_Structure
// (Actor)

class UClass* AFortScriptedObjectMovement_Structure::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortScriptedObjectMovement_Structure");

	return Clss;
}


// FortScriptedObjectMovement_Structure SOMRuntime.Default__FortScriptedObjectMovement_Structure
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortScriptedObjectMovement_Structure* AFortScriptedObjectMovement_Structure::GetDefaultObj()
{
	static class AFortScriptedObjectMovement_Structure* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortScriptedObjectMovement_Structure*>(AFortScriptedObjectMovement_Structure::StaticClass()->DefaultObject);

	return Default;
}


// Class SOMRuntime.ScriptedObjectMovement_CalendarCheatDefinition
// (None)

class UClass* UScriptedObjectMovement_CalendarCheatDefinition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScriptedObjectMovement_CalendarCheatDefinition");

	return Clss;
}


// ScriptedObjectMovement_CalendarCheatDefinition SOMRuntime.Default__ScriptedObjectMovement_CalendarCheatDefinition
// (Public, ClassDefaultObject, ArchetypeObject)

class UScriptedObjectMovement_CalendarCheatDefinition* UScriptedObjectMovement_CalendarCheatDefinition::GetDefaultObj()
{
	static class UScriptedObjectMovement_CalendarCheatDefinition* Default = nullptr;

	if (!Default)
		Default = static_cast<UScriptedObjectMovement_CalendarCheatDefinition*>(UScriptedObjectMovement_CalendarCheatDefinition::StaticClass()->DefaultObject);

	return Default;
}

}


