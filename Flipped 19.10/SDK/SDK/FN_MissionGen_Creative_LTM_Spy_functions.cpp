#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Creative_LTM_Spy.MissionGen_Creative_LTM_Spy_C
// (None)

class UClass* UMissionGen_Creative_LTM_Spy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Creative_LTM_Spy_C");

	return Clss;
}


// MissionGen_Creative_LTM_Spy_C MissionGen_Creative_LTM_Spy.Default__MissionGen_Creative_LTM_Spy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Creative_LTM_Spy_C* UMissionGen_Creative_LTM_Spy_C::GetDefaultObj()
{
	static class UMissionGen_Creative_LTM_Spy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Creative_LTM_Spy_C*>(UMissionGen_Creative_LTM_Spy_C::StaticClass()->DefaultObject);

	return Default;
}

}


