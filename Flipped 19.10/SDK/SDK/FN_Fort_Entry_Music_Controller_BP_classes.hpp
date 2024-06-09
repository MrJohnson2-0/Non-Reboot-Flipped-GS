#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x269 - 0x220)
// BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
class AFort_Entry_Music_Controller_BP_C : public AFortEntryMusicController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Enter_Menu_Loop;                                   // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       MenuMusic_B;                                       // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       MenuMusic_A;                                       // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       LoginMusic;                                        // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOutTime;                                       // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7472[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            CurrentMusic;                                      // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Music_Activate_Override;                        // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7473[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaMusicPackItemDefinition*        MusicPackToPlayLater;                              // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCanRetriggerNextMusicPack;                        // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFort_Entry_Music_Controller_BP_C* GetDefaultObj();

	void Change_Music(class USoundBase* New_Music, float StartTime, const struct FGameplayTag& Event_Tag);
	void ListenToMusicPacks();
	void OnMusicPackChanged(class UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset);
	void Lobby_Music_Override(bool Lobby_Music_Activate, class USoundBase* New_Music);
	void SetCanRetriggerNextMusicPack();
	void PlayEquippedMusicPack();
	void StartMusic();
	void ReceiveBeginPlay();
	void Crossfade_Music(float Start_Time, const struct FGameplayTag& EventTag);
	void ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int32 EntryPoint, class UFortMusicContext* CallFunc_GetContext_ReturnValue, class UAthenaMusicPackItemDefinition* CallFunc_GetEquippedMusicPack_ReturnValue, class UFortMusicContext* CallFunc_GetContext_ReturnValue_1, class UAthenaMusicPackItemDefinition* CallFunc_GetEquippedMusicPack_ReturnValue_1, class USoundBase* K2Node_CustomEvent_New_Music_1, float K2Node_CustomEvent_StartTime, const struct FGameplayTag& K2Node_CustomEvent_Event_Tag, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class UAthenaMusicPackItemDefinition* K2Node_CustomEvent_NewMusicPack, float K2Node_CustomEvent_StartTimeOffset, bool CallFunc_Not_PreBool_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, class UFortMusicContext* CallFunc_GetContext_ReturnValue_2, bool K2Node_CustomEvent_Lobby_Music_Activate, class USoundBase* K2Node_CustomEvent_New_Music, bool CallFunc_IsDefaultMusicEquipped_ReturnValue, class UFortAudioAnalysisSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FGameplayTagContainer& Temp_struct_Variable, const struct FGameplayTagContainer& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, bool Temp_bool_Variable_2, const struct FGameplayTag& K2Node_Select_Default, class UFortMusicContext* CallFunc_GetContext_ReturnValue_3, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, float K2Node_CustomEvent_Start_Time, const struct FGameplayTag& K2Node_CustomEvent_EventTag, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsEnabled_ReturnValue, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsEnabled_ReturnValue_1, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, class UAudioComponent* K2Node_Select_Default_1, class UAudioComponent* K2Node_Select_Default_2, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsEnabled_ReturnValue_2, const struct FGameplayTagContainer& K2Node_Select_Default_3, class UAudioComponent* CallFunc_AddEvent_ReturnValue);
};

}


