#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QuartzMusicTrackComponent.QuartzMusicTrackComponent_C
// (None)

class UClass* UQuartzMusicTrackComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuartzMusicTrackComponent_C");

	return Clss;
}


// QuartzMusicTrackComponent_C QuartzMusicTrackComponent.Default__QuartzMusicTrackComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQuartzMusicTrackComponent_C* UQuartzMusicTrackComponent_C::GetDefaultObj()
{
	static class UQuartzMusicTrackComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuartzMusicTrackComponent_C*>(UQuartzMusicTrackComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.GetClockHandle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UQuartzClockHandle*          Clock_Handle                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuartzMusicTrackComponent_C::GetClockHandle(class UQuartzClockHandle** Clock_Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "GetClockHandle");

	Params::UQuartzMusicTrackComponent_C_GetClockHandle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Clock_Handle != nullptr)
		*Clock_Handle = Parms.Clock_Handle;

}


// Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.SetTrackParameter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ParameterIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InFloat                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_GetAudioComponent_AudioComponent                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAudioParameterInterface>CallFunc_SetFloatParameter_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuartzMusicTrackComponent_C::SetTrackParameter(int32 ParameterIndex, float InFloat, class UAudioComponent* CallFunc_GetAudioComponent_AudioComponent, TScriptInterface<class IAudioParameterInterface> CallFunc_SetFloatParameter_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "SetTrackParameter");

	Params::UQuartzMusicTrackComponent_C_SetTrackParameter_Params Parms{};

	Parms.ParameterIndex = ParameterIndex;
	Parms.InFloat = InFloat;
	Parms.CallFunc_GetAudioComponent_AudioComponent = CallFunc_GetAudioComponent_AudioComponent;
	Parms.CallFunc_SetFloatParameter_self_CastInput = CallFunc_SetFloatParameter_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.GetAudioComponent
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAudioComponent*             AudioComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuartzMusicTrackComponent_C::GetAudioComponent(class UAudioComponent** AudioComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "GetAudioComponent");

	Params::UQuartzMusicTrackComponent_C_GetAudioComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AudioComponent != nullptr)
		*AudioComponent = Parms.AudioComponent;

}


// Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.GetPlayState
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAudioComponentPlayStateReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAudioComponentPlayStateCallFunc_GetPlayState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EAudioComponentPlayState UQuartzMusicTrackComponent_C::GetPlayState(bool CallFunc_IsValid_ReturnValue, enum class EAudioComponentPlayState CallFunc_GetPlayState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "GetPlayState");

	Params::UQuartzMusicTrackComponent_C_GetPlayState_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayState_ReturnValue = CallFunc_GetPlayState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.GetIsPlaying
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Is_Playing                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuartzMusicTrackComponent_C::GetIsPlaying(bool* Is_Playing, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "GetIsPlaying");

	Params::UQuartzMusicTrackComponent_C_GetIsPlaying_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Playing != nullptr)
		*Is_Playing = Parms.Is_Playing;

}


// Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.OnQuartzQuantizationEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ClockName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuartzCommandQuantizationQuantizationType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumBars                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Beat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BeatFraction                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuartzClockHandle*          CallFunc_PauseClock_ClockHandle                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuartzMusicTrackComponent_C::OnQuartzQuantizationEvent(class FName ClockName, enum class EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class UQuartzClockHandle* CallFunc_PauseClock_ClockHandle, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "OnQuartzQuantizationEvent");

	Params::UQuartzMusicTrackComponent_C_OnQuartzQuantizationEvent_Params Parms{};

	Parms.ClockName = ClockName;
	Parms.QuantizationType = QuantizationType;
	Parms.NumBars = NumBars;
	Parms.Beat = Beat;
	Parms.BeatFraction = BeatFraction;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PauseClock_ClockHandle = CallFunc_PauseClock_ClockHandle;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.OnQuartzClockDelegate
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQuartzCommandDelegateSubTypeEventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuartzClockHandle*          CallFunc_ResumeClock_ClockHandle                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuartzMusicTrackComponent_C::OnQuartzClockDelegate(enum class EQuartzCommandDelegateSubType EventType, class FName Name, bool K2Node_SwitchEnum_CmpSuccess, class UQuartzClockHandle* CallFunc_ResumeClock_ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "OnQuartzClockDelegate");

	Params::UQuartzMusicTrackComponent_C_OnQuartzClockDelegate_Params Parms{};

	Parms.EventType = EventType;
	Parms.Name = Name;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ResumeClock_ClockHandle = CallFunc_ResumeClock_ClockHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.QueueTrackStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             CallFunc_GetAudioComponent_AudioComponent                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicEventSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuartzMusicTrackComponent_C::QueueTrackStop(class UAudioComponent* CallFunc_GetAudioComponent_AudioComponent, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "QueueTrackStop");

	Params::UQuartzMusicTrackComponent_C_QueueTrackStop_Params Parms{};

	Parms.CallFunc_GetAudioComponent_AudioComponent = CallFunc_GetAudioComponent_AudioComponent;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.QueueTrackStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuartzSubsystem*            CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_GetAudioComponent_AudioComponent                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuartzQuantizationBoundary Temp_struct_Variable                                             (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        CallFunc_GetGameStateAthena_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuartzSubsystem*            CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQuartzEnabled_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetAthenaPlaylistContextTags_ReturnValue                (None)
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UAudioComponent*             CallFunc_CreateSound2D_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UQuartzClockHandle*          CallFunc_SubscribeToAllQuantizationEvents_ClockHandle            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuartzClockHandle*          CallFunc_SetBeatsPerMinute_ClockHandle                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicEventSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuartzClockHandle*          CallFunc_CreateNewClock_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuartzMusicTrackComponent_C::QueueTrackStart(class UQuartzSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UAudioComponent* CallFunc_GetAudioComponent_AudioComponent, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FQuartzQuantizationBoundary& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, class UQuartzSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsQuartzEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetAthenaPlaylistContextTags_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UQuartzClockHandle* CallFunc_SubscribeToAllQuantizationEvents_ClockHandle, class UQuartzClockHandle* CallFunc_SetBeatsPerMinute_ClockHandle, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UQuartzClockHandle* CallFunc_CreateNewClock_ReturnValue, bool CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "QueueTrackStart");

	Params::UQuartzMusicTrackComponent_C_QueueTrackStart_Params Parms{};

	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetAudioComponent_AudioComponent = CallFunc_GetAudioComponent_AudioComponent;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetGameStateAthena_ReturnValue = CallFunc_GetGameStateAthena_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsQuartzEnabled_ReturnValue = CallFunc_IsQuartzEnabled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetAthenaPlaylistContextTags_ReturnValue = CallFunc_GetAthenaPlaylistContextTags_ReturnValue;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CreateSound2D_ReturnValue = CallFunc_CreateSound2D_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_SubscribeToAllQuantizationEvents_ClockHandle = CallFunc_SubscribeToAllQuantizationEvents_ClockHandle;
	Parms.CallFunc_SetBeatsPerMinute_ClockHandle = CallFunc_SetBeatsPerMinute_ClockHandle;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_CreateNewClock_ReturnValue = CallFunc_CreateNewClock_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.GetTrackPriority
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Priority                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuartzMusicTrackComponent_C::GetTrackPriority(float* Priority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "GetTrackPriority");

	Params::UQuartzMusicTrackComponent_C_GetTrackPriority_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Priority != nullptr)
		*Priority = Parms.Priority;

}


// Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.SetDebugEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Debug                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuartzMusicTrackComponent_C::SetDebugEnabled(bool Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "SetDebugEnabled");

	Params::UQuartzMusicTrackComponent_C_SetDebugEnabled_Params Parms{};

	Parms.Debug = Debug;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UQuartzMusicTrackComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuartzMusicTrackComponent_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "ReceiveEndPlay");

	Params::UQuartzMusicTrackComponent_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.SetStemVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuartzMusicTrackComponent_C::SetStemVolume(int32 Index, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "SetStemVolume");

	Params::UQuartzMusicTrackComponent_C_SetStemVolume_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.ExecuteUbergraph_QuartzMusicTrackComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Debug                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAudioParameterInterface>CallFunc_SetFloatParameter_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_QuartzMusicController_C* K2Node_DynamicCast_AsBP_Quartz_Music_Controller                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuartzMusicTrackComponent_C::ExecuteUbergraph_QuartzMusicTrackComponent(int32 EntryPoint, int32 K2Node_CustomEvent_Index, float K2Node_CustomEvent_Value, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_CustomEvent_Debug, TScriptInterface<class IAudioParameterInterface> CallFunc_SetFloatParameter_self_CastInput, class AActor* CallFunc_GetOwner_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class ABP_QuartzMusicController_C* K2Node_DynamicCast_AsBP_Quartz_Music_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzMusicTrackComponent_C", "ExecuteUbergraph_QuartzMusicTrackComponent");

	Params::UQuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Debug = K2Node_CustomEvent_Debug;
	Parms.CallFunc_SetFloatParameter_self_CastInput = CallFunc_SetFloatParameter_self_CastInput;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_DynamicCast_AsBP_Quartz_Music_Controller = K2Node_DynamicCast_AsBP_Quartz_Music_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


