#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Decal_Galileo_Lobster.B_Decal_Galileo_Lobster_C
// (Actor)

class UClass* AB_Decal_Galileo_Lobster_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Decal_Galileo_Lobster_C");

	return Clss;
}


// B_Decal_Galileo_Lobster_C B_Decal_Galileo_Lobster.Default__B_Decal_Galileo_Lobster_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Decal_Galileo_Lobster_C* AB_Decal_Galileo_Lobster_C::GetDefaultObj()
{
	static class AB_Decal_Galileo_Lobster_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Decal_Galileo_Lobster_C*>(AB_Decal_Galileo_Lobster_C::StaticClass()->DefaultObject);

	return Default;
}

}


