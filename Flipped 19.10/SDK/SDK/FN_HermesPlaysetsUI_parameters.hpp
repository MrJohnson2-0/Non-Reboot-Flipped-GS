#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function HermesPlaysetsUI.DownloadEntryScreen.HandleDownloadLinkCodeChanged
struct UDownloadEntryScreen_HandleDownloadLinkCodeChanged_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function HermesPlaysetsUI.DownloadOnDemandDirector.ShowErrorMessageModal
struct ADownloadOnDemandDirector_ShowErrorMessageModal_Params
{
public:
	class UCommonActivatableWidget*              ParentWidget;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonActivatableWidget*              ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function HermesPlaysetsUI.DownloadOnDemandDirector.ShowDownloadOnDemandModal
struct ADownloadOnDemandDirector_ShowDownloadOnDemandModal_Params
{
public:
	class UCommonActivatableWidget*              ParentWidget;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonActivatableWidget*              ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function HermesPlaysetsUI.DownloadOnDemandDirector.ShowDownloadOnDemandError
struct ADownloadOnDemandDirector_ShowDownloadOnDemandError_Params
{
public:
	enum class EDownloadOnDemandErrorMessage     DownloadOnDemandErrorMessage;                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3678[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InLinkCode;                                        // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ErrorMessage;                                      // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function HermesPlaysetsUI.DownloadOnDemandDirector.RequestPlaysetFromCode
struct ADownloadOnDemandDirector_RequestPlaysetFromCode_Params
{
public:
	class FString                                InCode;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InProjectId;                                       // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InTitleName;                                       // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerControllerAthena*           InFortPlayerControllerAthena;                      // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_367E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function HermesPlaysetsUI.DownloadOnDemandDirector.RequestLinkCodePreviewFromCode
struct ADownloadOnDemandDirector_RequestLinkCodePreviewFromCode_Params
{
public:
	class FString                                InCode;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerControllerAthena*           InFortPlayerControllerAthena;                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3684[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function HermesPlaysetsUI.DownloadOnDemandDirector.OnNewLinkCodeChanged
struct ADownloadOnDemandDirector_OnNewLinkCodeChanged_Params
{
public:
	TArray<class FString>                        UpdatedLinkCodes;                                  // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function HermesPlaysetsUI.DownloadOnDemandDirector.OnLinkPreviewImageDownloaded
struct ADownloadOnDemandDirector_OnLinkPreviewImageDownloaded_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3685[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2DDynamic*                     InPreviewTexture;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function HermesPlaysetsUI.DownloadOnDemandDirector.LoadLinkCodeMetaData
struct ADownloadOnDemandDirector_LoadLinkCodeMetaData_Params
{
public:
	class FString                                InLinkMnemonic;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InLinkVersion;                                     // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3689[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerControllerAthena*           InFortPlayerControllerAthena;                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_368B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function HermesPlaysetsUI.DownloadOnDemandDirector.LinkCodeMetaDataPreviewTextureLoaded
struct ADownloadOnDemandDirector_LinkCodeMetaDataPreviewTextureLoaded_Params
{
public:
	class UTexture2DDynamic*                     InPreviewTexture;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function HermesPlaysetsUI.DownloadOnDemandDirector.LinkCodeMetaDataLoaded
struct ADownloadOnDemandDirector_LinkCodeMetaDataLoaded_Params
{
public:
	class FString                                InLinkCode;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InProjectId;                                       // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InTitleString;                                     // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HermesPlaysetsUI.DownloadOnDemandDirector.IsUsingDynamicHUDForUI
struct ADownloadOnDemandDirector_IsUsingDynamicHUDForUI_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function HermesPlaysetsUI.DownloadOnDemandDirector.HermesPlaysetLinkCodeResolved
struct ADownloadOnDemandDirector_HermesPlaysetLinkCodeResolved_Params
{
public:
	class FString                                InLinkCode;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InProjectId;                                       // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36A0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function HermesPlaysetsUI.DownloadOnDemandDirector.HermesPlaysetDownloadedOnServer
struct ADownloadOnDemandDirector_HermesPlaysetDownloadedOnServer_Params
{
public:
	class FString                                InLinkCode;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ErrorMessage;                                      // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HermesPlaysetsUI.DownloadOnDemandDirector.HandlePlaysetDownloadedSuccess
struct ADownloadOnDemandDirector_HandlePlaysetDownloadedSuccess_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HermesPlaysetsUI.DownloadOnDemandDirector.CanRemoveProject
struct ADownloadOnDemandDirector_CanRemoveProject_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HermesPlaysetsUI.DownloadOnDemandDirector.CanAddProject
struct ADownloadOnDemandDirector_CanAddProject_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function HermesPlaysetsUI.DownloadOnDemandDirector.CanAddLinkCode
struct ADownloadOnDemandDirector_CanAddLinkCode_Params
{
public:
	class FString                                InLinkCode;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36AD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


