#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2F8 (0x530 - 0x238)
// BlueprintGeneratedClass Frontend_Lobby_Background.Frontend_Lobby_Background_C
class AFrontend_Lobby_Background_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        FadeIn_Fade_3606FDF647A6577B9DAC47B89146CD85;      // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FadeIn__Direction_3606FDF647A6577B9DAC47B89146CD85; // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_74D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FadeIn;                                            // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOut_Fade_44D3B05B49031FA3891648AB32F57584;     // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FadeOut__Direction_44D3B05B49031FA3891648AB32F57584; // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_74D7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FadeOut;                                           // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadetoBlackFloor;                                  // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeGrid;                                          // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeGrid_Targetvalue;                              // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadetoBlackFloor_TargetValue;                      // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                PresetEnvironment;                                 // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UTexture*                              Texture;                                           // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Material;                                          // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     PreBlueMaterial;                                   // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, struct FFrontendBackgroundData> Backgrounds;                                       // 0x298(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class ANiagaraActor*                         NiagaraActor_6_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x2E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FrontendBackPlate_C*               Six_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEmitter*                              P_Storm_Rain_01_5_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEmitter*                              P_Snow_Ambient_Lobby_2_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  SM_Sideways_Smoke_FrontEnd_159_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  SM_Mother_Crash_BlinkingLights_01_3_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  SM_Sideways_Smoke_FrontEnd_0_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANiagaraActor*                         NiagaraActor_2_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANiagaraActor*                         NiagaraActor_4_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANiagaraActor*                         NiagaraActor_1_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANiagaraActor*                         NiagaraActor_5_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FrontendBackPlate_C*               Six_EdGraph_2_RefProperty;                         // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_08_Bug_EdGraph_3_RefProperty; // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_08_EdGraph_3_RefProperty;  // 0x350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_07_Bug_EdGraph_3_RefProperty; // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_07_EdGraph_3_RefProperty;  // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_06_Bug_EdGraph_3_RefProperty; // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_06_EdGraph_3_RefProperty;  // 0x370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_05_Bug_EdGraph_3_RefProperty; // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_05_EdGraph_3_RefProperty;  // 0x380(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_04_Bug_EdGraph_3_RefProperty; // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_04_EdGraph_3_RefProperty;  // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_03_Bug_EdGraph_3_RefProperty; // 0x398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_03_EdGraph_3_RefProperty;  // 0x3A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_02_Bug_EdGraph_3_RefProperty; // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_02_EdGraph_3_RefProperty;  // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_01_Bug_EdGraph_3_RefProperty; // 0x3B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_01_EdGraph_3_RefProperty;  // 0x3C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage02_04_Bug_EdGraph_3_RefProperty; // 0x3C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage02_04_EdGraph_3_RefProperty;  // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage02_03_Bug_EdGraph_3_RefProperty; // 0x3D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage02_03_EdGraph_3_RefProperty;  // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage02_02_Bug_EdGraph_3_RefProperty; // 0x3E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage02_02_EdGraph_3_RefProperty;  // 0x3F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage02_01_Bug_EdGraph_3_RefProperty; // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage02_01_EdGraph_3_RefProperty;  // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage02_02_2_EdGraph_3_RefProperty; // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage01_02_Bug_EdGraph_3_RefProperty; // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage01_01_Bug_EdGraph_3_RefProperty; // 0x418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage01_01_EdGraph_3_RefProperty;  // 0x420(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FrontendBackPlate_C*               Six_EdGraph_5_RefProperty;                         // 0x428(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FrontendBackPlate_C*               Six_EdGraph_6_RefProperty;                         // 0x430(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_08_Bug_EdGraph_7_RefProperty; // 0x438(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_08_EdGraph_7_RefProperty;  // 0x440(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_07_Bug_EdGraph_7_RefProperty; // 0x448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_07_EdGraph_7_RefProperty;  // 0x450(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_06_Bug_EdGraph_7_RefProperty; // 0x458(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_06_EdGraph_7_RefProperty;  // 0x460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_05_Bug_EdGraph_7_RefProperty; // 0x468(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_05_EdGraph_7_RefProperty;  // 0x470(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_04_Bug_EdGraph_7_RefProperty; // 0x478(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_04_EdGraph_7_RefProperty;  // 0x480(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_03_Bug_EdGraph_7_RefProperty; // 0x488(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_03_EdGraph_7_RefProperty;  // 0x490(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_02_Bug_EdGraph_7_RefProperty; // 0x498(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_02_EdGraph_7_RefProperty;  // 0x4A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_01_Bug_EdGraph_7_RefProperty; // 0x4A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage03_01_EdGraph_7_RefProperty;  // 0x4B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage02_04_Bug_EdGraph_7_RefProperty; // 0x4B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage02_04_EdGraph_7_RefProperty;  // 0x4C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage02_03_Bug_EdGraph_7_RefProperty; // 0x4C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage02_03_EdGraph_7_RefProperty;  // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage02_02_Bug_EdGraph_7_RefProperty; // 0x4D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage02_02_EdGraph_7_RefProperty;  // 0x4E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage02_01_Bug_EdGraph_7_RefProperty; // 0x4E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage02_01_EdGraph_7_RefProperty;  // 0x4F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage02_02_2_EdGraph_7_RefProperty; // 0x4F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage01_02_Bug_EdGraph_7_RefProperty; // 0x500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage01_01_Bug_EdGraph_7_RefProperty; // 0x508(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortStaticMeshActor*                  AvocadoParasite_Stage01_01_EdGraph_7_RefProperty;  // 0x510(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FrontendBackPlate_C*               Six_EdGraph_7_RefProperty;                         // 0x518(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FrontendBackPlate_C*               Six_EdGraph_8_RefProperty;                         // 0x520(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FrontendBackPlate_C*               Six_EdGraph_9_RefProperty;                         // 0x528(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFrontend_Lobby_Background_C* GetDefaultObj();

	void SetupSpecialEventBackgroundDataWithRenderTarget(bool EnableRealtimeUpdate, float InFadeGridTargetValue, float InFadeToBlackFloorTargetValue);
	void SetupBasicBackgroundDataWithRenderTarget(bool EnableRealtimeUpdate, float InFadeGridTargetValue, float InFadeToBlackFloorTargetValue);
	void SetupSeason17BackgroundData(bool HidePhase1, bool HidePhase2, bool HidePhase3);
	void SetupSpecialEventBackgroundData(bool EnableRealtimeUpdate, float InFadeGridTargetValue, float InFadeToBlackFloorTargetValue);
	void SetupGalileo();
	void LoadBackgroundData(TSoftObjectPtr<class UMaterialInstance> LocalMaterialPreBlur, TSoftObjectPtr<class UMaterialInstance> LocalMaterial, TSoftObjectPtr<class UTexture> LocalTexture, const struct FFrontendBackgroundData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void HideAvocadoActors();
	void Setup_Basic_Background_Data(bool EnableRealtimeUpdate, float InFadeGridTargetValue, float InFadeToBlackFloorTargetValue);
	void SetShowPedestalSparkles(bool Show, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ATeamMemberPedestal_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ATeamMemberPedestal_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateFade(float FadeValue, float FadeFloorToBlack, float InFadeGrid, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1);
	void FadeIn__FinishedFunc();
	void FadeIn__UpdateFunc();
	void FadeOut__FinishedFunc();
	void FadeOut__UpdateFunc();
	void OnLoaded_7B16DAE04937EECB604410A2EC352CE3(class UObject* Loaded);
	void OnLoaded_D6DC1C6545F1A19E2FFC1B9CDACD5E99(class UObject* Loaded);
	void OnLoaded_E5F1E80A4DD36718D41FF68F137C4775(class UObject* Loaded);
	void ReceiveBeginPlay();
	void TestDynColor();
	void BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature(class UTexture* BackgroundImage);
	void BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature(const class FString& PresetEnvironmentName);
	void FadeFromBlue();
	void LoadAssets(TSoftObjectPtr<class UTexture> InTexture, TSoftObjectPtr<class UMaterialInstance> InMaterial, TSoftObjectPtr<class UMaterialInstance> InPreBlurMaterial);
	void ContinueBackgroundSetup();
	void ExecuteUbergraph_Frontend_Lobby_Background(int32 EntryPoint, class UObject* Temp_object_Variable, class UObject* K2Node_CustomEvent_Loaded, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess, class UObject* Temp_object_Variable_1, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* K2Node_CustomEvent_Loaded_1, bool K2Node_SwitchString_CmpSuccess, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UObject* Temp_object_Variable_2, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess_2, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UTexture* K2Node_ActorBoundEvent_BackgroundImage, class UObject* K2Node_CustomEvent_Loaded_2, const class FString& K2Node_ActorBoundEvent_PresetEnvironmentName, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TSoftObjectPtr<class UTexture> K2Node_CustomEvent_InTexture, TSoftObjectPtr<class UMaterialInstance> K2Node_CustomEvent_InMaterial, TSoftObjectPtr<class UMaterialInstance> K2Node_CustomEvent_InPreBlurMaterial, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_GetScalarParameterValue_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue_1);
};

}


