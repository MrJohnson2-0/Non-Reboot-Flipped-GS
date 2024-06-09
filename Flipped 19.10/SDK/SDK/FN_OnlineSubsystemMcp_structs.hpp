#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOnlineLinkModerationStatus : uint8
{
	Unmoderated                    = 0,
	Approved                       = 1,
	Denied                         = 2,
	EOnlineLinkModerationStatus_MAX = 3,
};

enum class ESocialProfilePrivacySettingLevel : uint8
{
	Public                         = 0,
	FriendsOnly                    = 1,
	Private                        = 2,
	ESocialProfilePrivacySettingLevel_MAX = 3,
};

enum class ESocialProfilePrivacySettingBadges : uint8
{
	FriendsOnly                    = 0,
	Private                        = 1,
	ESocialProfilePrivacySettingBadges_MAX = 2,
};

enum class EMutualFriendsPrivacyPolicy : uint8
{
	All                            = 0,
	Friends                        = 1,
	None                           = 2,
	InvalidOrMax                   = 3,
	EMutualFriendsPrivacyPolicy_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct OnlineSubsystemMcp.JsonToxicityEvaluationRequest
struct FJsonToxicityEvaluationRequest
{
public:
	class FString                                Text;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OnlineSubsystemMcp.JsonToxicityBulkEvaluationRequest
struct FJsonToxicityBulkEvaluationRequest
{
public:
	TArray<class FString>                        Texts;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct OnlineSubsystemMcp.JsonToxicityEvaluationResponse
struct FJsonToxicityEvaluationResponse
{
public:
	bool                                         Toxic;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OnlineSubsystemMcp.JsonToxicityBulkEvaluationResponse
struct FJsonToxicityBulkEvaluationResponse
{
public:
	TArray<bool>                                 IsToxic;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}


