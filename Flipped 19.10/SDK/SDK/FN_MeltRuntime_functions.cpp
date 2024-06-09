#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MeltRuntime.FortAthenaMutator_Melt
// (Actor)

class UClass* AFortAthenaMutator_Melt::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_Melt");

	return Clss;
}


// FortAthenaMutator_Melt MeltRuntime.Default__FortAthenaMutator_Melt
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_Melt* AFortAthenaMutator_Melt::GetDefaultObj()
{
	static class AFortAthenaMutator_Melt* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_Melt*>(AFortAthenaMutator_Melt::StaticClass()->DefaultObject);

	return Default;
}

}


