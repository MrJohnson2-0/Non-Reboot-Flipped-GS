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

// 0x2 (0x2 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.SetEnabled
struct UPictureInPictureMediaController_SetEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFromUser;                                       // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.SetCurrentSource
struct UPictureInPictureMediaController_SetCurrentSource_Params
{
public:
	struct FPiPPartnerSource                     SelectedSource;                                    // 0x0(0x118)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.Play
struct UPictureInPictureMediaController_Play_Params
{
public:
	bool                                         bForcePlay;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.OnPrevThumbnailReceived
struct UPictureInPictureMediaController_OnPrevThumbnailReceived_Params
{
public:
	class UTexture2DDynamic*                     InTexture;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.OnNextThumbnailReceived
struct UPictureInPictureMediaController_OnNextThumbnailReceived_Params
{
public:
	class UTexture2DDynamic*                     InTexture;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.IsPlaying
struct UPictureInPictureMediaController_IsPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.IsPaused
struct UPictureInPictureMediaController_IsPaused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.IsMultiSourceSupported
struct UPictureInPictureMediaController_IsMultiSourceSupported_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.IsEnabled
struct UPictureInPictureMediaController_IsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.HandleSourceSelectedEvent
struct UPictureInPictureMediaController_HandleSourceSelectedEvent_Params
{
public:
	class FString                                SelectedSource;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.GetValidSources
struct UPictureInPictureMediaController_GetValidSources_Params
{
public:
	TArray<struct FPiPPartnerSource>             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.GetSources
struct UPictureInPictureMediaController_GetSources_Params
{
public:
	TArray<struct FPiPPartnerSource>             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.GetPlayerAssetConfig
struct UPictureInPictureMediaController_GetPlayerAssetConfig_Params
{
public:
	struct FPIPVideoPlayerAssetConfig            ReturnValue;                                       // 0x0(0x78)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.GetMediaPlayerWidget
struct UPictureInPictureMediaController_GetMediaPlayerWidget_Params
{
public:
	class UPictureInPicturePlayer*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.GetDefaultPlayerAssetConfig
struct UPictureInPictureMediaController_GetDefaultPlayerAssetConfig_Params
{
public:
	struct FPIPVideoPlayerAssetConfig            ReturnValue;                                       // 0x0(0x78)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.GetCurrentSource
struct UPictureInPictureMediaController_GetCurrentSource_Params
{
public:
	struct FPiPPartnerSource                     ReturnValue;                                       // 0x0(0x118)(Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.GetActions
struct UPictureInPictureMediaController_GetActions_Params
{
public:
	TArray<class UPictureInPictureActionData*>   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureMediaController.Exit
struct UPictureInPictureMediaController_Exit_Params
{
public:
	bool                                         bStop;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPicturePlayer.UpdateStreamingPlayerSize
struct UPictureInPicturePlayer_UpdateStreamingPlayerSize_Params
{
public:
	struct FVector2D                             InVector;                                          // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPicturePlayer.StreamedVideoOnUrlSuccess
struct UPictureInPicturePlayer_StreamedVideoOnUrlSuccess_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPicturePlayer.StreamedVideoOnUrlFailure
struct UPictureInPicturePlayer_StreamedVideoOnUrlFailure_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function PictureInPictureCore.PictureInPicturePlayer.SetPlayerAssetConfig
struct UPictureInPicturePlayer_SetPlayerAssetConfig_Params
{
public:
	struct FPIPVideoPlayerAssetConfig            InAssetConfig;                                     // 0x0(0x78)(Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bFlush;                                            // 0x78(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39FE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPicturePlayer.IsAssetConfigSet
struct UPictureInPicturePlayer_IsAssetConfigSet_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPicturePlayer.HandleUCPAudioChanged
struct UPictureInPicturePlayer_HandleUCPAudioChanged_Params
{
public:
	class UFortClientSettingsRecord*             Settings;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureClient.IsLoggedIn
struct UPictureInPictureClient_IsLoggedIn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureClient.GetQRCodeTexture
struct UPictureInPictureClient_GetQRCodeTexture_Params
{
public:
	class UTexture2DDynamic*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureClient.GetLoginState
struct UPictureInPictureClient_GetLoginState_Params
{
public:
	enum class EPictureInPictureAuthState        ReturnValue;                                       // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureClient.GetAvatarImage
struct UPictureInPictureClient_GetAvatarImage_Params
{
public:
	class UEpicCMSImage*                         ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureClient.EndLogin
struct UPictureInPictureClient_EndLogin_Params
{
public:
	class UObject*                               InWorldContext;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureClient.CheckLogin
struct UPictureInPictureClient_CheckLogin_Params
{
public:
	class UObject*                               InWorldContext;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureClient.BeginLogin
struct UPictureInPictureClient_BeginLogin_Params
{
public:
	class UObject*                               InWorldContext;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.UpdatePartnerItemList
struct UPictureInPictureSubsystem_UpdatePartnerItemList_Params
{
public:
	class UObject*                               InWorldContext;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A1C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.StoreLastUsedSource
struct UPictureInPictureSubsystem_StoreLastUsedSource_Params
{
public:
	class FString                                InPartnerSourceName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.StoreLastUsedPartner
struct UPictureInPictureSubsystem_StoreLastUsedPartner_Params
{
public:
	class FString                                InPartnerName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.StoreAutoEnableSetting
struct UPictureInPictureSubsystem_StoreAutoEnableSetting_Params
{
public:
	bool                                         InUserEnabled;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.SetCurrentMediaControllerEnabled
struct UPictureInPictureSubsystem_SetCurrentMediaControllerEnabled_Params
{
public:
	bool                                         InEnabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.OnCurrentPartnerSourceSelected
struct UPictureInPictureSubsystem_OnCurrentPartnerSourceSelected_Params
{
public:
	struct FPiPPartnerSource                     SelectedSource;                                    // 0x0(0x118)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.IsPartnerListUpdated
struct UPictureInPictureSubsystem_IsPartnerListUpdated_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerItemList
struct UPictureInPictureSubsystem_GetPartnerItemList_Params
{
public:
	TArray<class UPictureInPicturePartnerDataAsset*> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerItem
struct UPictureInPictureSubsystem_GetPartnerItem_Params
{
public:
	class FString                                PartnerName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPictureInPicturePartnerDataAsset*     ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerControls
struct UPictureInPictureSubsystem_GetPartnerControls_Params
{
public:
	class FString                                PartnerName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPictureInPicturePartnerControls*      ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerController
struct UPictureInPictureSubsystem_GetPartnerController_Params
{
public:
	class FString                                PartnerName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPictureInPictureMediaController*      ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetPartnerClient
struct UPictureInPictureSubsystem_GetPartnerClient_Params
{
public:
	class FString                                PartnerName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPictureInPictureClient*               ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetLastUsedSource
struct UPictureInPictureSubsystem_GetLastUsedSource_Params
{
public:
	class FString                                OutPartnerSourceName;                              // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetLastUsedPartner
struct UPictureInPictureSubsystem_GetLastUsedPartner_Params
{
public:
	class FString                                OutPartnerName;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerItem
struct UPictureInPictureSubsystem_GetCurrentPartnerItem_Params
{
public:
	class UPictureInPicturePartnerDataAsset*     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerControls
struct UPictureInPictureSubsystem_GetCurrentPartnerControls_Params
{
public:
	class UPictureInPicturePartnerControls*      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerController
struct UPictureInPictureSubsystem_GetCurrentPartnerController_Params
{
public:
	class UPictureInPictureMediaController*      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerClient
struct UPictureInPictureSubsystem_GetCurrentPartnerClient_Params
{
public:
	class UPictureInPictureClient*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureCore.PictureInPictureSubsystem.GetAutoEnableSetting
struct UPictureInPictureSubsystem_GetAutoEnableSetting_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


