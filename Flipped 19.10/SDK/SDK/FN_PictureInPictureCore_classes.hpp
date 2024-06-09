#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class PictureInPictureCore.PictureInPictureCheatManager
class UPictureInPictureCheatManager : public UChildCheatManager
{
public:

	static class UClass* StaticClass();
	static class UPictureInPictureCheatManager* GetDefaultObj();

	void SuspendPiP();
	void ResumePiP();
	void EnablePiP();
	void DisablePiP();
	void CanEnablePartnerPiP();
};

// 0x0 (0x28 - 0x28)
// Class PictureInPictureCore.PictureInPictureCoreEnableDisableAction
class UPictureInPictureCoreEnableDisableAction : public UFortUIGameFeatureAction
{
public:

	static class UClass* StaticClass();
	static class UPictureInPictureCoreEnableDisableAction* GetDefaultObj();

};

// 0x4E0 (0x508 - 0x28)
// Class PictureInPictureCore.PictureInPictureMediaController
class UPictureInPictureMediaController : public UObject
{
public:
	class FString                                PartnerName;                                       // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPictureInPictureActionData*>   ActionDataArray;                                   // 0x38(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FPIPVideoPlayerAssetConfig            DefaultPlayerAssetConfig;                          // 0x48(0x78)(NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FPIPVideoPlayerAssetConfig            PlayerAssetConfig;                                 // 0xC0(0x78)(NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UPictureInPicturePlayer*               VideoWidget;                                       // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FPIPVideoPlayerConfig                 VideoWidgetConfig;                                 // 0x140(0x48)(Protected, NativeAccessSpecifierProtected)
	class UCommonLazyImage*                      ThumbnailImageNext;                                // 0x188(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLazyImage*                      ThumbnailImagePrevious;                            // 0x190(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsMultipleSources;                          // 0x198(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPiPPartnerSource                     CurrentSource;                                     // 0x1A0(0x118)(ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPiPPartnerSource>             Sources;                                           // 0x2B8(0x10)(ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPiPPartnerSource>             ValidSources;                                      // 0x2C8(0x10)(ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FMediaPlayerOptions                   LocalOptions;                                      // 0x2D8(0x30)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            BaseErrorEvent;                                    // 0x308(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            BaseEnabledEvent;                                  // 0x318(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            SourcesChangedEvent;                               // 0x328(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            SourceSelectedEvent;                               // 0x338(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_39EE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPictureInPictureActionConfig> InstanceActionData;                                // 0x350(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UPictureInPictureAnalyticsManager*     AnalyticsManager;                                  // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDateTime                             ActiveStartTime;                                   // 0x368(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDateTime                             PausedStartTime;                                   // 0x370(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39F0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPiPSuspendInfo                       SuspendedInfo;                                     // 0x380(0x120)(ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_39F1[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPictureInPictureMediaController* GetDefaultObj();

	void Stop();
	void SetEnabled(bool bIsEnabled, bool bIsFromUser);
	void SetCurrentSource(struct FPiPPartnerSource& SelectedSource);
	void Play(bool bForcePlay);
	void Pause();
	void OnPrevThumbnailReceived(class UTexture2DDynamic* InTexture);
	void OnNextThumbnailReceived(class UTexture2DDynamic* InTexture);
	void OnMediaStartedAnalytics();
	void OnMediaResumedAnalytics();
	void OnMediaPausedAnalytics();
	void OnMediaClosedAnalytics();
	bool IsPlaying();
	bool IsPaused();
	bool IsMultiSourceSupported();
	bool IsEnabled();
	void HandleSourceSelectedEvent(const class FString& SelectedSource);
	TArray<struct FPiPPartnerSource> GetValidSources();
	TArray<struct FPiPPartnerSource> GetSources();
	struct FPIPVideoPlayerAssetConfig GetPlayerAssetConfig();
	class UPictureInPicturePlayer* GetMediaPlayerWidget();
	struct FPIPVideoPlayerAssetConfig GetDefaultPlayerAssetConfig();
	struct FPiPPartnerSource GetCurrentSource();
	TArray<class UPictureInPictureActionData*> GetActions();
	void Exit(bool bStop);
};

