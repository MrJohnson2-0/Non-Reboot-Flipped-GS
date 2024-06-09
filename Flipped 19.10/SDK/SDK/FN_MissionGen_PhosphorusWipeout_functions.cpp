#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_PhosphorusWipeout.MissionGen_PhosphorusWipeout_C
// (None)

class UClass* UMissionGen_PhosphorusWipeout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_PhosphorusWipeout_C");

	return Clss;
}


// MissionGen_PhosphorusWipeout_C MissionGen_PhosphorusWipeout.Default__MissionGen_PhosphorusWipeout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_PhosphorusWipeout_C* UMissionGen_PhosphorusWipeout_C::GetDefaultObj()
{
	static class UMissionGen_PhosphorusWipeout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_PhosphorusWipeout_C*>(UMissionGen_PhosphorusWipeout_C::StaticClass()->DefaultObject);

	return Default;
}

}


