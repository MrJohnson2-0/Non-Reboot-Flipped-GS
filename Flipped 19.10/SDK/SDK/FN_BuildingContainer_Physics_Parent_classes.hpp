#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0xED9 - 0xEB8)
// BlueprintGeneratedClass BuildingContainer_Physics_Parent.BuildingContainer_Physics_Parent_C
class ABuildingContainer_Physics_Parent_C : public ABuildingContainer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortLinkToActorComponent*             FortLinkToActor;                                   // 0xEC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortPhysicsObjectComponent*           FortPhysicsObject;                                 // 0xEC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                LinkedActor;                                       // 0xED0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Rep_WakeUp;                                        // 0xED8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABuildingContainer_Physics_Parent_C* GetDefaultObj();

	void OnRep_Rep_WakeUp();
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_1_OnLinkedActorDestroyed__DelegateSignature(class AActor* DamageCauser);
	void BndEvt__FortPhysicsObject_K2Node_ComponentBoundEvent_0_OnPhysicsObjectAwakeChanged__DelegateSignature(class UPrimitiveComponent* SimulatingComponent, bool bIsAwake);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BuildingContainer_Physics_Parent(int32 EntryPoint, class AActor* K2Node_ComponentBoundEvent_DamageCauser, bool CallFunc_PerformLinkingCheck_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_SimulatingComponent, bool K2Node_ComponentBoundEvent_bIsAwake, bool CallFunc_IsAwake_ReturnValue, bool CallFunc_PerformLinkingCheck_ReturnValue_1);
};

}


