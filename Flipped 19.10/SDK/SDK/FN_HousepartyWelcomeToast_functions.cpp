#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HousepartyWelcomeToast.HousepartyWelcomeToast_C
// (None)

class UClass* UHousepartyWelcomeToast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HousepartyWelcomeToast_C");

	return Clss;
}


// HousepartyWelcomeToast_C HousepartyWelcomeToast.Default__HousepartyWelcomeToast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHousepartyWelcomeToast_C* UHousepartyWelcomeToast_C::GetDefaultObj()
{
	static class UHousepartyWelcomeToast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHousepartyWelcomeToast_C*>(UHousepartyWelcomeToast_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HousepartyWelcomeToast.HousepartyWelcomeToast_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHousepartyWelcomeToast_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HousepartyWelcomeToast_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HousepartyWelcomeToast.HousepartyWelcomeToast_C.OnSetToast
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortUINotification*         ToastNotification                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHousepartyWelcomeToast_C::OnSetToast(class UFortUINotification* ToastNotification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HousepartyWelcomeToast_C", "OnSetToast");

	Params::UHousepartyWelcomeToast_C_OnSetToast_Params Parms{};

	Parms.ToastNotification = ToastNotification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HousepartyWelcomeToast.HousepartyWelcomeToast_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHousepartyWelcomeToast_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HousepartyWelcomeToast_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HousepartyWelcomeToast.HousepartyWelcomeToast_C.ExecuteUbergraph_HousepartyWelcomeToast
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINotification*         K2Node_Event_ToastNotification                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHousepartyWelcomeToast_C::ExecuteUbergraph_HousepartyWelcomeToast(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortUINotification* K2Node_Event_ToastNotification, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HousepartyWelcomeToast_C", "ExecuteUbergraph_HousepartyWelcomeToast");

	Params::UHousepartyWelcomeToast_C_ExecuteUbergraph_HousepartyWelcomeToast_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_ToastNotification = K2Node_Event_ToastNotification;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


