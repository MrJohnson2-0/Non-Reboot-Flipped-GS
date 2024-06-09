#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_BlueCheese_Evergreen.MissionGen_BlueCheese_Evergreen_C
// (None)

class UClass* UMissionGen_BlueCheese_Evergreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_BlueCheese_Evergreen_C");

	return Clss;
}


// MissionGen_BlueCheese_Evergreen_C MissionGen_BlueCheese_Evergreen.Default__MissionGen_BlueCheese_Evergreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_BlueCheese_Evergreen_C* UMissionGen_BlueCheese_Evergreen_C::GetDefaultObj()
{
	static class UMissionGen_BlueCheese_Evergreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_BlueCheese_Evergreen_C*>(UMissionGen_BlueCheese_Evergreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


