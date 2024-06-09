#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// AnimBlueprintGeneratedClass MovementModeLayerInterface.MovementModeLayerInterface_C
class IMovementModeLayerInterface_C : public IAnimLayerInterface
{
public:

	static class UClass* StaticClass();
	static class IMovementModeLayerInterface_C* GetDefaultObj();

	void MovementMode_UpperBodyPose(const struct FPoseLink& UppperBodyPose_BasePose, const struct FPoseLink& UpperBodyPose_AdditiveIdentityPose, struct FPoseLink* MovementMode_UpperBodyPose);
	void MovementMode_LocomotionUpperBodyAdditive(const struct FPoseLink& InPose_0, const struct FPoseLink& IdleAdditive_CachedPose, struct FPoseLink* MovementMode_LocomotionUpperBodyAdditive);
	void MovementMode_LowerBodyOverride(const struct FPoseLink& InPose, struct FPoseLink* MovementMode_LowerBodyOverride);
};

}


