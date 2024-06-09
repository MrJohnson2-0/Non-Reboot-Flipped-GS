#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGameplayMessageMatchType : uint8
{
	ExactMatch                     = 0,
	PartialMatch                   = 1,
	EGameplayMessageMatchType_MAX  = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayMessages.ReplicatedMessageData
struct FReplicatedMessageData
{
public:
	class UScriptStruct*                         StructType;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1079[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayMessages.ReplicatedMessage
struct FReplicatedMessage
{
public:
	uint8                                        Pad_107A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x8 - 0x8)
// ScriptStruct GameplayMessages.EventMessageTag
struct FEventMessageTag : public FGameplayTag
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayMessages.GameplayMessageReceiverHandle
struct FGameplayMessageReceiverHandle
{
public:
	TWeakObjectPtr<class UGameplayMessageRouter> Subsystem;                                         // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FEventMessageTag                      Channel;                                           // 0x8(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ID;                                                // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_107B[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct GameplayMessages.GameplayMessageReceiverData
struct FGameplayMessageReceiverData
{
public:
	uint8                                        Pad_107C[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


