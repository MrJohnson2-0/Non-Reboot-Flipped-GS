#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x370 - 0x330)
// Class HermesPlaysetsUI.DownloadEntryScreen
class UDownloadEntryScreen : public UCommonActivatableWidget
{
public:
	FMulticastInlineDelegateProperty_            OnDownloadLinkCodeConfirmed;                       // 0x330(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEditableTextDownloadLinkCodeModified;            // 0x340(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UUserWidget*                           DownloadWidget;                                    // 0x350(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEditableText*                         EditableText_DownloadLinkCode;                     // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                LastTestedMnemonic;                                // 0x360(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDownloadEntryScreen* GetDefaultObj();

	void HandleDownloadLinkCodeChanged(class FText& Text);
};

// 0x580 (0x7B0 - 0x230)
// Class HermesPlaysetsUI.DownloadOnDemandDirector
class ADownloadOnDemandDirector : public ADynamicUIDirectorBase
{
public:
	class FString                                CurrentDownloadLinkCode;                           // 0x230(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CurrentMetaDataGatheringLinkcode;                  // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBeaconDisconnected;                               // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36AE[0x17];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAssetData>                    DownloadAssetData;                                 // 0x268(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_36AF[0x70];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortItemDefinition*>           DownloadProjectDefinitions;                        // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonActivatableWidget*              CreativeItemListMenuWidget;                        // 0x300(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B2[0x148];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, struct FModuleData>      ModuleToDownloadedItems;                           // 0x450(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_36B3[0x290];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class UTexture2DDynamic*> LinkCodeToPreviewTexture2D;                        // 0x730(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_36B4[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ADownloadOnDemandDirector* GetDefaultObj();

	class UCommonActivatableWidget* ShowErrorMessageModal(class UCommonActivatableWidget* ParentWidget);
	class UCommonActivatableWidget* ShowDownloadOnDemandModal(class UCommonActivatableWidget* ParentWidget);
	void ShowDownloadOnDemandError(enum class EDownloadOnDemandErrorMessage DownloadOnDemandErrorMessage, const class FString& InLinkCode, const class FString& ErrorMessage);
	void ReturnToFrontEnd();
	bool RequestPlaysetFromCode(const class FString& InCode, const class FString& InProjectId, const class FString& InTitleName, class AFortPlayerControllerAthena* InFortPlayerControllerAthena);
	bool RequestLinkCodePreviewFromCode(const class FString& InCode, class AFortPlayerControllerAthena* InFortPlayerControllerAthena);
	void OnNewLinkCodeChanged(TArray<class FString>& UpdatedLinkCodes);
	void OnLinkPreviewImageDownloaded(bool bSuccess, class UTexture2DDynamic* InPreviewTexture);
	bool LoadLinkCodeMetaData(const class FString& InLinkMnemonic, int32 InLinkVersion, class AFortPlayerControllerAthena* InFortPlayerControllerAthena);
	void LinkCodeMetaDataPreviewTextureLoaded(class UTexture2DDynamic* InPreviewTexture);
	void LinkCodeMetaDataLoaded(const class FString& InLinkCode, const class FString& InProjectId, const class FString& InTitleString);
	bool IsUsingDynamicHUDForUI();
	void HermesPlaysetLinkCodeResolved(const class FString& InLinkCode, const class FString& InProjectId, bool bSuccess);
	void HermesPlaysetDownloadedOnServer(const class FString& InLinkCode, bool bSuccess, const class FString& ErrorMessage);
	void HandlePlaysetDownloadedSuccess(bool bSuccess);
	bool CanRemoveProject();
	bool CanAddProject();
	bool CanAddLinkCode(const class FString& InLinkCode);
	void BroadcastDownloadOnDemandShowErrorMessage();
};

}


