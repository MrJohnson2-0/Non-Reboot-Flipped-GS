#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Rebirth.MissionGen_Rebirth_C
// (None)

class UClass* UMissionGen_Rebirth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Rebirth_C");

	return Clss;
}


// MissionGen_Rebirth_C MissionGen_Rebirth.Default__MissionGen_Rebirth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Rebirth_C* UMissionGen_Rebirth_C::GetDefaultObj()
{
	static class UMissionGen_Rebirth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Rebirth_C*>(UMissionGen_Rebirth_C::StaticClass()->DefaultObject);

	return Default;
}

}


