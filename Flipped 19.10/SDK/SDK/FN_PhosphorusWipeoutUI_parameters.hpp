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
// Function PhosphorusWipeoutUI.PhosphorusKnockBackWidget.PhosphorusPhaseChangedEvent
struct UPhosphorusKnockBackWidget_PhosphorusPhaseChangedEvent_Params
{
public:
	class AFortAthenaMutator_Phosphorus*         Mutator;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPhosphorusPhase                  Phase;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38CD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function PhosphorusWipeoutUI.PhosphorusKnockBackWidget.KnockBackFromAllPlayersReceivedEvent
struct UPhosphorusKnockBackWidget_KnockBackFromAllPlayersReceivedEvent_Params
{
public:
	struct FKnockbackMutatorData                 KnockbackData;                                     // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}
}


