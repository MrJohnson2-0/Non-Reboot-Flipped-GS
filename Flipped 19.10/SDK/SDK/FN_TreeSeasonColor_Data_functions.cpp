#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TreeSeasonColor_Data.TreeSeasonColor_Data_C
// (None)

class UClass* UTreeSeasonColor_Data_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TreeSeasonColor_Data_C");

	return Clss;
}


// TreeSeasonColor_Data_C TreeSeasonColor_Data.Default__TreeSeasonColor_Data_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTreeSeasonColor_Data_C* UTreeSeasonColor_Data_C::GetDefaultObj()
{
	static class UTreeSeasonColor_Data_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTreeSeasonColor_Data_C*>(UTreeSeasonColor_Data_C::StaticClass()->DefaultObject);

	return Default;
}

}


