#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C
// (Actor)

class UClass* ABP_ZipLine_Athena_Harness_Yellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ZipLine_Athena_Harness_Yellow_C");

	return Clss;
}


// BP_ZipLine_Athena_Harness_Yellow_C BP_ZipLine_Athena_Harness_Yellow.Default__BP_ZipLine_Athena_Harness_Yellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ZipLine_Athena_Harness_Yellow_C* ABP_ZipLine_Athena_Harness_Yellow_C::GetDefaultObj()
{
	static class ABP_ZipLine_Athena_Harness_Yellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ZipLine_Athena_Harness_Yellow_C*>(ABP_ZipLine_Athena_Harness_Yellow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Spark__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_ZipLine_Athena_Harness_Yellow_C::Spark__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_Yellow_C", "Spark__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Spark__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_ZipLine_Athena_Harness_Yellow_C::Spark__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_Yellow_C", "Spark__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Alpha__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_ZipLine_Athena_Harness_Yellow_C::Alpha__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_Yellow_C", "Alpha__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Alpha__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_ZipLine_Athena_Harness_Yellow_C::Alpha__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_Yellow_C", "Alpha__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ZipLine_Athena_Harness_Yellow_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_Yellow_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.UpdateZiplineFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZipLine_Athena_Harness_Yellow_C::UpdateZiplineFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_Yellow_C", "UpdateZiplineFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Update Begin Z
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZipLine_Athena_Harness_Yellow_C::Update_Begin_Z()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_Yellow_C", "Update Begin Z");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.ResetBlue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZipLine_Athena_Harness_Yellow_C::ResetBlue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_Yellow_C", "ResetBlue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.ExecuteUbergraph_BP_ZipLine_Athena_Harness_Yellow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZipLine_Athena_Harness_Yellow_C::ExecuteUbergraph_BP_ZipLine_Athena_Harness_Yellow(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_Yellow_C", "ExecuteUbergraph_BP_ZipLine_Athena_Harness_Yellow");

	Params::ABP_ZipLine_Athena_Harness_Yellow_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness_Yellow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


