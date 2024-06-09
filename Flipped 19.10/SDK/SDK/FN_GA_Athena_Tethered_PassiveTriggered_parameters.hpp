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

// 0xB0 (0xB0 - 0x0)
// Function GA_Athena_Tethered_PassiveTriggered.GA_Athena_Tethered_PassiveTriggered_C.K2_ActivateAbilityFromEvent
struct UGA_Athena_Tethered_PassiveTriggered_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x238 (0x238 - 0x0)
// Function GA_Athena_Tethered_PassiveTriggered.GA_Athena_Tethered_PassiveTriggered_C.ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered
struct UGA_Athena_Tethered_PassiveTriggered_C_ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_69E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x8(0xC0)(ContainsInstancedReference)
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0xC8(0xB0)(ConstParm)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_69E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x180(0xB0)(None)
	class AActor*                                CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


