#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LandscapeWaterInfo.LandscapeWaterInfo_C
// (Actor)

class UClass* ALandscapeWaterInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeWaterInfo_C");

	return Clss;
}


// LandscapeWaterInfo_C LandscapeWaterInfo.Default__LandscapeWaterInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALandscapeWaterInfo_C* ALandscapeWaterInfo_C::GetDefaultObj()
{
	static class ALandscapeWaterInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALandscapeWaterInfo_C*>(ALandscapeWaterInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LandscapeWaterInfo.LandscapeWaterInfo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALandscapeWaterInfo_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeWaterInfo_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LandscapeWaterInfo.LandscapeWaterInfo_C.Set Flood Water Level
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALandscapeWaterInfo_C::Set_Flood_Water_Level()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeWaterInfo_C", "Set Flood Water Level");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LandscapeWaterInfo.LandscapeWaterInfo_C.ExecuteUbergraph_LandscapeWaterInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWaterSubsystem*             CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALandscapeWaterInfo_C::ExecuteUbergraph_LandscapeWaterInfo(int32 EntryPoint, class UWaterSubsystem* CallFunc_GetWorldSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeWaterInfo_C", "ExecuteUbergraph_LandscapeWaterInfo");

	Params::ALandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


