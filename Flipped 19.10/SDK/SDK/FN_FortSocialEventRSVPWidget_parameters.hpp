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

// 0x48 (0x48 - 0x0)
// Function FortSocialEventRSVPWidget.FortSocialEventRSVPWidget_C.OnRefreshDisplay
struct UFortSocialEventRSVPWidget_C_OnRefreshDisplay_Params
{
public:
	class FText                                  EventName;                                         // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  Date;                                              // 0x18(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  AdditionalEvents;                                  // 0x30(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x52 (0x52 - 0x0)
// Function FortSocialEventRSVPWidget.FortSocialEventRSVPWidget_C.ExecuteUbergraph_FortSocialEventRSVPWidget
struct UFortSocialEventRSVPWidget_C_ExecuteUbergraph_FortSocialEventRSVPWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F15[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_EventName;                            // 0x8(0x18)(ConstParm)
	class FText                                  K2Node_Event_Date;                                 // 0x20(0x18)(ConstParm)
	class FText                                  K2Node_Event_AdditionalEvents;                     // 0x38(0x18)(ConstParm)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_1;                // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


