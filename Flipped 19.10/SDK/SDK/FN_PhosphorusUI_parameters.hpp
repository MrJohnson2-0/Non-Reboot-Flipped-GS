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
// Function PhosphorusUI.PhosphorusWidgetBase.SetAvatarImageFromPlayerState
struct UPhosphorusWidgetBase_SetAvatarImageFromPlayerState_Params
{
public:
	class AFortPlayerStateAthena*                PlayerState;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortLazyImage*                        AvatarImage;                                       // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PhosphorusUI.PhosphorusWidgetBase.OnMutatorAvailable
struct UPhosphorusWidgetBase_OnMutatorAvailable_Params
{
public:
	class AFortGameplayMutator*                  MutatorActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PhosphorusUI.PhosphorusWidgetBase.GetPhosphorusMutator
struct UPhosphorusWidgetBase_GetPhosphorusMutator_Params
{
public:
	class AFortAthenaMutator_Phosphorus*         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PhosphorusUI.PhosphorusEndOfRoundWidget.SetWidgetVisibility
struct UPhosphorusEndOfRoundWidget_SetWidgetVisibility_Params
{
public:
	bool                                         bNewVisibility;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PhosphorusUI.PhosphorusEndOfRoundWidget.OnPhosphorusPhaseChanged
struct UPhosphorusEndOfRoundWidget_OnPhosphorusPhaseChanged_Params
{
public:
	class AFortAthenaMutator_Phosphorus*         PhosphorusMutator;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPhosphorusPhase                  NewPhase;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_376F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function PhosphorusUI.PhosphorusHUDWidget.OnPhosphorusPlayerEliminated_BP
struct UPhosphorusHUDWidget_OnPhosphorusPlayerEliminated_BP_Params
{
public:
	class AFortPlayerStateAthena*                PlayerEliminated;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PhosphorusUI.PhosphorusSquadWipedWidget.HandleSquadWipedVisibilityChanged
struct UPhosphorusSquadWipedWidget_HandleSquadWipedVisibilityChanged_Params
{
public:
	bool                                         bNewVisibility;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


