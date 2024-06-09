#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CameraLens_HidingProp_Teleporting_Looping_WilliePete.BP_CameraLens_HidingProp_Teleporting_Looping_WilliePete_C
// (Actor)

class UClass* ABP_CameraLens_HidingProp_Teleporting_Looping_WilliePete_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CameraLens_HidingProp_Teleporting_Looping_WilliePete_C");

	return Clss;
}


// BP_CameraLens_HidingProp_Teleporting_Looping_WilliePete_C BP_CameraLens_HidingProp_Teleporting_Looping_WilliePete.Default__BP_CameraLens_HidingProp_Teleporting_Looping_WilliePete_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CameraLens_HidingProp_Teleporting_Looping_WilliePete_C* ABP_CameraLens_HidingProp_Teleporting_Looping_WilliePete_C::GetDefaultObj()
{
	static class ABP_CameraLens_HidingProp_Teleporting_Looping_WilliePete_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CameraLens_HidingProp_Teleporting_Looping_WilliePete_C*>(ABP_CameraLens_HidingProp_Teleporting_Looping_WilliePete_C::StaticClass()->DefaultObject);

	return Default;
}

}


