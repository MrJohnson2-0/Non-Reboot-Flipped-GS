#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// Function MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_UpperBodyPose
struct IMovementModeLayerInterface_C_MovementMode_UpperBodyPose_Params
{
public:
	struct FPoseLink                             UppperBodyPose_BasePose;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             UpperBodyPose_AdditiveIdentityPose;                // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_UpperBodyPose;                        // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_LocomotionUpperBodyAdditive
struct IMovementModeLayerInterface_C_MovementMode_LocomotionUpperBodyAdditive_Params
{
public:
	struct FPoseLink                             InPose_0;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             IdleAdditive_CachedPose;                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_LocomotionUpperBodyAdditive;          // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function MovementModeLayerInterface.MovementModeLayerInterface_C.MovementMode_LowerBodyOverride
struct IMovementModeLayerInterface_C_MovementMode_LowerBodyOverride_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_LowerBodyOverride;                    // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

}
}


