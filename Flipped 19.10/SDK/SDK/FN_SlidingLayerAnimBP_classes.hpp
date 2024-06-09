#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x199C (0x1DBC - 0x420)
// AnimBlueprintGeneratedClass SlidingLayerAnimBP.SlidingLayerAnimBP_C
class USlidingLayerAnimBP_C : public UFortSlidingLayerAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x428(0x3D)(HasGetValueTypeHash)
	uint8                                        Pad_4F69[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x468(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x470(0x8)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x478(0xC8)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_5;            // 0x540(0xD0)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x610(0xC8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_6;                  // 0x6D8(0x118)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x7F0(0x88)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose;                        // 0x878(0x10)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_5;                  // 0x888(0x118)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_4;            // 0x9A0(0xD0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0xA70(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0xA90(0xC8)(None)
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_1;                    // 0xB58(0xA0)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0xBF8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0xC20(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0xC48(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0xC70(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0xC98(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0xCC0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0xCE8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0xD10(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0xD38(0x88)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_3;            // 0xDC0(0xD0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0xE90(0x40)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_4;                  // 0xED0(0x118)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_2;            // 0xFE8(0xD0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x10B8(0x118)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x11D0(0x40)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x1210(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x1230(0x118)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x1348(0x20)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_1;            // 0x1368(0xD0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x1438(0x40)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x1478(0x118)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x1590(0x20)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive;              // 0x15B0(0xD0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1680(0x40)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x16C0(0x118)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x17D8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x17F8(0xB8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x18B0(0x108)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x19B8(0x88)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x1A40(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1A68(0x28)(None)
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone;                      // 0x1A90(0xA0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x1B30(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x1B50(0xC8)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x1C18(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1CE0(0x40)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x1D20(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1D40(0x20)(None)
	bool                                         IsKneeSliding;                                     // 0x1D60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         b_KneeSlideNote_bTransition_FullBody_Sprinting;    // 0x1D61(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F6A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              KneeSlideLowerBodyInitialRot_0;                    // 0x1D64(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              KneeSlideLowerBodyInitialRot_Smooth;               // 0x1D70(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F6B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       FortPlayerPawn;                                    // 0x1D80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerAnimInstance*               Fort_Player_Anim_Instance;                         // 0x1D88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Delta_Time_;                                       // 0x1D90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KneeSlideLowerBodyYawOffset;                       // 0x1D94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KneeSlideRootYawOffset_0;                          // 0x1D98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VelocityAimYawDelta_0;                             // 0x1D9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KneeSlideSlopeAngle_0;                             // 0x1DA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KneeSlideSlopeYaw_0;                               // 0x1DA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        KneeSlideSlopeYawMinusRootRot_0;                   // 0x1DA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TransitionToKneeSlide;                             // 0x1DAC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F6C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        KneeSlideForwardVectorVelocityDelta_0;             // 0x1DB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InitiatedSlideUpHill;                              // 0x1DB4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Bypass_Entry;                                      // 0x1DB5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F6D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpineTweakLean_0;                                  // 0x1DB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USlidingLayerAnimBP_C* GetDefaultObj();

	void MovementMode_UpperBodyPose(const struct FPoseLink& UppperBodyPose_BasePose, const struct FPoseLink& UpperBodyPose_AdditiveIdentityPose, struct FPoseLink* MovementMode_UpperBodyPose);
	void MovementMode_LowerBodyOverride(const struct FPoseLink& InPose, struct FPoseLink* MovementMode_LowerBodyOverride);
	void MovementMode_LocomotionUpperBodyAdditive(const struct FPoseLink& InPose_0, const struct FPoseLink& IdleAdditive_CachedPose, struct FPoseLink* MovementMode_LocomotionUpperBodyAdditive);
	void AnimGraph(struct FPoseLink* AnimGraph);
	struct FRotator Correct_Yaw_Value(const struct FRotator& InRot, const struct FQuat& CallFunc_Conv_RotatorToQuaternion_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FQuat& CallFunc_Conv_RotatorToQuaternion_ReturnValue_1, const struct FQuat& CallFunc_Conv_RotatorToQuaternion_ReturnValue_2, const struct FQuat& CallFunc_Multiply_QuatQuat_ReturnValue, const struct FQuat& CallFunc_Multiply_QuatQuat_ReturnValue_1, const struct FRotator& CallFunc_Quat_Rotator_ReturnValue);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SlidingLayerAnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX);
};

}


