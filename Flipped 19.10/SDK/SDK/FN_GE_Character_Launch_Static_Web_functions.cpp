#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Character_Launch_Static_Web.GE_Character_Launch_Static_Web_C
// (None)

class UClass* UGE_Character_Launch_Static_Web_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Character_Launch_Static_Web_C");

	return Clss;
}


// GE_Character_Launch_Static_Web_C GE_Character_Launch_Static_Web.Default__GE_Character_Launch_Static_Web_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Character_Launch_Static_Web_C* UGE_Character_Launch_Static_Web_C::GetDefaultObj()
{
	static class UGE_Character_Launch_Static_Web_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Character_Launch_Static_Web_C*>(UGE_Character_Launch_Static_Web_C::StaticClass()->DefaultObject);

	return Default;
}

}


