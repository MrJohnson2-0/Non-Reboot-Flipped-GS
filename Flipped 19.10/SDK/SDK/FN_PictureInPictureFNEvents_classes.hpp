#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x248 - 0x248)
// Class PictureInPictureFNEvents.LiveEventHUDAd
class ULiveEventHUDAd : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class ULiveEventHUDAd* GetDefaultObj();

	void ShowAdvertisement(bool* Result);
};

// 0x0 (0x28 - 0x28)
// Class PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager
class UPictureInPictureFNEventsCheatManager : public UChildCheatManager
{
public:

	static class UClass* StaticClass();
	static class UPictureInPictureFNEventsCheatManager* GetDefaultObj();

	void StopPiPBouncingLlama();
	void StartPiPBouncingLlama();
	void SelectPiPEvent(const class FString& EventName);
	void RemovePiPEvent(const class FString& EventName);
	void ListPiPEvents();
	void AddPiPEvent(const class FString& EventName, const class FString& VUID);
};

// 0x0 (0xA8 - 0xA8)
// Class PictureInPictureFNEvents.PictureInPictureFNEventsClient
class UPictureInPictureFNEventsClient : public UPictureInPictureClient
{
public:

	static class UClass* StaticClass();
	static class UPictureInPictureFNEventsClient* GetDefaultObj();

};

// 0x20 (0x528 - 0x508)
// Class PictureInPictureFNEvents.PictureInPictureFNEventsController
class UPictureInPictureFNEventsController : public UPictureInPictureMediaController
{
public:
	class UPictureInPictureFNEventsClient*       FNEventsClient;                                    // 0x508(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiveEventHUDAd*                       HUDAdvertWidget;                                   // 0x510(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A99[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPictureInPictureFNEventsController* GetDefaultObj();

	void UpdateClientLoginState(TArray<struct FPiPPartnerSource>& UpdatedSources);
	void OnClientLogoutSuccess();
	void OnClientLoginSuccess();
	void HandleFNMediaRemoveEventsStream(const class FString& InEventName);
	void HandleFNMediaEventsStreams(struct FFortMediaEventsStreamAssets& VideoStreamAssets);
	void ExitEvent();
	void AddPartnerActionAnalytics(const class FString& InPartnerName, enum class EPictureInPictureAction InActionType);
};

}


