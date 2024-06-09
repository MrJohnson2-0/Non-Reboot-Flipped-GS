#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ButterCakeRuntime.ButterCakeKismetLibrary
class UButterCakeKismetLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UButterCakeKismetLibrary* GetDefaultObj();

};

// 0xD8 (0x188 - 0xB0)
// Class ButterCakeRuntime.ButterCakeUnstuckComponent
class UButterCakeUnstuckComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnBlocked;                                         // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        EnsureEnable;                                      // 0xC0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        EventBPEnable;                                     // 0xE8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	int32                                        LocationSampleMaxCount;                            // 0x110(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LocationSampleDelay;                               // 0x114(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DistanceMinToUnstuck;                              // 0x118(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_14BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 PauseUnstuckBehaviorTags;                          // 0x120(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       LocationSamples;                                   // 0x140(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class FString>                        BTTaskSamples;                                     // 0x150(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	float                                        DistanceMinToUnstuckSqr;                           // 0x160(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_14BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortAIPawn*                           CachedOwner;                                       // 0x168(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAbilitySystemComponent*               CachedAbilityComponent;                            // 0x170(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortGameStateAthena*                  CachedAthenaGameState;                             // 0x178(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_14BD[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UButterCakeUnstuckComponent* GetDefaultObj();

	void ResetUnstuckLocationSamples();
	void HandleAthenaGamePhaseChanged(enum class EAthenaGamePhase GamePhase);
};

// 0xA0 (0x550 - 0x4B0)
// Class ButterCakeRuntime.FortAIAnimInstance_ButterCake
class UFortAIAnimInstance_ButterCake : public UFortAIAnimInstance
{
public:
	float                                        DeltaTimeX;                                        // 0x4B0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeanAngle;                                         // 0x4B4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartPosLeftPlantC;                                // 0x4B8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LookAtYaw;                                         // 0x4BC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LookAtPitch;                                       // 0x4C0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMoving;                                         // 0x4C4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldApplyHostileAdditive;                       // 0x4C5(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMouthOpen;                                      // 0x4C6(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLocomotion;                                     // 0x4C7(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHostile;                                        // 0x4C8(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLured;                                          // 0x4C9(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14CB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AimOffsetAlpha;                                    // 0x4CC(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortButterCakeFootPhase          FootPhase;                                         // 0x4D4(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootPhaseIsRightPlantA;                           // 0x4D5(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootPhaseIsRightPlantB;                           // 0x4D6(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootPhaseIsRightPlantC;                           // 0x4D7(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootPhaseIsLeftPlantA;                            // 0x4D8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootPhaseIsLeftPlantB;                            // 0x4D9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootPhaseIsLeftPlantC;                            // 0x4DA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootPhaseIsHostileRightPass;                      // 0x4DB(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootPhaseIsHostileRightPlant;                     // 0x4DC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootPhaseIsHostileLeftPass;                       // 0x4DD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootPhaseIsHostileLeftPlant;                      // 0x4DE(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootPhaseIsBothPlant;                             // 0x4DF(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootPhaseIsBothPlantA;                            // 0x4E0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootPhaseIsBothPlantB;                            // 0x4E1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootPhaseIsBothPlantC;                            // 0x4E2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootPhaseIsBothPlantD;                            // 0x4E3(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsIdleTurn;                                       // 0x4E4(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIdleTurnRight;                                    // 0x4E5(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RotationDirection;                                 // 0x4E8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocomotion_Conduit_IsMovingORIsLocomotion;        // 0x4EC(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocomotion_Conduit_NOTIsMovingANDNOTIsLocomotion; // 0x4ED(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinLeanAngleDegrees;                               // 0x4F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLeanAngleDegrees;                               // 0x4F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouthOpenMinCurveValue;                            // 0x4F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocomotionMinCurveValue;                           // 0x4FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootPhaseMinActivateValue;                         // 0x500(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootPhaseActiveStartValue;                         // 0x504(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootPhaseInactiveStartValue;                       // 0x508(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurveName_DisableHostileAdditive;                  // 0x50C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurveName_FootPhase;                               // 0x514(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurveName_ApplyAimOffset;                          // 0x51C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurveName_ApplyHostileAimOffset;                   // 0x524(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurveName_MouthOpen;                               // 0x52C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurveName_IsLocomotion;                            // 0x534(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AIE_ButterCake_Berserk;                            // 0x53C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AIE_ButterCake_Lured;                              // 0x544(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAIAnimInstance_ButterCake* GetDefaultObj();

	void SetFootPhaseMembers();
	float ComputeLeanAngleByVelocity();
	enum class EFortButterCakeFootPhase ComputeFootPhase();
};

// 0x30 (0x138 - 0x108)
// Class ButterCakeRuntime.FortButterCakeComponent_Telemetry
class UFortButterCakeComponent_Telemetry : public UFortAIComponent_Telemetry
{
public:
	int32                                        ItemsEatenCount;                                   // 0x108(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        SneezeCount;                                       // 0x10C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ItemsSneezedCount;                                 // 0x110(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        BerserkCount;                                      // 0x114(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        PlayerAsBerserkInstigatorCount;                    // 0x118(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        BotAsBerserkInstigatorCount;                       // 0x11C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NPCAsBerserkInstigatorCount;                       // 0x120(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AIPawnAsBerserkInstigatorCount;                    // 0x124(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        UnknownAsBerserkInstigatorCount;                   // 0x128(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        BlowholeUsesCount;                                 // 0x12C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        LuredCount;                                        // 0x130(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_14E5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortButterCakeComponent_Telemetry* GetDefaultObj();

	void OnLured();
	void OnItemsSneezed(int32 ItemsCount);
	void OnItemsEaten(int32 ItemsCount);
	void OnEnterBerserk(class AController* Instigator);
	void OnBlowHoleUsed();
};

// 0xD8 (0x550 - 0x478)
// Class ButterCakeRuntime.FortButterCakeControlRig
class UFortButterCakeControlRig : public UControlRig
{
public:
	class FName                                  PBIKRootBoneName;                                  // 0x478(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              FootCurveCollection;                               // 0x480(0x10)(BlueprintVisible, BlueprintReadOnly, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              FootEffectorBoneCollection;                        // 0x490(0x10)(BlueprintVisible, BlueprintReadOnly, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              FootEffectorControlCollection;                     // 0x4A0(0x10)(BlueprintVisible, BlueprintReadOnly, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              FootExcludedBoneCollection;                        // 0x4B0(0x10)(BlueprintVisible, BlueprintReadOnly, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              ChinEffectorBoneCollection;                        // 0x4C0(0x10)(BlueprintVisible, BlueprintReadOnly, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              ChinExcludedBoneCollection;                        // 0x4D0(0x10)(BlueprintVisible, BlueprintReadOnly, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              TailEffectorBoneCollection;                        // 0x4E0(0x10)(BlueprintVisible, BlueprintReadOnly, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        TailBaseBoneKey;                                   // 0x4F0(0xC)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        TailTipBoneKey;                                    // 0x4FC(0xC)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        UpperLipBoneKey;                                   // 0x508(0xC)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              GroundHitBoneCollection;                           // 0x518(0x10)(BlueprintVisible, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       GroundHitLocationList;                             // 0x528(0x10)(BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       GroundHitNormalList;                               // 0x538(0x10)(BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	int32                                        Counter;                                           // 0x548(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14ED[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortButterCakeControlRig* GetDefaultObj();

	struct FVector GetGroundHitNormalAt(int32 Index);
	struct FVector GetGroundHitLocationAt(int32 Index);
};

}


