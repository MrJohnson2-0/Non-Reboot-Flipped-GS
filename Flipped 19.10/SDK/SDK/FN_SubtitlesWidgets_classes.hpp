#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// Class SubtitlesWidgets.FortMediaSubtitlesPlayer
class UFortMediaSubtitlesPlayer : public UObject
{
public:
	uint8                                        Pad_39BD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlays*                             SourceSubtitles;                                   // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39BE[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMediaSubtitlesPlayer* GetDefaultObj();

	void Stop();
	void SetSubtitles(class UOverlays* Subtitles);
	void Play();
	void BindToMediaPlayer(class UMediaPlayer* InMediaPlayer);
};

// 0x3D0 (0x4D0 - 0x100)
// Class SubtitlesWidgets.SubtitleDisplay
class USubtitleDisplay : public UWidget
{
public:
	struct FSubtitleFormat                       Format;                                            // 0x100(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_39C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USubtitleDisplayOptions*               Options;                                           // 0x108(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WrapTextAt;                                        // 0x110(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreviewMode;                                      // 0x114(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  PreviewText;                                       // 0x118(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       GeneratedStyle;                                    // 0x130(0x2E0)(Transient, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           GeneratedBackgroundBorder;                         // 0x410(0xB0)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39CF[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USubtitleDisplay* GetDefaultObj();

	bool HasSubtitles();
};

// 0x3B8 (0x3E0 - 0x28)
// Class SubtitlesWidgets.SubtitleDisplayNative
class USubtitleDisplayNative : public UObject
{
public:
	uint8                                        Pad_39D4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USubtitleDisplayOptions*               Options;                                           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39D5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTextBlockStyle                       GeneratedStyle;                                    // 0x40(0x2E0)(Transient, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           GeneratedBackgroundBorder;                         // 0x320(0xB0)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39D6[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USubtitleDisplayNative* GetDefaultObj();

};

// 0x160 (0x190 - 0x30)
// Class SubtitlesWidgets.SubtitleDisplayOptions
class USubtitleDisplayOptions : public UDataAsset
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x30(0x58)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DisplayTextSizes[0x5];                             // 0x88(0x14)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DisplayTextColors[0x2];                            // 0x9C(0x20)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisplayBorderSize[0x3];                            // 0xBC(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisplayBackgroundOpacity[0x5];                     // 0xC8(0x14)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BackgroundBrush;                                   // 0xE0(0xB0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USubtitleDisplayOptions* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class SubtitlesWidgets.SubtitleDisplaySubsystem
class USubtitleDisplaySubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_39D9[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubtitleFormat                       SubtitleFormat;                                    // 0x48(0x4)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_39DA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USubtitleDisplaySubsystem* GetDefaultObj();

};

}


