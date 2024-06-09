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
// Function GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver.RegisterGameplayMessageReceiver
struct UAsyncAction_RegisterGameplayMessageReceiver_RegisterGameplayMessageReceiver_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEventMessageTag                      Channel;                                           // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScriptStruct*                         PayloadType;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayMessageMatchType         MatchType;                                         // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_106A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ActorContext;                                      // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAsyncAction_RegisterGameplayMessageReceiver* ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver.GetPayload
struct UAsyncAction_RegisterGameplayMessageReceiver_GetPayload_Params
{
public:
	int32                                        OutPayload;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_106D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GameplayMessages.GameplayMessageReplicator.Multicast_ServerMessageTriggered
struct AGameplayMessageReplicator_Multicast_ServerMessageTriggered_Params
{
public:
	struct FEventMessageTag                      Channel;                                           // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FReplicatedMessage                    MessageData;                                       // 0x8(0x10)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayMessages.GameplayMessageRouter.K2_BroadcastMessage
struct UGameplayMessageRouter_K2_BroadcastMessage_Params
{
public:
	struct FEventMessageTag                      Channel;                                           // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Message;                                           // 0x8(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSaveToChannel;                                    // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1074[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ActorContext;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GameplayMessages.GameplayMessageRouter.HasValidSavedMessage
struct UGameplayMessageRouter_HasValidSavedMessage_Params
{
public:
	struct FEventMessageTag                      Channel;                                           // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1075[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GameplayMessages.GameplayMessageRouter.ClearSavedMessage
struct UGameplayMessageRouter_ClearSavedMessage_Params
{
public:
	struct FEventMessageTag                      Channel;                                           // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayMessages.BlueprintEventMessageTagLibrary.GetEventMessageTagFromGameplayTag
struct UBlueprintEventMessageTagLibrary_GetEventMessageTagFromGameplayTag_Params
{
public:
	struct FGameplayTag                          InTag;                                             // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEventMessageTag                      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


