#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoleyLib_AncientGladiator_Male_Heavy.FoleyLib_AncientGladiator_Male_Heavy_C
// (None)

class UClass* UFoleyLib_AncientGladiator_Male_Heavy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyLib_AncientGladiator_Male_Heavy_C");

	return Clss;
}


// FoleyLib_AncientGladiator_Male_Heavy_C FoleyLib_AncientGladiator_Male_Heavy.Default__FoleyLib_AncientGladiator_Male_Heavy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoleyLib_AncientGladiator_Male_Heavy_C* UFoleyLib_AncientGladiator_Male_Heavy_C::GetDefaultObj()
{
	static class UFoleyLib_AncientGladiator_Male_Heavy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleyLib_AncientGladiator_Male_Heavy_C*>(UFoleyLib_AncientGladiator_Male_Heavy_C::StaticClass()->DefaultObject);

	return Default;
}

}


