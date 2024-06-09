#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFortActivityBrowserTagType : uint8
{
	Default                        = 0,
	EpicOriginal                   = 1,
	SquadSize                      = 2,
	MaxPlayers                     = 3,
	XP                             = 4,
	EFortActivityBrowserTagType_MAX = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct DiscoveryBrowserUI.FortActivityScaleFontData
struct FFortActivityScaleFontData
{
public:
	int32                                        CharacterCountStart;                               // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FontSize;                                          // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


