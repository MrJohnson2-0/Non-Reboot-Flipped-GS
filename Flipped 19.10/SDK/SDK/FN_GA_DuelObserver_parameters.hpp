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
// Function GA_DuelObserver.GA_DuelObserver_C.K2_ActivateAbilityFromEvent
struct UGA_DuelObserver_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x90 (0x90 - 0x0)
// Function GA_DuelObserver.GA_DuelObserver_C.UpdateDuelUI
struct UGA_DuelObserver_C_UpdateDuelUI_Params
{
public:
	enum class EDuelState                        Duel_State;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A9A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDuelOverlayData                      Cached_Duel_Overlay_Data;                          // 0x8(0x88)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x90 (0x90 - 0x0)
// Function GA_DuelObserver.GA_DuelObserver_C.OnDuelChange
struct UGA_DuelObserver_C_OnDuelChange_Params
{
public:
	enum class EDuelState                        NewDuelState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A9B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDuelOverlayData                      ChangedDuelOverlayData;                            // 0x8(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1F9 (0x1F9 - 0x0)
// Function GA_DuelObserver.GA_DuelObserver_C.ExecuteUbergraph_GA_DuelObserver
struct UGA_DuelObserver_C_ExecuteUbergraph_GA_DuelObserver_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDuelState                        K2Node_Event_NewDuelState;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A9C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDuelOverlayData                      K2Node_Event_ChangedDuelOverlayData;               // 0x8(0x88)(ConstParm)
	enum class EDuelState                        K2Node_CustomEvent_Duel_State;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A9D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDuelOverlayData                      K2Node_CustomEvent_Cached_Duel_Overlay_Data;       // 0x98(0x88)(None)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A9E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x128(0xB0)(ConstParm)
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue;                   // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A9F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn_1;           // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


