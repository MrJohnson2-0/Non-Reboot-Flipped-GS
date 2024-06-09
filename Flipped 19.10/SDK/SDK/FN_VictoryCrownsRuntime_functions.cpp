#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns
// (None)

class UClass* UFortControllerComponent_VictoryCrowns::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortControllerComponent_VictoryCrowns");

	return Clss;
}


// FortControllerComponent_VictoryCrowns VictoryCrownsRuntime.Default__FortControllerComponent_VictoryCrowns
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortControllerComponent_VictoryCrowns* UFortControllerComponent_VictoryCrowns::GetDefaultObj()
{
	static class UFortControllerComponent_VictoryCrowns* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortControllerComponent_VictoryCrowns*>(UFortControllerComponent_VictoryCrowns::StaticClass()->DefaultObject);

	return Default;
}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_WonRoyalRoyale
// (Final, Native, Private)
// Parameters:

void UFortControllerComponent_VictoryCrowns::OnRep_WonRoyalRoyale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "OnRep_WonRoyalRoyale");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_WonCrownInMatch
// (Final, Native, Private)
// Parameters:

void UFortControllerComponent_VictoryCrowns::OnRep_WonCrownInMatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "OnRep_WonCrownInMatch");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnAthenaProfileInitialized
// (Final, Native, Private)
// Parameters:

void UFortControllerComponent_VictoryCrowns::OnAthenaProfileInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "OnAthenaProfileInitialized");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.IsCrownInPlayerInventory
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_VictoryCrowns::IsCrownInPlayerInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "IsCrownInPlayerInventory");

	Params::UFortControllerComponent_VictoryCrowns_IsCrownInPlayerInventory_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HasWonRoyalRoyale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_VictoryCrowns::HasWonRoyalRoyale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "HasWonRoyalRoyale");

	Params::UFortControllerComponent_VictoryCrowns_HasWonRoyalRoyale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HasWonCrownInMatch
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_VictoryCrowns::HasWonCrownInMatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "HasWonCrownInMatch");

	Params::UFortControllerComponent_VictoryCrowns_HasWonCrownInMatch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandlePawnChanged
// (Final, Native, Protected)
// Parameters:
// class APawn*                       OldPawn                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       NewPawn                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_VictoryCrowns::HandlePawnChanged(class APawn* OldPawn, class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "HandlePawnChanged");

	Params::UFortControllerComponent_VictoryCrowns_HandlePawnChanged_Params Parms{};

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandleEnterAircraft
// (Final, Native, Protected)
// Parameters:

void UFortControllerComponent_VictoryCrowns::HandleEnterAircraft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "HandleEnterAircraft");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetVictoryCrownsBestowedCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortControllerComponent_VictoryCrowns::GetVictoryCrownsBestowedCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "GetVictoryCrownsBestowedCount");

	Params::UFortControllerComponent_VictoryCrowns_GetVictoryCrownsBestowedCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetRoyalRoyaleAchievedCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortControllerComponent_VictoryCrowns::GetRoyalRoyaleAchievedCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "GetRoyalRoyaleAchievedCount");

	Params::UFortControllerComponent_VictoryCrowns_GetRoyalRoyaleAchievedCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetCrownInPlayerInventory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortWorldItem*              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortWorldItem* UFortControllerComponent_VictoryCrowns::GetCrownInPlayerInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "GetCrownInPlayerInventory");

	Params::UFortControllerComponent_VictoryCrowns_GetCrownInPlayerInventory_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.DebugForceSetRoyalRoyaleAchievedCount
// (Final, Exec, Native, Public)
// Parameters:
// int32                              NewRoyalRoyaleCount                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_VictoryCrowns::DebugForceSetRoyalRoyaleAchievedCount(int32 NewRoyalRoyaleCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "DebugForceSetRoyalRoyaleAchievedCount");

	Params::UFortControllerComponent_VictoryCrowns_DebugForceSetRoyalRoyaleAchievedCount_Params Parms{};

	Parms.NewRoyalRoyaleCount = NewRoyalRoyaleCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.CacheAccountItemData
// (Final, Native, Private)
// Parameters:

void UFortControllerComponent_VictoryCrowns::CacheAccountItemData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "CacheAccountItemData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthoritySquadHasSeenCrownItem
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UFortItem*                   CrownItem                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDropped                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_VictoryCrowns::AuthoritySquadHasSeenCrownItem(class UFortItem* CrownItem, bool bDropped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "AuthoritySquadHasSeenCrownItem");

	Params::UFortControllerComponent_VictoryCrowns_AuthoritySquadHasSeenCrownItem_Params Parms{};

	Parms.CrownItem = CrownItem;
	Parms.bDropped = bDropped;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasSquadHeldCrownItem
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UFortItem*                   CrownItem                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_VictoryCrowns::AuthorityHasSquadHeldCrownItem(class UFortItem* CrownItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "AuthorityHasSquadHeldCrownItem");

	Params::UFortControllerComponent_VictoryCrowns_AuthorityHasSquadHeldCrownItem_Params Parms{};

	Parms.CrownItem = CrownItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasSquadDroppedCrownItem
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UFortItem*                   CrownItem                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_VictoryCrowns::AuthorityHasSquadDroppedCrownItem(class UFortItem* CrownItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "AuthorityHasSquadDroppedCrownItem");

	Params::UFortControllerComponent_VictoryCrowns_AuthorityHasSquadDroppedCrownItem_Params Parms{};

	Parms.CrownItem = CrownItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasHeldCrownItem
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UFortItem*                   CrownItem                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_VictoryCrowns::AuthorityHasHeldCrownItem(class UFortItem* CrownItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "AuthorityHasHeldCrownItem");

	Params::UFortControllerComponent_VictoryCrowns_AuthorityHasHeldCrownItem_Params Parms{};

	Parms.CrownItem = CrownItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasDroppedCrownItem
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UFortItem*                   CrownItem                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_VictoryCrowns::AuthorityHasDroppedCrownItem(class UFortItem* CrownItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_VictoryCrowns", "AuthorityHasDroppedCrownItem");

	Params::UFortControllerComponent_VictoryCrowns_AuthorityHasDroppedCrownItem_Params Parms{};

	Parms.CrownItem = CrownItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VictoryCrownsRuntime.FortCosmeticStatObject_TotalRoyalRoyales
// (None)

class UClass* UFortCosmeticStatObject_TotalRoyalRoyales::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCosmeticStatObject_TotalRoyalRoyales");

	return Clss;
}


