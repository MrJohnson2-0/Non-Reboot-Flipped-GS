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
// Function BuildingContainer_Physics_Parent.BuildingContainer_Physics_Parent_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_1_OnLinkedActorDestroyed__DelegateSignature
struct ABuildingContainer_Physics_Parent_C_BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_1_OnLinkedActorDestroyed__DelegateSignature_Params
{
public:
	class AActor*                                DamageCauser;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BuildingContainer_Physics_Parent.BuildingContainer_Physics_Parent_C.BndEvt__FortPhysicsObject_K2Node_ComponentBoundEvent_0_OnPhysicsObjectAwakeChanged__DelegateSignature
struct ABuildingContainer_Physics_Parent_C_BndEvt__FortPhysicsObject_K2Node_ComponentBoundEvent_0_OnPhysicsObjectAwakeChanged__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   SimulatingComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsAwake;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x23 (0x23 - 0x0)
// Function BuildingContainer_Physics_Parent.BuildingContainer_Physics_Parent_C.ExecuteUbergraph_BuildingContainer_Physics_Parent
struct ABuildingContainer_Physics_Parent_C_ExecuteUbergraph_BuildingContainer_Physics_Parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E5D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_ComponentBoundEvent_DamageCauser;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PerformLinkingCheck_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E5E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_SimulatingComponent;    // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bIsAwake;               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAwake_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PerformLinkingCheck_ReturnValue_1;        // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


