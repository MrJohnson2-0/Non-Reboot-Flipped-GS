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
// Function XPComponent_Powerup_LevelUp_Kills.XPComponent_Powerup_LevelUp_Kills_C.EventReceived_05AD7EE7427E2756D60D2A91EB87AA4E
struct UXPComponent_Powerup_LevelUp_Kills_C_EventReceived_05AD7EE7427E2756D60D2A91EB87AA4E_Params
{
public:
	struct FGameplayEventData                    Payload;                                           // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1C9 (0x1C9 - 0x0)
// Function XPComponent_Powerup_LevelUp_Kills.XPComponent_Powerup_LevelUp_Kills_C.ExecuteUbergraph_XPComponent_Powerup_LevelUp_Kills
struct UXPComponent_Powerup_LevelUp_Kills_C_ExecuteUbergraph_XPComponent_Powerup_LevelUp_Kills_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayEventData                    K2Node_CustomEvent_Payload;                        // 0x18(0xB0)(None)
	struct FGameplayEventData                    Temp_struct_Variable;                              // 0xC8(0xB0)(None)
	class AFortPawn*                             CallFunc_GetOwningPawn_ReturnValue;                // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                           CallFunc_GetWeaponActor_ReturnValue;               // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldMultiItem*                   CallFunc_GetOwningMultiItem_ReturnValue;           // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityAsync_WaitGameplayEvent*       CallFunc_WaitGameplayEventToActor_ReturnValue;     // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x198(0x20)(None)
	bool                                         CallFunc_HasAnyTags_ReturnValue;                   // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7679[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetOwningPawn_ReturnValue_1;              // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


