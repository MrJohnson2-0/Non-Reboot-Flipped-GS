#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Madman.MissionGen_Madman_C
// (None)

class UClass* UMissionGen_Madman_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Madman_C");

	return Clss;
}


// MissionGen_Madman_C MissionGen_Madman.Default__MissionGen_Madman_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Madman_C* UMissionGen_Madman_C::GetDefaultObj()
{
	static class UMissionGen_Madman_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Madman_C*>(UMissionGen_Madman_C::StaticClass()->DefaultObject);

	return Default;
}

}


