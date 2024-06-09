#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-HUD-BottomBar-BBS-Disabled.TextStyle-HUD-BottomBar-BBS-Disabled_C
// (None)

class UClass* UTextStyleMinusHUDMinusBottomBarMinusBBSMinusDisabled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-HUD-BottomBar-BBS-Disabled_C");

	return Clss;
}


// TextStyle-HUD-BottomBar-BBS-Disabled_C TextStyle-HUD-BottomBar-BBS-Disabled.Default__TextStyle-HUD-BottomBar-BBS-Disabled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHUDMinusBottomBarMinusBBSMinusDisabled_C* UTextStyleMinusHUDMinusBottomBarMinusBBSMinusDisabled_C::GetDefaultObj()
{
	static class UTextStyleMinusHUDMinusBottomBarMinusBBSMinusDisabled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHUDMinusBottomBarMinusBBSMinusDisabled_C*>(UTextStyleMinusHUDMinusBottomBarMinusBBSMinusDisabled_C::StaticClass()->DefaultObject);

	return Default;
}

}


