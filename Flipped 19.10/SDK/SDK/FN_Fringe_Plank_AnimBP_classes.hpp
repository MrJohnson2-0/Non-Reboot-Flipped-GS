#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x938 (0xC50 - 0x318)
// AnimBlueprintGeneratedClass Fringe_Plank_AnimBP.Fringe_Plank_AnimBP_C
class UFringe_Plank_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_74D8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x328(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x330(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x338(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x358(0xC8)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x420(0x7F0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xC10(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xC30(0x20)(None)

	static class UClass* StaticClass();
	static class UFringe_Plank_AnimBP_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Fringe_Plank_AnimBP(int32 EntryPoint);
};

}


