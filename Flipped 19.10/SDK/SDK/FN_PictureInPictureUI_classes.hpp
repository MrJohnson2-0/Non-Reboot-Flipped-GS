#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xF00 - 0xEF8)
// Class PictureInPictureUI.PictureInPictureBladeMenuButton
class UPictureInPictureBladeMenuButton : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_126B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPictureInPictureBladeMenuButton* GetDefaultObj();

	void UpdatePiPStatusBP(bool LoggedIn, bool Enabled, bool ParentalControlsEnabled);
	void OnPartnerListUpdated();
	void HandlePiPLogoutSuccess();
	void HandlePiPLoginSuccess();
	void HandlePiPEnabled(bool Enabled);
};

// 0x38 (0x60 - 0x28)
// Class PictureInPictureUI.PictureInPictureLoadingScreenOverlayAction
class UPictureInPictureLoadingScreenOverlayAction : public UFortUIGameFeatureAction
{
public:
	class USubtitleDisplayNative*                SubtitleDisplay;                                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_126E[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPictureInPictureLoadingScreenOverlayAction* GetDefaultObj();

};

// 0x0 (0x330 - 0x330)
// Class PictureInPictureUI.PictureInPictureMetadataOverlay
class UPictureInPictureMetadataOverlay : public UCommonActivatableWidget
{
public:

	static class UClass* StaticClass();
	static class UPictureInPictureMetadataOverlay* GetDefaultObj();

	void OnMediaStarted();
	void HandleOnPIPVideoStarted();
	void HandleOnPIPVideoResumed();
};

// 0x1D8 (0x508 - 0x330)
// Class PictureInPictureUI.PictureInPicturePanelWidget
class UPictureInPicturePanelWidget : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_1285[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USizeBox*                              Video_Size_Box;                                    // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                Image_Movie;                                       // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLazyImage*                      Image_Thumbnail_Prev;                              // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLazyImage*                      Image_Thumbnail_Next;                              // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNamedSlot*                            MetadataOverlaySlot;                               // 0x358(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   PressedObjectInputAction;                          // 0x360(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1288[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPictureInPicturePartnerControls*      CurrentPartner;                                    // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableUCPCheck;                                   // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_128A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonActivatableWidget>  SourcePickerClass;                                 // 0x388(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundSourceBus*                       SourceBus;                                         // 0x390(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActionWidget*                   ToggleActionWidget;                                // 0x398(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActivatableWidget*              SourcePickerWidget;                                // 0x3A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPictureInPicturePlayer*               VideoWidget;                                       // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_128E[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       PIPSoundComponent;                                 // 0x3D8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FPiPPartnerSource                     CurrentSource;                                     // 0x3E0(0x118)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1290[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USubtitleDisplay*                      Subtitles;                                         // 0x500(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPictureInPicturePanelWidget* GetDefaultObj();

	void ShowDebugInfo(bool bShow);
	void SetupPIPSoundComponent(struct FFortMediaEventsStreamAssets& InStreamAssets);
	void IntentionalDeactivate();
	void HandleToggleFullscreenMap(bool bFullscreenMapVisible);
	void HandleOnPartnerSourceChanged(struct FPiPPartnerSource& InSelectedSource);
	void HandleOnPartnerListUpdated();
	void HandleOnPartnerChanged(class UPictureInPicturePartnerControls* NewPartnerControls);
	void HandleIsPictureInPictureEnabledChanged(bool bIsPiPEnabled);
	void FlipPIPAudioSubmix(bool bInDefault, struct FFortMediaEventsStreamAssets& InStreamAssets, bool bForce);
	void DestroyPIPSoundComponent();
	void AutoEnableController();
};

// 0x40 (0x370 - 0x330)
// Class PictureInPictureUI.PictureInPictureSourcePicker
class UPictureInPictureSourcePicker : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_129E[0x9];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPrimaryContentSetup                  PrimaryContentSetup;                               // 0x339(0x1)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_129F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_ItemName;                                     // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortPickerOverlay*                    PickerOverlay_MediaSource;                         // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture2D*                            DefaultItemTexture;                                // 0x350(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPictureInPictureMediaController*      CurrentPartner;                                    // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12A1[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPictureInPictureSourcePicker* GetDefaultObj();

	void HandleOnPartnerSourceChanged(TArray<struct FPiPPartnerSource>& CurrentSources);
	void HandleOnPartnerChanged(class UPictureInPicturePartnerControls* NewPartner);
};

}


