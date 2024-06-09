#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VKEditUI.VKDebugMessagesBase
// (None)

class UClass* UVKDebugMessagesBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VKDebugMessagesBase");

	return Clss;
}


// VKDebugMessagesBase VKEditUI.Default__VKDebugMessagesBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UVKDebugMessagesBase* UVKDebugMessagesBase::GetDefaultObj()
{
	static class UVKDebugMessagesBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UVKDebugMessagesBase*>(UVKDebugMessagesBase::StaticClass()->DefaultObject);

	return Default;
}


// Function VKEditUI.VKDebugMessagesBase.HandleGameStateInitialized
// (Final, Native, Protected)
// Parameters:
// class AFortGameState*              GameState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVKDebugMessagesBase::HandleGameStateInitialized(class AFortGameState* GameState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VKDebugMessagesBase", "HandleGameStateInitialized");

	Params::UVKDebugMessagesBase_HandleGameStateInitialized_Params Parms{};

	Parms.GameState = GameState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VKEditUI.VKDebugMessagesBase.BP_OnGameStateInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortGameState*              GameState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVKDebugMessagesBase::BP_OnGameStateInitialized(class AFortGameState* GameState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VKDebugMessagesBase", "BP_OnGameStateInitialized");

	Params::UVKDebugMessagesBase_BP_OnGameStateInitialized_Params Parms{};

	Parms.GameState = GameState;

	UObject::ProcessEvent(Func, &Parms);

}

}


