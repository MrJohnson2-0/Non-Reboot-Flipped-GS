#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Phosphorus.MissionGen_Phosphorus_C
// (None)

class UClass* UMissionGen_Phosphorus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Phosphorus_C");

	return Clss;
}


// MissionGen_Phosphorus_C MissionGen_Phosphorus.Default__MissionGen_Phosphorus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Phosphorus_C* UMissionGen_Phosphorus_C::GetDefaultObj()
{
	static class UMissionGen_Phosphorus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Phosphorus_C*>(UMissionGen_Phosphorus_C::StaticClass()->DefaultObject);

	return Default;
}

}


