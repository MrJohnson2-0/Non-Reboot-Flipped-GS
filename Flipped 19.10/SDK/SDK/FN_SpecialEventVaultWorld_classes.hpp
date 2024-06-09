#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x87 (0x358 - 0x2D1)
// BlueprintGeneratedClass SpecialEventVaultWorld.SpecialEventVaultWorld_C
class ASpecialEventVaultWorld_C : public AVaultWorld_C
{
public:
	uint8                                        Pad_7386[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Floor;                                             // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ItemDetails_X_Offset_1EDCEF5F41216A9DADD25897C8B68493; // 0x2E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ItemDetails__Direction_1EDCEF5F41216A9DADD25897C8B68493; // 0x2EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7387[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ItemDetails;                                       // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Floor_Visibility_FloorMask_37382717410D795E9E7E0990FC3EFCC2; // 0x2F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Floor_Visibility__Direction_37382717410D795E9E7E0990FC3EFCC2; // 0x2FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7388[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FloorMinusVisibility;                              // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Background_Effects_SetStreaks_7B5688E44724D9F68D3C20A520093829; // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Background_Effects__Direction_7B5688E44724D9F68D3C20A520093829; // 0x30C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7389[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    BackgroundMinusEffects;                            // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionForward_FX_Transition_Fade_FDB9DC244ED5578954F07A87EDA84CA5; // 0x318(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionForward_Pre_TransitionOffset_FDB9DC244ED5578954F07A87EDA84CA5; // 0x31C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionForward_Forward_FDB9DC244ED5578954F07A87EDA84CA5; // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TransitionForward__Direction_FDB9DC244ED5578954F07A87EDA84CA5; // 0x324(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_738A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    TransitionForward;                                 // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionBackward_fx_Transition_fade_9CCDE9524354AF859735079DD2ED12AA; // 0x330(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionBackward_Pre_Transition_Offset_9CCDE9524354AF859735079DD2ED12AA; // 0x334(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionBackward_Backward_9CCDE9524354AF859735079DD2ED12AA; // 0x338(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TransitionBackward__Direction_9CCDE9524354AF859735079DD2ED12AA; // 0x33C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_738B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    TransitionBackward;                                // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     FloorMI;                                           // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              FloorMID;                                          // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASpecialEventVaultWorld_C* GetDefaultObj();

	void TransitionBackgroundBackward(float Backward, float PreTransitionOffset, float FXTransitionFade, class UMaterialInstanceDynamic* Mid, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_4, float CallFunc_Lerp_ReturnValue_5, float CallFunc_Lerp_ReturnValue_6, float CallFunc_Lerp_ReturnValue_7);
	void TransitionBackgroundForward(float Forward, float PreTransitionOffset, float FXTransitionFade, class UMaterialInstanceDynamic* Mid, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_4, float CallFunc_Lerp_ReturnValue_5, float CallFunc_Lerp_ReturnValue_6, float CallFunc_Lerp_ReturnValue_7);
	void SetupBackgroundMaterial(class UTexture2D*& TextureBackground, struct FTrackDynamicBackground& BackgroundInfo, class UMaterialInstanceDynamic* Mid, class FName Temp_name_Variable, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class FName Temp_name_Variable_1, bool Temp_bool_Variable, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, bool Temp_bool_Variable_1, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, bool Temp_bool_Variable_2, class FName Temp_name_Variable_6, class FName Temp_name_Variable_7, bool Temp_bool_Variable_3, class FName Temp_name_Variable_8, class FName K2Node_Select_Default, class FName K2Node_Select_Default_1, class FName K2Node_Select_Default_2, class FName K2Node_Select_Default_3, class FName Temp_name_Variable_9, bool Temp_bool_Variable_4, class FName Temp_name_Variable_10, class FName K2Node_Select_Default_4, class FName Temp_name_Variable_11, bool Temp_bool_Variable_5, class FName K2Node_Select_Default_5);
	void UserConstructionScript(class AFortStaticMeshActor* K2Node_DynamicCast_AsFort_Static_Mesh_Actor, bool K2Node_DynamicCast_bSuccess);
	void TransitionForward__FinishedFunc();
	void TransitionForward__UpdateFunc();
	void TransitionBackward__FinishedFunc();
	void TransitionBackward__UpdateFunc();
	void BackgroundMinusEffects__FinishedFunc();
	void BackgroundMinusEffects__UpdateFunc();
	void FloorMinusVisibility__FinishedFunc();
	void FloorMinusVisibility__UpdateFunc();
	void ItemDetails__FinishedFunc();
	void ItemDetails__UpdateFunc();
	void ReceiveBeginPlay();
	void OnTransitionBackground(bool bPlayForward);
	void OnSetupBackground(class UTexture2D* LoadedBackgroundTexture, struct FTrackDynamicBackground& BackgroundInfo);
	void OnUpdateDisplay(bool bShowFloor, bool bShowEffects);
	void OnInitialBackgroundTransition();
	void OnTransitionItemDetails(bool bShowItemDetails);
	void OnUpdateMaterialIndex(int32 MaterialIndex);
	void ExecuteUbergraph_SpecialEventVaultWorld(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool K2Node_Event_bPlayForward, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UTexture2D* K2Node_Event_LoadedBackgroundTexture, const struct FTrackDynamicBackground& K2Node_Event_BackgroundInfo, bool K2Node_Event_bShowFloor, bool K2Node_Event_bShowEffects, bool K2Node_Event_bShowItemDetails, bool CallFunc_Not_PreBool_ReturnValue_2, int32 K2Node_Event_MaterialIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue);
};

}


