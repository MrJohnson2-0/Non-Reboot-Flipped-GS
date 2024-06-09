#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoleyLib_Typhoon.FoleyLib_Typhoon_C
// (None)

class UClass* UFoleyLib_Typhoon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyLib_Typhoon_C");

	return Clss;
}


// FoleyLib_Typhoon_C FoleyLib_Typhoon.Default__FoleyLib_Typhoon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoleyLib_Typhoon_C* UFoleyLib_Typhoon_C::GetDefaultObj()
{
	static class UFoleyLib_Typhoon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleyLib_Typhoon_C*>(UFoleyLib_Typhoon_C::StaticClass()->DefaultObject);

	return Default;
}

}


