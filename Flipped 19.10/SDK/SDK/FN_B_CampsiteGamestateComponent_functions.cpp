#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_CampsiteGamestateComponent.B_CampsiteGamestateComponent_C
// (None)

class UClass* UB_CampsiteGamestateComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_CampsiteGamestateComponent_C");

	return Clss;
}


// B_CampsiteGamestateComponent_C B_CampsiteGamestateComponent.Default__B_CampsiteGamestateComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_CampsiteGamestateComponent_C* UB_CampsiteGamestateComponent_C::GetDefaultObj()
{
	static class UB_CampsiteGamestateComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_CampsiteGamestateComponent_C*>(UB_CampsiteGamestateComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


