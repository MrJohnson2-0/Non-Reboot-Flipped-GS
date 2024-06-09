#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerCraftingComponent.PlayerCraftingComponent_C
// (None)

class UClass* UPlayerCraftingComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerCraftingComponent_C");

	return Clss;
}


// PlayerCraftingComponent_C PlayerCraftingComponent.Default__PlayerCraftingComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerCraftingComponent_C* UPlayerCraftingComponent_C::GetDefaultObj()
{
	static class UPlayerCraftingComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerCraftingComponent_C*>(UPlayerCraftingComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


