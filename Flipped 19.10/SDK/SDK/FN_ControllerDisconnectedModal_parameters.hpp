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

// 0x2A0 (0x2A0 - 0x0)
// Function ControllerDisconnectedModal.ControllerDisconnectedModal_C.OnAnalogValueChanged
struct UControllerDisconnectedModal_C_OnAnalogValueChanged_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FAnalogInputEvent                     InAnalogInputEvent;                                // 0x38(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x130(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x1E8(0xB8)(None)
};

// 0x4 (0x4 - 0x0)
// Function ControllerDisconnectedModal.ControllerDisconnectedModal_C.ExecuteUbergraph_ControllerDisconnectedModal
struct UControllerDisconnectedModal_C_ExecuteUbergraph_ControllerDisconnectedModal_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


