#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_ZipLine_DownhillSpeed.CameraShake_ZipLine_DownhillSpeed_C
// (None)

class UClass* UCameraShake_ZipLine_DownhillSpeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_ZipLine_DownhillSpeed_C");

	return Clss;
}


// CameraShake_ZipLine_DownhillSpeed_C CameraShake_ZipLine_DownhillSpeed.Default__CameraShake_ZipLine_DownhillSpeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_ZipLine_DownhillSpeed_C* UCameraShake_ZipLine_DownhillSpeed_C::GetDefaultObj()
{
	static class UCameraShake_ZipLine_DownhillSpeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_ZipLine_DownhillSpeed_C*>(UCameraShake_ZipLine_DownhillSpeed_C::StaticClass()->DefaultObject);

	return Default;
}

}


