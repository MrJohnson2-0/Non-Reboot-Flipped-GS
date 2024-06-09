#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x180 - 0xB0)
// BlueprintGeneratedClass QuartzMusicTrackComponent.QuartzMusicTrackComponent_C
class UQuartzMusicTrackComponent_C : public UGameFrameworkComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundCue*                             TrackSoundCue;                                     // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TrackPriority;                                     // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7647[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQuartzClockHandle*                    ClockInst;                                         // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ClockName;                                         // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ClockBPM;                                          // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7648[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuartzClockSettings                  ClockSettings;                                     // 0xE0(0x20)(Edit, BlueprintVisible)
	class ABP_QuartzMusicController_C*           ControllerActor;                                   // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuartzQuantizationBoundary           ClockQuantizationBoundary;                         // 0x108(0x20)(Edit, BlueprintVisible)
	bool                                         bDebugEnabled;                                     // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7649[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       AudioComponent;                                    // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bQueueStop;                                        // 0x138(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_764A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TrackFadeInTime;                                   // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TrackFadeOutTime;                                  // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_764B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          TrackParameters;                                   // 0x148(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TrackDisableTags;                                  // 0x158(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          MusicEventTag;                                     // 0x178(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQuartzMusicTrackComponent_C* GetDefaultObj();

	void GetClockHandle(class UQuartzClockHandle** Clock_Handle);
	void SetTrackParameter(int32 ParameterIndex, float InFloat, class UAudioComponent* CallFunc_GetAudioComponent_AudioComponent, TScriptInterface<class IAudioParameterInterface> CallFunc_SetFloatParameter_self_CastInput);
	void GetAudioComponent(class UAudioComponent** AudioComponent);
	enum class EAudioComponentPlayState GetPlayState(bool CallFunc_IsValid_ReturnValue, enum class EAudioComponentPlayState CallFunc_GetPlayState_ReturnValue);
	void GetIsPlaying(bool* Is_Playing, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue);
	void OnQuartzQuantizationEvent(class FName ClockName, enum class EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class UQuartzClockHandle* CallFunc_PauseClock_ClockHandle, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void OnQuartzClockDelegate(enum class EQuartzCommandDelegateSubType EventType, class FName Name, bool K2Node_SwitchEnum_CmpSuccess, class UQuartzClockHandle* CallFunc_ResumeClock_ClockHandle);
	void QueueTrackStop(class UAudioComponent* CallFunc_GetAudioComponent_AudioComponent, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue);
	void QueueTrackStart(class UQuartzSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UAudioComponent* CallFunc_GetAudioComponent_AudioComponent, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FQuartzQuantizationBoundary& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, class UQuartzSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsQuartzEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetAthenaPlaylistContextTags_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UQuartzClockHandle* CallFunc_SubscribeToAllQuantizationEvents_ClockHandle, class UQuartzClockHandle* CallFunc_SetBeatsPerMinute_ClockHandle, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UQuartzClockHandle* CallFunc_CreateNewClock_ReturnValue, bool CallFunc_IsValid_ReturnValue_4);
	void GetTrackPriority(float* Priority);
	void SetDebugEnabled(bool Debug);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void SetStemVolume(int32 Index, float Value);
	void ExecuteUbergraph_QuartzMusicTrackComponent(int32 EntryPoint, int32 K2Node_CustomEvent_Index, float K2Node_CustomEvent_Value, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_CustomEvent_Debug, TScriptInterface<class IAudioParameterInterface> CallFunc_SetFloatParameter_self_CastInput, class AActor* CallFunc_GetOwner_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class ABP_QuartzMusicController_C* K2Node_DynamicCast_AsBP_Quartz_Music_Controller, bool K2Node_DynamicCast_bSuccess);
};

}


