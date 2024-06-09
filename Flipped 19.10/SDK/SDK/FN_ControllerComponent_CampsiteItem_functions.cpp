#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ControllerComponent_CampsiteItem.ControllerComponent_CampsiteItem_C
// (None)

class UClass* UControllerComponent_CampsiteItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControllerComponent_CampsiteItem_C");

	return Clss;
}


// ControllerComponent_CampsiteItem_C ControllerComponent_CampsiteItem.Default__ControllerComponent_CampsiteItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UControllerComponent_CampsiteItem_C* UControllerComponent_CampsiteItem_C::GetDefaultObj()
{
	static class UControllerComponent_CampsiteItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UControllerComponent_CampsiteItem_C*>(UControllerComponent_CampsiteItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


