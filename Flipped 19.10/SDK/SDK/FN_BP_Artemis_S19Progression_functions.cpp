#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Artemis_S19Progression.BP_Artemis_S19Progression_C
// (Actor)

class UClass* ABP_Artemis_S19Progression_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Artemis_S19Progression_C");

	return Clss;
}


// BP_Artemis_S19Progression_C BP_Artemis_S19Progression.Default__BP_Artemis_S19Progression_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Artemis_S19Progression_C* ABP_Artemis_S19Progression_C::GetDefaultObj()
{
	static class ABP_Artemis_S19Progression_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Artemis_S19Progression_C*>(ABP_Artemis_S19Progression_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.FindAndSetSnowProgressionPhase
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, enum class EBp_E_Artemis_S19_Progression>SnowProgressionEvents                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_QuerySnowCalendarEvents_EventFound                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_QuerySnowCalendarEvents_FoundEventName                  (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_QuerySnowCalendarEvents_EventTimespanRatio              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBP_Artemis_S19_Progression_StructK2Node_MakeStruct_BP_Artemis_S19_Progression_Struct              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBp_E_Artemis_S19_ProgressionCallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBP_Artemis_S19_Progression_StructK2Node_MakeStruct_BP_Artemis_S19_Progression_Struct_1            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Artemis_S19Progression_C::FindAndSetSnowProgressionPhase(TMap<class FString, enum class EBp_E_Artemis_S19_Progression>& SnowProgressionEvents, bool CallFunc_QuerySnowCalendarEvents_EventFound, const class FString& CallFunc_QuerySnowCalendarEvents_FoundEventName, float CallFunc_QuerySnowCalendarEvents_EventTimespanRatio, const struct FBP_Artemis_S19_Progression_Struct& K2Node_MakeStruct_BP_Artemis_S19_Progression_Struct, enum class EBp_E_Artemis_S19_Progression CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FBP_Artemis_S19_Progression_Struct& K2Node_MakeStruct_BP_Artemis_S19_Progression_Struct_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "FindAndSetSnowProgressionPhase");

	Params::ABP_Artemis_S19Progression_C_FindAndSetSnowProgressionPhase_Params Parms{};

	Parms.SnowProgressionEvents = SnowProgressionEvents;
	Parms.CallFunc_QuerySnowCalendarEvents_EventFound = CallFunc_QuerySnowCalendarEvents_EventFound;
	Parms.CallFunc_QuerySnowCalendarEvents_FoundEventName = CallFunc_QuerySnowCalendarEvents_FoundEventName;
	Parms.CallFunc_QuerySnowCalendarEvents_EventTimespanRatio = CallFunc_QuerySnowCalendarEvents_EventTimespanRatio;
	Parms.K2Node_MakeStruct_BP_Artemis_S19_Progression_Struct = K2Node_MakeStruct_BP_Artemis_S19_Progression_Struct;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_MakeStruct_BP_Artemis_S19_Progression_Struct_1 = K2Node_MakeStruct_BP_Artemis_S19_Progression_Struct_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.OnRep_SnowProgressionState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBp_E_Artemis_S19_ProgressionCallFunc_GetSnowProgressionPhase_SnowProgressionPhase            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Artemis_S19Progression_C::OnRep_SnowProgressionState(bool CallFunc_IsDedicatedServer_ReturnValue, enum class EBp_E_Artemis_S19_Progression CallFunc_GetSnowProgressionPhase_SnowProgressionPhase, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "OnRep_SnowProgressionState");

	Params::ABP_Artemis_S19Progression_C_OnRep_SnowProgressionState_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetSnowProgressionPhase_SnowProgressionPhase = CallFunc_GetSnowProgressionPhase_SnowProgressionPhase;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.GetSnowProgressionPhase
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EBp_E_Artemis_S19_ProgressionSnowProgressionPhase                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Artemis_S19Progression_C::GetSnowProgressionPhase(enum class EBp_E_Artemis_S19_Progression* SnowProgressionPhase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "GetSnowProgressionPhase");

	Params::ABP_Artemis_S19Progression_C_GetSnowProgressionPhase_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SnowProgressionPhase != nullptr)
		*SnowProgressionPhase = Parms.SnowProgressionPhase;

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.ClearRenderTargetOnDisk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Artemis_S19Progression_C::ClearRenderTargetOnDisk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "ClearRenderTargetOnDisk");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.RemoveSnowOnClient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Artemis_S19Progression_C::RemoveSnowOnClient(bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "RemoveSnowOnClient");

	Params::ABP_Artemis_S19Progression_C_RemoveSnowOnClient_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.UpdateSnowVisualsOnClient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Artemis_S19Progression_C::UpdateSnowVisualsOnClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "UpdateSnowVisualsOnClient");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.IgnoreCalendarEventsWarningLog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Artemis_S19Progression_C::IgnoreCalendarEventsWarningLog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "IgnoreCalendarEventsWarningLog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.OnRep_SnowProgression
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBp_E_Artemis_S19_ProgressionCallFunc_GetSnowProgressionPhase_SnowProgressionPhase            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Artemis_S19Progression_C::OnRep_SnowProgression(bool CallFunc_IsDedicatedServer_ReturnValue, enum class EBp_E_Artemis_S19_Progression CallFunc_GetSnowProgressionPhase_SnowProgressionPhase, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "OnRep_SnowProgression");

	Params::ABP_Artemis_S19Progression_C_OnRep_SnowProgression_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetSnowProgressionPhase_SnowProgressionPhase = CallFunc_GetSnowProgressionPhase_SnowProgressionPhase;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.QuerySnowCalendarEvents
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, enum class EBp_E_Artemis_S19_Progression>Events                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               EventFound                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      FoundEventName                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// float                              EventTimespanRatio                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCalendarEventInformation_bIsEventActive              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_GetCalendarEventInformation_TimeSinceBegin              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_GetCalendarEventInformation_TimeUntilEnd                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCalendarEventInformation_TimeSpanRatio               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Artemis_S19Progression_C::QuerySnowCalendarEvents(TMap<class FString, enum class EBp_E_Artemis_S19_Progression>& Events, bool* EventFound, class FString* FoundEventName, float* EventTimespanRatio, int32 Temp_int_Array_Index_Variable, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GetCalendarEventInformation_bIsEventActive, const struct FTimespan& CallFunc_GetCalendarEventInformation_TimeSinceBegin, const struct FTimespan& CallFunc_GetCalendarEventInformation_TimeUntilEnd, float CallFunc_GetCalendarEventInformation_TimeSpanRatio, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "QuerySnowCalendarEvents");

	Params::ABP_Artemis_S19Progression_C_QuerySnowCalendarEvents_Params Parms{};

	Parms.Events = Events;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetCalendarEventInformation_bIsEventActive = CallFunc_GetCalendarEventInformation_bIsEventActive;
	Parms.CallFunc_GetCalendarEventInformation_TimeSinceBegin = CallFunc_GetCalendarEventInformation_TimeSinceBegin;
	Parms.CallFunc_GetCalendarEventInformation_TimeUntilEnd = CallFunc_GetCalendarEventInformation_TimeUntilEnd;
	Parms.CallFunc_GetCalendarEventInformation_TimeSpanRatio = CallFunc_GetCalendarEventInformation_TimeSpanRatio;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EventFound != nullptr)
		*EventFound = Parms.EventFound;

	if (FoundEventName != nullptr)
		*FoundEventName = std::move(Parms.FoundEventName);

	if (EventTimespanRatio != nullptr)
		*EventTimespanRatio = Parms.EventTimespanRatio;

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.Release&ClearRenderTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Artemis_S19Progression_C::Release_ClearRenderTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "Release&ClearRenderTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.SetupRT
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      CallFunc_CreateRenderTarget2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Artemis_S19Progression_C::SetupRT(float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "SetupRT");

	Params::ABP_Artemis_S19Progression_C_SetupRT_Params Parms{};

	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_CreateRenderTarget2D_ReturnValue = CallFunc_CreateRenderTarget2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.PopulateBitArray
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameStateComponent_SurfaceCoverageMap*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateCoverageMap_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Artemis_S19Progression_C::PopulateBitArray(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UFortGameStateComponent_SurfaceCoverageMap* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_UpdateCoverageMap_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "PopulateBitArray");

	Params::ABP_Artemis_S19Progression_C_PopulateBitArray_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_UpdateCoverageMap_ReturnValue = CallFunc_UpdateCoverageMap_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.FlushRVT
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Artemis_S19Progression_C::FlushRVT(bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "FlushRVT");

	Params::ABP_Artemis_S19Progression_C_FlushRVT_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.UpdateSnowProgressionMPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBp_E_Artemis_S19_ProgressionTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBp_E_Artemis_S19_ProgressionCallFunc_GetSnowProgressionPhase_SnowProgressionPhase            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBp_E_Artemis_S19_ProgressionCallFunc_GetSnowProgressionPhase_SnowProgressionPhase_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBp_E_Artemis_S19_ProgressionTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Artemis_S19Progression_C::UpdateSnowProgressionMPC(float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, enum class EBp_E_Artemis_S19_Progression Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, bool CallFunc_IsDedicatedServer_ReturnValue, enum class EBp_E_Artemis_S19_Progression CallFunc_GetSnowProgressionPhase_SnowProgressionPhase, enum class EBp_E_Artemis_S19_Progression CallFunc_GetSnowProgressionPhase_SnowProgressionPhase_1, float CallFunc_Lerp_ReturnValue, int32 K2Node_Select_Default, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_4, enum class EBp_E_Artemis_S19_Progression Temp_byte_Variable_1, const struct FVector2D& CallFunc_Array_Get_Item, float K2Node_Select_Default_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "UpdateSnowProgressionMPC");

	Params::ABP_Artemis_S19Progression_C_UpdateSnowProgressionMPC_Params Parms{};

	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetSnowProgressionPhase_SnowProgressionPhase = CallFunc_GetSnowProgressionPhase_SnowProgressionPhase;
	Parms.CallFunc_GetSnowProgressionPhase_SnowProgressionPhase_1 = CallFunc_GetSnowProgressionPhase_SnowProgressionPhase_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBp_E_Artemis_S19_ProgressionCallFunc_GetSnowProgressionPhase_SnowProgressionPhase            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Artemis_S19Progression_C::UserConstructionScript(enum class EBp_E_Artemis_S19_Progression CallFunc_GetSnowProgressionPhase_SnowProgressionPhase, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "UserConstructionScript");

	Params::ABP_Artemis_S19Progression_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetSnowProgressionPhase_SnowProgressionPhase = CallFunc_GetSnowProgressionPhase_SnowProgressionPhase;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.OnReady_60D0298240509AEB035A67BBB4E888A1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Artemis_S19Progression_C::OnReady_60D0298240509AEB035A67BBB4E888A1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "OnReady_60D0298240509AEB035A67BBB4E888A1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.OnSyncComplete_B55EE03D4831485EC74831AFBEAF5E01
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Artemis_S19Progression_C::OnSyncComplete_B55EE03D4831485EC74831AFBEAF5E01()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "OnSyncComplete_B55EE03D4831485EC74831AFBEAF5E01");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Artemis_S19Progression_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.CallFlushRVT
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Artemis_S19Progression_C::CallFlushRVT()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "CallFlushRVT");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.CallDelayedFlushRVT
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Artemis_S19Progression_C::CallDelayedFlushRVT()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "CallDelayedFlushRVT");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.SetAllowBitArrayPopulation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AllowBitArrayPopulation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Artemis_S19Progression_C::SetAllowBitArrayPopulation(bool AllowBitArrayPopulation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "SetAllowBitArrayPopulation");

	Params::ABP_Artemis_S19Progression_C_SetAllowBitArrayPopulation_Params Parms{};

	Parms.AllowBitArrayPopulation = AllowBitArrayPopulation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.SetSnowProgressionPhase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Artemis_S19Progression_C::SetSnowProgressionPhase(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "SetSnowProgressionPhase");

	Params::ABP_Artemis_S19Progression_C_SetSnowProgressionPhase_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Artemis_S19Progression_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "ReceiveEndPlay");

	Params::ABP_Artemis_S19Progression_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.CallClearRenderTargetOnDisk
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Artemis_S19Progression_C::CallClearRenderTargetOnDisk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "CallClearRenderTargetOnDisk");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.ExecuteUbergraph_BP_Artemis_S19Progression
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_InitialCalendarSyncCompleted*CallFunc_InitialCalendarSyncCompleted_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBp_E_Artemis_S19_ProgressionTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBp_E_Artemis_S19_ProgressionTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBp_E_Artemis_S19_ProgressionTemp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBp_E_Artemis_S19_ProgressionTemp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBp_E_Artemis_S19_ProgressionTemp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBp_E_Artemis_S19_ProgressionTemp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBp_E_Artemis_S19_ProgressionTemp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_AllowBitArrayPopulation                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBp_E_Artemis_S19_ProgressionK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBP_Artemis_S19_Progression_StructK2Node_MakeStruct_BP_Artemis_S19_Progression_Struct              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBp_E_Artemis_S19_ProgressionCallFunc_GetSnowProgressionPhase_SnowProgressionPhase            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBp_E_Artemis_S19_ProgressionCallFunc_GetSnowProgressionPhase_SnowProgressionPhase_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_AuthorityMatchReady*CallFunc_MatchReadyAsync_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateFrontEnd*    K2Node_DynamicCast_AsFort_Player_State_Front_End                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Artemis_S19Progression_C::ExecuteUbergraph_BP_Artemis_S19Progression(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class UFortAsyncAction_InitialCalendarSyncCompleted* CallFunc_InitialCalendarSyncCompleted_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, enum class EBp_E_Artemis_S19_Progression Temp_byte_Variable, enum class EBp_E_Artemis_S19_Progression Temp_byte_Variable_1, enum class EBp_E_Artemis_S19_Progression Temp_byte_Variable_2, enum class EBp_E_Artemis_S19_Progression Temp_byte_Variable_3, enum class EBp_E_Artemis_S19_Progression Temp_byte_Variable_4, enum class EBp_E_Artemis_S19_Progression Temp_byte_Variable_5, enum class EBp_E_Artemis_S19_Progression Temp_byte_Variable_6, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_AllowBitArrayPopulation, bool CallFunc_HasAuthority_ReturnValue_2, int32 K2Node_CustomEvent_Index, enum class EEndPlayReason K2Node_Event_EndPlayReason, enum class EBp_E_Artemis_S19_Progression K2Node_Select_Default, const struct FBP_Artemis_S19_Progression_Struct& K2Node_MakeStruct_BP_Artemis_S19_Progression_Struct, enum class EBp_E_Artemis_S19_Progression CallFunc_GetSnowProgressionPhase_SnowProgressionPhase, enum class EBp_E_Artemis_S19_Progression CallFunc_GetSnowProgressionPhase_SnowProgressionPhase_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortAsyncAction_AuthorityMatchReady* CallFunc_MatchReadyAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AFortPlayerStateFrontEnd* K2Node_DynamicCast_AsFort_Player_State_Front_End, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "ExecuteUbergraph_BP_Artemis_S19Progression");

	Params::ABP_Artemis_S19Progression_C_ExecuteUbergraph_BP_Artemis_S19Progression_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_InitialCalendarSyncCompleted_ReturnValue = CallFunc_InitialCalendarSyncCompleted_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_AllowBitArrayPopulation = K2Node_CustomEvent_AllowBitArrayPopulation;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_BP_Artemis_S19_Progression_Struct = K2Node_MakeStruct_BP_Artemis_S19_Progression_Struct;
	Parms.CallFunc_GetSnowProgressionPhase_SnowProgressionPhase = CallFunc_GetSnowProgressionPhase_SnowProgressionPhase;
	Parms.CallFunc_GetSnowProgressionPhase_SnowProgressionPhase_1 = CallFunc_GetSnowProgressionPhase_SnowProgressionPhase_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_MatchReadyAsync_ReturnValue = CallFunc_MatchReadyAsync_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsFort_Player_State_Front_End = K2Node_DynamicCast_AsFort_Player_State_Front_End;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Artemis_S19Progression.BP_Artemis_S19Progression_C.s19BitArrayPopulated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Artemis_S19Progression_C::S19BitArrayPopulated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Artemis_S19Progression_C", "s19BitArrayPopulated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


