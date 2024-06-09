#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PhosphorusWipeoutRuntime.FortAthenaMutator_ModifyIncomingPawnDamage
// (Actor)

class UClass* AFortAthenaMutator_ModifyIncomingPawnDamage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_ModifyIncomingPawnDamage");

	return Clss;
}


// FortAthenaMutator_ModifyIncomingPawnDamage PhosphorusWipeoutRuntime.Default__FortAthenaMutator_ModifyIncomingPawnDamage
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_ModifyIncomingPawnDamage* AFortAthenaMutator_ModifyIncomingPawnDamage::GetDefaultObj()
{
	static class AFortAthenaMutator_ModifyIncomingPawnDamage* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_ModifyIncomingPawnDamage*>(AFortAthenaMutator_ModifyIncomingPawnDamage::StaticClass()->DefaultObject);

	return Default;
}


// Class PhosphorusWipeoutRuntime.FortAthenaMutator_PhosphorusWipeout
// (Actor)

class UClass* AFortAthenaMutator_PhosphorusWipeout::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_PhosphorusWipeout");

	return Clss;
}


// FortAthenaMutator_PhosphorusWipeout PhosphorusWipeoutRuntime.Default__FortAthenaMutator_PhosphorusWipeout
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortAthenaMutator_PhosphorusWipeout* AFortAthenaMutator_PhosphorusWipeout::GetDefaultObj()
{
	static class AFortAthenaMutator_PhosphorusWipeout* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortAthenaMutator_PhosphorusWipeout*>(AFortAthenaMutator_PhosphorusWipeout::StaticClass()->DefaultObject);

	return Default;
}

}


