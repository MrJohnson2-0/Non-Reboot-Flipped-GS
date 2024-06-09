#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C
// (None)

class UClass* UTeamMemberPedestal_Nameplate_AddFriendButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TeamMemberPedestal_Nameplate_AddFriendButton_C");

	return Clss;
}


// TeamMemberPedestal_Nameplate_AddFriendButton_C TeamMemberPedestal_Nameplate_AddFriendButton.Default__TeamMemberPedestal_Nameplate_AddFriendButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTeamMemberPedestal_Nameplate_AddFriendButton_C* UTeamMemberPedestal_Nameplate_AddFriendButton_C::GetDefaultObj()
{
	static class UTeamMemberPedestal_Nameplate_AddFriendButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTeamMemberPedestal_Nameplate_AddFriendButton_C*>(UTeamMemberPedestal_Nameplate_AddFriendButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTeamMemberPedestal_Nameplate_AddFriendButton_C::SetButtonText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamMemberPedestal_Nameplate_AddFriendButton_C", "SetButtonText");

	Params::UTeamMemberPedestal_Nameplate_AddFriendButton_C_SetButtonText_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTeamMemberPedestal_Nameplate_AddFriendButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamMemberPedestal_Nameplate_AddFriendButton_C", "BP_OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTeamMemberPedestal_Nameplate_AddFriendButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamMemberPedestal_Nameplate_AddFriendButton_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTeamMemberPedestal_Nameplate_AddFriendButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamMemberPedestal_Nameplate_AddFriendButton_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.SetInputActionVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamMemberPedestal_Nameplate_AddFriendButton_C::SetInputActionVisibility(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamMemberPedestal_Nameplate_AddFriendButton_C", "SetInputActionVisibility");

	Params::UTeamMemberPedestal_Nameplate_AddFriendButton_C_SetInputActionVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamMemberPedestal_Nameplate_AddFriendButton.TeamMemberPedestal_Nameplate_AddFriendButton_C.ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_CustomEvent_InVisibility                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamMemberPedestal_Nameplate_AddFriendButton_C::ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESlateVisibility K2Node_CustomEvent_InVisibility, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamMemberPedestal_Nameplate_AddFriendButton_C", "ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton");

	Params::UTeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_InVisibility = K2Node_CustomEvent_InVisibility;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


