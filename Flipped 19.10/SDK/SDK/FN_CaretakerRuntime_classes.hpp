#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x520 - 0x4B0)
// Class CaretakerRuntime.FortAIAnimInstance_Caretaker
class UFortAIAnimInstance_Caretaker : public UFortAIAnimInstance
{
public:
	bool                                         bIsMoving;                                         // 0x4B0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WalkPlayRate;                                      // 0x4B4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimOffsetCurve;                                    // 0x4B8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootPhase_StopLeftPlant;                          // 0x4BC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootPhase_StopLeftPass;                           // 0x4BD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootPhase_StopRightPlant;                         // 0x4BE(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFootPhase_StopRightPass;                          // 0x4BF(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BreathingCurve;                                    // 0x4C0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovingTreshold;                                    // 0x4C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurveName_AimOffsetCurve;                          // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurveName_FootPhase;                               // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurveName_BreathingCurve;                          // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName_FX_Chest;                               // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParamName_ChestSocketLocation;                     // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParamName_ChestSocketVector;                       // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FirstFootPhaseMin;                                 // 0x4F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondFootPhaseMin;                                // 0x4FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThirdFootPhaseMin;                                 // 0x500(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FourthFootPhaseMin;                                // 0x504(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootPhaseMax;                                      // 0x508(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAnimWorldStriderComponent*        WorldStriderComponent;                             // 0x510(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AC[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAIAnimInstance_Caretaker* GetDefaultObj();

	void SetDelayedMaterialParameters();
	class UFortAnimWorldStriderComponent* GetWorldStriderComponent();
	float GetWalkSpeedWarpingValue();
	float GetWalkPlayRateValue();
	float GetStartAnimPosition();
};

// 0x0 (0x180 - 0x180)
// Class CaretakerRuntime.FortAITask_CaretakerMove
class UFortAITask_CaretakerMove : public UFortAbilityTask_MoveAI
{
public:

	static class UClass* StaticClass();
	static class UFortAITask_CaretakerMove* GetDefaultObj();

};

// 0x8 (0x518 - 0x510)
// Class CaretakerRuntime.FortAthenaCaretakerAIController
class AFortAthenaCaretakerAIController : public AAthenaAIController
{
public:
	uint8                                        Pad_BB[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortAthenaCaretakerAIController* GetDefaultObj();

	void OnMovementModeChanged(class ACharacter* CharacterOwner, enum class EMovementMode PreviousMovementMode, uint8 PreviousCustomMode);
	void DebugUpdate(float UpdateInterval);
};

// 0x30 (0xE0 - 0xB0)
// Class CaretakerRuntime.FortBTTask_CaretakerMoveTo
class UFortBTTask_CaretakerMoveTo : public UBTTask_MoveTo
{
public:
	struct FBlackboardKeySelector                FocalPointWhileMoving;                             // 0xB0(0x28)(Edit, NativeAccessSpecifierPublic)
	enum class EPathObstacleAction               PathObstacleAction;                                // 0xD8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bEnableSlowdownAtGoal : 1;                         // Mask: 0x1, PropSize: 0x10xDC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMoveDirectlyTowards : 1;                          // Mask: 0x2, PropSize: 0x10xDC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopAtGoal : 1;                                   // Mask: 0x4, PropSize: 0x10xDC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFinishMoveOnOverlap : 1;                          // Mask: 0x8, PropSize: 0x10xDC(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBTTask_CaretakerMoveTo* GetDefaultObj();

};

// 0x18 (0x60 - 0x48)
// Class CaretakerRuntime.FortNavigationFilter_Caretaker
class UFortNavigationFilter_Caretaker : public UNavigationQueryFilter
{
public:
	float                                        EndPointAcceptableRadius;                          // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C3[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNavigationQueryFilter>    EndPointFilterClass;                               // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEndPointReachTestIncludesAgentRadius : 1;         // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEndPointReachTestIncludesGoalRadius : 1;          // Mask: 0x2, PropSize: 0x10x58(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortNavigationFilter_Caretaker* GetDefaultObj();

};

}


