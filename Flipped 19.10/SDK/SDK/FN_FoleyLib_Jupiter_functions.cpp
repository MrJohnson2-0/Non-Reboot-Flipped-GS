#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoleyLib_Jupiter.FoleyLib_Jupiter_C
// (None)

class UClass* UFoleyLib_Jupiter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyLib_Jupiter_C");

	return Clss;
}


// FoleyLib_Jupiter_C FoleyLib_Jupiter.Default__FoleyLib_Jupiter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoleyLib_Jupiter_C* UFoleyLib_Jupiter_C::GetDefaultObj()
{
	static class UFoleyLib_Jupiter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleyLib_Jupiter_C*>(UFoleyLib_Jupiter_C::StaticClass()->DefaultObject);

	return Default;
}

}


