#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_QuartzMusicController.BP_QuartzMusicController_C
// (Actor)

class UClass* ABP_QuartzMusicController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_QuartzMusicController_C");

	return Clss;
}


// BP_QuartzMusicController_C BP_QuartzMusicController.Default__BP_QuartzMusicController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_QuartzMusicController_C* ABP_QuartzMusicController_C::GetDefaultObj()
{
	static class ABP_QuartzMusicController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_QuartzMusicController_C*>(ABP_QuartzMusicController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_QuartzMusicController.BP_QuartzMusicController_C.StopCurrentTrack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_QuartzMusicController_C::StopCurrentTrack(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuartzMusicController_C", "StopCurrentTrack");

	Params::ABP_QuartzMusicController_C_StopCurrentTrack_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_QuartzMusicController.BP_QuartzMusicController_C.PlayTrack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuartzMusicTrackComponent_C*Track_Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_QuartzMusicController_C::PlayTrack(class UQuartzMusicTrackComponent_C* Track_Component, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuartzMusicController_C", "PlayTrack");

	Params::ABP_QuartzMusicController_C_PlayTrack_Params Parms{};

	Parms.Track_Component = Track_Component;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_QuartzMusicController.BP_QuartzMusicController_C.RequestTrackPlayback
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuartzMusicTrackComponent_C*Requesting_Track                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTrackPriority_Priority                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTrackPriority_Priority_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_QuartzMusicController_C::RequestTrackPlayback(class UQuartzMusicTrackComponent_C* Requesting_Track, bool* Result, float CallFunc_GetTrackPriority_Priority, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetTrackPriority_Priority_1, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuartzMusicController_C", "RequestTrackPlayback");

	Params::ABP_QuartzMusicController_C_RequestTrackPlayback_Params Parms{};

	Parms.Requesting_Track = Requesting_Track;
	Parms.CallFunc_GetTrackPriority_Priority = CallFunc_GetTrackPriority_Priority;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTrackPriority_Priority_1 = CallFunc_GetTrackPriority_Priority_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_QuartzMusicController.BP_QuartzMusicController_C.OnClockCreated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Clock_Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuartzClockHandle*          Clock_Handle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_QuartzMusicController_C::OnClockCreated__DelegateSignature(class FName Clock_Name, class UQuartzClockHandle* Clock_Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuartzMusicController_C", "OnClockCreated__DelegateSignature");

	Params::ABP_QuartzMusicController_C_OnClockCreated__DelegateSignature_Params Parms{};

	Parms.Clock_Name = Clock_Name;
	Parms.Clock_Handle = Clock_Handle;

	UObject::ProcessEvent(Func, &Parms);

}

}


