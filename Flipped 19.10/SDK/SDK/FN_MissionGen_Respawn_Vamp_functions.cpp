#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Respawn_Vamp.MissionGen_Respawn_Vamp_C
// (None)

class UClass* UMissionGen_Respawn_Vamp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Respawn_Vamp_C");

	return Clss;
}


// MissionGen_Respawn_Vamp_C MissionGen_Respawn_Vamp.Default__MissionGen_Respawn_Vamp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Respawn_Vamp_C* UMissionGen_Respawn_Vamp_C::GetDefaultObj()
{
	static class UMissionGen_Respawn_Vamp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Respawn_Vamp_C*>(UMissionGen_Respawn_Vamp_C::StaticClass()->DefaultObject);

	return Default;
}

}


