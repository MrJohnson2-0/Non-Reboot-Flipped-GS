#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VKEditGameplay.VKEditPlayspace
// (Actor)

class UClass* AVKEditPlayspace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VKEditPlayspace");

	return Clss;
}


// VKEditPlayspace VKEditGameplay.Default__VKEditPlayspace
// (Public, ClassDefaultObject, ArchetypeObject)

class AVKEditPlayspace* AVKEditPlayspace::GetDefaultObj()
{
	static class AVKEditPlayspace* Default = nullptr;

	if (!Default)
		Default = static_cast<AVKEditPlayspace*>(AVKEditPlayspace::StaticClass()->DefaultObject);

	return Default;
}


// Function VKEditGameplay.VKEditPlayspace.OnClientActivatedContent
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FUniqueNetIdRepl            ClientNetId                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AVKEditPlayspace::OnClientActivatedContent(struct FUniqueNetIdRepl& ClientNetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VKEditPlayspace", "OnClientActivatedContent");

	Params::AVKEditPlayspace_OnClientActivatedContent_Params Parms{};

	Parms.ClientNetId = ClientNetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


