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

// 0x18 (0x18 - 0x0)
// Function SidewaysCodeUI.SidewaysWidgetBase.OnSidewaysStateChanged
struct USidewaysWidgetBase_OnSidewaysStateChanged_Params
{
public:
	class USidewaysStateComponent*               SidewaysStateComponent;                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASidewaysPlayspace*                    NewPlayspace;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESidewaysState                    OldState;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESidewaysState                    NewState;                                          // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1533[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SidewaysCodeUI.SidewaysWidgetBase.OnParamUpdated
struct USidewaysWidgetBase_OnParamUpdated_Params
{
public:
	struct FGameplayTag                          UpdatedParam;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SidewaysCodeUI.SidewaysWidgetBase.OnEnterSideways
struct USidewaysWidgetBase_OnEnterSideways_Params
{
public:
	class ASidewaysPlayspace*                    Playspace;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SidewaysCodeUI.SidewaysWidgetBase.IsValidPlayspace
struct USidewaysWidgetBase_IsValidPlayspace_Params
{
public:
	class ASidewaysPlayspace*                    Playspace;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1538[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SidewaysCodeUI.SidewaysWidgetBase.HandleFortPawnChanged
struct USidewaysWidgetBase_HandleFortPawnChanged_Params
{
public:
	class AFortPawn*                             PossessedPawn;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SidewaysCodeUI.SidewaysWidgetBase.ConfigureUIFromPlayspace
struct USidewaysWidgetBase_ConfigureUIFromPlayspace_Params
{
public:
	class ASidewaysPlayspace*                    Playspace;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


