#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMoleQuickChatTokenState : int32
{
	None                           = 0,
	AnyPlayer                      = 1,
	AlivePlayer                    = 2,
	DeadPlayer                     = 3,
	Location                       = 4,
	EMoleQuickChatTokenState_MAX   = 5,
};

enum class EMoleQuickChatPreviousState : uint8
{
	Filled                         = 0,
	Skipped                        = 1,
	EMoleQuickChatPreviousState_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x58 - 0x8)
// ScriptStruct MoleUI.MoleAbilityUIData
struct FMoleAbilityUIData : public FTableRowBase
{
public:
	class UObject*                               Icon;                                              // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  HUDText;                                           // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  HUDSubText;                                        // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct MoleUI.MoleLocationData
struct FMoleLocationData : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  QuickChatName;                                     // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct MoleUI.MolePlayerUIData
struct FMolePlayerUIData : public FTableRowBase
{
public:
	struct FColor                                Color;                                             // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DecoratorID;                                       // 0xC(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A53[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct MoleUI.MoleQuickChatMessageData
struct FMoleQuickChatMessageData : public FTableRowBase
{
public:
	class FText                                  Message;                                           // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  SelfMessage;                                       // 0x20(0x18)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A55[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x38 - 0x8)
// ScriptStruct MoleUI.MoleQuickChatStepData
struct FMoleQuickChatStepData : public FTableRowBase
{
public:
	class FText                                  Text;                                              // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	bool                                         bIsRequired;                                       // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A57[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMoleQuickChatTokenState          TokenType;                                         // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EMoleQuickChatPreviousState> PreviousTokenStates;                               // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct MoleUI.MoleQuickChatActionData
struct FMoleQuickChatActionData : public FTableRowBase
{
public:
	class FText                                  ActionName;                                        // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	bool                                         OmitSelf;                                          // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A5B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMoleQuickChatStepData>        Steps;                                             // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMoleQuickChatMessageData>     Messages;                                          // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A5D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x68 - 0x8)
// ScriptStruct MoleUI.MoleQuickChatCategoryData
struct FMoleQuickChatCategoryData : public FTableRowBase
{
public:
	class FText                                  CategoryName;                                      // 0x8(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FLinearColor                          CategoryColor;                                     // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             CategoryImage;                                     // 0x30(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMoleQuickChatActionData>      Actions;                                           // 0x58(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct MoleUI.MoleQuickChatData
struct FMoleQuickChatData : public FTableRowBase
{
public:
	TArray<struct FMoleQuickChatCategoryData>    Categories;                                        // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MoleUI.MoleQuickChatSelection
struct FMoleQuickChatSelection
{
public:
	uint8                                        Pad_3A63[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct MoleUI.MoleQuickChatRawMessage
struct FMoleQuickChatRawMessage
{
public:
	class APlayerState*                          Sender;                                            // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  RawMessage;                                        // 0x8(0x18)(Transient, NativeAccessSpecifierPublic)
	struct FMoleQuickChatSelection               Selection;                                         // 0x20(0x20)(Transient, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MoleUI.MoleTaskObjectiveUIInfo
struct FMoleTaskObjectiveUIInfo
{
public:
	class FText                                  ObjectiveText;                                     // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        CurrentValue;                                      // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetValue;                                       // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MoleUI.MoleVotingPlayerInfo
struct FMoleVotingPlayerInfo
{
public:
	class APlayerState*                          PlayerState;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemDefinition*                   PlayerItemDefinition;                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


