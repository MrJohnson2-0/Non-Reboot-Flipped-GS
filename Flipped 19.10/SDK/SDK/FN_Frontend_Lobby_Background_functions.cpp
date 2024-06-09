#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend_Lobby_Background.Frontend_Lobby_Background_C
// (Actor)

class UClass* AFrontend_Lobby_Background_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frontend_Lobby_Background_C");

	return Clss;
}


// Frontend_Lobby_Background_C Frontend_Lobby_Background.Default__Frontend_Lobby_Background_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontend_Lobby_Background_C* AFrontend_Lobby_Background_C::GetDefaultObj()
{
	static class AFrontend_Lobby_Background_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontend_Lobby_Background_C*>(AFrontend_Lobby_Background_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.SetupSpecialEventBackgroundDataWithRenderTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableRealtimeUpdate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InFadeGridTargetValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InFadeToBlackFloorTargetValue                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_Lobby_Background_C::SetupSpecialEventBackgroundDataWithRenderTarget(bool EnableRealtimeUpdate, float InFadeGridTargetValue, float InFadeToBlackFloorTargetValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "SetupSpecialEventBackgroundDataWithRenderTarget");

	Params::AFrontend_Lobby_Background_C_SetupSpecialEventBackgroundDataWithRenderTarget_Params Parms{};

	Parms.EnableRealtimeUpdate = EnableRealtimeUpdate;
	Parms.InFadeGridTargetValue = InFadeGridTargetValue;
	Parms.InFadeToBlackFloorTargetValue = InFadeToBlackFloorTargetValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.SetupBasicBackgroundDataWithRenderTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableRealtimeUpdate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InFadeGridTargetValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InFadeToBlackFloorTargetValue                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_Lobby_Background_C::SetupBasicBackgroundDataWithRenderTarget(bool EnableRealtimeUpdate, float InFadeGridTargetValue, float InFadeToBlackFloorTargetValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "SetupBasicBackgroundDataWithRenderTarget");

	Params::AFrontend_Lobby_Background_C_SetupBasicBackgroundDataWithRenderTarget_Params Parms{};

	Parms.EnableRealtimeUpdate = EnableRealtimeUpdate;
	Parms.InFadeGridTargetValue = InFadeGridTargetValue;
	Parms.InFadeToBlackFloorTargetValue = InFadeToBlackFloorTargetValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.SetupSeason17BackgroundData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HidePhase1                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HidePhase2                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HidePhase3                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_Lobby_Background_C::SetupSeason17BackgroundData(bool HidePhase1, bool HidePhase2, bool HidePhase3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "SetupSeason17BackgroundData");

	Params::AFrontend_Lobby_Background_C_SetupSeason17BackgroundData_Params Parms{};

	Parms.HidePhase1 = HidePhase1;
	Parms.HidePhase2 = HidePhase2;
	Parms.HidePhase3 = HidePhase3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.SetupSpecialEventBackgroundData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableRealtimeUpdate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InFadeGridTargetValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InFadeToBlackFloorTargetValue                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_Lobby_Background_C::SetupSpecialEventBackgroundData(bool EnableRealtimeUpdate, float InFadeGridTargetValue, float InFadeToBlackFloorTargetValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "SetupSpecialEventBackgroundData");

	Params::AFrontend_Lobby_Background_C_SetupSpecialEventBackgroundData_Params Parms{};

	Parms.EnableRealtimeUpdate = EnableRealtimeUpdate;
	Parms.InFadeGridTargetValue = InFadeGridTargetValue;
	Parms.InFadeToBlackFloorTargetValue = InFadeToBlackFloorTargetValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.SetupGalileo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_Lobby_Background_C::SetupGalileo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "SetupGalileo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.LoadBackgroundData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UMaterialInstance>LocalMaterialPreBlur                                             (Edit, BlueprintVisible, HasGetValueTypeHash)
// TSoftObjectPtr<class UMaterialInstance>LocalMaterial                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture>     LocalTexture                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FFrontendBackgroundData     CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_Lobby_Background_C::LoadBackgroundData(TSoftObjectPtr<class UMaterialInstance> LocalMaterialPreBlur, TSoftObjectPtr<class UMaterialInstance> LocalMaterial, TSoftObjectPtr<class UTexture> LocalTexture, const struct FFrontendBackgroundData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "LoadBackgroundData");

	Params::AFrontend_Lobby_Background_C_LoadBackgroundData_Params Parms{};

	Parms.LocalMaterialPreBlur = LocalMaterialPreBlur;
	Parms.LocalMaterial = LocalMaterial;
	Parms.LocalTexture = LocalTexture;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.HideAvocadoActors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_Lobby_Background_C::HideAvocadoActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "HideAvocadoActors");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.Setup Basic Background Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableRealtimeUpdate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InFadeGridTargetValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InFadeToBlackFloorTargetValue                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_Lobby_Background_C::Setup_Basic_Background_Data(bool EnableRealtimeUpdate, float InFadeGridTargetValue, float InFadeToBlackFloorTargetValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "Setup Basic Background Data");

	Params::AFrontend_Lobby_Background_C_Setup_Basic_Background_Data_Params Parms{};

	Parms.EnableRealtimeUpdate = EnableRealtimeUpdate;
	Parms.InFadeGridTargetValue = InFadeGridTargetValue;
	Parms.InFadeToBlackFloorTargetValue = InFadeToBlackFloorTargetValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.SetShowPedestalSparkles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATeamMemberPedestal_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATeamMemberPedestal_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_Lobby_Background_C::SetShowPedestalSparkles(bool Show, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ATeamMemberPedestal_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ATeamMemberPedestal_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "SetShowPedestalSparkles");

	Params::AFrontend_Lobby_Background_C_SetShowPedestalSparkles_Params Parms{};

	Parms.Show = Show;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.UpdateFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FadeValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeFloorToBlack                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InFadeGrid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_Lobby_Background_C::UpdateFade(float FadeValue, float FadeFloorToBlack, float InFadeGrid, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "UpdateFade");

	Params::AFrontend_Lobby_Background_C_UpdateFade_Params Parms{};

	Parms.FadeValue = FadeValue;
	Parms.FadeFloorToBlack = FadeFloorToBlack;
	Parms.InFadeGrid = InFadeGrid;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.FadeIn__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AFrontend_Lobby_Background_C::FadeIn__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "FadeIn__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.FadeIn__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AFrontend_Lobby_Background_C::FadeIn__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "FadeIn__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.FadeOut__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AFrontend_Lobby_Background_C::FadeOut__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "FadeOut__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.FadeOut__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AFrontend_Lobby_Background_C::FadeOut__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "FadeOut__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.OnLoaded_7B16DAE04937EECB604410A2EC352CE3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_Lobby_Background_C::OnLoaded_7B16DAE04937EECB604410A2EC352CE3(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "OnLoaded_7B16DAE04937EECB604410A2EC352CE3");

	Params::AFrontend_Lobby_Background_C_OnLoaded_7B16DAE04937EECB604410A2EC352CE3_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.OnLoaded_D6DC1C6545F1A19E2FFC1B9CDACD5E99
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_Lobby_Background_C::OnLoaded_D6DC1C6545F1A19E2FFC1B9CDACD5E99(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "OnLoaded_D6DC1C6545F1A19E2FFC1B9CDACD5E99");

	Params::AFrontend_Lobby_Background_C_OnLoaded_D6DC1C6545F1A19E2FFC1B9CDACD5E99_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.OnLoaded_E5F1E80A4DD36718D41FF68F137C4775
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_Lobby_Background_C::OnLoaded_E5F1E80A4DD36718D41FF68F137C4775(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "OnLoaded_E5F1E80A4DD36718D41FF68F137C4775");

	Params::AFrontend_Lobby_Background_C_OnLoaded_E5F1E80A4DD36718D41FF68F137C4775_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFrontend_Lobby_Background_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.TestDynColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_Lobby_Background_C::TestDynColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "TestDynColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UTexture*                    BackgroundImage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_Lobby_Background_C::BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature(class UTexture* BackgroundImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature");

	Params::AFrontend_Lobby_Background_C_BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature_Params Parms{};

	Parms.BackgroundImage = BackgroundImage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      PresetEnvironmentName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AFrontend_Lobby_Background_C::BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature(const class FString& PresetEnvironmentName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature");

	Params::AFrontend_Lobby_Background_C_BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature_Params Parms{};

	Parms.PresetEnvironmentName = PresetEnvironmentName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.FadeFromBlue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_Lobby_Background_C::FadeFromBlue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "FadeFromBlue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.LoadAssets
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture>     InTexture                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TSoftObjectPtr<class UMaterialInstance>InMaterial                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TSoftObjectPtr<class UMaterialInstance>InPreBlurMaterial                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFrontend_Lobby_Background_C::LoadAssets(TSoftObjectPtr<class UTexture> InTexture, TSoftObjectPtr<class UMaterialInstance> InMaterial, TSoftObjectPtr<class UMaterialInstance> InPreBlurMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "LoadAssets");

	Params::AFrontend_Lobby_Background_C_LoadAssets_Params Parms{};

	Parms.InTexture = InTexture;
	Parms.InMaterial = InMaterial;
	Parms.InPreBlurMaterial = InPreBlurMaterial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.ContinueBackgroundSetup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_Lobby_Background_C::ContinueBackgroundSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "ContinueBackgroundSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.ExecuteUbergraph_Frontend_Lobby_Background
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           K2Node_DynamicCast_AsMaterial_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           K2Node_DynamicCast_AsMaterial_Instance_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_DynamicCast_AsTexture                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_ActorBoundEvent_BackgroundImage                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ActorBoundEvent_PresetEnvironmentName                     (ZeroConstructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TSoftObjectPtr<class UTexture>     K2Node_CustomEvent_InTexture                                     (HasGetValueTypeHash)
// TSoftObjectPtr<class UMaterialInstance>K2Node_CustomEvent_InMaterial                                    (HasGetValueTypeHash)
// TSoftObjectPtr<class UMaterialInstance>K2Node_CustomEvent_InPreBlurMaterial                             (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetScalarParameterValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScalarParameterValue_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_Lobby_Background_C::ExecuteUbergraph_Frontend_Lobby_Background(int32 EntryPoint, class UObject* Temp_object_Variable, class UObject* K2Node_CustomEvent_Loaded, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess, class UObject* Temp_object_Variable_1, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* K2Node_CustomEvent_Loaded_1, bool K2Node_SwitchString_CmpSuccess, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UObject* Temp_object_Variable_2, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess_2, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UTexture* K2Node_ActorBoundEvent_BackgroundImage, class UObject* K2Node_CustomEvent_Loaded_2, const class FString& K2Node_ActorBoundEvent_PresetEnvironmentName, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TSoftObjectPtr<class UTexture> K2Node_CustomEvent_InTexture, TSoftObjectPtr<class UMaterialInstance> K2Node_CustomEvent_InMaterial, TSoftObjectPtr<class UMaterialInstance> K2Node_CustomEvent_InPreBlurMaterial, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_GetScalarParameterValue_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_Lobby_Background_C", "ExecuteUbergraph_Frontend_Lobby_Background");

	Params::AFrontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_DynamicCast_AsMaterial_Instance = K2Node_DynamicCast_AsMaterial_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_1 = K2Node_DynamicCast_AsMaterial_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_DynamicCast_AsTexture = K2Node_DynamicCast_AsTexture;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.K2Node_ActorBoundEvent_BackgroundImage = K2Node_ActorBoundEvent_BackgroundImage;
	Parms.K2Node_CustomEvent_Loaded_2 = K2Node_CustomEvent_Loaded_2;
	Parms.K2Node_ActorBoundEvent_PresetEnvironmentName = K2Node_ActorBoundEvent_PresetEnvironmentName;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_1 = CallFunc_K2_GetRootComponent_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_InTexture = K2Node_CustomEvent_InTexture;
	Parms.K2Node_CustomEvent_InMaterial = K2Node_CustomEvent_InMaterial;
	Parms.K2Node_CustomEvent_InPreBlurMaterial = K2Node_CustomEvent_InPreBlurMaterial;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue = CallFunc_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue_1 = CallFunc_GetScalarParameterValue_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


