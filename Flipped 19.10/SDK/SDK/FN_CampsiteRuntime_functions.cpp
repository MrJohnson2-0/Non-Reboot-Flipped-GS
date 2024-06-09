#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CampsiteRuntime.AbandonedCampsiteManager
// (Actor)

class UClass* AAbandonedCampsiteManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbandonedCampsiteManager");

	return Clss;
}


// AbandonedCampsiteManager CampsiteRuntime.Default__AbandonedCampsiteManager
// (Public, ClassDefaultObject, ArchetypeObject)

class AAbandonedCampsiteManager* AAbandonedCampsiteManager::GetDefaultObj()
{
	static class AAbandonedCampsiteManager* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbandonedCampsiteManager*>(AAbandonedCampsiteManager::StaticClass()->DefaultObject);

	return Default;
}


// Function CampsiteRuntime.AbandonedCampsiteManager.OnGamePhaseStepChanged
// (Final, Native, Protected, HasOutParams)
// Parameters:
// TScriptInterface<class IFortSafeZoneInterface>SafeZoneInterface                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAthenaGamePhaseStep    GamePhaseStep                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAbandonedCampsiteManager::OnGamePhaseStepChanged(TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbandonedCampsiteManager", "OnGamePhaseStepChanged");

	Params::AAbandonedCampsiteManager_OnGamePhaseStepChanged_Params Parms{};

	Parms.SafeZoneInterface = SafeZoneInterface;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CampsiteRuntime.AbandonedCampsitePlacedSpawner
// (Actor)

class UClass* AAbandonedCampsitePlacedSpawner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbandonedCampsitePlacedSpawner");

	return Clss;
}


// AbandonedCampsitePlacedSpawner CampsiteRuntime.Default__AbandonedCampsitePlacedSpawner
// (Public, ClassDefaultObject, ArchetypeObject)

class AAbandonedCampsitePlacedSpawner* AAbandonedCampsitePlacedSpawner::GetDefaultObj()
{
	static class AAbandonedCampsitePlacedSpawner* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbandonedCampsitePlacedSpawner*>(AAbandonedCampsitePlacedSpawner::StaticClass()->DefaultObject);

	return Default;
}


// Function CampsiteRuntime.AbandonedCampsitePlacedSpawner.SpawnCampsite
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void AAbandonedCampsitePlacedSpawner::SpawnCampsite()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbandonedCampsitePlacedSpawner", "SpawnCampsite");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CampsiteRuntime.AbandonedTentSpawnPointComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UAbandonedTentSpawnPointComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbandonedTentSpawnPointComponent");

	return Clss;
}


// AbandonedTentSpawnPointComponent CampsiteRuntime.Default__AbandonedTentSpawnPointComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAbandonedTentSpawnPointComponent* UAbandonedTentSpawnPointComponent::GetDefaultObj()
{
	static class UAbandonedTentSpawnPointComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbandonedTentSpawnPointComponent*>(UAbandonedTentSpawnPointComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class CampsiteRuntime.CampsiteAnalytics
// (None)

class UClass* UCampsiteAnalytics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CampsiteAnalytics");

	return Clss;
}


// CampsiteAnalytics CampsiteRuntime.Default__CampsiteAnalytics
// (Public, ClassDefaultObject, ArchetypeObject)

class UCampsiteAnalytics* UCampsiteAnalytics::GetDefaultObj()
{
	static class UCampsiteAnalytics* Default = nullptr;

	if (!Default)
		Default = static_cast<UCampsiteAnalytics*>(UCampsiteAnalytics::StaticClass()->DefaultObject);

	return Default;
}


// Class CampsiteRuntime.CampsiteConversationComponent
// (None)

class UClass* UCampsiteConversationComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CampsiteConversationComponent");

	return Clss;
}


