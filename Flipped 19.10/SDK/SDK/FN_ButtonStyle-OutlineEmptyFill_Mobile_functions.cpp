#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-OutlineEmptyFill_Mobile.ButtonStyle-OutlineEmptyFill_Mobile_C
// (None)

class UClass* UButtonStyleMinusOutlineEmptyFill_Mobile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-OutlineEmptyFill_Mobile_C");

	return Clss;
}


// ButtonStyle-OutlineEmptyFill_Mobile_C ButtonStyle-OutlineEmptyFill_Mobile.Default__ButtonStyle-OutlineEmptyFill_Mobile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineEmptyFill_Mobile_C* UButtonStyleMinusOutlineEmptyFill_Mobile_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineEmptyFill_Mobile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineEmptyFill_Mobile_C*>(UButtonStyleMinusOutlineEmptyFill_Mobile_C::StaticClass()->DefaultObject);

	return Default;
}

}


