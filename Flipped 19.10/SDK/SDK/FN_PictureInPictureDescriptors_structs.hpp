#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPictureInPictureAction : uint8
{
	NEXT                           = 0,
	PREVIOUS                       = 1,
	PLAY                           = 2,
	PAUSE                          = 3,
	PLAYPAUSE                      = 4,
	LIKE                           = 5,
	REPORT                         = 6,
	EXIT                           = 7,
	UNLIKE                         = 8,
	TOGGLELIKE                     = 9,
	Count                          = 10,
	PictureInPictureAction_MAX     = 11,
};

enum class EPictureInPictureSourceType : uint8
{
	NONE                           = 0,
	URL                            = 1,
	BLURL                          = 2,
	EXTERNAL_ASSETS                = 3,
	PictureInPictureSourceType_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x118 - 0x0)
// ScriptStruct PictureInPictureDescriptors.PiPPartnerSource
struct FPiPPartnerSource
{
public:
	uint8                                        Pad_397B[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EPictureInPictureSourceType       SourceType;                                        // 0x48(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_397C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x50(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             StartTime;                                         // 0x60(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             EndTime;                                           // 0x68(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortMediaEventsStreamAssets          AssetConfig;                                       // 0x70(0x58)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                EventIconUrl;                                      // 0xC8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEpicCMSImage*                         CMSImage;                                          // 0xD8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPictureInPictureSourceActionData*     ActionData;                                        // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        PlatformBlacklist;                                 // 0xE8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        GameplayTagBlacklist;                              // 0xF8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        GameplayTagWhitelist;                              // 0x108(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct PictureInPictureDescriptors.PictureInPictureAnalyticsPayload
struct FPictureInPictureAnalyticsPayload
{
public:
	TMap<enum class EPictureInPictureAction, int32> PartnerActionTally;                                // 0x0(0x50)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_3986[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct PictureInPictureDescriptors.PIPVideoPlayerAssetConfig
struct FPIPVideoPlayerAssetConfig
{
public:
	class UMediaTexture*                         VideoTexture;                                      // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaPlayer*                          VideoPlayer;                                       // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    VideoMaterial;                                     // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    ThumbnailMaterial;                                 // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LoadingScreenSize;                                 // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LoadingScreenPosition;                             // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortStreamMediaSource*                MediaSource;                                       // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSoundComponent*                  SoundComponent;                                    // 0x38(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundClass*                           SoundClass;                                        // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundMix*                             ActiveSoundMix;                                    // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmixBase*                      DefaultSubmix;                                     // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmixBase*                      LicensedSubmix;                                    // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortMediaSubtitlesPlayer*             SubtitlePlayer;                                    // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULocalizedOverlays*                    SubtitleOverlays;                                  // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USubtitleDisplayOptions*               SubtitleDisplayOptions;                            // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct PictureInPictureDescriptors.PIPVideoPlayerConfig
struct FPIPVideoPlayerConfig
{
public:
	class FString                                Mimetype;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BlurlVUID;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoopEnabled;                                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoPlay;                                         // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3993[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                VideoURL;                                          // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShareBlocked;                                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3994[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             EventStartTime;                                    // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct PictureInPictureDescriptors.PictureInPictureActionConfig
struct FPictureInPictureActionConfig
{
public:
	enum class EPictureInPictureAction           ActionType;                                        // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3996[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           ActionBrush;                                       // 0x10(0xB0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ActionText;                                        // 0xC0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_3997[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


