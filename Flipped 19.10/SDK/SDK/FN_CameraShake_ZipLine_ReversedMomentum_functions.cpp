#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_ZipLine_ReversedMomentum.CameraShake_ZipLine_ReversedMomentum_C
// (None)

class UClass* UCameraShake_ZipLine_ReversedMomentum_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_ZipLine_ReversedMomentum_C");

	return Clss;
}


// CameraShake_ZipLine_ReversedMomentum_C CameraShake_ZipLine_ReversedMomentum.Default__CameraShake_ZipLine_ReversedMomentum_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_ZipLine_ReversedMomentum_C* UCameraShake_ZipLine_ReversedMomentum_C::GetDefaultObj()
{
	static class UCameraShake_ZipLine_ReversedMomentum_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_ZipLine_ReversedMomentum_C*>(UCameraShake_ZipLine_ReversedMomentum_C::StaticClass()->DefaultObject);

	return Default;
}

}


