#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoleyLib_MotherWall.FoleyLib_MotherWall_C
// (None)

class UClass* UFoleyLib_MotherWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyLib_MotherWall_C");

	return Clss;
}


// FoleyLib_MotherWall_C FoleyLib_MotherWall.Default__FoleyLib_MotherWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoleyLib_MotherWall_C* UFoleyLib_MotherWall_C::GetDefaultObj()
{
	static class UFoleyLib_MotherWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleyLib_MotherWall_C*>(UFoleyLib_MotherWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


