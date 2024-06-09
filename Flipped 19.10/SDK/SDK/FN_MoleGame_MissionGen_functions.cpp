#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MoleGame_MissionGen.MoleGame_MissionGen_C
// (None)

class UClass* UMoleGame_MissionGen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoleGame_MissionGen_C");

	return Clss;
}


// MoleGame_MissionGen_C MoleGame_MissionGen.Default__MoleGame_MissionGen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMoleGame_MissionGen_C* UMoleGame_MissionGen_C::GetDefaultObj()
{
	static class UMoleGame_MissionGen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoleGame_MissionGen_C*>(UMoleGame_MissionGen_C::StaticClass()->DefaultObject);

	return Default;
}

}


