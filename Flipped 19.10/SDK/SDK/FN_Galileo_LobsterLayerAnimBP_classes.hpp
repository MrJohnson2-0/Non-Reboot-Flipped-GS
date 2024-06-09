#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x23C0 (0x2810 - 0x450)
// AnimBlueprintGeneratedClass Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C
class UGalileo_LobsterLayerAnimBP_C : public UFortItemLayerAnimInstance_Lobster
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x458(0x4F)(HasGetValueTypeHash)
	uint8                                        Pad_75B6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x4A8(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x4B0(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_34;                             // 0x4B8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_18;                  // 0x4D8(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_33;                             // 0x5A0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_17;                  // 0x5C0(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_32;                             // 0x688(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_16;                  // 0x6A8(0xC8)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_15;                  // 0x770(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_31;                             // 0x838(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_14;                  // 0x858(0xC8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x920(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x940(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xA48(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_30;                             // 0xA68(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_13;                  // 0xA88(0xC8)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0xB50(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0xB78(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0xBA0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0xBC8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0xBF0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0xC18(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0xC40(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0xC68(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0xC90(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0xCB8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0xCE0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0xD08(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0xD30(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0xD58(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0xD80(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0xDA8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0xDD0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0xDF8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0xE20(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0xE48(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0xE70(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0xE98(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0xEC0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0xEE8(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0xF10(0x40)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0xF50(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0xF70(0x40)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0xFB0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0xFD0(0x40)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x1010(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x1030(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x1058(0x40)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x1098(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x10B8(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x10E0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x1100(0x40)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x1140(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x1160(0x40)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x11A0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x11C0(0x40)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x1200(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x1220(0x40)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x1260(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x1280(0x40)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x12C0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x12E0(0x40)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x1320(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x1340(0xB8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x13F8(0x108)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_29;                             // 0x1500(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_12;                  // 0x1520(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_28;                             // 0x15E8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_11;                  // 0x1608(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_27;                             // 0x16D0(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_26;                             // 0x16F0(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_25;                             // 0x1710(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x1730(0x40)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x1770(0x88)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x17F8(0x40)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_24;                             // 0x1838(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x1858(0x40)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x1898(0x88)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x1920(0x40)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_23;                             // 0x1960(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x1980(0x40)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x19C0(0x40)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x1A00(0x88)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_22;                             // 0x1A88(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_21;                             // 0x1AA8(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_20;                             // 0x1AC8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x1AE8(0x40)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x1B28(0x40)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x1B68(0x88)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_19;                             // 0x1BF0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1C10(0x40)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1C50(0x40)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1C90(0x88)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_18;                             // 0x1D18(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_17;                             // 0x1D38(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_16;                             // 0x1D58(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_10;                  // 0x1D78(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_15;                             // 0x1E40(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0x1E60(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_14;                             // 0x1F28(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0x1F48(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_13;                             // 0x2010(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x2030(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_12;                             // 0x20F8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x2118(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_11;                             // 0x21E0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x2200(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_10;                             // 0x22C8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x22E8(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x23B0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x23D0(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x2498(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x24B8(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x2580(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x25A0(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x2668(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x2688(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x2750(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x2770(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x2790(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x27B0(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x27D0(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x27F0(0x20)(None)

	static class UClass* StaticClass();
	static class UGalileo_LobsterLayerAnimBP_C* GetDefaultObj();

	void ItemPreIK(const struct FPoseLink& InPose_PreIK, struct FPoseLink* ItemPreIK);
	void ItemFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* ItemFullBodyOverride);
	void ItemAimOffset(const struct FPoseLink& InPose_AimOffset, float AimOffsetAlpha, float Yaw, float Pitch, const struct FPoseLink& InPose_UpperLowerPreMeleeAO, struct FPoseLink* ItemAimOffset);
	void ItemSkeletalControl(const struct FPoseLink& InPose, struct FPoseLink* ItemSkeletalControl);
	void ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody);
	void ItemFullBodySprint(const struct FPoseLink& InPoseSprint, struct FPoseLink* ItemFullBodySprint);
	void ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive);
	void ItemCrouchTurningAdditive(struct FPoseLink* ItemCrouchTurningAdditive);
	void ItemSlopeSliding(struct FPoseLink* ItemSlopeSliding);
	void ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive);
	void ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive);
	void ItemFallAdditive(struct FPoseLink* ItemFallAdditive);
	void ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive);
	void ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive);
	void ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive);
	void ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive);
	void ItemFlyModeStartAdditive(struct FPoseLink* ItemFlyModeStartAdditive);
	void ItemFlyModeLoopAdditive(struct FPoseLink* ItemFlyModeLoopAdditive);
	void ItemJogStartAdditive(const struct FPoseLink& InPoseJogStartAdditive, struct FPoseLink* ItemJogStartAdditive);
	void ItemJogStopAdditive(const struct FPoseLink& InPoseJogStopAdditive, struct FPoseLink* ItemJogStopAdditive);
	void ItemJogPrePivotAdditive(const struct FPoseLink& InPosePrePivotAdditive, struct FPoseLink* ItemJogPrePivotAdditive);
	void ItemJogPostPivotAdditive(const struct FPoseLink& InPosePostPivotAdditive, struct FPoseLink* ItemJogPostPivotAdditive);
	void ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement);
	void ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* ItemLowerBodyLeanAdditive);
	void ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* ItemLowerBodyJogStart);
	void ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* ItemLowerBodyJogStop);
	void ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* ItemLowerBodyJogPrePivot);
	void ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* ItemLowerBodyJogPostPivot);
	void ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry);
	void ItemSwimJumpStart(struct FPoseLink* ItemSwimJumpStart);
	void ItemSwimJumpStartLoop(struct FPoseLink* ItemSwimJumpStartLoop);
	void ItemSwimJumpFallLoop(struct FPoseLink* ItemSwimJumpFallLoop);
	void ItemSwimJumpSurfaceLoop(struct FPoseLink* ItemSwimJumpSurfaceLoop);
	void ItemSwimJumpSurfaceEnd(struct FPoseLink* ItemSwimJumpSurfaceEnd);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Galileo_LobsterLayerAnimBP(int32 EntryPoint);
};

}


