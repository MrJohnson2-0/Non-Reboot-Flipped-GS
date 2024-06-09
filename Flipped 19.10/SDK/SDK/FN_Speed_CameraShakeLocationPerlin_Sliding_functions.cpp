#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Speed_CameraShakeLocationPerlin_Sliding.Speed_CameraShakeLocationPerlin_Sliding_C
// (None)

class UClass* USpeed_CameraShakeLocationPerlin_Sliding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Speed_CameraShakeLocationPerlin_Sliding_C");

	return Clss;
}


// Speed_CameraShakeLocationPerlin_Sliding_C Speed_CameraShakeLocationPerlin_Sliding.Default__Speed_CameraShakeLocationPerlin_Sliding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpeed_CameraShakeLocationPerlin_Sliding_C* USpeed_CameraShakeLocationPerlin_Sliding_C::GetDefaultObj()
{
	static class USpeed_CameraShakeLocationPerlin_Sliding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpeed_CameraShakeLocationPerlin_Sliding_C*>(USpeed_CameraShakeLocationPerlin_Sliding_C::StaticClass()->DefaultObject);

	return Default;
}

}


