#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FrontEnd_GameMode.FrontEnd_GameMode_C
// (Actor)

class UClass* AFrontEnd_GameMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FrontEnd_GameMode_C");

	return Clss;
}


// FrontEnd_GameMode_C FrontEnd_GameMode.Default__FrontEnd_GameMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontEnd_GameMode_C* AFrontEnd_GameMode_C::GetDefaultObj()
{
	static class AFrontEnd_GameMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontEnd_GameMode_C*>(AFrontEnd_GameMode_C::StaticClass()->DefaultObject);

	return Default;
}

}


