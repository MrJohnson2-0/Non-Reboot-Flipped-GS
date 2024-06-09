#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Melt_Disarmed.MissionGen_Melt_Disarmed_C
// (None)

class UClass* UMissionGen_Melt_Disarmed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Melt_Disarmed_C");

	return Clss;
}


// MissionGen_Melt_Disarmed_C MissionGen_Melt_Disarmed.Default__MissionGen_Melt_Disarmed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Melt_Disarmed_C* UMissionGen_Melt_Disarmed_C::GetDefaultObj()
{
	static class UMissionGen_Melt_Disarmed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Melt_Disarmed_C*>(UMissionGen_Melt_Disarmed_C::StaticClass()->DefaultObject);

	return Default;
}

}


