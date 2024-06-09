#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C
// (Actor, Pawn)

class UClass* ANPC_Pawn_Wildlife_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPC_Pawn_Wildlife_Parent_C");

	return Clss;
}


// NPC_Pawn_Wildlife_Parent_C NPC_Pawn_Wildlife_Parent.Default__NPC_Pawn_Wildlife_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANPC_Pawn_Wildlife_Parent_C* ANPC_Pawn_Wildlife_Parent_C::GetDefaultObj()
{
	static class ANPC_Pawn_Wildlife_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANPC_Pawn_Wildlife_Parent_C*>(ANPC_Pawn_Wildlife_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.CanBeInteractedWithWhenTamed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bCanInteract                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Wildlife_Parent_C::CanBeInteractedWithWhenTamed(bool* bCanInteract, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded, float CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "CanBeInteractedWithWhenTamed");

	Params::ANPC_Pawn_Wildlife_Parent_C_CanBeInteractedWithWhenTamed_Params Parms{};

	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bCanInteract != nullptr)
		*bCanInteract = Parms.bCanInteract;

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC PickupGrabbed_Destroyed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorGrabbed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Wildlife_Parent_C::NPC_PickupGrabbed_Destroyed(class AActor* ActorGrabbed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "NPC PickupGrabbed_Destroyed");

	Params::ANPC_Pawn_Wildlife_Parent_C_NPC_PickupGrabbed_Destroyed_Params Parms{};

	Parms.ActorGrabbed = ActorGrabbed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.SetTamingEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableTaming                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_CanBeInteractedWith_CanInteract                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawnComponent_Convert*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Wildlife_Parent_C::SetTamingEnabled(bool EnableTaming, bool CallFunc_NPC_CanBeInteractedWith_CanInteract, class UFortPawnComponent_Convert* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "SetTamingEnabled");

	Params::ANPC_Pawn_Wildlife_Parent_C_SetTamingEnabled_Params Parms{};

	Parms.EnableTaming = EnableTaming;
	Parms.CallFunc_NPC_CanBeInteractedWith_CanInteract = CallFunc_NPC_CanBeInteractedWith_CanInteract;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC CanBeInteractedWith
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanInteract                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_CanBeInteractedWith_CanInteract                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Wildlife_Parent_C::NPC_CanBeInteractedWith(bool* CanInteract, bool CallFunc_NPC_CanBeInteractedWith_CanInteract, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "NPC CanBeInteractedWith");

	Params::ANPC_Pawn_Wildlife_Parent_C_NPC_CanBeInteractedWith_Params Parms{};

	Parms.CallFunc_NPC_CanBeInteractedWith_CanInteract = CallFunc_NPC_CanBeInteractedWith_CanInteract;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanInteract != nullptr)
		*CanInteract = Parms.CanInteract;

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.AttachAndApplyVocalFX
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSoundLibraryPlaySoundResultSoundLibraryResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Wildlife_Parent_C::AttachAndApplyVocalFX(struct FSoundLibraryPlaySoundResult& SoundLibraryResult, int32 Temp_int_Array_Index_Variable, class UAudioComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "AttachAndApplyVocalFX");

	Params::ANPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX_Params Parms{};

	Parms.SoundLibraryResult = SoundLibraryResult;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.Play Water Splash at Water Surface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*         Water_Body                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enter_Water                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Wildlife_Parent_C::Play_Water_Splash_at_Water_Surface(class AFortWaterBodyActor* Water_Body, bool Enter_Water)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "Play Water Splash at Water Surface");

	Params::ANPC_Pawn_Wildlife_Parent_C_Play_Water_Splash_at_Water_Surface_Params Parms{};

	Parms.Water_Body = Water_Body;
	Parms.Enter_Water = Enter_Water;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.IsValidAutoFireTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Attacker                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetActorTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortTeamAffiliation    CallFunc_GetTeamAffiliationBetweenTeams_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ANPC_Pawn_Wildlife_Parent_C::IsValidAutoFireTarget(class AActor* Attacker, uint8 CallFunc_GetActorTeam_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliationBetweenTeams_ReturnValue, float CallFunc_GetHealth_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "IsValidAutoFireTarget");

	Params::ANPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget_Params Parms{};

	Parms.Attacker = Attacker;
	Parms.CallFunc_GetActorTeam_ReturnValue = CallFunc_GetActorTeam_ReturnValue;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_GetTeamAffiliationBetweenTeams_ReturnValue = CallFunc_GetTeamAffiliationBetweenTeams_ReturnValue;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.Play Sound Lib
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Event_Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FSimpleSoundLibraryContextSettingsK2Node_MakeStruct_SimpleSoundLibraryContextSettings              (NoDestructor)
// class USimpleSoundLibraryContext*  CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundLibrarySubsystem*      CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSoundLibraryPlaySoundResultCallFunc_PlaySound_OutResults                                    (ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Wildlife_Parent_C::Play_Sound_Lib(const struct FGameplayTag& Event_Name, const struct FSimpleSoundLibraryContextSettings& K2Node_MakeStruct_SimpleSoundLibraryContextSettings, class USimpleSoundLibraryContext* CallFunc_SpawnObject_ReturnValue, class USoundLibrarySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, const struct FSoundLibraryPlaySoundResult& CallFunc_PlaySound_OutResults, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "Play Sound Lib");

	Params::ANPC_Pawn_Wildlife_Parent_C_Play_Sound_Lib_Params Parms{};

	Parms.Event_Name = Event_Name;
	Parms.K2Node_MakeStruct_SimpleSoundLibraryContextSettings = K2Node_MakeStruct_SimpleSoundLibraryContextSettings;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_PlaySound_OutResults = CallFunc_PlaySound_OutResults;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.UpdateTamingIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFirstLocalFortPlayerController_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetActorTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Wildlife_Parent_C::UpdateTamingIndicator(bool CallFunc_HasAuthority_ReturnValue, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "UpdateTamingIndicator");

	Params::ANPC_Pawn_Wildlife_Parent_C_UpdateTamingIndicator_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetFirstLocalFortPlayerController_ReturnValue = CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	Parms.CallFunc_GetActorTeam_ReturnValue = CallFunc_GetActorTeam_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnRep_LeaderTeam
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANPC_Pawn_Wildlife_Parent_C::OnRep_LeaderTeam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "OnRep_LeaderTeam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ANPC_Pawn_Wildlife_Parent_C::OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06");

	Params::ANPC_Pawn_Wildlife_Parent_C_OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.LinkAnimationLayers
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANPC_Pawn_Wildlife_Parent_C::LinkAnimationLayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "LinkAnimationLayers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.AsyncLinkAnimationLayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UAnimInstance> AnimationLayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ANPC_Pawn_Wildlife_Parent_C::AsyncLinkAnimationLayer(TSoftClassPtr<class UAnimInstance> AnimationLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "AsyncLinkAnimationLayer");

	Params::ANPC_Pawn_Wildlife_Parent_C_AsyncLinkAnimationLayer_Params Parms{};

	Parms.AnimationLayer = AnimationLayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ANPC_Pawn_Wildlife_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnCustomizationsLoaded_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void ANPC_Pawn_Wildlife_Parent_C::OnCustomizationsLoaded_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "OnCustomizationsLoaded_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.On NPC PawnInteractedWith
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      AIPawn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             InteractingPlayerPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Wildlife_Parent_C::On_NPC_PawnInteractedWith(class AActor* AIPawn, class AFortPlayerPawn* InteractingPlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "On NPC PawnInteractedWith");

	Params::ANPC_Pawn_Wildlife_Parent_C_On_NPC_PawnInteractedWith_Params Parms{};

	Parms.AIPawn = AIPawn;
	Parms.InteractingPlayerPawn = InteractingPlayerPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortPawn*                   InstigatorPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Wildlife_Parent_C::BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature(class AFortPawn* InstigatorPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature");

	Params::ANPC_Pawn_Wildlife_Parent_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature_Params Parms{};

	Parms.InstigatorPawn = InstigatorPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ANPC_Pawn_Wildlife_Parent_C::BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC AlertLevelChangedServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NPC_AlertLevel     NPCAlertLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Wildlife_Parent_C::NPC_AlertLevelChangedServer(enum class Enum_NPC_AlertLevel NPCAlertLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "NPC AlertLevelChangedServer");

	Params::ANPC_Pawn_Wildlife_Parent_C_NPC_AlertLevelChangedServer_Params Parms{};

	Parms.NPCAlertLevel = NPCAlertLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ANPC_Pawn_Wildlife_Parent_C::OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "OnDeathServer");

	Params::ANPC_Pawn_Wildlife_Parent_C_OnDeathServer_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC LeaderSet
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Leader                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Wildlife_Parent_C::NPC_LeaderSet(bool Success_, class AActor* Leader)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "NPC LeaderSet");

	Params::ANPC_Pawn_Wildlife_Parent_C_NPC_LeaderSet_Params Parms{};

	Parms.Success_ = Success_;
	Parms.Leader = Leader;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FSoundLibraryPlaySoundResultResults                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class USoundLibraryContext*        Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Wildlife_Parent_C::BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature(struct FSoundLibraryPlaySoundResult& Results, class USoundLibraryContext* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature");

	Params::ANPC_Pawn_Wildlife_Parent_C_BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature_Params Parms{};

	Parms.Results = Results;
	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnBeingControlledChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bControlled                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Wildlife_Parent_C::OnBeingControlledChanged(bool bControlled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "OnBeingControlledChanged");

	Params::ANPC_Pawn_Wildlife_Parent_C_OnBeingControlledChanged_Params Parms{};

	Parms.bControlled = bControlled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.ExecuteUbergraph_NPC_Pawn_Wildlife_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBeInteractedWithWhenTamed_bCanInteract               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UAnimInstance> K2Node_CustomEvent_AnimationLayer                                (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_AIPawn                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_Event_InteractingPlayerPawn                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_ComponentBoundEvent_InstigatorPawn                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetActorTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NPC_AlertLevel     K2Node_Event_NPCAlertLevel                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Success_                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Leader                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetConsoleVariableIntValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSoundLibraryPlaySoundResultK2Node_ComponentBoundEvent_Results                               (ConstParm, ContainsInstancedReference)
// class USoundLibraryContext*        K2Node_ComponentBoundEvent_Context                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bControlled                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsAnim_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_NPC_CanBeInteractedWith_CanInteract                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_UpdateInteract_EnabledInteract                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Wildlife_Parent_C::ExecuteUbergraph_NPC_Pawn_Wildlife_Parent(int32 EntryPoint, bool CallFunc_CanBeInteractedWithWhenTamed_bCanInteract, TSoftClassPtr<class UAnimInstance> K2Node_CustomEvent_AnimationLayer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValidSoftClassReference_ReturnValue, class AActor* K2Node_Event_AIPawn, class AFortPlayerPawn* K2Node_Event_InteractingPlayerPawn, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPawn* K2Node_ComponentBoundEvent_InstigatorPawn, uint8 CallFunc_GetActorTeam_ReturnValue, enum class Enum_NPC_AlertLevel K2Node_Event_NPCAlertLevel, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_Event_Success_, class AActor* K2Node_Event_Leader, int32 CallFunc_GetConsoleVariableIntValue_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FSoundLibraryPlaySoundResult& K2Node_ComponentBoundEvent_Results, class USoundLibraryContext* K2Node_ComponentBoundEvent_Context, bool K2Node_Event_bControlled, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsAnim_Instance, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, bool CallFunc_NPC_CanBeInteractedWith_CanInteract, bool CallFunc_NPC_UpdateInteract_EnabledInteract)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "ExecuteUbergraph_NPC_Pawn_Wildlife_Parent");

	Params::ANPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CanBeInteractedWithWhenTamed_bCanInteract = CallFunc_CanBeInteractedWithWhenTamed_bCanInteract;
	Parms.K2Node_CustomEvent_AnimationLayer = K2Node_CustomEvent_AnimationLayer;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;
	Parms.K2Node_Event_AIPawn = K2Node_Event_AIPawn;
	Parms.K2Node_Event_InteractingPlayerPawn = K2Node_Event_InteractingPlayerPawn;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_InstigatorPawn = K2Node_ComponentBoundEvent_InstigatorPawn;
	Parms.CallFunc_GetActorTeam_ReturnValue = CallFunc_GetActorTeam_ReturnValue;
	Parms.K2Node_Event_NPCAlertLevel = K2Node_Event_NPCAlertLevel;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_Event_Success_ = K2Node_Event_Success_;
	Parms.K2Node_Event_Leader = K2Node_Event_Leader;
	Parms.CallFunc_GetConsoleVariableIntValue_ReturnValue = CallFunc_GetConsoleVariableIntValue_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Results = K2Node_ComponentBoundEvent_Results;
	Parms.K2Node_ComponentBoundEvent_Context = K2Node_ComponentBoundEvent_Context;
	Parms.K2Node_Event_bControlled = K2Node_Event_bControlled;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsAnim_Instance = K2Node_ClassDynamicCast_AsAnim_Instance;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_NPC_CanBeInteractedWith_CanInteract = CallFunc_NPC_CanBeInteractedWith_CanInteract;
	Parms.CallFunc_NPC_UpdateInteract_EnabledInteract = CallFunc_NPC_UpdateInteract_EnabledInteract;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnPickupGrabbed_Destroyed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANPC_Pawn_Wildlife_Parent_C* WildlifePawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ActorGrabbed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Wildlife_Parent_C::OnPickupGrabbed_Destroyed__DelegateSignature(class ANPC_Pawn_Wildlife_Parent_C* WildlifePawn, class AActor* ActorGrabbed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "OnPickupGrabbed_Destroyed__DelegateSignature");

	Params::ANPC_Pawn_Wildlife_Parent_C_OnPickupGrabbed_Destroyed__DelegateSignature_Params Parms{};

	Parms.WildlifePawn = WildlifePawn;
	Parms.ActorGrabbed = ActorGrabbed;

	UObject::ProcessEvent(Func, &Parms);

}

}


