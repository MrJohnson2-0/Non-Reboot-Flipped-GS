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

// 0x4 (0x4 - 0x0)
// Function MotherGameplayUI.AvocadoEaterHealthBarWidget.OnSetMarkerPosition
struct UAvocadoEaterHealthBarWidget_OnSetMarkerPosition_Params
{
public:
	float                                        MarkerPosition;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MotherGameplayUI.FortPaddleGingerReticleExtensionWidget.OnPropIndexChanged
struct UFortPaddleGingerReticleExtensionWidget_OnPropIndexChanged_Params
{
public:
	class FText                                  CategoryText;                                      // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        PropIndex;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPropCount;                                      // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CategoryIndex;                                     // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCategoryCount;                                  // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MotherGameplayUI.FortPaddleGingerReticleExtensionWidget.OnPropActivationChanged
struct UFortPaddleGingerReticleExtensionWidget_OnPropActivationChanged_Params
{
public:
	bool                                         Activated;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MotherGameplayUI.FortReactorGradeReticleExtensionWidget.OnUpdateChargeToMin
struct UFortReactorGradeReticleExtensionWidget_OnUpdateChargeToMin_Params
{
public:
	float                                        ChargePercent;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MotherGameplayUI.FortReactorGradeReticleExtensionWidget.OnUpdateChargeToAutoDischarge
struct UFortReactorGradeReticleExtensionWidget_OnUpdateChargeToAutoDischarge_Params
{
public:
	float                                        ChargePercent;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


