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
// Function VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns.RebuildBearerIndicators
struct UFortUIManagerComponent_VictoryCrowns_RebuildBearerIndicators_Params
{
public:
	TArray<class AFortPlayerStateAthena*>        CrownBearerList;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns.HandleGamePhaseStepChanged
struct UFortUIManagerComponent_VictoryCrowns_HandleGamePhaseStepChanged_Params
{
public:
	TScriptInterface<class IFortSafeZoneInterface> SafeZoneInterface;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAthenaGamePhaseStep              GamePhaseStep;                                     // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E1E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function VictoryCrownsUI.VictoryCrownsBearerInfoBase.SetPlayerState
struct UVictoryCrownsBearerInfoBase_SetPlayerState_Params
{
public:
	class AFortPlayerStateAthena*                InPlayerState;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VictoryCrownsUI.VictoryCrownsBearerInfoBase.OnSetPlayerState
struct UVictoryCrownsBearerInfoBase_OnSetPlayerState_Params
{
public:
	class AFortPlayerStateAthena*                PSA;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VictoryCrownsUI.VictoryCrownsIndicator.OnTargetActorChanged
struct UVictoryCrownsIndicator_OnTargetActorChanged_Params
{
public:
	class AActor*                                TargetedActor;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VictoryCrownsUI.VictoryCrownsIndicator.OnScreenClampChanged
struct UVictoryCrownsIndicator_OnScreenClampChanged_Params
{
public:
	bool                                         bIsClamped;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VictoryCrownsUI.VictoryCrownsIndicator.OnDistanceChanged
struct UVictoryCrownsIndicator_OnDistanceChanged_Params
{
public:
	int32                                        Distance;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VictoryCrownsUI.VictoryCrownsIndicator.GetIndicatedPlayerStateAthena
struct UVictoryCrownsIndicator_GetIndicatedPlayerStateAthena_Params
{
public:
	class AFortPlayerStateAthena*                ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VictoryCrownsUI.VictoryCrownsPlayerInfoWidget.OnPlayerVictoryCrownStatusChanged
struct UVictoryCrownsPlayerInfoWidget_OnPlayerVictoryCrownStatusChanged_Params
{
public:
	bool                                         bHasCrown;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryCrownsUI.VictoryCrownsPlayerInfoWidget.HandleCrownBearerListChanged
struct UVictoryCrownsPlayerInfoWidget_HandleCrownBearerListChanged_Params
{
public:
	TArray<class AFortPlayerStateAthena*>        CrownBearerList;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.RebuildBearerList
struct UVictoryCrownsPreGameWidget_RebuildBearerList_Params
{
public:
	TArray<class AFortPlayerStateAthena*>        CrownBearerList;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.OnInputMethodChanged
struct UVictoryCrownsPreGameWidget_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  CurrentInput;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.OnButtonCloseProgress
struct UVictoryCrownsPreGameWidget_OnButtonCloseProgress_Params
{
public:
	float                                        Progress;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.HandleGamePhaseStepChanged
struct UVictoryCrownsPreGameWidget_HandleGamePhaseStepChanged_Params
{
public:
	TScriptInterface<class IFortSafeZoneInterface> SafeZoneInterface;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAthenaGamePhaseStep              GamePhaseStep;                                     // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E43[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


