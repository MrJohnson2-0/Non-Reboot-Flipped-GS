#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
// (Actor)

class UClass* AFort_Entry_Music_Controller_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Fort_Entry_Music_Controller_BP_C");

	return Clss;
}


// Fort_Entry_Music_Controller_BP_C Fort_Entry_Music_Controller_BP.Default__Fort_Entry_Music_Controller_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFort_Entry_Music_Controller_BP_C* AFort_Entry_Music_Controller_BP_C::GetDefaultObj()
{
	static class AFort_Entry_Music_Controller_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFort_Entry_Music_Controller_BP_C*>(AFort_Entry_Music_Controller_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Change Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  New_Music                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Event_Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void AFort_Entry_Music_Controller_BP_C::Change_Music(class USoundBase* New_Music, float StartTime, const struct FGameplayTag& Event_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "Change Music");

	Params::AFort_Entry_Music_Controller_BP_C_Change_Music_Params Parms{};

	Parms.New_Music = New_Music;
	Parms.StartTime = StartTime;
	Parms.Event_Tag = Event_Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ListenToMusicPacks
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFort_Entry_Music_Controller_BP_C::ListenToMusicPacks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "ListenToMusicPacks");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.OnMusicPackChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaMusicPackItemDefinition*NewMusicPack                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartTimeOffset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFort_Entry_Music_Controller_BP_C::OnMusicPackChanged(class UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "OnMusicPackChanged");

	Params::AFort_Entry_Music_Controller_BP_C_OnMusicPackChanged_Params Parms{};

	Parms.NewMusicPack = NewMusicPack;
	Parms.StartTimeOffset = StartTimeOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Lobby Music Override
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Lobby_Music_Activate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  New_Music                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFort_Entry_Music_Controller_BP_C::Lobby_Music_Override(bool Lobby_Music_Activate, class USoundBase* New_Music)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "Lobby Music Override");

	Params::AFort_Entry_Music_Controller_BP_C_Lobby_Music_Override_Params Parms{};

	Parms.Lobby_Music_Activate = Lobby_Music_Activate;
	Parms.New_Music = New_Music;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.SetCanRetriggerNextMusicPack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFort_Entry_Music_Controller_BP_C::SetCanRetriggerNextMusicPack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "SetCanRetriggerNextMusicPack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.PlayEquippedMusicPack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFort_Entry_Music_Controller_BP_C::PlayEquippedMusicPack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "PlayEquippedMusicPack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.StartMusic
// (Event, Public, BlueprintEvent)
// Parameters:

