#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x74 (0xB78 - 0xB04)
// BlueprintGeneratedClass GAB_Spray_Generic.GAB_Spray_Generic_C
class UGAB_Spray_Generic_C : public UGAB_Emote_Generic_C
{
public:
	uint8                                        Pad_5585[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB08(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        DecalSize;                                         // 0xB10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5586[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaSprayItemDefinition*            MySpray;                                           // 0xB18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DecalTraceDistance;                                // 0xB20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5587[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UAnimMontage>           DefaultSprayMontage_M;                             // 0xB28(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UAnimMontage>           DefaultSprayMontage_F;                             // 0xB50(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGAB_Spray_Generic_C* GetDefaultObj();

	TSoftObjectPtr<class UAnimMontage> GetMontageToPlay(class UFortMontageItemDefinitionBase* EmoteAsset, enum class EFortCustomBodyType BodyType, enum class EFortCustomGender Gender, enum class EFortCustomGender Temp_byte_Variable, TSoftObjectPtr<class UAnimMontage> CallFunc_GetMontageToPlay_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue, TSoftObjectPtr<class UAnimMontage> K2Node_Select_Default);
	void TargetLineTrace(class AFortPawn* ActivatingPawn, bool* HitSomething, struct FVector* Location, struct FVector* Normal, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetForwardVector_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class UCapsuleComponent* K2Node_DynamicCast_AsCapsule_Collision, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess_1, class ABuildingGameplayActor* K2Node_DynamicCast_AsBuilding_Gameplay_Actor, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_AcceptsEmoteSprays_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1);
	void OnMontageStartedPlaying();
	void ExecuteUbergraph_GAB_Spray_Generic(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, bool CallFunc_TargetLineTrace_HitSomething, const struct FVector& CallFunc_TargetLineTrace_Location, const struct FVector& CallFunc_TargetLineTrace_Normal, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotationFromAxes_ReturnValue, class AController* CallFunc_GetController_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_HasPermissionToEditWorld_ReturnValue, class ABP_SprayDecal_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_CanPlaceInstanceOfClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UObject* CallFunc_GetCurrentSourceObject_ReturnValue, class UAthenaSprayItemDefinition* K2Node_DynamicCast_AsAthena_Spray_Item_Definition, bool K2Node_DynamicCast_bSuccess_1);
};

}


