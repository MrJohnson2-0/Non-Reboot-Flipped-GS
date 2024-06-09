#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-HUD-BottomBar-BBS.TextStyle-HUD-BottomBar-BBS_C
// (None)

class UClass* UTextStyleMinusHUDMinusBottomBarMinusBBS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-HUD-BottomBar-BBS_C");

	return Clss;
}


// TextStyle-HUD-BottomBar-BBS_C TextStyle-HUD-BottomBar-BBS.Default__TextStyle-HUD-BottomBar-BBS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHUDMinusBottomBarMinusBBS_C* UTextStyleMinusHUDMinusBottomBarMinusBBS_C::GetDefaultObj()
{
	static class UTextStyleMinusHUDMinusBottomBarMinusBBS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHUDMinusBottomBarMinusBBS_C*>(UTextStyleMinusHUDMinusBottomBarMinusBBS_C::StaticClass()->DefaultObject);

	return Default;
}

}


