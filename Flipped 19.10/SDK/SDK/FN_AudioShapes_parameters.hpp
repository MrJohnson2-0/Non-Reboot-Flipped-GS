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

// 0x10 (0x10 - 0x0)
// Function AudioShapes.AudioShapeComponent.UpdateAudioShape
struct UAudioShapeComponent_UpdateAudioShape_Params
{
public:
	TArray<class APlayerController*>             InLocalControllers;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AudioShapes.AudioShapePrimitiveComponent.GetIsPlayerInside
struct UAudioShapePrimitiveComponent_GetIsPlayerInside_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AudioShapes.AudioShapePrimitiveComponent.GetInsideAudioComponent
struct UAudioShapePrimitiveComponent_GetInsideAudioComponent_Params
{
public:
	class UAudioComponent*                       ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AudioShapes.AudioShapePrimitiveComponent.GetEdgeAudioComponent
struct UAudioShapePrimitiveComponent_GetEdgeAudioComponent_Params
{
public:
	class UAudioComponent*                       ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AudioShapes.AudioShapeBoxComponent.SetBoxTransform
struct UAudioShapeBoxComponent_SetBoxTransform_Params
{
public:
	struct FTransform                            InTransform;                                       // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AudioShapes.AudioShapeCylinderComponent.SetRadius
struct UAudioShapeCylinderComponent_SetRadius_Params
{
public:
	float                                        InRadius;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AudioShapes.AudioShapeCylinderComponent.SetHalfHeight
struct UAudioShapeCylinderComponent_SetHalfHeight_Params
{
public:
	float                                        InHalfHeight;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function AudioShapes.AudioShapeLineComponent.SetStartPoint
struct UAudioShapeLineComponent_SetStartPoint_Params
{
public:
	struct FVector                               InStartPoint;                                      // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function AudioShapes.AudioShapeLineComponent.SetEndPoint
struct UAudioShapeLineComponent_SetEndPoint_Params
{
public:
	struct FVector                               InEndPoint;                                        // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AudioShapes.AudioShapeSphereComponent.SetRadius
struct UAudioShapeSphereComponent_SetRadius_Params
{
public:
	float                                        InRadius;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


