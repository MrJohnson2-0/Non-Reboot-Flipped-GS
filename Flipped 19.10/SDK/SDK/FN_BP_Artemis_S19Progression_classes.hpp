#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x348 - 0x220)
// BlueprintGeneratedClass BP_Artemis_S19Progression.BP_Artemis_S19Progression_C
class ABP_Artemis_S19Progression_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector2D>                     SnowmaskOffsets;                                   // 0x230(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               LandscapeBias;                                     // 0x240(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LandscapeSize;                                     // 0x24C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                SnowRT_BitArray;                                   // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             RenderTargetResolution;                            // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    RTMaterial;                                        // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CoverageThreshold;                                 // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, enum class EBp_E_Artemis_S19_Progression> SnowProgressionServer;                             // 0x278(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        DebugDrawBitArrayDuration;                         // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowBitArrayPopulation;                           // 0x2CC(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Release_ClearRenderTargetBitArrayOnCompletion;     // 0x2CD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15E7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            S19BitArrayPopulated;                              // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         BitArraySuccesfullyPopulated;                      // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                SnowRT_DiskAsset;                                  // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBP_Artemis_S19_Progression_Struct    SnowProgressionState;                              // 0x2F0(0x8)(Edit, BlueprintVisible, Net, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, enum class EBp_E_Artemis_S19_Progression> SnowProgressionClient;                             // 0x2F8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_Artemis_S19Progression_C* GetDefaultObj();

	void FindAndSetSnowProgressionPhase(TMap<class FString, enum class EBp_E_Artemis_S19_Progression>& SnowProgressionEvents, bool CallFunc_QuerySnowCalendarEvents_EventFound, const class FString& CallFunc_QuerySnowCalendarEvents_FoundEventName, float CallFunc_QuerySnowCalendarEvents_EventTimespanRatio, const struct FBP_Artemis_S19_Progression_Struct& K2Node_MakeStruct_BP_Artemis_S19_Progression_Struct, enum class EBp_E_Artemis_S19_Progression CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FBP_Artemis_S19_Progression_Struct& K2Node_MakeStruct_BP_Artemis_S19_Progression_Struct_1);
	void OnRep_SnowProgressionState(bool CallFunc_IsDedicatedServer_ReturnValue, enum class EBp_E_Artemis_S19_Progression CallFunc_GetSnowProgressionPhase_SnowProgressionPhase, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void GetSnowProgressionPhase(enum class EBp_E_Artemis_S19_Progression* SnowProgressionPhase);
	void ClearRenderTargetOnDisk();
	void RemoveSnowOnClient(bool CallFunc_IsDedicatedServer_ReturnValue);
	void UpdateSnowVisualsOnClient();
	void IgnoreCalendarEventsWarningLog();
	void OnRep_SnowProgression(bool CallFunc_IsDedicatedServer_ReturnValue, enum class EBp_E_Artemis_S19_Progression CallFunc_GetSnowProgressionPhase_SnowProgressionPhase, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void QuerySnowCalendarEvents(TMap<class FString, enum class EBp_E_Artemis_S19_Progression>& Events, bool* EventFound, class FString* FoundEventName, float* EventTimespanRatio, int32 Temp_int_Array_Index_Variable, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GetCalendarEventInformation_bIsEventActive, const struct FTimespan& CallFunc_GetCalendarEventInformation_TimeSinceBegin, const struct FTimespan& CallFunc_GetCalendarEventInformation_TimeUntilEnd, float CallFunc_GetCalendarEventInformation_TimeSpanRatio, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void Release_ClearRenderTarget();
	void SetupRT(float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue);
	void PopulateBitArray(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UFortGameStateComponent_SurfaceCoverageMap* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_UpdateCoverageMap_ReturnValue);
	void FlushRVT(bool CallFunc_IsDedicatedServer_ReturnValue);
	void UpdateSnowProgressionMPC(float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, enum class EBp_E_Artemis_S19_Progression Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, bool CallFunc_IsDedicatedServer_ReturnValue, enum class EBp_E_Artemis_S19_Progression CallFunc_GetSnowProgressionPhase_SnowProgressionPhase, enum class EBp_E_Artemis_S19_Progression CallFunc_GetSnowProgressionPhase_SnowProgressionPhase_1, float CallFunc_Lerp_ReturnValue, int32 K2Node_Select_Default, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_4, enum class EBp_E_Artemis_S19_Progression Temp_byte_Variable_1, const struct FVector2D& CallFunc_Array_Get_Item, float K2Node_Select_Default_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y);
	void UserConstructionScript(enum class EBp_E_Artemis_S19_Progression CallFunc_GetSnowProgressionPhase_SnowProgressionPhase, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void OnReady_60D0298240509AEB035A67BBB4E888A1();
	void OnSyncComplete_B55EE03D4831485EC74831AFBEAF5E01();
	void ReceiveBeginPlay();
	void CallFlushRVT();
	void CallDelayedFlushRVT();
	void SetAllowBitArrayPopulation(bool AllowBitArrayPopulation);
	void SetSnowProgressionPhase(int32 Index);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void CallClearRenderTargetOnDisk();
	void ExecuteUbergraph_BP_Artemis_S19Progression(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class UFortAsyncAction_InitialCalendarSyncCompleted* CallFunc_InitialCalendarSyncCompleted_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, enum class EBp_E_Artemis_S19_Progression Temp_byte_Variable, enum class EBp_E_Artemis_S19_Progression Temp_byte_Variable_1, enum class EBp_E_Artemis_S19_Progression Temp_byte_Variable_2, enum class EBp_E_Artemis_S19_Progression Temp_byte_Variable_3, enum class EBp_E_Artemis_S19_Progression Temp_byte_Variable_4, enum class EBp_E_Artemis_S19_Progression Temp_byte_Variable_5, enum class EBp_E_Artemis_S19_Progression Temp_byte_Variable_6, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_AllowBitArrayPopulation, bool CallFunc_HasAuthority_ReturnValue_2, int32 K2Node_CustomEvent_Index, enum class EEndPlayReason K2Node_Event_EndPlayReason, enum class EBp_E_Artemis_S19_Progression K2Node_Select_Default, const struct FBP_Artemis_S19_Progression_Struct& K2Node_MakeStruct_BP_Artemis_S19_Progression_Struct, enum class EBp_E_Artemis_S19_Progression CallFunc_GetSnowProgressionPhase_SnowProgressionPhase, enum class EBp_E_Artemis_S19_Progression CallFunc_GetSnowProgressionPhase_SnowProgressionPhase_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortAsyncAction_AuthorityMatchReady* CallFunc_MatchReadyAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AFortPlayerStateFrontEnd* K2Node_DynamicCast_AsFort_Player_State_Front_End, bool K2Node_DynamicCast_bSuccess);
	void S19BitArrayPopulated__DelegateSignature();
};

}


