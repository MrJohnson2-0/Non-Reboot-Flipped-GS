#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FrontEnd_PlayerController.FrontEnd_PlayerController_C
// (Actor, PlayerController)

class UClass* AFrontEnd_PlayerController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FrontEnd_PlayerController_C");

	return Clss;
}


// FrontEnd_PlayerController_C FrontEnd_PlayerController.Default__FrontEnd_PlayerController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontEnd_PlayerController_C* AFrontEnd_PlayerController_C::GetDefaultObj()
{
	static class AFrontEnd_PlayerController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontEnd_PlayerController_C*>(AFrontEnd_PlayerController_C::StaticClass()->DefaultObject);

	return Default;
}

}