// 0x10 (0x128 - 0x118)
// Class PictureInPictureCore.PictureInPictureMediaPlayerCtrl
class UPictureInPictureMediaPlayerCtrl : public UFortMediaPlayerCtrl
{
public:
	uint8                                        Pad_39F6[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPictureInPictureMediaPlayerCtrl* GetDefaultObj();

};

// 0x1F8 (0x220 - 0x28)
// Class PictureInPictureCore.PictureInPicturePlayer
class UPictureInPicturePlayer : public UObject
{
public:
	uint8                                        Pad_3A03[0xE0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPIPVideoPlayerAssetConfig            AssetConfig;                                       // 0x108(0x78)(Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UPictureInPictureMediaPlayerCtrl*      MediaController;                                   // 0x180(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A04[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundSubmixBase*                      DefaultSubmix;                                     // 0x1D8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundSubmixBase*                      LicensedSubmix;                                    // 0x1E0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A05[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPictureInPicturePlayer* GetDefaultObj();

	void UpdateStreamingPlayerSize(struct FVector2D& InVector);
	void StreamedVideoOnUrlSuccess(const class FString& URL);
	void StreamedVideoOnUrlFailure(const class FString& URL);
	void SetPlayerAssetConfig(struct FPIPVideoPlayerAssetConfig& InAssetConfig, bool bFlush);
	bool IsAssetConfigSet();
	void HandleUCPAudioChanged(class UFortClientSettingsRecord* Settings);
};

// 0x80 (0xA8 - 0x28)
// Class PictureInPictureCore.PictureInPictureClient
class UPictureInPictureClient : public UObject
{
public:
	FMulticastInlineDelegateProperty_            LoginSuccessEvent;                                 // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            LogoutSuccessEvent;                                // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            QRCodeReceivedEvent;                               // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ErrorDelegate;                                     // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A16[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                UserName;                                          // 0x70(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEpicCMSImage*                         UserAvatarImage;                                   // 0x80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A17[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2DDynamic*                     CurrentQRCodeTexture;                              // 0x90(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A18[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPictureInPictureClient* GetDefaultObj();

	void Logout();
	bool IsLoggedIn();
	class UTexture2DDynamic* GetQRCodeTexture();
	enum class EPictureInPictureAuthState GetLoginState();
	class UEpicCMSImage* GetAvatarImage();
	void EndLogin(class UObject* InWorldContext);
	void CheckLogin(class UObject* InWorldContext);
	void BeginLogin(class UObject* InWorldContext);
};

// 0x18 (0x40 - 0x28)
// Class PictureInPictureCore.PictureInPicturePartnerControls
class UPictureInPicturePartnerControls : public UObject
{
public:
	bool                                         bRequiresAgeOfConsent;                             // 0x28(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A1A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPictureInPictureClient*               ClientObject;                                      // 0x30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPictureInPictureMediaController*      MediaController;                                   // 0x38(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPictureInPicturePartnerControls* GetDefaultObj();

};

// 0xF0 (0x120 - 0x30)
// Class PictureInPictureCore.PictureInPictureSubsystem
class UPictureInPictureSubsystem : public UEngineSubsystem
{
public:
	TArray<class UPictureInPicturePartnerDataAsset*> AvailableClientsList;                              // 0x30(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartnerUpdateComplete;                           // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartnerChanged;                                  // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bPartnerListUpdated;                               // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsSuspended;                                      // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A58[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrentPlatform;                                   // 0x68(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A59[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class UPictureInPicturePartnerControls*> SupportedPartnerControls;                          // 0x88(0x50)(NativeAccessSpecifierPrivate)
	class FString                                CurrentPartnerName;                                // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                CurrentContinent;                                  // 0xE8(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                CurrentCountry;                                    // 0xF8(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FString>                        CurrentSubdivisions;                               // 0x108(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A5A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPictureInPictureSubsystem* GetDefaultObj();

	void UpdatePartnerItemList(class UObject* InWorldContext, bool bForce);
	void SuspendCurrentMediaController();
	void StoreLastUsedSource(const class FString& InPartnerSourceName);
	void StoreLastUsedPartner(const class FString& InPartnerName);
	void StoreAutoEnableSetting(bool InUserEnabled);
	void ShutdownAllPartners();
	void SetCurrentMediaControllerEnabled(bool InEnabled);
	void ResumeCurrentMediaController();
	void OnCurrentPartnerSourceSelected(struct FPiPPartnerSource& SelectedSource);
	bool IsPartnerListUpdated();
	void HandleMediaSourceRequest();
	TArray<class UPictureInPicturePartnerDataAsset*> GetPartnerItemList();
	class UPictureInPicturePartnerDataAsset* GetPartnerItem(const class FString& PartnerName);
	class UPictureInPicturePartnerControls* GetPartnerControls(const class FString& PartnerName);
	class UPictureInPictureMediaController* GetPartnerController(const class FString& PartnerName);
	class UPictureInPictureClient* GetPartnerClient(const class FString& PartnerName);
	void GetLastUsedSource(class FString* OutPartnerSourceName);
	void GetLastUsedPartner(class FString* OutPartnerName);
	class UPictureInPicturePartnerDataAsset* GetCurrentPartnerItem();
	class UPictureInPicturePartnerControls* GetCurrentPartnerControls();
	class UPictureInPictureMediaController* GetCurrentPartnerController();
	class UPictureInPictureClient* GetCurrentPartnerClient();
	bool GetAutoEnableSetting();
};

}


