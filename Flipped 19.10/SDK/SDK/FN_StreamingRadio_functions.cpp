#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class StreamingRadio.StreamingRadioManagerNative
// (Actor)

class UClass* AStreamingRadioManagerNative::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StreamingRadioManagerNative");

	return Clss;
}


// StreamingRadioManagerNative StreamingRadio.Default__StreamingRadioManagerNative
// (Public, ClassDefaultObject, ArchetypeObject)

class AStreamingRadioManagerNative* AStreamingRadioManagerNative::GetDefaultObj()
{
	static class AStreamingRadioManagerNative* Default = nullptr;

	if (!Default)
		Default = static_cast<AStreamingRadioManagerNative*>(AStreamingRadioManagerNative::StaticClass()->DefaultObject);

	return Default;
}

}


