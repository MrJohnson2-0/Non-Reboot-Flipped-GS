#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_FootStep_Left.AnimNotify_FootStep_Left_C
// (None)

class UClass* UAnimNotify_FootStep_Left_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_FootStep_Left_C");

	return Clss;
}


// AnimNotify_FootStep_Left_C AnimNotify_FootStep_Left.Default__AnimNotify_FootStep_Left_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_FootStep_Left_C* UAnimNotify_FootStep_Left_C::GetDefaultObj()
{
	static class UAnimNotify_FootStep_Left_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_FootStep_Left_C*>(UAnimNotify_FootStep_Left_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimNotify_FootStep_Left.AnimNotify_FootStep_Left_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Received_Notify_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInterfacePlayerPawn_C>K2Node_DynamicCast_AsInterface_Player_Pawn                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAnimNotify_FootStep_Left_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Received_Notify_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_FootStep_Left_C", "Received_Notify");

	Params::UAnimNotify_FootStep_Left_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Received_Notify_ReturnValue = CallFunc_Received_Notify_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsInterface_Player_Pawn = K2Node_DynamicCast_AsInterface_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


