#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C8 (0x740 - 0x578)
// AnimBlueprintGeneratedClass F_MED_Ramirez_Fallback_Skeleton_AnimBlueprint.F_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C
class UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                        Pad_1922[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x588(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x590(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x598(0x20)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x5B8(0x188)(ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_F_MED_Ramirez_Fallback_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}


