#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOnlineRadioSourceType : uint8
{
	Epic                           = 0,
	EOnlineRadioSourceType_MAX     = 1,
};

enum class ERadioSource : uint8
{
	Invalid                        = 0,
	Vehicle                        = 1,
	ERadioSource_MAX               = 2,
};

enum class EStreamingRadioSourceState : uint8
{
	None                           = 0,
	Loading                        = 1,
	LoadingPlayer                  = 2,
	LoadedPlayer                   = 3,
	Playing                        = 4,
	EStreamingRadioSourceState_MAX = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct SrirachaRanch.AthenaRadioStation
struct FAthenaRadioStation
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                StationImage;                                      // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ResourceID;                                        // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SrirachaRanch.SrirachaInputMappingData
struct FSrirachaInputMappingData
{
public:
	class FName                                  MainActionName;                                    // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GamepadActionName;                                 // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x10(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SrirachaRanch.SrirachaPerClassSpecialSeats
struct FSrirachaPerClassSpecialSeats
{
public:
	TArray<int32>                                OutsideSeatIndices;                                // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct SrirachaRanch.StreamingRadioSourceData
struct FStreamingRadioSourceData
{
public:
	enum class EStreamingRadioSourceState        State;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BB5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PlayingIndex;                                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeoutSeconds;                                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BB6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAthenaRadioStation                   SourceOverride;                                    // 0x10(0x38)(NativeAccessSpecifierPublic)
};

}

