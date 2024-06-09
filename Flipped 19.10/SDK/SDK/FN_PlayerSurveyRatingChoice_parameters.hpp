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

// 0x9C0 (0x9C0 - 0x0)
// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.GetCurrentButtonBrush
struct UPlayerSurveyRatingChoice_C_GetCurrentButtonBrush_Params
{
public:
	struct FSlateBrush                           CurrentBrush;                                      // 0x0(0xB0)(Parm, OutParm)
	bool                                         Temp_bool_Variable;                                // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0xB2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0xB3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0xB5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0xB6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPressed_ReturnValue;                    // 0xB7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPressed_ReturnValue_1;                  // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHovered_ReturnValue_1;                  // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0xBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0xBB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_71A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonStyle*                    CallFunc_GetStyle_ReturnValue;                     // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_71A2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_GetDisabledBrush_Brush;                   // 0xD0(0xB0)(None)
	struct FSlateBrush                           CallFunc_GetNormalBaseBrush_Brush;                 // 0x180(0xB0)(None)
	struct FSlateBrush                           CallFunc_GetNormalHoveredBrush_Brush;              // 0x230(0xB0)(None)
	struct FSlateBrush                           CallFunc_GetNormalPressedBrush_Brush;              // 0x2E0(0xB0)(None)
	struct FSlateBrush                           K2Node_Select_Default;                             // 0x390(0xB0)(None)
	struct FSlateBrush                           CallFunc_GetSelectedPressedBrush_Brush;            // 0x440(0xB0)(None)
	struct FSlateBrush                           K2Node_Select_Default_1;                           // 0x4F0(0xB0)(None)
	struct FSlateBrush                           CallFunc_GetSelectedBaseBrush_Brush;               // 0x5A0(0xB0)(None)
	struct FSlateBrush                           CallFunc_GetSelectedHoveredBrush_Brush;            // 0x650(0xB0)(None)
	struct FSlateBrush                           K2Node_Select_Default_2;                           // 0x700(0xB0)(None)
	struct FSlateBrush                           K2Node_Select_Default_3;                           // 0x7B0(0xB0)(None)
	struct FSlateBrush                           K2Node_Select_Default_4;                           // 0x860(0xB0)(None)
	struct FSlateBrush                           K2Node_Select_Default_5;                           // 0x910(0xB0)(None)
};

// 0x14 (0x14 - 0x0)
// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.UpdateInputActionRenderOpacity
struct UPlayerSurveyRatingChoice_C_UpdateInputActionRenderOpacity_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_71A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_71A4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.UpdateTextStyle
struct UPlayerSurveyRatingChoice_C_UpdateTextStyle_Params
{
public:
	class UCommonTextStyle*                      CallFunc_GetCurrentTextStyle_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetColor_OutColor;                        // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x18(0x14)(None)
};

// 0x4 (0x4 - 0x0)
// Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.ExecuteUbergraph_PlayerSurveyRatingChoice
struct UPlayerSurveyRatingChoice_C_ExecuteUbergraph_PlayerSurveyRatingChoice_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


