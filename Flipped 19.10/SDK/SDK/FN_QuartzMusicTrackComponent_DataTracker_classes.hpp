#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x1E8 - 0x180)
// BlueprintGeneratedClass QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C
class UQuartzMusicTrackComponent_DataTracker_C : public UQuartzMusicTrackComponent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x180(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                DataTrackerClass;                                  // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayDataTrackerComponentManager* DataTrackerManager;                                // 0x190(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bDataTrackerAssigned;                              // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A12[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGameplayDataTrackerComponent*     DataTrackerComponent;                              // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAwaitingCooldownBeforeShutoff;                    // 0x1A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A13[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UpdateFrequency;                                   // 0x1AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDataTrackerParameterData>     DataTrackerParameters;                             // 0x1B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bHasFiredOffDataTrackerParameterWarning;           // 0x1C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A14[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundMix*                             DataTrackerSoundMix;                               // 0x1C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSoundMixActive;                                   // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A15[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TimerHandle;                                       // 0x1D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          StopTimer;                                         // 0x1E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQuartzMusicTrackComponent_DataTracker_C* GetDefaultObj();

	void GetDataTrackerParameterValueTotal(float* Value, float Total, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FDataTrackerParameterData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void GetDataTrackerParameterValue(int32 Index, float* Value);
	void GetDataTrackerComponent(class UFortGameplayDataTrackerComponent** DataTracker);
	void OnDataTrackerStop();
	void OnDataTrackerUpdate(int32 Temp_int_Variable, float CallFunc_GetDataTrackerParameterValue_Value, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void OnDataTrackerStart();
	void DataTrackerStop_Internal();
	void DataTrackerUpdate_Internal(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, enum class E_DataTrackerTagTypes Temp_byte_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, class UFortGameplayDataTrackerComponent* CallFunc_GetDataTrackerComponent_DataTracker, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_GetAccumulationValue_ReturnValue, float CallFunc_GetEventValue_ReturnValue, float K2Node_Select_Default, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Select_Default_1, float CallFunc_FInterpTo_ReturnValue, bool CallFunc_RequestTrackPlayback_Result);
	void DataTrackerStart_Internal(class UQuartzSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsQuartzEnabled_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_RequestTrackPlayback_Result);
	void OnDataTrackerComponentUnRegistered(class UFortGameplayDataTrackerComponent* UnRegisteredDataTracker, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void OnDataTrackerComponentRegistered(class UFortGameplayDataTrackerComponent* RegisteredDataTracker, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void On_Changed_Has_Any_Event_Value(class UFortGameplayDataTrackerComponent* DataTrackerComponent, bool bHasEventValues, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void OnReady_EAA166EB4AA20B4778C921B5F15F1C62(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
	void ReceiveBeginPlay();
	void Retry_Get_Data_Tracker_Manager();
	void ExecuteUbergraph_QuartzMusicTrackComponent_DataTracker(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortGameStateAthena* K2Node_CustomEvent_GameState, class UFortPlaylist* K2Node_CustomEvent_Playlist, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTagContainer& Temp_struct_Variable, class UFortPlaylist* Temp_object_Variable, class AFortGameStateAthena* Temp_object_Variable_1, class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFortGameplayDataTrackerComponentManager* CallFunc_GetCurrent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TArray<class UFortGameplayDataTrackerComponent*>& CallFunc_GetRegisteredDataTrackerComponents_OutDataTrackerComponents, class UFortGameplayDataTrackerComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4);
};

}


