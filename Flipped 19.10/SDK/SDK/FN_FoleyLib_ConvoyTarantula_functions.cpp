#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoleyLib_ConvoyTarantula.FoleyLib_ConvoyTarantula_C
// (None)

class UClass* UFoleyLib_ConvoyTarantula_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyLib_ConvoyTarantula_C");

	return Clss;
}


// FoleyLib_ConvoyTarantula_C FoleyLib_ConvoyTarantula.Default__FoleyLib_ConvoyTarantula_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoleyLib_ConvoyTarantula_C* UFoleyLib_ConvoyTarantula_C::GetDefaultObj()
{
	static class UFoleyLib_ConvoyTarantula_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleyLib_ConvoyTarantula_C*>(UFoleyLib_ConvoyTarantula_C::StaticClass()->DefaultObject);

	return Default;
}

}


