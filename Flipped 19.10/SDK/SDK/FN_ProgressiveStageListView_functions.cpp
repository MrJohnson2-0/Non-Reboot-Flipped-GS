#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ProgressiveStageListView.ProgressiveStageListView_C
// (None)

class UClass* UProgressiveStageListView_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProgressiveStageListView_C");

	return Clss;
}


// ProgressiveStageListView_C ProgressiveStageListView.Default__ProgressiveStageListView_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UProgressiveStageListView_C* UProgressiveStageListView_C::GetDefaultObj()
{
	static class UProgressiveStageListView_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UProgressiveStageListView_C*>(UProgressiveStageListView_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ProgressiveStageListView.ProgressiveStageListView_C.ClearStageWidgets
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UProgressiveStageListView_C::ClearStageWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressiveStageListView_C", "ClearStageWidgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressiveStageListView.ProgressiveStageListView_C.AddStageWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortProgressiveStageWidget* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressiveStageWidget_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UFortProgressiveStageWidget* UProgressiveStageListView_C::AddStageWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, class UProgressiveStageWidget_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressiveStageListView_C", "AddStageWidget");

	Params::UProgressiveStageListView_C_AddStageWidget_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


