#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TeamMemberPedestal_ActivatableContainer.TeamMemberPedestal_ActivatableContainer_C
// (None)

class UClass* UTeamMemberPedestal_ActivatableContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TeamMemberPedestal_ActivatableContainer_C");

	return Clss;
}


// TeamMemberPedestal_ActivatableContainer_C TeamMemberPedestal_ActivatableContainer.Default__TeamMemberPedestal_ActivatableContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTeamMemberPedestal_ActivatableContainer_C* UTeamMemberPedestal_ActivatableContainer_C::GetDefaultObj()
{
	static class UTeamMemberPedestal_ActivatableContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTeamMemberPedestal_ActivatableContainer_C*>(UTeamMemberPedestal_ActivatableContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


