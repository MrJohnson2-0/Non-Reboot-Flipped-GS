#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-HUD-BottomBar-BBS-Hovered.TextStyle-HUD-BottomBar-BBS-Hovered_C
// (None)

class UClass* UTextStyleMinusHUDMinusBottomBarMinusBBSMinusHovered_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-HUD-BottomBar-BBS-Hovered_C");

	return Clss;
}


// TextStyle-HUD-BottomBar-BBS-Hovered_C TextStyle-HUD-BottomBar-BBS-Hovered.Default__TextStyle-HUD-BottomBar-BBS-Hovered_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHUDMinusBottomBarMinusBBSMinusHovered_C* UTextStyleMinusHUDMinusBottomBarMinusBBSMinusHovered_C::GetDefaultObj()
{
	static class UTextStyleMinusHUDMinusBottomBarMinusBBSMinusHovered_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHUDMinusBottomBarMinusBBSMinusHovered_C*>(UTextStyleMinusHUDMinusBottomBarMinusBBSMinusHovered_C::StaticClass()->DefaultObject);

	return Default;
}

}


