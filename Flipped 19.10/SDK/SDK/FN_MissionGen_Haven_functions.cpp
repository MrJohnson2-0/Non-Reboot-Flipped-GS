#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Haven.MissionGen_Haven_C
// (None)

class UClass* UMissionGen_Haven_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Haven_C");

	return Clss;
}


// MissionGen_Haven_C MissionGen_Haven.Default__MissionGen_Haven_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Haven_C* UMissionGen_Haven_C::GetDefaultObj()
{
	static class UMissionGen_Haven_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Haven_C*>(UMissionGen_Haven_C::StaticClass()->DefaultObject);

	return Default;
}

}


