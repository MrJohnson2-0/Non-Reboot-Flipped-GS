#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CampsiteUI.CampsiteMarkerInfoBase
// (None)

class UClass* UCampsiteMarkerInfoBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CampsiteMarkerInfoBase");

	return Clss;
}


// CampsiteMarkerInfoBase CampsiteUI.Default__CampsiteMarkerInfoBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UCampsiteMarkerInfoBase* UCampsiteMarkerInfoBase::GetDefaultObj()
{
	static class UCampsiteMarkerInfoBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UCampsiteMarkerInfoBase*>(UCampsiteMarkerInfoBase::StaticClass()->DefaultObject);

	return Default;
}


// Function CampsiteUI.CampsiteMarkerInfoBase.SetPlayerState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerStateAthena*      InPlayerState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCampsiteMarkerInfoBase::SetPlayerState(class AFortPlayerStateAthena* InPlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CampsiteMarkerInfoBase", "SetPlayerState");

	Params::UCampsiteMarkerInfoBase_SetPlayerState_Params Parms{};

	Parms.InPlayerState = InPlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CampsiteUI.CampsiteMarkerInfoBase.OnSetPlayerState
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      PSA                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCampsiteMarkerInfoBase::OnSetPlayerState(class AFortPlayerStateAthena* PSA)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CampsiteMarkerInfoBase", "OnSetPlayerState");

	Params::UCampsiteMarkerInfoBase_OnSetPlayerState_Params Parms{};

	Parms.PSA = PSA;

	UObject::ProcessEvent(Func, &Parms);

}

}


