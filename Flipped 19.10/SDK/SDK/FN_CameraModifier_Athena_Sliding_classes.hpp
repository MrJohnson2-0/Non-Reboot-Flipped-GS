#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0xE0 - 0x48)
// BlueprintGeneratedClass CameraModifier_Athena_Sliding.CameraModifier_Athena_Sliding_C
class UCameraModifier_Athena_Sliding_C : public UCameraModifier
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        RightOffset;                                       // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeightOffset;                                      // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Interp_Speed;                                      // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraOffsetBlendInSeconds;                        // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraOffsetAlpha;                                 // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BlendIn;                                           // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C1A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinAdditionalFOV;                                  // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxAdditionalFOV;                                  // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        MaxSlideSpeed;                                     // 0x70(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        MinSlideSpeed;                                     // 0x98(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        CameraOffsetBlendOutSeconds;                       // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FovOffsetAlpha;                                    // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FovOffsetBlendOutSeconds;                          // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FovOffsetBlendInSeconds;                           // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ForwardOffset;                                     // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TargetingAlpha;                                    // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TargetingBlendInSeconds;                           // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TargetingBlendOutSeconds;                          // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCameraModifier_Athena_Sliding_C* GetDefaultObj();

	void BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetUpVector_ReturnValue, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_FClamp_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, int64 CallFunc_FTrunc64_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_2, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue_1, float CallFunc_VSize_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_1, int64 CallFunc_FTrunc64_ReturnValue_1, float CallFunc_Divide_Int64Int64UsingFloatingPoint_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_2, float CallFunc_Lerp_ReturnValue, bool CallFunc_RemoveCameraModifier_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue_2, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue_3, float CallFunc_SelectFloat_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool Temp_bool_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_FClamp_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue_4, float CallFunc_SelectFloat_ReturnValue_5, float CallFunc_Divide_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_6, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_7, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_FClamp_ReturnValue_3, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue_5, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_4, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_5, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2);
	void BlendOut();
	void ExecuteUbergraph_CameraModifier_Athena_Sliding(int32 EntryPoint);
};

}


