#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Melt.MissionGen_Melt_C
// (None)

class UClass* UMissionGen_Melt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Melt_C");

	return Clss;
}


// MissionGen_Melt_C MissionGen_Melt.Default__MissionGen_Melt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Melt_C* UMissionGen_Melt_C::GetDefaultObj()
{
	static class UMissionGen_Melt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Melt_C*>(UMissionGen_Melt_C::StaticClass()->DefaultObject);

	return Default;
}

}


