#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MantisWeaponComp_GalileoLobster.MantisWeaponComp_GalileoLobster_C
// (None)

class UClass* UMantisWeaponComp_GalileoLobster_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MantisWeaponComp_GalileoLobster_C");

	return Clss;
}


// MantisWeaponComp_GalileoLobster_C MantisWeaponComp_GalileoLobster.Default__MantisWeaponComp_GalileoLobster_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMantisWeaponComp_GalileoLobster_C* UMantisWeaponComp_GalileoLobster_C::GetDefaultObj()
{
	static class UMantisWeaponComp_GalileoLobster_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMantisWeaponComp_GalileoLobster_C*>(UMantisWeaponComp_GalileoLobster_C::StaticClass()->DefaultObject);

	return Default;
}

}


