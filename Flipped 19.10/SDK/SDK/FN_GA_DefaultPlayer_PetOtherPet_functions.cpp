#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C
// (None)

class UClass* UGA_DefaultPlayer_PetOtherPet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_DefaultPlayer_PetOtherPet_C");

	return Clss;
}


// GA_DefaultPlayer_PetOtherPet_C GA_DefaultPlayer_PetOtherPet.Default__GA_DefaultPlayer_PetOtherPet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_DefaultPlayer_PetOtherPet_C* UGA_DefaultPlayer_PetOtherPet_C::GetDefaultObj()
{
	static class UGA_DefaultPlayer_PetOtherPet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_DefaultPlayer_PetOtherPet_C*>(UGA_DefaultPlayer_PetOtherPet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C.OnCancelled_FB7AFE5D4FF547CAEB1ECA8264EE1330
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_PetOtherPet_C::OnCancelled_FB7AFE5D4FF547CAEB1ECA8264EE1330()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DefaultPlayer_PetOtherPet_C", "OnCancelled_FB7AFE5D4FF547CAEB1ECA8264EE1330");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C.OnInterrupted_FB7AFE5D4FF547CAEB1ECA8264EE1330
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_PetOtherPet_C::OnInterrupted_FB7AFE5D4FF547CAEB1ECA8264EE1330()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DefaultPlayer_PetOtherPet_C", "OnInterrupted_FB7AFE5D4FF547CAEB1ECA8264EE1330");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C.OnBlendOut_FB7AFE5D4FF547CAEB1ECA8264EE1330
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_PetOtherPet_C::OnBlendOut_FB7AFE5D4FF547CAEB1ECA8264EE1330()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DefaultPlayer_PetOtherPet_C", "OnBlendOut_FB7AFE5D4FF547CAEB1ECA8264EE1330");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C.OnCompleted_FB7AFE5D4FF547CAEB1ECA8264EE1330
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_PetOtherPet_C::OnCompleted_FB7AFE5D4FF547CAEB1ECA8264EE1330()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DefaultPlayer_PetOtherPet_C", "OnCompleted_FB7AFE5D4FF547CAEB1ECA8264EE1330");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_PetOtherPet_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DefaultPlayer_PetOtherPet_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C.ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DefaultPlayer_PetOtherPet_C::ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DefaultPlayer_PetOtherPet_C", "ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet");

	Params::UGA_DefaultPlayer_PetOtherPet_C_ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


