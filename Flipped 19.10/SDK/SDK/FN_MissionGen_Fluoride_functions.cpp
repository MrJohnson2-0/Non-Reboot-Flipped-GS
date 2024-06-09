#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Fluoride.MissionGen_Fluoride_C
// (None)

class UClass* UMissionGen_Fluoride_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Fluoride_C");

	return Clss;
}


// MissionGen_Fluoride_C MissionGen_Fluoride.Default__MissionGen_Fluoride_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Fluoride_C* UMissionGen_Fluoride_C::GetDefaultObj()
{
	static class UMissionGen_Fluoride_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Fluoride_C*>(UMissionGen_Fluoride_C::StaticClass()->DefaultObject);

	return Default;
}

}


