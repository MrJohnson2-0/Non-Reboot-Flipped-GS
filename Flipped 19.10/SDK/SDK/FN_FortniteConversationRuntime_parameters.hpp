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

// 0x40 (0x40 - 0x0)
// Function FortniteConversationRuntime.FortConversationContextCondition.DoesContextPass
struct UFortConversationContextCondition_DoesContextPass_Params
{
public:
	struct FConversationContext                  Context;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function FortniteConversationRuntime.FortConversationContextConditionHelpers.GetMessageForContext
struct UFortConversationContextConditionHelpers_GetMessageForContext_Params
{
public:
	struct FFortConversationNodeConditionalMessages Messages;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FConversationContext                  Context;                                           // 0x10(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FText                                  OutText;                                           // 0x48(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function FortniteConversationRuntime.FortConversationParamLibrary.ExtractConversationParameterValue
struct UFortConversationParamLibrary_ExtractConversationParameterValue_Params
{
public:
	TArray<struct FConversationNodeParameterPair> ConversationParameters;                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                DesiredParameterName;                              // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ParameterValueOut;                                 // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function FortniteConversationRuntime.FortPlayerConversationComponent.HandleWaponEquipped
struct UFortPlayerConversationComponent_HandleWaponEquipped_Params
{
public:
	class AFortWeapon*                           NewWeapon;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortWeapon*                           PrevWeapon;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FortniteConversationRuntime.FortPlayerConversationComponent.HandleDBNOChanged
struct UFortPlayerConversationComponent_HandleDBNOChanged_Params
{
public:
	class AFortPawn*                             Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDBNO;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function FortniteConversationRuntime.FortPlayerConversationComponent.ClientReceiveConversationGiftUINotification
struct UFortPlayerConversationComponent_ClientReceiveConversationGiftUINotification_Params
{
public:
	struct FGiftUINotificationInfo               ConversationGiftUINotification;                    // 0x0(0x30)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}


