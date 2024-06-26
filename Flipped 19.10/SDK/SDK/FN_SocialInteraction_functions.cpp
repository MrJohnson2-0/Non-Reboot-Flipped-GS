#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SocialInteraction.SocialInteraction_C
// (None)

class UClass* USocialInteraction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialInteraction_C");

	return Clss;
}


// SocialInteraction_C SocialInteraction.Default__SocialInteraction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USocialInteraction_C* USocialInteraction_C::GetDefaultObj()
{
	static class USocialInteraction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialInteraction_C*>(USocialInteraction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SocialInteraction.SocialInteraction_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialInteraction_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialInteraction_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SocialInteraction.SocialInteraction_C.OnInteractionSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialInteraction_C::OnInteractionSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialInteraction_C", "OnInteractionSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SocialInteraction.SocialInteraction_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialInteraction_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialInteraction_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SocialInteraction.SocialInteraction_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USocialInteraction_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialInteraction_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SocialInteraction.SocialInteraction_C.ExecuteUbergraph_SocialInteraction
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlatformOnlyFriend_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetInteractionName_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialInteraction_C::ExecuteUbergraph_SocialInteraction(int32 EntryPoint, bool Temp_bool_Variable, float CallFunc_GetEndTime_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsPlatformOnlyFriend_ReturnValue, class FName CallFunc_GetInteractionName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialInteraction_C", "ExecuteUbergraph_SocialInteraction");

	Params::USocialInteraction_C_ExecuteUbergraph_SocialInteraction_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_IsPlatformOnlyFriend_ReturnValue = CallFunc_IsPlatformOnlyFriend_ReturnValue;
	Parms.CallFunc_GetInteractionName_ReturnValue = CallFunc_GetInteractionName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