// CampsiteConversationComponent CampsiteRuntime.Default__CampsiteConversationComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCampsiteConversationComponent* UCampsiteConversationComponent::GetDefaultObj()
{
	static class UCampsiteConversationComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCampsiteConversationComponent*>(UCampsiteConversationComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CampsiteRuntime.CampsiteConversationComponent.StartConversation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerController*       InstigatingController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCampsiteConversationComponent::StartConversation(class AFortPlayerController* InstigatingController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CampsiteConversationComponent", "StartConversation");

	Params::UCampsiteConversationComponent_StartConversation_Params Parms{};

	Parms.InstigatingController = InstigatingController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CampsiteRuntime.CampsiteFunctionLibraryNative
// (None)

class UClass* UCampsiteFunctionLibraryNative::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CampsiteFunctionLibraryNative");

	return Clss;
}


// CampsiteFunctionLibraryNative CampsiteRuntime.Default__CampsiteFunctionLibraryNative
// (Public, ClassDefaultObject, ArchetypeObject)

class UCampsiteFunctionLibraryNative* UCampsiteFunctionLibraryNative::GetDefaultObj()
{
	static class UCampsiteFunctionLibraryNative* Default = nullptr;

	if (!Default)
		Default = static_cast<UCampsiteFunctionLibraryNative*>(UCampsiteFunctionLibraryNative::StaticClass()->DefaultObject);

	return Default;
}


// Function CampsiteRuntime.CampsiteFunctionLibraryNative.IsItemEntryAvailable
// (Final, BlueprintAuthorityOnly, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortItemEntry              FortItem                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCampsiteFunctionLibraryNative::IsItemEntryAvailable(class UObject* WorldContextObject, struct FFortItemEntry& FortItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CampsiteFunctionLibraryNative", "IsItemEntryAvailable");

	Params::UCampsiteFunctionLibraryNative_IsItemEntryAvailable_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.FortItem = FortItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CampsiteRuntime.CampsiteFunctionLibraryNative.IsItemDefinitionAvailable
// (Final, BlueprintAuthorityOnly, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItemDefinition*         FortItem                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCampsiteFunctionLibraryNative::IsItemDefinitionAvailable(class UObject* WorldContextObject, class UFortItemDefinition* FortItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CampsiteFunctionLibraryNative", "IsItemDefinitionAvailable");

	Params::UCampsiteFunctionLibraryNative_IsItemDefinitionAvailable_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.FortItem = FortItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CampsiteRuntime.CampsiteFunctionLibraryNative.IsItemAvailable
// (Final, BlueprintAuthorityOnly, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItem*                   FortItem                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCampsiteFunctionLibraryNative::IsItemAvailable(class UObject* WorldContextObject, class UFortItem* FortItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CampsiteFunctionLibraryNative", "IsItemAvailable");

	Params::UCampsiteFunctionLibraryNative_IsItemAvailable_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.FortItem = FortItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CampsiteRuntime.CampsiteImprovementComponent
// (None)

class UClass* UCampsiteImprovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CampsiteImprovementComponent");

	return Clss;
}


// CampsiteImprovementComponent CampsiteRuntime.Default__CampsiteImprovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCampsiteImprovementComponent* UCampsiteImprovementComponent::GetDefaultObj()
{
	static class UCampsiteImprovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCampsiteImprovementComponent*>(UCampsiteImprovementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CampsiteRuntime.CampsiteImprovementComponent.SetImprovementOwnerSquadId
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int32                              SquadId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCampsiteImprovementComponent::SetImprovementOwnerSquadId(int32 SquadId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CampsiteImprovementComponent", "SetImprovementOwnerSquadId");

	Params::UCampsiteImprovementComponent_SetImprovementOwnerSquadId_Params Parms{};

	Parms.SquadId = SquadId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CampsiteRuntime.CampsiteImprovementComponent.RemoveIndicator
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UCampsiteImprovementComponent::RemoveIndicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CampsiteImprovementComponent", "RemoveIndicator");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CampsiteRuntime.CampsiteImprovementComponent.OnRep_ImprovementOwnerSquadId
// (Final, Native, Protected)
// Parameters:

void UCampsiteImprovementComponent::OnRep_ImprovementOwnerSquadId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CampsiteImprovementComponent", "OnRep_ImprovementOwnerSquadId");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CampsiteRuntime.CampsiteImprovementComponent.CreateIndicator
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UCampsiteImprovementComponent::CreateIndicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CampsiteImprovementComponent", "CreateIndicator");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CampsiteRuntime.FortControllerComponent_CampsiteAccountItem
// (None)

class UClass* UFortControllerComponent_CampsiteAccountItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortControllerComponent_CampsiteAccountItem");

	return Clss;
}


// FortControllerComponent_CampsiteAccountItem CampsiteRuntime.Default__FortControllerComponent_CampsiteAccountItem
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortControllerComponent_CampsiteAccountItem* UFortControllerComponent_CampsiteAccountItem::GetDefaultObj()
{
	static class UFortControllerComponent_CampsiteAccountItem* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortControllerComponent_CampsiteAccountItem*>(UFortControllerComponent_CampsiteAccountItem::StaticClass()->DefaultObject);

	return Default;
}


// Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.WriteStashedItemFromEntry
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFortItemEntry              ItemEntry                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              StashedItemIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_CampsiteAccountItem::WriteStashedItemFromEntry(struct FFortItemEntry& ItemEntry, int32 StashedItemIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_CampsiteAccountItem", "WriteStashedItemFromEntry");

	Params::UFortControllerComponent_CampsiteAccountItem_WriteStashedItemFromEntry_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.StashedItemIndex = StashedItemIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.WriteStashedItem
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UFortWorldItem*              Item                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StashedItemIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_CampsiteAccountItem::WriteStashedItem(class UFortWorldItem* Item, int32 StashedItemIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_CampsiteAccountItem", "WriteStashedItem");

	Params::UFortControllerComponent_CampsiteAccountItem_WriteStashedItem_Params Parms{};

	Parms.Item = Item;
	Parms.StashedItemIndex = StashedItemIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.SwapStashedItem
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      SourceActor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StashedItemIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_CampsiteAccountItem::SwapStashedItem(class AActor* SourceActor, int32 StashedItemIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_CampsiteAccountItem", "SwapStashedItem");

	Params::UFortControllerComponent_CampsiteAccountItem_SwapStashedItem_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.StashedItemIndex = StashedItemIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.StashCurrentlyHeldItemAndRemoveFromInventory
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int32                              StashedItemIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_CampsiteAccountItem::StashCurrentlyHeldItemAndRemoveFromInventory(int32 StashedItemIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_CampsiteAccountItem", "StashCurrentlyHeldItemAndRemoveFromInventory");

	Params::UFortControllerComponent_CampsiteAccountItem_StashCurrentlyHeldItemAndRemoveFromInventory_Params Parms{};

	Parms.StashedItemIndex = StashedItemIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.OnAthenaProfileInitialized
// (Final, Native, Private)
// Parameters:

void UFortControllerComponent_CampsiteAccountItem::OnAthenaProfileInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_CampsiteAccountItem", "OnAthenaProfileInitialized");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.HasCurrentlyStashedItem
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              StashedItemIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_CampsiteAccountItem::HasCurrentlyStashedItem(int32 StashedItemIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_CampsiteAccountItem", "HasCurrentlyStashedItem");

	Params::UFortControllerComponent_CampsiteAccountItem_HasCurrentlyStashedItem_Params Parms{};

	Parms.StashedItemIndex = StashedItemIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.GetCurrentlyStashedItemAsItemEntry
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              StashedItemIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortItemEntry              ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FFortItemEntry UFortControllerComponent_CampsiteAccountItem::GetCurrentlyStashedItemAsItemEntry(int32 StashedItemIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_CampsiteAccountItem", "GetCurrentlyStashedItemAsItemEntry");

	Params::UFortControllerComponent_CampsiteAccountItem_GetCurrentlyStashedItemAsItemEntry_Params Parms{};

	Parms.StashedItemIndex = StashedItemIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.ClearStoredCampsiteLocations
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortControllerComponent_CampsiteAccountItem::ClearStoredCampsiteLocations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_CampsiteAccountItem", "ClearStoredCampsiteLocations");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.ClearStashedItemAndGiveToPlayer
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      SourceActor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StashedItemIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_CampsiteAccountItem::ClearStashedItemAndGiveToPlayer(class AActor* SourceActor, int32 StashedItemIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_CampsiteAccountItem", "ClearStashedItemAndGiveToPlayer");

	Params::UFortControllerComponent_CampsiteAccountItem_ClearStashedItemAndGiveToPlayer_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.StashedItemIndex = StashedItemIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.ClearStashedItem
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int32                              StashedItemIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_CampsiteAccountItem::ClearStashedItem(int32 StashedItemIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_CampsiteAccountItem", "ClearStashedItem");

	Params::UFortControllerComponent_CampsiteAccountItem_ClearStashedItem_Params Parms{};

	Parms.StashedItemIndex = StashedItemIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CampsiteRuntime.FortControllerComponent_CampsiteAccountItem.CacheAccountItemData
// (Final, Native, Private)
// Parameters:

void UFortControllerComponent_CampsiteAccountItem::CacheAccountItemData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_CampsiteAccountItem", "CacheAccountItemData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CampsiteRuntime.FortGameStateComponent_Campsite
// (None)

class UClass* UFortGameStateComponent_Campsite::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameStateComponent_Campsite");

	return Clss;
}


// FortGameStateComponent_Campsite CampsiteRuntime.Default__FortGameStateComponent_Campsite
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameStateComponent_Campsite* UFortGameStateComponent_Campsite::GetDefaultObj()
{
	static class UFortGameStateComponent_Campsite* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameStateComponent_Campsite*>(UFortGameStateComponent_Campsite::StaticClass()->DefaultObject);

	return Default;
}


// Function CampsiteRuntime.FortGameStateComponent_Campsite.RegisterPreplacedCampsite
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AAbandonedCampsitePlacedSpawner*PreplacedCampsiteSpawnPoint                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameStateComponent_Campsite::RegisterPreplacedCampsite(class AAbandonedCampsitePlacedSpawner* PreplacedCampsiteSpawnPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameStateComponent_Campsite", "RegisterPreplacedCampsite");

	Params::UFortGameStateComponent_Campsite_RegisterPreplacedCampsite_Params Parms{};

	Parms.PreplacedCampsiteSpawnPoint = PreplacedCampsiteSpawnPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CampsiteRuntime.FortGameStateComponent_Campsite.RegisterCampsiteLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     NewCampsiteLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameStateComponent_Campsite::RegisterCampsiteLocation(struct FVector& NewCampsiteLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameStateComponent_Campsite", "RegisterCampsiteLocation");

	Params::UFortGameStateComponent_Campsite_RegisterCampsiteLocation_Params Parms{};

	Parms.NewCampsiteLocation = NewCampsiteLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CampsiteRuntime.FortGameStateComponent_Campsite.ClaimUnusedBotName
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      OutBotName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameStateComponent_Campsite::ClaimUnusedBotName(class FString* OutBotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameStateComponent_Campsite", "ClaimUnusedBotName");

	Params::UFortGameStateComponent_Campsite_ClaimUnusedBotName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutBotName != nullptr)
		*OutBotName = std::move(Parms.OutBotName);

}


// Class CampsiteRuntime.FortQueryTest_AbandonedCampsite
// (None)

class UClass* UFortQueryTest_AbandonedCampsite::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_AbandonedCampsite");

	return Clss;
}


// FortQueryTest_AbandonedCampsite CampsiteRuntime.Default__FortQueryTest_AbandonedCampsite
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_AbandonedCampsite* UFortQueryTest_AbandonedCampsite::GetDefaultObj()
{
	static class UFortQueryTest_AbandonedCampsite* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_AbandonedCampsite*>(UFortQueryTest_AbandonedCampsite::StaticClass()->DefaultObject);

	return Default;
}

}


