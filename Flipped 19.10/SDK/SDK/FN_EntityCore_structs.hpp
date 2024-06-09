#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMovementType : uint8
{
	SweepPhysics                   = 0,
	TeleportPhysics                = 1,
	ResetPhysics                   = 2,
	EMovementType_MAX              = 3,
};

enum class EScriptDiagnosticMessageType : uint8
{
	Debug                          = 0,
	Verbose                        = 1,
	Normal                         = 2,
	Warning                        = 3,
	Error                          = 4,
	Fatal                          = 5,
	EScriptDiagnosticMessageType_MAX = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct EntityCore.EntityComponentContainer
struct FEntityComponentContainer
{
public:
	TArray<class UEntityComponent*>              Array;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// ScriptStruct EntityCore.ComponentData
struct FComponentData
{
public:
};

// 0xC (0xC - 0x0)
// ScriptStruct EntityCore.EntityPositionComponentData
struct FEntityPositionComponentData : public FComponentData
{
public:
	struct FVector                               WorldPosition;                                     // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct EntityCore.EntityRotationComponentData
struct FEntityRotationComponentData : public FComponentData
{
public:
	struct FRotator                              WorldRotation;                                     // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct EntityCore.EntityScaleComponentData
struct FEntityScaleComponentData : public FComponentData
{
public:
	struct FVector                               WorldScale3D;                                      // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EntityCore.EntityCoreSystemRelativePositionComponentData
struct FEntityCoreSystemRelativePositionComponentData : public FComponentData
{
public:
	uint8                                        Pad_1B9E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct EntityCore.EntityTickFunction
struct FEntityTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_1B9F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct EntityCore.ScriptDiagnosticSourceLocation
struct FScriptDiagnosticSourceLocation
{
public:
	uint8                                        Pad_1BA0[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct EntityCore.ScriptDiagnosticMessage
struct FScriptDiagnosticMessage
{
public:
	enum class EScriptDiagnosticMessageType      MessageType;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             Timestamp;                                         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Channel;                                           // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  MessageStr;                                        // 0x20(0x18)(NativeAccessSpecifierPublic)
	struct FScriptDiagnosticSourceLocation       SourceLocation;                                    // 0x38(0x20)(NativeAccessSpecifierPublic)
};

}


