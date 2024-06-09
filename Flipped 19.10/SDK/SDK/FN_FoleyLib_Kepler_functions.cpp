#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoleyLib_Kepler.FoleyLib_Kepler_C
// (None)

class UClass* UFoleyLib_Kepler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyLib_Kepler_C");

	return Clss;
}


// FoleyLib_Kepler_C FoleyLib_Kepler.Default__FoleyLib_Kepler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoleyLib_Kepler_C* UFoleyLib_Kepler_C::GetDefaultObj()
{
	static class UFoleyLib_Kepler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleyLib_Kepler_C*>(UFoleyLib_Kepler_C::StaticClass()->DefaultObject);

	return Default;
}

}


