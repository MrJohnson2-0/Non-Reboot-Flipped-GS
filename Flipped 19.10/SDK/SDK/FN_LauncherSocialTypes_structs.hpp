#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// ScriptStruct LauncherSocialTypes.ChatChromeColorScheme
struct FChatChromeColorScheme
{
public:
	struct FLinearColor                          ChatEntryBackgroundColor;                          // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          NoneActiveTabColor;                                // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TabFontColor;                                      // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TabFontColorInverted;                              // 0x30(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ChatBackgroundColor;                               // 0x40(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x64 (0x64 - 0x0)
// ScriptStruct LauncherSocialTypes.ChatChromeMargins
struct FChatChromeMargins
{
public:
	float                                        TabWidth;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TabPadding;                                        // 0x4(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ChatWindowPadding;                                 // 0x14(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ChatWindowToEntryMargin;                           // 0x24(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ChatChannelPadding;                                // 0x34(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               UserListButtonPadding;                             // 0x44(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               UserListIconPadding;                               // 0x54(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xA80 (0xA80 - 0x0)
// ScriptStruct LauncherSocialTypes.ChatChromeStyle
struct FChatChromeStyle
{
public:
	struct FSlateBrush                           UserListBrush;                                     // 0x0(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ChatBackgroundBrush;                               // 0xB0(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ChatEntryBackgroundBrush;                          // 0x160(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ChannelBackgroundBrush;                            // 0x210(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           TabBackgroundBrush;                                // 0x2C0(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          TabSelectorButtonStyle;                            // 0x370(0x370)(Edit, NativeAccessSpecifierPublic)
	struct FMargin                               TabOptionPadding;                                  // 0x6E0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               TabContentPadding;                                 // 0x6F0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               TabClosePadding;                                   // 0x700(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FButtonStyle                          UserListButtonStyle;                               // 0x710(0x370)(Edit, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// ScriptStruct LauncherSocialTypes.ChatColorScheme
struct FChatColorScheme
{
public:
	struct FLinearColor                          TimeStampColor;                                    // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DefaultChatColor;                                  // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          WhisperChatColor;                                  // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GlobalChatColor;                                   // 0x30(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FounderChatColor;                                  // 0x40(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GameChatColor;                                     // 0x50(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TeamChatColor;                                     // 0x60(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PartyChatColor;                                    // 0x70(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          AdminChatColor;                                    // 0x80(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GameAdminChatColor;                                // 0x90(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          WhisperHyperlinkChatColor;                         // 0xA0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GlobalHyperlinkChatColor;                          // 0xB0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FounderHyperlinkChatColor;                         // 0xC0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GameHyperlinkChatColor;                            // 0xD0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TeamHyperlinkChatColor;                            // 0xE0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PartyHyperlinkChatColor;                           // 0xF0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          EnemyColor;                                        // 0x100(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FriendlyColor;                                     // 0x110(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x820 (0x820 - 0x0)
// ScriptStruct LauncherSocialTypes.ChatMarkupStyle
struct FChatMarkupStyle
{
public:
	struct FButtonStyle                          MarkupButtonStyle;                                 // 0x0(0x370)(Edit, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       MarkupTextStyle;                                   // 0x370(0x2E0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MarkupBackground;                                  // 0x650(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ButtonColor;                                       // 0x700(0x14)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ButtonHoverColor;                                  // 0x714(0x14)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           TipColor;                                          // 0x728(0x14)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C4B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           SeperatorBrush;                                    // 0x740(0xB0)(Edit, NativeAccessSpecifierPublic)
	float                                        SeperatorThickness;                                // 0x7F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               MarkupPadding;                                     // 0x7F4(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ButtonPadding;                                     // 0x804(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C4C[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1880 (0x1880 - 0x0)
// ScriptStruct LauncherSocialTypes.ChatStyle
struct FChatStyle
{
public:
	struct FEditableTextBoxStyle                 ChatEntryTextStyle;                                // 0x0(0xA00)(Edit, NativeAccessSpecifierPublic)
	struct FEditableTextBoxStyle                 ChatDisplayTextStyle;                              // 0xA00(0xA00)(Edit, NativeAccessSpecifierPublic)
	struct FScrollBoxStyle                       ScrollBorderStyle;                                 // 0x1400(0x2D0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MessageNotificationBrush;                          // 0x16D0(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FMargin                               ChatEntryPadding;                                  // 0x1780(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ChatEntryHeight;                                   // 0x1790(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C4E[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           ChatMenuBackgroundBrush;                           // 0x17A0(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FMargin                               FriendActionPadding;                               // 0x1850(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendActionHeaderPadding;                         // 0x1860(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendActionStatusMargin;                          // 0x1870(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x240 (0x240 - 0x0)
// ScriptStruct LauncherSocialTypes.SocialFontStyle
struct FSocialFontStyle
{
public:
	struct FSlateFontInfo                        FontSmall;                                         // 0x0(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        FontSmallBold;                                     // 0x58(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        FontNormal;                                        // 0xB0(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        FontNormalBold;                                    // 0x108(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        FontLarge;                                         // 0x160(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        FontLargeBold;                                     // 0x1B8(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DefaultFontColor;                                  // 0x210(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          InvertedFontColor;                                 // 0x220(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DefaultDullFontColor;                              // 0x230(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x200 (0x200 - 0x0)
// ScriptStruct LauncherSocialTypes.SocialListMargins
struct FSocialListMargins
{
public:
	struct FVector2D                             UserPresenceImageSize;                             // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               HeaderButtonMargin;                                // 0x8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendsListMargin;                                 // 0x18(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendsListNoFriendsMargin;                        // 0x28(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendsListHeaderMargin;                           // 0x38(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendsListHeaderCountMargin;                      // 0x48(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               HeaderButtonContentMargin;                         // 0x58(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendItemMargin;                                  // 0x68(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendItemStatusMargin;                            // 0x78(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendTipStatusMargin;                             // 0x88(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendItemPresenceMargin;                          // 0x98(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendItemPlatformMargin;                          // 0xA8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendItemTextScrollerMargin;                      // 0xB8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ConfirmationBorderMargin;                          // 0xC8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ConfirmationButtonMargin;                          // 0xD8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ConfirmationButtonContentMargin;                   // 0xE8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               NoneFriendContentMargin;                           // 0xF8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        NoneFriendContentHeight;                           // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoneFriendIconWidth;                               // 0x10C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuBackIconMargin;                             // 0x110(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuPageIconMargin;                             // 0x120(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               RadioSettingTitleMargin;                           // 0x130(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuSearchIconMargin;                           // 0x140(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuSearchTextMargin;                           // 0x150(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuBackButtonMargin;                           // 0x160(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuSettingButtonMargin;                        // 0x170(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuListMargin;                                 // 0x180(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SubMenuSeperatorThickness;                         // 0x190(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PresenceSeperatorThickness;                        // 0x194(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               FriendTipMargin;                                   // 0x198(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendTipPresenceMargin;                           // 0x1A8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendTipSeperatorMargin;                          // 0x1B8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ToolTipMargin;                                     // 0x1C8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               TipStatusMargin;                                   // 0x1D8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               AddButtonMargin;                                   // 0x1E8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             AddButtonSpacing;                                  // 0x1F8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3390 (0x3390 - 0x0)
// ScriptStruct LauncherSocialTypes.SocialListStyle
struct FSocialListStyle
{
public:
	struct FButtonStyle                          GlobalChatButtonStyle;                             // 0x0(0x370)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           GlobalChatIcon;                                    // 0x370(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          FriendItemButtonStyle;                             // 0x420(0x370)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          ConfirmButtonStyle;                                // 0x790(0x370)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          CancelButtonStyle;                                 // 0xB00(0x370)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ButtonContentColor;                                // 0xE70(0x14)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ButtonHoverContentColor;                           // 0xE84(0x14)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C55[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           ActionMenuArrowBrush;                              // 0xEA0(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActionMenuArrowRightBrush;                         // 0xF50(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ActionMenuBackgroundColor;                         // 0x1000(0x14)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C56[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           ToolTipArrowBrush;                                 // 0x1020(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          BackButtonStyle;                                   // 0x10D0(0x370)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          HeaderButtonStyle;                                 // 0x1440(0x370)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          FriendListActionButtonStyle;                       // 0x17B0(0x370)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           AddFriendButtonContentBrush;                       // 0x1B20(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           StatusIconBrush;                                   // 0x1BD0(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           PCIconBrush;                                       // 0x1C80(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ConsoleIconBrush;                                  // 0x1D30(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MobileIconBrush;                                   // 0x1DE0(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FacebookIconBrush;                                 // 0x1E90(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           EpicIconBrush;                                     // 0x1F40(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FriendImageBrush;                                  // 0x1FF0(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           OfflineBrush;                                      // 0x20A0(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           OnlineBrush;                                       // 0x2150(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           AwayBrush;                                         // 0x2200(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SpectateBrush;                                     // 0x22B0(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FriendsContainerBackground;                        // 0x2360(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FriendsListBackground;                             // 0x2410(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FEditableTextBoxStyle                 AddFriendEditableTextStyle;                        // 0x24C0(0xA00)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackBrush;                                         // 0x2EC0(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SelectedOptionBrush;                               // 0x2F70(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SettingsBrush;                                     // 0x3020(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SeperatorBrush;                                    // 0x30D0(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           PresenceSeperatorBrush;                            // 0x3180(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FontSizeBrush;                                     // 0x3230(0xB0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SearchBrush;                                       // 0x32E0(0xB0)(Edit, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LauncherSocialTypes.ProfanityData
struct FProfanityData
{
public:
	class FString                                CountryCode;                                       // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfanityList;                                     // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WhiteList;                                         // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoAdd;                                          // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C59[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct LauncherSocialTypes.SocialSoundSchema
struct FSocialSoundSchema
{
public:
	struct FSlateSound                           MessageReceivedSound;                              // 0x0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           PartyInviteReceivedSound;                          // 0x18(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           FriendInviteReceivedSound;                         // 0x30(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8840 (0x8840 - 0x0)
// ScriptStruct LauncherSocialTypes.SocialStyle
struct FSocialStyle
{
public:
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x0(0x650)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          ActionButtonStyle;                                 // 0x650(0x370)(Edit, NativeAccessSpecifierPublic)
	struct FSocialFontStyle                      SmallFontStyle;                                    // 0x9C0(0x240)(Edit, NativeAccessSpecifierPublic)
	struct FSocialFontStyle                      NormalFontStyle;                                   // 0xC00(0x240)(Edit, NativeAccessSpecifierPublic)
	struct FSocialFontStyle                      LargeFontStyle;                                    // 0xE40(0x240)(Edit, NativeAccessSpecifierPublic)
	struct FSocialFontStyle                      ChatFontStyle;                                     // 0x1080(0x240)(Edit, NativeAccessSpecifierPublic)
	struct FCheckBoxStyle                        CheckBoxStyle;                                     // 0x12C0(0x950)(Edit, NativeAccessSpecifierPublic)
	struct FCheckBoxStyle                        RadioBoxStyle;                                     // 0x1C10(0x950)(Edit, NativeAccessSpecifierPublic)
	struct FSocialListStyle                      SocialListStyle;                                   // 0x2560(0x3390)(Edit, NativeAccessSpecifierPublic)
	struct FSocialListMargins                    SocialListMargins;                                 // 0x58F0(0x200)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChatStyle                            ChatStyle;                                         // 0x5AF0(0x1880)(Edit, NativeAccessSpecifierPublic)
	struct FChatColorScheme                      ChatColorScheme;                                   // 0x7370(0x120)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChatChromeStyle                      ChatChromeStyle;                                   // 0x7490(0xA80)(Edit, NativeAccessSpecifierPublic)
	struct FChatChromeMargins                    ChatChromeMargins;                                 // 0x7F10(0x64)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChatChromeColorScheme                ChatChromeColorScheme;                             // 0x7F74(0x50)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C5A[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FChatMarkupStyle                      ChatMarkupStyle;                                   // 0x7FD0(0x820)(Edit, NativeAccessSpecifierPublic)
	struct FSocialSoundSchema                    SoundSchema;                                       // 0x87F0(0x48)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C5B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


