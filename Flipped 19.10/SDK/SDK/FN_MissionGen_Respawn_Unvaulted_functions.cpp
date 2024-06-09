#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Respawn_Unvaulted.MissionGen_Respawn_Unvaulted_C
// (None)

class UClass* UMissionGen_Respawn_Unvaulted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Respawn_Unvaulted_C");

	return Clss;
}


// MissionGen_Respawn_Unvaulted_C MissionGen_Respawn_Unvaulted.Default__MissionGen_Respawn_Unvaulted_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Respawn_Unvaulted_C* UMissionGen_Respawn_Unvaulted_C::GetDefaultObj()
{
	static class UMissionGen_Respawn_Unvaulted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Respawn_Unvaulted_C*>(UMissionGen_Respawn_Unvaulted_C::StaticClass()->DefaultObject);

	return Default;
}

}


