#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETargetingAOEShape : uint8
{
	Box                            = 0,
	Cylinder                       = 1,
	Sphere                         = 2,
	Capsule                        = 3,
	SourceComponent                = 4,
	ETargetingAOEShape_MAX         = 5,
};

enum class ETargetingTraceType : uint8
{
	Line                           = 0,
	Sweep                          = 1,
	ETargetingTraceType_MAX        = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct TargetingSystem.TargetingRequestHandle
struct FTargetingRequestHandle
{
public:
	uint8                                        Pad_39A7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct TargetingSystem.TargetingTaskSet
struct FTargetingTaskSet
{
public:
	TArray<class UTargetingTask*>                Tasks;                                             // 0x0(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct TargetingSystem.TargetingDefaultResultData
struct FTargetingDefaultResultData
{
public:
	struct FHitResult                            HitResult;                                         // 0x0(0x9C)(IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_39AA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct TargetingSystem.TargetingDefaultResultsSet
struct FTargetingDefaultResultsSet
{
public:
	TArray<struct FTargetingDefaultResultData>   TargetResults;                                     // 0x0(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct TargetingSystem.TargetingSourceContext
struct FTargetingSourceContext
{
public:
	class AActor*                                SourceActor;                                       // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InstigatorActor;                                   // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SourceLocation;                                    // 0x10(0xC)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceSocketName;                                  // 0x1C(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39AC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct TargetingSystem.TargetingRequestData
struct FTargetingRequestData
{
public:
	uint8                                        Pad_39AD[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           TargetingRequestDynamicDelegate;                   // 0x18(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TargetingSystem.TargetingAsyncTaskData
struct FTargetingAsyncTaskData
{
public:
	uint8                                        Pad_39AF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct TargetingSystem.TargetingImmediateTaskData
struct FTargetingImmediateTaskData
{
public:
	uint8                                        Pad_39B0[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct TargetingSystem.TargetingDebugData
struct FTargetingDebugData
{
public:
	uint8                                        Pad_39B1[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


