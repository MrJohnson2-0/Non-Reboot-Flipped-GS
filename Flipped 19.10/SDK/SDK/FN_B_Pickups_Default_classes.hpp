#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x4C8 - 0x49C)
// BlueprintGeneratedClass B_Pickups_Default.B_Pickups_Default_C
class AB_Pickups_Default_C : public AB_Pickups_Parent_C
{
public:
	uint8                                        Pad_397E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Sm_rare_pickup;                                    // 0x4A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight;                                         // 0x4B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Background;                                        // 0x4B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    ParticleSystem;                                    // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Pickups_Default_C* GetDefaultObj();

	void Set_Initial_BKGD_Param(class UMaterialInstanceDynamic* Mid, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void UserConstructionScript();
	void OnTossed();
	void OnPickedUp(class AFortPawn* PickupTarget);
	void HideBackgroundAndSpotlight();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Pickups_Default(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AFortPawn* K2Node_Event_PickupTarget, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, bool CallFunc_GetPickupRarityMID_bNeedsToBeInitialized, class UMaterialInstanceDynamic* CallFunc_GetPickupRarityMID_ReturnValue);
};

}


