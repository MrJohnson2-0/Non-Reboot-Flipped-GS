#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RebirthRuntime.FortAthenaMutator_Rebirth
// (Actor)

class UClass* AFortAthenaMutator_Rebirth::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_Rebirth");

	return Clss;
}


// FortAthenaMutator_Rebirth RebirthRuntime.Default__FortAthenaMutator_Rebirth
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_Rebirth* AFortAthenaMutator_Rebirth::GetDefaultObj()
{
	static class AFortAthenaMutator_Rebirth* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_Rebirth*>(AFortAthenaMutator_Rebirth::StaticClass()->DefaultObject);

	return Default;
}


// Function RebirthRuntime.FortAthenaMutator_Rebirth.OnRep_PlayerRarities
// (Final, Native, Private)
// Parameters:

void AFortAthenaMutator_Rebirth::OnRep_PlayerRarities()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Rebirth", "OnRep_PlayerRarities");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function RebirthRuntime.FortAthenaMutator_Rebirth.OnClientSpectatorChanged
// (Final, Native, Private)
// Parameters:
// class AFortPlayerStateZone*        SpectatingTarget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaMutator_Rebirth::OnClientSpectatorChanged(class AFortPlayerStateZone* SpectatingTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_Rebirth", "OnClientSpectatorChanged");

	Params::AFortAthenaMutator_Rebirth_OnClientSpectatorChanged_Params Parms{};

	Parms.SpectatingTarget = SpectatingTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RebirthRuntime.FortCheatManager_Rebirth
// (None)

class UClass* UFortCheatManager_Rebirth::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCheatManager_Rebirth");

	return Clss;
}


// FortCheatManager_Rebirth RebirthRuntime.Default__FortCheatManager_Rebirth
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCheatManager_Rebirth* UFortCheatManager_Rebirth::GetDefaultObj()
{
	static class UFortCheatManager_Rebirth* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCheatManager_Rebirth*>(UFortCheatManager_Rebirth::StaticClass()->DefaultObject);

	return Default;
}


// Function RebirthRuntime.FortCheatManager_Rebirth.PromoteItems
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortCheatManager_Rebirth::PromoteItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_Rebirth", "PromoteItems");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


