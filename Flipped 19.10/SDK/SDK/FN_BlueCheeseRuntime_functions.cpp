#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class BlueCheeseRuntime.FortAthenaMutator_BlueCheese
// (Actor)

class UClass* AFortAthenaMutator_BlueCheese::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_BlueCheese");

	return Clss;
}


// FortAthenaMutator_BlueCheese BlueCheeseRuntime.Default__FortAthenaMutator_BlueCheese
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_BlueCheese* AFortAthenaMutator_BlueCheese::GetDefaultObj()
{
	static class AFortAthenaMutator_BlueCheese* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_BlueCheese*>(AFortAthenaMutator_BlueCheese::StaticClass()->DefaultObject);

	return Default;
}

}


