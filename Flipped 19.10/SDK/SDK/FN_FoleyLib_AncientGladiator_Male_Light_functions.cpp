#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoleyLib_AncientGladiator_Male_Light.FoleyLib_AncientGladiator_Male_Light_C
// (None)

class UClass* UFoleyLib_AncientGladiator_Male_Light_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyLib_AncientGladiator_Male_Light_C");

	return Clss;
}


// FoleyLib_AncientGladiator_Male_Light_C FoleyLib_AncientGladiator_Male_Light.Default__FoleyLib_AncientGladiator_Male_Light_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoleyLib_AncientGladiator_Male_Light_C* UFoleyLib_AncientGladiator_Male_Light_C::GetDefaultObj()
{
	static class UFoleyLib_AncientGladiator_Male_Light_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleyLib_AncientGladiator_Male_Light_C*>(UFoleyLib_AncientGladiator_Male_Light_C::StaticClass()->DefaultObject);

	return Default;
}

}


