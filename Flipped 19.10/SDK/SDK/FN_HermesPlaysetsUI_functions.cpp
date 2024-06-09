#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HermesPlaysetsUI.DownloadEntryScreen
// (None)

class UClass* UDownloadEntryScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadEntryScreen");

	return Clss;
}


// DownloadEntryScreen HermesPlaysetsUI.Default__DownloadEntryScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadEntryScreen* UDownloadEntryScreen::GetDefaultObj()
{
	static class UDownloadEntryScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadEntryScreen*>(UDownloadEntryScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function HermesPlaysetsUI.DownloadEntryScreen.HandleDownloadLinkCodeChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UDownloadEntryScreen::HandleDownloadLinkCodeChanged(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadEntryScreen", "HandleDownloadLinkCodeChanged");

	Params::UDownloadEntryScreen_HandleDownloadLinkCodeChanged_Params Parms{};

	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class HermesPlaysetsUI.DownloadOnDemandDirector
// (Actor)

class UClass* ADownloadOnDemandDirector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadOnDemandDirector");

	return Clss;
}


// DownloadOnDemandDirector HermesPlaysetsUI.Default__DownloadOnDemandDirector
// (Public, ClassDefaultObject, ArchetypeObject)

class ADownloadOnDemandDirector* ADownloadOnDemandDirector::GetDefaultObj()
{
	static class ADownloadOnDemandDirector* Default = nullptr;

	if (!Default)
		Default = static_cast<ADownloadOnDemandDirector*>(ADownloadOnDemandDirector::StaticClass()->DefaultObject);

	return Default;
}


// Function HermesPlaysetsUI.DownloadOnDemandDirector.ShowErrorMessageModal
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCommonActivatableWidget*    ParentWidget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonActivatableWidget*    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonActivatableWidget* ADownloadOnDemandDirector::ShowErrorMessageModal(class UCommonActivatableWidget* ParentWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandDirector", "ShowErrorMessageModal");

	Params::ADownloadOnDemandDirector_ShowErrorMessageModal_Params Parms{};

	Parms.ParentWidget = ParentWidget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HermesPlaysetsUI.DownloadOnDemandDirector.ShowDownloadOnDemandModal
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCommonActivatableWidget*    ParentWidget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonActivatableWidget*    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonActivatableWidget* ADownloadOnDemandDirector::ShowDownloadOnDemandModal(class UCommonActivatableWidget* ParentWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandDirector", "ShowDownloadOnDemandModal");

	Params::ADownloadOnDemandDirector_ShowDownloadOnDemandModal_Params Parms{};

	Parms.ParentWidget = ParentWidget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HermesPlaysetsUI.DownloadOnDemandDirector.ShowDownloadOnDemandError
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EDownloadOnDemandErrorMessageDownloadOnDemandErrorMessage                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InLinkCode                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ErrorMessage                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADownloadOnDemandDirector::ShowDownloadOnDemandError(enum class EDownloadOnDemandErrorMessage DownloadOnDemandErrorMessage, const class FString& InLinkCode, const class FString& ErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandDirector", "ShowDownloadOnDemandError");

	Params::ADownloadOnDemandDirector_ShowDownloadOnDemandError_Params Parms{};

	Parms.DownloadOnDemandErrorMessage = DownloadOnDemandErrorMessage;
	Parms.InLinkCode = InLinkCode;
	Parms.ErrorMessage = ErrorMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HermesPlaysetsUI.DownloadOnDemandDirector.ReturnToFrontEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ADownloadOnDemandDirector::ReturnToFrontEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandDirector", "ReturnToFrontEnd");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HermesPlaysetsUI.DownloadOnDemandDirector.RequestPlaysetFromCode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InCode                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InProjectId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InTitleName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerControllerAthena* InFortPlayerControllerAthena                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ADownloadOnDemandDirector::RequestPlaysetFromCode(const class FString& InCode, const class FString& InProjectId, const class FString& InTitleName, class AFortPlayerControllerAthena* InFortPlayerControllerAthena)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandDirector", "RequestPlaysetFromCode");

	Params::ADownloadOnDemandDirector_RequestPlaysetFromCode_Params Parms{};

	Parms.InCode = InCode;
	Parms.InProjectId = InProjectId;
	Parms.InTitleName = InTitleName;
	Parms.InFortPlayerControllerAthena = InFortPlayerControllerAthena;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HermesPlaysetsUI.DownloadOnDemandDirector.RequestLinkCodePreviewFromCode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InCode                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerControllerAthena* InFortPlayerControllerAthena                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ADownloadOnDemandDirector::RequestLinkCodePreviewFromCode(const class FString& InCode, class AFortPlayerControllerAthena* InFortPlayerControllerAthena)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandDirector", "RequestLinkCodePreviewFromCode");

	Params::ADownloadOnDemandDirector_RequestLinkCodePreviewFromCode_Params Parms{};

	Parms.InCode = InCode;
	Parms.InFortPlayerControllerAthena = InFortPlayerControllerAthena;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HermesPlaysetsUI.DownloadOnDemandDirector.OnNewLinkCodeChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<class FString>              UpdatedLinkCodes                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ADownloadOnDemandDirector::OnNewLinkCodeChanged(TArray<class FString>& UpdatedLinkCodes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandDirector", "OnNewLinkCodeChanged");

	Params::ADownloadOnDemandDirector_OnNewLinkCodeChanged_Params Parms{};

	Parms.UpdatedLinkCodes = UpdatedLinkCodes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HermesPlaysetsUI.DownloadOnDemandDirector.OnLinkPreviewImageDownloaded
// (Final, Native, Protected)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2DDynamic*           InPreviewTexture                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADownloadOnDemandDirector::OnLinkPreviewImageDownloaded(bool bSuccess, class UTexture2DDynamic* InPreviewTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandDirector", "OnLinkPreviewImageDownloaded");

	Params::ADownloadOnDemandDirector_OnLinkPreviewImageDownloaded_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.InPreviewTexture = InPreviewTexture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HermesPlaysetsUI.DownloadOnDemandDirector.LoadLinkCodeMetaData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InLinkMnemonic                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InLinkVersion                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerControllerAthena* InFortPlayerControllerAthena                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ADownloadOnDemandDirector::LoadLinkCodeMetaData(const class FString& InLinkMnemonic, int32 InLinkVersion, class AFortPlayerControllerAthena* InFortPlayerControllerAthena)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandDirector", "LoadLinkCodeMetaData");

	Params::ADownloadOnDemandDirector_LoadLinkCodeMetaData_Params Parms{};

	Parms.InLinkMnemonic = InLinkMnemonic;
	Parms.InLinkVersion = InLinkVersion;
	Parms.InFortPlayerControllerAthena = InFortPlayerControllerAthena;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HermesPlaysetsUI.DownloadOnDemandDirector.LinkCodeMetaDataPreviewTextureLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           InPreviewTexture                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADownloadOnDemandDirector::LinkCodeMetaDataPreviewTextureLoaded(class UTexture2DDynamic* InPreviewTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandDirector", "LinkCodeMetaDataPreviewTextureLoaded");

	Params::ADownloadOnDemandDirector_LinkCodeMetaDataPreviewTextureLoaded_Params Parms{};

	Parms.InPreviewTexture = InPreviewTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HermesPlaysetsUI.DownloadOnDemandDirector.LinkCodeMetaDataLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      InLinkCode                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InProjectId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InTitleString                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADownloadOnDemandDirector::LinkCodeMetaDataLoaded(const class FString& InLinkCode, const class FString& InProjectId, const class FString& InTitleString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandDirector", "LinkCodeMetaDataLoaded");

	Params::ADownloadOnDemandDirector_LinkCodeMetaDataLoaded_Params Parms{};

	Parms.InLinkCode = InLinkCode;
	Parms.InProjectId = InProjectId;
	Parms.InTitleString = InTitleString;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HermesPlaysetsUI.DownloadOnDemandDirector.IsUsingDynamicHUDForUI
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ADownloadOnDemandDirector::IsUsingDynamicHUDForUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandDirector", "IsUsingDynamicHUDForUI");

	Params::ADownloadOnDemandDirector_IsUsingDynamicHUDForUI_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HermesPlaysetsUI.DownloadOnDemandDirector.HermesPlaysetLinkCodeResolved
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      InLinkCode                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InProjectId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADownloadOnDemandDirector::HermesPlaysetLinkCodeResolved(const class FString& InLinkCode, const class FString& InProjectId, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandDirector", "HermesPlaysetLinkCodeResolved");

	Params::ADownloadOnDemandDirector_HermesPlaysetLinkCodeResolved_Params Parms{};

	Parms.InLinkCode = InLinkCode;
	Parms.InProjectId = InProjectId;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HermesPlaysetsUI.DownloadOnDemandDirector.HermesPlaysetDownloadedOnServer
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      InLinkCode                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ErrorMessage                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADownloadOnDemandDirector::HermesPlaysetDownloadedOnServer(const class FString& InLinkCode, bool bSuccess, const class FString& ErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandDirector", "HermesPlaysetDownloadedOnServer");

	Params::ADownloadOnDemandDirector_HermesPlaysetDownloadedOnServer_Params Parms{};

	Parms.InLinkCode = InLinkCode;
	Parms.bSuccess = bSuccess;
	Parms.ErrorMessage = ErrorMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HermesPlaysetsUI.DownloadOnDemandDirector.HandlePlaysetDownloadedSuccess
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADownloadOnDemandDirector::HandlePlaysetDownloadedSuccess(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandDirector", "HandlePlaysetDownloadedSuccess");

	Params::ADownloadOnDemandDirector_HandlePlaysetDownloadedSuccess_Params Parms{};

	Parms.bSuccess = bSuccess;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HermesPlaysetsUI.DownloadOnDemandDirector.CanRemoveProject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ADownloadOnDemandDirector::CanRemoveProject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandDirector", "CanRemoveProject");

	Params::ADownloadOnDemandDirector_CanRemoveProject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HermesPlaysetsUI.DownloadOnDemandDirector.CanAddProject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ADownloadOnDemandDirector::CanAddProject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandDirector", "CanAddProject");

	Params::ADownloadOnDemandDirector_CanAddProject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HermesPlaysetsUI.DownloadOnDemandDirector.CanAddLinkCode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      InLinkCode                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ADownloadOnDemandDirector::CanAddLinkCode(const class FString& InLinkCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandDirector", "CanAddLinkCode");

	Params::ADownloadOnDemandDirector_CanAddLinkCode_Params Parms{};

	Parms.InLinkCode = InLinkCode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HermesPlaysetsUI.DownloadOnDemandDirector.BroadcastDownloadOnDemandShowErrorMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ADownloadOnDemandDirector::BroadcastDownloadOnDemandShowErrorMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadOnDemandDirector", "BroadcastDownloadOnDemandShowErrorMessage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