void AFort_Entry_Music_Controller_BP_C::StartMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "StartMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFort_Entry_Music_Controller_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Crossfade Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Start_Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void AFort_Entry_Music_Controller_BP_C::Crossfade_Music(float Start_Time, const struct FGameplayTag& EventTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "Crossfade Music");

	Params::AFort_Entry_Music_Controller_BP_C_Crossfade_Music_Params Parms{};

	Parms.Start_Time = Start_Time;
	Parms.EventTag = EventTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ExecuteUbergraph_Fort_Entry_Music_Controller_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaMusicPackItemDefinition*CallFunc_GetEquippedMusicPack_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicContext*           CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaMusicPackItemDefinition*CallFunc_GetEquippedMusicPack_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_New_Music_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_StartTime                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Event_Tag                                     (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaMusicPackItemDefinition*K2Node_CustomEvent_NewMusicPack                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_StartTimeOffset                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_DynamicCast_AsSound_Base                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicContext*           CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Lobby_Music_Activate                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_New_Music                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDefaultMusicEquipped_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAudioAnalysisSubsystem* CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicEventSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Temp_struct_Variable                                             (None)
// struct FGameplayTagContainer       Temp_struct_Variable_1                                           (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// class UFortMusicContext*           CallFunc_GetContext_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicEventSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Start_Time                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_EventTag                                      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnabled_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicEventSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnabled_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             K2Node_Select_Default_2                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicEventSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnabled_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Select_Default_3                                          (None)
// class UAudioComponent*             CallFunc_AddEvent_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFort_Entry_Music_Controller_BP_C::ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int32 EntryPoint, class UFortMusicContext* CallFunc_GetContext_ReturnValue, class UAthenaMusicPackItemDefinition* CallFunc_GetEquippedMusicPack_ReturnValue, class UFortMusicContext* CallFunc_GetContext_ReturnValue_1, class UAthenaMusicPackItemDefinition* CallFunc_GetEquippedMusicPack_ReturnValue_1, class USoundBase* K2Node_CustomEvent_New_Music_1, float K2Node_CustomEvent_StartTime, const struct FGameplayTag& K2Node_CustomEvent_Event_Tag, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class UAthenaMusicPackItemDefinition* K2Node_CustomEvent_NewMusicPack, float K2Node_CustomEvent_StartTimeOffset, bool CallFunc_Not_PreBool_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, class UFortMusicContext* CallFunc_GetContext_ReturnValue_2, bool K2Node_CustomEvent_Lobby_Music_Activate, class USoundBase* K2Node_CustomEvent_New_Music, bool CallFunc_IsDefaultMusicEquipped_ReturnValue, class UFortAudioAnalysisSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FGameplayTagContainer& Temp_struct_Variable, const struct FGameplayTagContainer& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, bool Temp_bool_Variable_2, const struct FGameplayTag& K2Node_Select_Default, class UFortMusicContext* CallFunc_GetContext_ReturnValue_3, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, float K2Node_CustomEvent_Start_Time, const struct FGameplayTag& K2Node_CustomEvent_EventTag, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsEnabled_ReturnValue, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsEnabled_ReturnValue_1, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, class UAudioComponent* K2Node_Select_Default_1, class UAudioComponent* K2Node_Select_Default_2, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsEnabled_ReturnValue_2, const struct FGameplayTagContainer& K2Node_Select_Default_3, class UAudioComponent* CallFunc_AddEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "ExecuteUbergraph_Fort_Entry_Music_Controller_BP");

	Params::AFort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetEquippedMusicPack_ReturnValue = CallFunc_GetEquippedMusicPack_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetEquippedMusicPack_ReturnValue_1 = CallFunc_GetEquippedMusicPack_ReturnValue_1;
	Parms.K2Node_CustomEvent_New_Music_1 = K2Node_CustomEvent_New_Music_1;
	Parms.K2Node_CustomEvent_StartTime = K2Node_CustomEvent_StartTime;
	Parms.K2Node_CustomEvent_Event_Tag = K2Node_CustomEvent_Event_Tag;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_NewMusicPack = K2Node_CustomEvent_NewMusicPack;
	Parms.K2Node_CustomEvent_StartTimeOffset = K2Node_CustomEvent_StartTimeOffset;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsSound_Base = K2Node_DynamicCast_AsSound_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.K2Node_CustomEvent_Lobby_Music_Activate = K2Node_CustomEvent_Lobby_Music_Activate;
	Parms.K2Node_CustomEvent_New_Music = K2Node_CustomEvent_New_Music;
	Parms.CallFunc_IsDefaultMusicEquipped_ReturnValue = CallFunc_IsDefaultMusicEquipped_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetContext_ReturnValue_3 = CallFunc_GetContext_ReturnValue_3;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.K2Node_CustomEvent_Start_Time = K2Node_CustomEvent_Start_Time;
	Parms.K2Node_CustomEvent_EventTag = K2Node_CustomEvent_EventTag;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsEnabled_ReturnValue = CallFunc_IsEnabled_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsEnabled_ReturnValue_1 = CallFunc_IsEnabled_ReturnValue_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsEnabled_ReturnValue_2 = CallFunc_IsEnabled_ReturnValue_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_AddEvent_ReturnValue = CallFunc_AddEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


