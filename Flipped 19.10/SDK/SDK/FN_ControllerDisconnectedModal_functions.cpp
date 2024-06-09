#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ControllerDisconnectedModal.ControllerDisconnectedModal_C
// (None)

class UClass* UControllerDisconnectedModal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControllerDisconnectedModal_C");

	return Clss;
}


// ControllerDisconnectedModal_C ControllerDisconnectedModal.Default__ControllerDisconnectedModal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UControllerDisconnectedModal_C* UControllerDisconnectedModal_C::GetDefaultObj()
{
	static class UControllerDisconnectedModal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UControllerDisconnectedModal_C*>(UControllerDisconnectedModal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ControllerDisconnectedModal.ControllerDisconnectedModal_C.OnAnalogValueChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FAnalogInputEvent           InAnalogInputEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UControllerDisconnectedModal_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllerDisconnectedModal_C", "OnAnalogValueChanged");

	Params::UControllerDisconnectedModal_C_OnAnalogValueChanged_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InAnalogInputEvent = InAnalogInputEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ControllerDisconnectedModal.ControllerDisconnectedModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UControllerDisconnectedModal_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllerDisconnectedModal_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ControllerDisconnectedModal.ControllerDisconnectedModal_C.ExecuteUbergraph_ControllerDisconnectedModal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UControllerDisconnectedModal_C::ExecuteUbergraph_ControllerDisconnectedModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllerDisconnectedModal_C", "ExecuteUbergraph_ControllerDisconnectedModal");

	Params::UControllerDisconnectedModal_C_ExecuteUbergraph_ControllerDisconnectedModal_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


