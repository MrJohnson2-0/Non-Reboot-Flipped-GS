#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass XPComponent_Powerup_LevelUp_Kills.XPComponent_Powerup_LevelUp_Kills_C
// (None)

class UClass* UXPComponent_Powerup_LevelUp_Kills_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("XPComponent_Powerup_LevelUp_Kills_C");

	return Clss;
}


// XPComponent_Powerup_LevelUp_Kills_C XPComponent_Powerup_LevelUp_Kills.Default__XPComponent_Powerup_LevelUp_Kills_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UXPComponent_Powerup_LevelUp_Kills_C* UXPComponent_Powerup_LevelUp_Kills_C::GetDefaultObj()
{
	static class UXPComponent_Powerup_LevelUp_Kills_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UXPComponent_Powerup_LevelUp_Kills_C*>(UXPComponent_Powerup_LevelUp_Kills_C::StaticClass()->DefaultObject);

	return Default;
}


// Function XPComponent_Powerup_LevelUp_Kills.XPComponent_Powerup_LevelUp_Kills_C.EventReceived_05AD7EE7427E2756D60D2A91EB87AA4E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UXPComponent_Powerup_LevelUp_Kills_C::EventReceived_05AD7EE7427E2756D60D2A91EB87AA4E(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XPComponent_Powerup_LevelUp_Kills_C", "EventReceived_05AD7EE7427E2756D60D2A91EB87AA4E");

	Params::UXPComponent_Powerup_LevelUp_Kills_C_EventReceived_05AD7EE7427E2756D60D2A91EB87AA4E_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XPComponent_Powerup_LevelUp_Kills.XPComponent_Powerup_LevelUp_Kills_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UXPComponent_Powerup_LevelUp_Kills_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XPComponent_Powerup_LevelUp_Kills_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function XPComponent_Powerup_LevelUp_Kills.XPComponent_Powerup_LevelUp_Kills_C.ExecuteUbergraph_XPComponent_Powerup_LevelUp_Kills
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGameplayEventData          K2Node_CustomEvent_Payload                                       (None)
// struct FGameplayEventData          Temp_struct_Variable                                             (None)
// class AFortPawn*                   CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 CallFunc_GetWeaponActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldMultiItem*         CallFunc_GetOwningMultiItem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityAsync_WaitGameplayEvent*CallFunc_WaitGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue             (None)
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetOwningPawn_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXPComponent_Powerup_LevelUp_Kills_C::ExecuteUbergraph_XPComponent_Powerup_LevelUp_Kills(int32 EntryPoint, float CallFunc_GetValueAtLevel_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable, class AFortPawn* CallFunc_GetOwningPawn_ReturnValue, class AFortWeapon* CallFunc_GetWeaponActor_ReturnValue, class UFortWorldMultiItem* CallFunc_GetOwningMultiItem_ReturnValue, class UAbilityAsync_WaitGameplayEvent* CallFunc_WaitGameplayEventToActor_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPawn* CallFunc_GetOwningPawn_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XPComponent_Powerup_LevelUp_Kills_C", "ExecuteUbergraph_XPComponent_Powerup_LevelUp_Kills");

	Params::UXPComponent_Powerup_LevelUp_Kills_C_ExecuteUbergraph_XPComponent_Powerup_LevelUp_Kills_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Payload = K2Node_CustomEvent_Payload;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.CallFunc_GetWeaponActor_ReturnValue = CallFunc_GetWeaponActor_ReturnValue;
	Parms.CallFunc_GetOwningMultiItem_ReturnValue = CallFunc_GetOwningMultiItem_ReturnValue;
	Parms.CallFunc_WaitGameplayEventToActor_ReturnValue = CallFunc_WaitGameplayEventToActor_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPawn_ReturnValue_1 = CallFunc_GetOwningPawn_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


