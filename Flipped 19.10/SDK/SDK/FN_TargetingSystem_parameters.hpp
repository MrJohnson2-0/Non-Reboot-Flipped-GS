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

// 0x8 (0x8 - 0x0)
// Function TargetingSystem.TargetingSelectionTask_Trace.GetTraceLength
struct UTargetingSelectionTask_Trace_GetTraceLength_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TargetingSystem.TargetingSelectionTask_Trace.GetTraceDirection
struct UTargetingSelectionTask_Trace_GetTraceDirection_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TargetingSystem.TargetingSelectionTask_Trace.GetSweptTraceRadius
struct UTargetingSelectionTask_Trace_GetSweptTraceRadius_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TargetingSystem.TargetingSelectionTask_Trace.GetSourceOffset
struct UTargetingSelectionTask_Trace_GetSourceOffset_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TargetingSystem.TargetingSelectionTask_Trace.GetSourceLocation
struct UTargetingSelectionTask_Trace_GetSourceLocation_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function TargetingSystem.TargetingSelectionTask_Trace.GetAdditionalActorsToIgnore
struct UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_393C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        OutAdditionalActorsToIgnore;                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function TargetingSystem.AsyncAction_PerformTargeting.PerformTargetingRequest
struct UAsyncAction_PerformTargeting_PerformTargetingRequest_Params
{
public:
	class AActor*                                SourceActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTargetingPreset*                      TargetingPreset;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAsyncTargeting;                                // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_394E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAsyncAction_PerformTargeting*         ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function TargetingSystem.AsyncAction_PerformTargeting.PerformFilteringRequest
struct UAsyncAction_PerformTargeting_PerformFilteringRequest_Params
{
public:
	class AActor*                                SourceActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTargetingPreset*                      TargetingPreset;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAsyncTargeting;                                // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3960[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        InTargets;                                         // 0x18(0x10)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UAsyncAction_PerformTargeting*         ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TargetingSystem.TargetingSelectionTask_AOE.GetSourceOffset
struct UTargetingSelectionTask_AOE_GetSourceOffset_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TargetingSystem.TargetingSelectionTask_AOE.GetSourceLocation
struct UTargetingSelectionTask_AOE_GetSourceLocation_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function TargetingSystem.TargetingSubsystem.StartAsyncTargetingRequest
struct UTargetingSubsystem_StartAsyncTargetingRequest_Params
{
public:
	class UTargetingPreset*                      TargetingPreset;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTargetingSourceContext               InSourceContext;                                   // 0x8(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           CompletionDynamicDelegate;                         // 0x30(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function TargetingSystem.TargetingSubsystem.GetTargetingSourceContext
struct UTargetingSubsystem_GetTargetingSourceContext_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_399B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTargetingSourceContext               ReturnValue;                                       // 0x8(0x28)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function TargetingSystem.TargetingSubsystem.GetTargetingResultsActors
struct UTargetingSubsystem_GetTargetingResultsActors_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_399E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Targets;                                           // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function TargetingSystem.TargetingSubsystem.GetTargetingResults
struct UTargetingSubsystem_GetTargetingResults_Params
{
public:
	struct FTargetingRequestHandle               TargetingHandle;                                   // 0x0(0x4)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_399F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHitResult>                    OutTargets;                                        // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function TargetingSystem.TargetingSubsystem.ExecuteTargetingRequest
struct UTargetingSubsystem_ExecuteTargetingRequest_Params
{
public:
	class UTargetingPreset*                      TargetingPreset;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTargetingSourceContext               InSourceContext;                                   // 0x8(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           CompletionDynamicDelegate;                         // 0x30(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

}
}


