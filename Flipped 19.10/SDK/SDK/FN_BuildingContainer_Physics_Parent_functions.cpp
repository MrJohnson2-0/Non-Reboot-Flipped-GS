#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BuildingContainer_Physics_Parent.BuildingContainer_Physics_Parent_C
// (Actor)

class UClass* ABuildingContainer_Physics_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuildingContainer_Physics_Parent_C");

	return Clss;
}


// BuildingContainer_Physics_Parent_C BuildingContainer_Physics_Parent.Default__BuildingContainer_Physics_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildingContainer_Physics_Parent_C* ABuildingContainer_Physics_Parent_C::GetDefaultObj()
{
	static class ABuildingContainer_Physics_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildingContainer_Physics_Parent_C*>(ABuildingContainer_Physics_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BuildingContainer_Physics_Parent.BuildingContainer_Physics_Parent_C.OnRep_Rep_WakeUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuildingContainer_Physics_Parent_C::OnRep_Rep_WakeUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingContainer_Physics_Parent_C", "OnRep_Rep_WakeUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuildingContainer_Physics_Parent.BuildingContainer_Physics_Parent_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_1_OnLinkedActorDestroyed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABuildingContainer_Physics_Parent_C::BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_1_OnLinkedActorDestroyed__DelegateSignature(class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingContainer_Physics_Parent_C", "BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_1_OnLinkedActorDestroyed__DelegateSignature");

	Params::ABuildingContainer_Physics_Parent_C_BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_1_OnLinkedActorDestroyed__DelegateSignature_Params Parms{};

	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingContainer_Physics_Parent.BuildingContainer_Physics_Parent_C.BndEvt__FortPhysicsObject_K2Node_ComponentBoundEvent_0_OnPhysicsObjectAwakeChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         SimulatingComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsAwake                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABuildingContainer_Physics_Parent_C::BndEvt__FortPhysicsObject_K2Node_ComponentBoundEvent_0_OnPhysicsObjectAwakeChanged__DelegateSignature(class UPrimitiveComponent* SimulatingComponent, bool bIsAwake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingContainer_Physics_Parent_C", "BndEvt__FortPhysicsObject_K2Node_ComponentBoundEvent_0_OnPhysicsObjectAwakeChanged__DelegateSignature");

	Params::ABuildingContainer_Physics_Parent_C_BndEvt__FortPhysicsObject_K2Node_ComponentBoundEvent_0_OnPhysicsObjectAwakeChanged__DelegateSignature_Params Parms{};

	Parms.SimulatingComponent = SimulatingComponent;
	Parms.bIsAwake = bIsAwake;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingContainer_Physics_Parent.BuildingContainer_Physics_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABuildingContainer_Physics_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingContainer_Physics_Parent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuildingContainer_Physics_Parent.BuildingContainer_Physics_Parent_C.ExecuteUbergraph_BuildingContainer_Physics_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_DamageCauser                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PerformLinkingCheck_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_SimulatingComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsAwake                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAwake_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PerformLinkingCheck_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABuildingContainer_Physics_Parent_C::ExecuteUbergraph_BuildingContainer_Physics_Parent(int32 EntryPoint, class AActor* K2Node_ComponentBoundEvent_DamageCauser, bool CallFunc_PerformLinkingCheck_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_SimulatingComponent, bool K2Node_ComponentBoundEvent_bIsAwake, bool CallFunc_IsAwake_ReturnValue, bool CallFunc_PerformLinkingCheck_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildingContainer_Physics_Parent_C", "ExecuteUbergraph_BuildingContainer_Physics_Parent");

	Params::ABuildingContainer_Physics_Parent_C_ExecuteUbergraph_BuildingContainer_Physics_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_DamageCauser = K2Node_ComponentBoundEvent_DamageCauser;
	Parms.CallFunc_PerformLinkingCheck_ReturnValue = CallFunc_PerformLinkingCheck_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SimulatingComponent = K2Node_ComponentBoundEvent_SimulatingComponent;
	Parms.K2Node_ComponentBoundEvent_bIsAwake = K2Node_ComponentBoundEvent_bIsAwake;
	Parms.CallFunc_IsAwake_ReturnValue = CallFunc_IsAwake_ReturnValue;
	Parms.CallFunc_PerformLinkingCheck_ReturnValue_1 = CallFunc_PerformLinkingCheck_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