// FortCosmeticStatObject_TotalRoyalRoyales VictoryCrownsRuntime.Default__FortCosmeticStatObject_TotalRoyalRoyales
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCosmeticStatObject_TotalRoyalRoyales* UFortCosmeticStatObject_TotalRoyalRoyales::GetDefaultObj()
{
	static class UFortCosmeticStatObject_TotalRoyalRoyales* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCosmeticStatObject_TotalRoyalRoyales*>(UFortCosmeticStatObject_TotalRoyalRoyales::StaticClass()->DefaultObject);

	return Default;
}


// Class VictoryCrownsRuntime.FortCosmeticStatObject_TotalVictoryCrowns
// (None)

class UClass* UFortCosmeticStatObject_TotalVictoryCrowns::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCosmeticStatObject_TotalVictoryCrowns");

	return Clss;
}


// FortCosmeticStatObject_TotalVictoryCrowns VictoryCrownsRuntime.Default__FortCosmeticStatObject_TotalVictoryCrowns
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCosmeticStatObject_TotalVictoryCrowns* UFortCosmeticStatObject_TotalVictoryCrowns::GetDefaultObj()
{
	static class UFortCosmeticStatObject_TotalVictoryCrowns* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCosmeticStatObject_TotalVictoryCrowns*>(UFortCosmeticStatObject_TotalVictoryCrowns::StaticClass()->DefaultObject);

	return Default;
}


// Class VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns
// (None)

class UClass* UFortGameStateComponent_VictoryCrowns::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameStateComponent_VictoryCrowns");

	return Clss;
}


// FortGameStateComponent_VictoryCrowns VictoryCrownsRuntime.Default__FortGameStateComponent_VictoryCrowns
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameStateComponent_VictoryCrowns* UFortGameStateComponent_VictoryCrowns::GetDefaultObj()
{
	static class UFortGameStateComponent_VictoryCrowns* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameStateComponent_VictoryCrowns*>(UFortGameStateComponent_VictoryCrowns::StaticClass()->DefaultObject);

	return Default;
}


// Function VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.OnRep_CrownBearerPlayerStates
// (Final, Native, Protected)
// Parameters:

void UFortGameStateComponent_VictoryCrowns::OnRep_CrownBearerPlayerStates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameStateComponent_VictoryCrowns", "OnRep_CrownBearerPlayerStates");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.IsCrownBearer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortPlayerStateAthena*      FortPSA                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortGameStateComponent_VictoryCrowns::IsCrownBearer(class AFortPlayerStateAthena* FortPSA)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameStateComponent_VictoryCrowns", "IsCrownBearer");

	Params::UFortGameStateComponent_VictoryCrowns_IsCrownBearer_Params Parms{};

	Parms.FortPSA = FortPSA;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.HandleCrownStatusChanged
// (Final, Native, Protected)
// Parameters:
// class AFortPlayerControllerAthena* FortPlayerControllerAthena                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItem*                   CrownItem                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameStateComponent_VictoryCrowns::HandleCrownStatusChanged(class AFortPlayerControllerAthena* FortPlayerControllerAthena, class UFortItem* CrownItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameStateComponent_VictoryCrowns", "HandleCrownStatusChanged");

	Params::UFortGameStateComponent_VictoryCrowns_HandleCrownStatusChanged_Params Parms{};

	Parms.FortPlayerControllerAthena = FortPlayerControllerAthena;
	Parms.CrownItem = CrownItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.ClientKillFeedMessage
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class AFortPlayerStateAthena*      FortPSA                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAdded                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameStateComponent_VictoryCrowns::ClientKillFeedMessage(class AFortPlayerStateAthena* FortPSA, bool bAdded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameStateComponent_VictoryCrowns", "ClientKillFeedMessage");

	Params::UFortGameStateComponent_VictoryCrowns_ClientKillFeedMessage_Params Parms{};

	Parms.FortPSA = FortPSA;
	Parms.bAdded = bAdded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns
// (None)

class UClass* UFortPlayerStateComponent_VictoryCrowns::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerStateComponent_VictoryCrowns");

	return Clss;
}


// FortPlayerStateComponent_VictoryCrowns VictoryCrownsRuntime.Default__FortPlayerStateComponent_VictoryCrowns
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerStateComponent_VictoryCrowns* UFortPlayerStateComponent_VictoryCrowns::GetDefaultObj()
{
	static class UFortPlayerStateComponent_VictoryCrowns* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerStateComponent_VictoryCrowns*>(UFortPlayerStateComponent_VictoryCrowns::StaticClass()->DefaultObject);

	return Default;
}


// Function VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns.GetWonRoyalRoyale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPlayerStateComponent_VictoryCrowns::GetWonRoyalRoyale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerStateComponent_VictoryCrowns", "GetWonRoyalRoyale");

	Params::UFortPlayerStateComponent_VictoryCrowns_GetWonRoyalRoyale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


