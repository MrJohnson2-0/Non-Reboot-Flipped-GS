#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EBattlePassLandingPageSpecialEntryType : uint8
{
	None                           = 0,
	Subscription                   = 1,
	CharacterCustomizer            = 2,
	SpecialCharacter               = 3,
	COUNT                          = 4,
	EBattlePassLandingPageSpecialEntryType_MAX = 5,
};

enum class EBattlePassTileAvailabilityStates : uint8
{
	Invalid                        = 0,
	Available                      = 1,
	Owned                          = 2,
	Locked                         = 3,
	BattlePassTileAvailabilityStates_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// ScriptStruct BattlePassBase.BattlePassLandingPageEntryPreviewInfo
struct FBattlePassLandingPageEntryPreviewInfo
{
public:
	enum class EBattlePassLandingPageSpecialEntryType SpecialEntryType;                                  // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E62[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemType>             SubscriptionItemTypesToDisplay;                    // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SpecialCharacterVariantChannelToModify;            // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SpecialCharacterActiveVariantTag;                  // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UFortItemDefinition>> PreviewItems;                                      // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                        TransitionTime;                                    // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E64[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct BattlePassBase.BattlePassEntrySelectedParams
struct FBattlePassEntrySelectedParams
{
public:
	uint8                                        Pad_E66[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


