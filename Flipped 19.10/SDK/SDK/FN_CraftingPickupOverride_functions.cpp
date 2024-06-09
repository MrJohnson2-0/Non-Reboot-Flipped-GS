#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CraftingPickupOverride.CraftingPickupOverride_C
// (None)

class UClass* UCraftingPickupOverride_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CraftingPickupOverride_C");

	return Clss;
}


// CraftingPickupOverride_C CraftingPickupOverride.Default__CraftingPickupOverride_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCraftingPickupOverride_C* UCraftingPickupOverride_C::GetDefaultObj()
{
	static class UCraftingPickupOverride_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCraftingPickupOverride_C*>(UCraftingPickupOverride_C::StaticClass()->DefaultObject);

	return Default;
}

}


