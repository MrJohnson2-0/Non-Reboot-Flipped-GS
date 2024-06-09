#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x108 - 0x108)
// Class SpicySakeRuntime.FortSpicySakeComponent_Telemetry
class UFortSpicySakeComponent_Telemetry : public UFortAIComponent_Telemetry
{
public:

	static class UClass* StaticClass();
	static class UFortSpicySakeComponent_Telemetry* GetDefaultObj();

};

// 0x40 (0x848 - 0x808)
// Class SpicySakeRuntime.FortSpicySakeGameplayCueNotifyLoop_Alive
class AFortSpicySakeGameplayCueNotifyLoop_Alive : public AFortGameplayCueNotify_Loop
{
public:
	class UFXSystemComponent*                    WaterFX_Native;                                    // 0x808(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFXSystemComponent*                    LandFX_Native;                                     // 0x810(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLayeredAudioComponent*            FortLayerAudio_Native;                             // 0x818(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortAIPawn*                           TargetAIPawn_Native;                               // 0x820(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bComputeWaterDepth;                                // 0x828(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B81[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TetheredVolumeMultiplier;                          // 0x82C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SoundSurfaceTypeCount;                             // 0x830(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VelocityClampingMinimum;                           // 0x834(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VelocityClampingMaximum;                           // 0x838(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B83[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortSpicySakeGameplayCueNotifyLoop_Alive* GetDefaultObj();

};

// 0x28 (0x3E0 - 0x3B8)
// Class SpicySakeRuntime.FortSpicySakeOccupantAnimInstanceLayer
class UFortSpicySakeOccupantAnimInstanceLayer : public UFortBaseLayerAnimInstance
{
public:
	float                                        GroundIdleThreshold;                               // 0x3B8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GroundIdleLowThreshold;                            // 0x3BC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocalVelocityYawAngleTurnResetThreshold;           // 0x3C0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocalVelocityYawAngleTurnTransitionThreshold;      // 0x3C4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocalVelocityYawAngle;                             // 0x3C8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PawnSpeed2D;                                       // 0x3CC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PawnVelocityZ;                                     // 0x3D0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsFemale : 1;                                     // Mask: 0x1, PropSize: 0x10x3D4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsOnGround : 1;                                   // Mask: 0x2, PropSize: 0x10x3D4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsOnWater : 1;                                    // Mask: 0x4, PropSize: 0x10x3D4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLandingPredicted : 1;                             // Mask: 0x8, PropSize: 0x10x3D4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTransition_NewFallAditive_NewFallLandAdditive : 1; // Mask: 0x10, PropSize: 0x10x3D4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTransitionNewJumpLoopAdditiveToNewFallAdditive : 1; // Mask: 0x20, PropSize: 0x10x3D4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldApplyIdleAdditive : 1;                      // Mask: 0x40, PropSize: 0x10x3D4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsTargeting : 1;                                  // Mask: 0x80, PropSize: 0x10x3D4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsPlayerCloseToShark : 1;                         // Mask: 0x1, PropSize: 0x10x3D5(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsBoosting : 1;                                   // Mask: 0x2, PropSize: 0x10x3D5(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanTurnLeft : 1;                                  // Mask: 0x4, PropSize: 0x10x3D5(0x1)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanTurnRight : 1;                                 // Mask: 0x8, PropSize: 0x10x3D5(0x1)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTransition_RideLoop_TurnLeft : 1;                 // Mask: 0x10, PropSize: 0x10x3D5(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTransition_RideLoop_TurnRight : 1;                // Mask: 0x20, PropSize: 0x10x3D5(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsReloading : 1;                                  // Mask: 0x40, PropSize: 0x10x3D5(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsPlayingMeleeAnim : 1;                           // Mask: 0x80, PropSize: 0x10x3D5(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsPlayingEmote : 1;                               // Mask: 0x1, PropSize: 0x10x3D6(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldPlayOnGroundIdle : 1;                       // Mask: 0x2, PropSize: 0x10x3D6(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldPlayOnGroundIdleLow : 1;                    // Mask: 0x4, PropSize: 0x10x3D6(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsJumping : 1;                                    // Mask: 0x8, PropSize: 0x10x3D6(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanUseTargettingStateMachine : 1;                 // Mask: 0x10, PropSize: 0x10x3D6(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTransition_SharRideLoop_To_JumpUp : 1;            // Mask: 0x20, PropSize: 0x10x3D6(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B88[0x9];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSpicySakeOccupantAnimInstanceLayer* GetDefaultObj();

};

// 0x30 (0x3E0 - 0x3B0)
// Class SpicySakeRuntime.FortSpicySakeVehicleAnimInstance
class UFortSpicySakeVehicleAnimInstance : public UFortBaseAnimInstance
{
public:
	struct FRotator                              OnGroundSlopeRotOffset;                            // 0x3B0(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LocalVelocityYawAngle;                             // 0x3BC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForwardSpeed;                                      // 0x3C0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpSpeed;                                           // 0x3C4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SmoothJumpPitch;                                   // 0x3C8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SmoothJumpPitchDeltaRate;                          // 0x3CC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentBoostRateScale;                             // 0x3D0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsJumping : 1;                                    // Mask: 0x1, PropSize: 0x10x3D4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsSurfaceSwimming : 1;                            // Mask: 0x2, PropSize: 0x10x3D4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsOnGround : 1;                                   // Mask: 0x4, PropSize: 0x10x3D4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsFalling : 1;                                    // Mask: 0x8, PropSize: 0x10x3D4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsCharging : 1;                                   // Mask: 0x10, PropSize: 0x10x3D4(0x1)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOnGroundNotMoving : 1;                            // Mask: 0x20, PropSize: 0x10x3D4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLanded : 1;                                       // Mask: 0x40, PropSize: 0x10x3D4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsBoosting : 1;                                   // Mask: 0x80, PropSize: 0x10x3D4(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStartBoosting : 1;                                // Mask: 0x1, PropSize: 0x10x3D5(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTransition_Idle_To_Boost : 1;                     // Mask: 0x2, PropSize: 0x10x3D5(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTransition_Boost_To_Idle : 1;                     // Mask: 0x4, PropSize: 0x10x3D5(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B8A[0xA];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSpicySakeVehicleAnimInstance* GetDefaultObj();

};

}


