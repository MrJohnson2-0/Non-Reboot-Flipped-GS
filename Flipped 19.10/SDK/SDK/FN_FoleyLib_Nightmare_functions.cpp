#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoleyLib_Nightmare.FoleyLib_Nightmare_C
// (None)

class UClass* UFoleyLib_Nightmare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyLib_Nightmare_C");

	return Clss;
}


// FoleyLib_Nightmare_C FoleyLib_Nightmare.Default__FoleyLib_Nightmare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoleyLib_Nightmare_C* UFoleyLib_Nightmare_C::GetDefaultObj()
{
	static class UFoleyLib_Nightmare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleyLib_Nightmare_C*>(UFoleyLib_Nightmare_C::StaticClass()->DefaultObject);

	return Default;
}

}


