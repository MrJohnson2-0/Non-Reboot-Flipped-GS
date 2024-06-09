#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0x1E8 - 0xD8)
// BlueprintGeneratedClass BP_AmbientAudioController.BP_AmbientAudioController_C
class UBP_AmbientAudioController_C : public UFortAmbientAudioController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        CheckFrequency;                                    // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInSnowCurrent;                                    // 0xE4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAmbientAudioDataAsset*                WinterAudioBank;                                   // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSnowEnabled;                                      // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAmbientAudioDataAsset*                StormAudioBank;                                    // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AmbientAudioInsideTag;                             // 0x100(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAmbientAudioDataAsset*                CurieAudioBank;                                    // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SnowOriginWorldLoc;                                // 0x110(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SnowRadius;                                        // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  SnowTagsToApply;                                   // 0x120(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  SnowEntryName;                                     // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IndoorInterpTime;                                  // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IndoorStateChangedTime;                            // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsIndoors;                                        // 0x140(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IsPlayerIndoorsInterp;                             // 0x144(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CurrViewTarget;                                    // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  GenericTagsToApply;                                // 0x150(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bTagApplicationEnabled;                            // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInteriorAudioState               Current_State;                                     // 0x161(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53C2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Current_Room_Size_Tag;                             // 0x164(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayTag, class UReverbEffect*> Reverbs;                                           // 0x170(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortGameStateComponent_SurfaceOverride* SnowCoverageComponent;                             // 0x1C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        SupportedTagLevels;                                // 0x1C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        SpecialSurfacePadding;                             // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundMix*                             AmbientAudioSoundMix;                              // 0x1E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AmbientAudioController_C* GetDefaultObj();

	void InitSnowCoverageComponent(class AGameStateBase* Game_State, class UFortGameStateComponent_SurfaceOverride* CallFunc_GetComponentByClass_ReturnValue);
	void OnViewTargetChanged(class AActor* New_Target, class AActor* Prev_Target);
	void CacheViewTarget(class AActor* NewViewTarget, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue);
	void RemovePlayerTags(class AActor* Player, TArray<struct FGameplayTag>& Array, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);
	void ApplyPlayerTags(class AActor* Player, TArray<struct FGameplayTag>& Tag_Array, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);
	void UpdateSnowSetupBP(class UAmbientAudioSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EPhysicalSurface CallFunc_GetSpecialSurfaceType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsLocationInSpecialSurface_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnReady_C8AC4F724844E04160BE56BEAB4A2614(class AGameStateBase* GameState);
	void ReceiveBeginPlay();
	void Update();
	void InteriorStateChanged(enum class EInteriorAudioState PreviousState, enum class EInteriorAudioState CurrentState);
	void ReceiveTick(float DeltaSeconds);
	void On_Room_Size_Changed(const struct FGameplayTag& Curr, const struct FGameplayTag& Prev);
	void On_Room_State_Changed(enum class EInteriorAudioState Curr, enum class EInteriorAudioState Prev);
	void Update_Interior_Audio_Verb();
	void ExecuteUbergraph_BP_AmbientAudioController(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UAmbientAudioSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UFortInteriorAudioSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, const struct FInteriorAudioPlayerInfo& CallFunc_GetPlayerInfo_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameStateBase* K2Node_CustomEvent_GameState, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<enum class EInteriorAudioState>& K2Node_MakeArray_Array_1, class AGameStateBase* Temp_object_Variable, class UFortAsyncAction_GameStateReady* CallFunc_GameStateReadyAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EInteriorAudioState Temp_wildcard_To_allow_the_previous_value_to_be_returned_Variable, const struct FGameplayTag& Temp_wildcard_To_allow_the_previous_value_to_be_returned_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_Variable_2, enum class EInteriorAudioState K2Node_CustomEvent_PreviousState, enum class EInteriorAudioState K2Node_CustomEvent_CurrentState, float K2Node_Event_DeltaSeconds, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_Lerp_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable_3, bool CallFunc_Array_Contains_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_Curr_1, const struct FGameplayTag& K2Node_CustomEvent_Prev_1, bool CallFunc_Array_Contains_ReturnValue_1, enum class EInteriorAudioState K2Node_CustomEvent_Curr, enum class EInteriorAudioState K2Node_CustomEvent_Prev, bool K2Node_SwitchEnum_CmpSuccess, class UReverbEffect* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, enum class EInteriorAudioState Temp_byte_Variable, bool K2Node_Select_Default, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class UFortInteriorAudioSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_2);
};

}


