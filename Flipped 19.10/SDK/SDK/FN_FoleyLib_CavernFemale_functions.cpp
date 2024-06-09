#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoleyLib_CavernFemale.FoleyLib_CavernFemale_C
// (None)

class UClass* UFoleyLib_CavernFemale_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyLib_CavernFemale_C");

	return Clss;
}


// FoleyLib_CavernFemale_C FoleyLib_CavernFemale.Default__FoleyLib_CavernFemale_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoleyLib_CavernFemale_C* UFoleyLib_CavernFemale_C::GetDefaultObj()
{
	static class UFoleyLib_CavernFemale_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleyLib_CavernFemale_C*>(UFoleyLib_CavernFemale_C::StaticClass()->DefaultObject);

	return Default;
}

}


