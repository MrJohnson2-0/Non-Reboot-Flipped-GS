#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Respawn_Low.MissionGen_Respawn_Low_C
// (None)

class UClass* UMissionGen_Respawn_Low_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Respawn_Low_C");

	return Clss;
}


// MissionGen_Respawn_Low_C MissionGen_Respawn_Low.Default__MissionGen_Respawn_Low_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Respawn_Low_C* UMissionGen_Respawn_Low_C::GetDefaultObj()
{
	static class UMissionGen_Respawn_Low_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Respawn_Low_C*>(UMissionGen_Respawn_Low_C::StaticClass()->DefaultObject);

	return Default;
}

}


