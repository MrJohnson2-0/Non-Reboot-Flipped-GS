#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass QualityLevelSelectTimer.QualityLevelSelectTimer_C
// (None)

class UClass* UQualityLevelSelectTimer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QualityLevelSelectTimer_C");

	return Clss;
}


// QualityLevelSelectTimer_C QualityLevelSelectTimer.Default__QualityLevelSelectTimer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQualityLevelSelectTimer_C* UQualityLevelSelectTimer_C::GetDefaultObj()
{
	static class UQualityLevelSelectTimer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQualityLevelSelectTimer_C*>(UQualityLevelSelectTimer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.UpdateTextScale
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeRemaining                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQualityLevelSelectTimer_C::UpdateTextScale(float TimeRemaining, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Select_Default, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_NotEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QualityLevelSelectTimer_C", "UpdateTextScale");

	Params::UQualityLevelSelectTimer_C_UpdateTextScale_Params Parms{};

	Parms.TimeRemaining = TimeRemaining;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnProgressStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQualityLevelSelectTimer_C::OnProgressStarted(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QualityLevelSelectTimer_C", "OnProgressStarted");

	Params::UQualityLevelSelectTimer_C_OnProgressStarted_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnProgressEnded
// (Event, Protected, BlueprintEvent)
// Parameters:

void UQualityLevelSelectTimer_C::OnProgressEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QualityLevelSelectTimer_C", "OnProgressEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnTimeRemainingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              TimeRemaining                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQualityLevelSelectTimer_C::OnTimeRemainingChanged(float TimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QualityLevelSelectTimer_C", "OnTimeRemainingChanged");

	Params::UQualityLevelSelectTimer_C_OnTimeRemainingChanged_Params Parms{};

	Parms.TimeRemaining = TimeRemaining;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQualityLevelSelectTimer_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QualityLevelSelectTimer_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.ExecuteUbergraph_QualityLevelSelectTimer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Duration                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_TimeRemaining                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQualityLevelSelectTimer_C::ExecuteUbergraph_QualityLevelSelectTimer(int32 EntryPoint, float K2Node_Event_Duration, float K2Node_Event_TimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QualityLevelSelectTimer_C", "ExecuteUbergraph_QualityLevelSelectTimer");

	Params::UQualityLevelSelectTimer_C_ExecuteUbergraph_QualityLevelSelectTimer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Duration = K2Node_Event_Duration;
	Parms.K2Node_Event_TimeRemaining = K2Node_Event_TimeRemaining;

	UObject::ProcessEvent(Func, &Parms);

}

}


