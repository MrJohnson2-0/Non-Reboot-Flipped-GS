#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x150 - 0x30)
// Class LauncherSocialDefaults.ChatColorSchemeDataAsset
class UChatColorSchemeDataAsset : public UDataAsset
{
public:
	struct FChatColorScheme                      ChatColorData;                                     // 0x30(0x120)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChatColorSchemeDataAsset* GetDefaultObj();

};

// 0x370 (0x3A0 - 0x30)
// Class LauncherSocialDefaults.SocialActionButtonStyleDataAsset
class USocialActionButtonStyleDataAsset : public UDataAsset
{
public:
	struct FButtonStyle                          Style;                                             // 0x30(0x370)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialActionButtonStyleDataAsset* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class LauncherSocialDefaults.SocialChatChromeColorSchemeDataAsset
class USocialChatChromeColorSchemeDataAsset : public UDataAsset
{
public:
	struct FChatChromeColorScheme                Style;                                             // 0x30(0x50)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialChatChromeColorSchemeDataAsset* GetDefaultObj();

};

// 0x68 (0x98 - 0x30)
// Class LauncherSocialDefaults.SocialChatChromeMarginsDataAsset
class USocialChatChromeMarginsDataAsset : public UDataAsset
{
public:
	struct FChatChromeMargins                    Style;                                             // 0x30(0x64)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CF1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialChatChromeMarginsDataAsset* GetDefaultObj();

};

// 0xA80 (0xAB0 - 0x30)
// Class LauncherSocialDefaults.SocialChatChromeStyleDataAsset
class USocialChatChromeStyleDataAsset : public UDataAsset
{
public:
	struct FChatChromeStyle                      Style;                                             // 0x30(0xA80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialChatChromeStyleDataAsset* GetDefaultObj();

};

// 0x820 (0x850 - 0x30)
// Class LauncherSocialDefaults.SocialChatMarkupStyleDataAsset
class USocialChatMarkupStyleDataAsset : public UDataAsset
{
public:
	struct FChatMarkupStyle                      Style;                                             // 0x30(0x820)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialChatMarkupStyleDataAsset* GetDefaultObj();

};

// 0x1880 (0x18B0 - 0x30)
// Class LauncherSocialDefaults.SocialChatStyleDataAsset
class USocialChatStyleDataAsset : public UDataAsset
{
public:
	struct FChatStyle                            Style;                                             // 0x30(0x1880)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialChatStyleDataAsset* GetDefaultObj();

};

// 0x950 (0x980 - 0x30)
// Class LauncherSocialDefaults.SocialCheckBoxStyleDataAsset
class USocialCheckBoxStyleDataAsset : public UDataAsset
{
public:
	struct FCheckBoxStyle                        Style;                                             // 0x30(0x950)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialCheckBoxStyleDataAsset* GetDefaultObj();

};

// 0x240 (0x270 - 0x30)
// Class LauncherSocialDefaults.SocialFontStyleDataAsset
class USocialFontStyleDataAsset : public UDataAsset
{
public:
	struct FSocialFontStyle                      Style;                                             // 0x30(0x240)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialFontStyleDataAsset* GetDefaultObj();

};

// 0x200 (0x230 - 0x30)
// Class LauncherSocialDefaults.SocialListMarginsDataAsset
class USocialListMarginsDataAsset : public UDataAsset
{
public:
	struct FSocialListMargins                    Style;                                             // 0x30(0x200)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialListMarginsDataAsset* GetDefaultObj();

};

// 0x3390 (0x33C0 - 0x30)
// Class LauncherSocialDefaults.SocialListStyleDataAsset
class USocialListStyleDataAsset : public UDataAsset
{
public:
	struct FSocialListStyle                      Style;                                             // 0x30(0x3390)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialListStyleDataAsset* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class LauncherSocialDefaults.SocialProfanityDataAsset
class USocialProfanityDataAsset : public UDataAsset
{
public:
	TArray<struct FProfanityData>                ProfanityData;                                     // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialProfanityDataAsset* GetDefaultObj();

};

// 0x950 (0x980 - 0x30)
// Class LauncherSocialDefaults.SocialRadioBoxStyleDataAsset
class USocialRadioBoxStyleDataAsset : public UDataAsset
{
public:
	struct FCheckBoxStyle                        Style;                                             // 0x30(0x950)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialRadioBoxStyleDataAsset* GetDefaultObj();

};

// 0x650 (0x680 - 0x30)
// Class LauncherSocialDefaults.SocialScrollBarStyleDataAsset
class USocialScrollBarStyleDataAsset : public UDataAsset
{
public:
	struct FScrollBarStyle                       Style;                                             // 0x30(0x650)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialScrollBarStyleDataAsset* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class LauncherSocialDefaults.SocialSoundSchemaDataAsset
class USocialSoundSchemaDataAsset : public UDataAsset
{
public:
	struct FSocialSoundSchema                    SoundSchema;                                       // 0x30(0x48)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialSoundSchemaDataAsset* GetDefaultObj();

};

// 0x88D0 (0x8900 - 0x30)
// Class LauncherSocialDefaults.SocialStyleDataAsset
class USocialStyleDataAsset : public UDataAsset
{
public:
	class USocialFontStyleDataAsset*             SmallFontStyle;                                    // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialFontStyleDataAsset*             NormalFontStyle;                                   // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialFontStyleDataAsset*             LargeFontStyle;                                    // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialFontStyleDataAsset*             ChatFontStyle;                                     // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialListStyleDataAsset*             SocialListStyle;                                   // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialListMarginsDataAsset*           SocialListMargins;                                 // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatStyleDataAsset*             ChatStyle;                                         // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatChromeStyleDataAsset*       ChatChromeStyle;                                   // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatChromeMarginsDataAsset*     ChatChromeMargins;                                 // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatChromeColorSchemeDataAsset* ChatChromeColorScheme;                             // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UChatColorSchemeDataAsset*             ChatColorScheme;                                   // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialSoundSchemaDataAsset*           SoundSchema;                                       // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialActionButtonStyleDataAsset*     ActionButtonStyle;                                 // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialCheckBoxStyleDataAsset*         CheckBoxStyle;                                     // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialRadioBoxStyleDataAsset*         RadioBoxStyle;                                     // 0xA0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialScrollBarStyleDataAsset*        ScrollBoxStyle;                                    // 0xA8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatMarkupStyleDataAsset*       MarkupStyle;                                       // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialProfanityDataAsset*             ProfanityDataAsset;                                // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CF6[0x8840];                                  // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialStyleDataAsset* GetDefaultObj();

};

}


