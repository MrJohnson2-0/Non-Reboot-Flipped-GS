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

// 0x8 (0x8 - 0x0)
// Function ProgressiveCosmeticUI.FortProgressiveItemScreen.OnContainerTabVisibilityUpdated
struct UFortProgressiveItemScreen_OnContainerTabVisibilityUpdated_Params
{
public:
	bool                                         bTabsVisible;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A8C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpacingAdjustmentForTabs;                          // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ProgressiveCosmeticUI.FortProgressiveItemWidget.OnStageItemChanged
struct UFortProgressiveItemWidget_OnStageItemChanged_Params
{
public:
	struct FProgressiveStageItemInfo             InStageItemInfo;                                   // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ProgressiveCosmeticUI.FortProgressiveItemWidget.OnPeekStateChanged
struct UFortProgressiveItemWidget_OnPeekStateChanged_Params
{
public:
	bool                                         bIsInPeekState;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ProgressiveCosmeticUI.FortProgressiveStageList.AddStageWidget
struct UFortProgressiveStageList_AddStageWidget_Params
{
public:
	class UFortProgressiveStageWidget*           ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ProgressiveCosmeticUI.FortProgressiveStageWidget.OnPeekStateChanged
struct UFortProgressiveStageWidget_OnPeekStateChanged_Params
{
public:
	bool                                         bIsInPeekState;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ProgressiveCosmeticUI.FortProgressiveStageWidget.AddStageItemWidget
struct UFortProgressiveStageWidget_AddStageItemWidget_Params
{
public:
	class UFortProgressiveItemWidget*            ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


