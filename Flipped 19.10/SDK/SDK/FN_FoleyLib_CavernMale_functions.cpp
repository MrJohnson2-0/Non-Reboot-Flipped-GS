#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoleyLib_CavernMale.FoleyLib_CavernMale_C
// (None)

class UClass* UFoleyLib_CavernMale_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyLib_CavernMale_C");

	return Clss;
}


// FoleyLib_CavernMale_C FoleyLib_CavernMale.Default__FoleyLib_CavernMale_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoleyLib_CavernMale_C* UFoleyLib_CavernMale_C::GetDefaultObj()
{
	static class UFoleyLib_CavernMale_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleyLib_CavernMale_C*>(UFoleyLib_CavernMale_C::StaticClass()->DefaultObject);

	return Default;
}

}


