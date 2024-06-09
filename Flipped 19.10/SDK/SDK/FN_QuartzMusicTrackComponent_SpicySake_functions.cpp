#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QuartzMusicTrackComponent_SpicySake.QuartzMusicTrackComponent_SpicySake_C
// (None)

class UClass* UQuartzMusicTrackComponent_SpicySake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuartzMusicTrackComponent_SpicySake_C");

	return Clss;
}


// QuartzMusicTrackComponent_SpicySake_C QuartzMusicTrackComponent_SpicySake.Default__QuartzMusicTrackComponent_SpicySake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQuartzMusicTrackComponent_SpicySake_C* UQuartzMusicTrackComponent_SpicySake_C::GetDefaultObj()
{
	static class UQuartzMusicTrackComponent_SpicySake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuartzMusicTrackComponent_SpicySake_C*>(UQuartzMusicTrackComponent_SpicySake_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QuartzMusicTrackComponent_SpicySake.QuartzMusicTrackComponent_SpicySake_C.HandleMixState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuartzMusicTrackComponent_SpicySake_C::HandleMixState(float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzMusicTrackComponent_SpicySake_C", "HandleMixState");

	Params::UQuartzMusicTrackComponent_SpicySake_C_HandleMixState_Params Parms{};

	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuartzMusicTrackComponent_SpicySake.QuartzMusicTrackComponent_SpicySake_C.UpdateInterpValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              InterpValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                EventTag                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// float                              Attack_Speed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Release_Speed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameplayDataTrackerComponent*CallFunc_GetDataTrackerComponent_DataTracker                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UQuartzMusicTrackComponent_SpicySake_C::UpdateInterpValue(float InterpValue, struct FGameplayTag& EventTag, float Attack_Speed, float Release_Speed, class UFortGameplayDataTrackerComponent* CallFunc_GetDataTrackerComponent_DataTracker, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetEventValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzMusicTrackComponent_SpicySake_C", "UpdateInterpValue");

	Params::UQuartzMusicTrackComponent_SpicySake_C_UpdateInterpValue_Params Parms{};

	Parms.InterpValue = InterpValue;
	Parms.EventTag = EventTag;
	Parms.Attack_Speed = Attack_Speed;
	Parms.Release_Speed = Release_Speed;
	Parms.CallFunc_GetDataTrackerComponent_DataTracker = CallFunc_GetDataTrackerComponent_DataTracker;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetEventValue_ReturnValue = CallFunc_GetEventValue_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QuartzMusicTrackComponent_SpicySake.QuartzMusicTrackComponent_SpicySake_C.OnDataTrackerUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGameplayDataTrackerComponent*CallFunc_GetDataTrackerComponent_DataTracker                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuartzMusicTrackComponent_SpicySake_C::OnDataTrackerUpdate(class UFortGameplayDataTrackerComponent* CallFunc_GetDataTrackerComponent_DataTracker, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetEventValue_ReturnValue, float CallFunc_GetEventValue_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FInterpTo_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzMusicTrackComponent_SpicySake_C", "OnDataTrackerUpdate");

	Params::UQuartzMusicTrackComponent_SpicySake_C_OnDataTrackerUpdate_Params Parms{};

	Parms.CallFunc_GetDataTrackerComponent_DataTracker = CallFunc_GetDataTrackerComponent_DataTracker;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetEventValue_ReturnValue = CallFunc_GetEventValue_ReturnValue;
	Parms.CallFunc_GetEventValue_ReturnValue_1 = CallFunc_GetEventValue_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


