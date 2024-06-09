#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EConsumerRole : uint8
{
	Server                         = 0,
	Client                         = 1,
	EConsumerRole_MAX              = 2,
};

enum class EVkLinkPublishMode : uint8
{
	Live                           = 0,
	Playtest                       = 1,
	EVkLinkPublishMode_MAX         = 2,
};

enum class EVkModuleAccess : uint8
{
	Private                        = 0,
	Protected                      = 1,
	Public                         = 2,
	EVkModuleAccess_MAX            = 3,
};

enum class EVkOwnerType : uint8
{
	Account                        = 0,
	Team                           = 1,
	EVkOwnerType_MAX               = 2,
};

enum class EVkValidationFlags : uint8
{
	None                           = 0,
	VF_IgnoreValidation            = 1,
	VF_AllowMissingGameFeatureDataAsset = 2,
	VF_AllowEngineContent          = 4,
	VF_AllowGameContent            = 8,
	VF_NoPreCheckVerse             = 16,
	EVkValidationFlags_MAX         = 17,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct VkEngineTypes.VkNamedId
struct FVkNamedId
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ID;                                                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct VkEngineTypes.VkContentFilter
struct FVkContentFilter
{
public:
	class FString                                Platform;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct VkEngineTypes.VkArtifactOption
struct FVkArtifactOption
{
public:
	class FString                                ArtifactId;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConsumerRole                     Role;                                              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EA2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVkContentFilter                      Filter;                                            // 0x18(0x10)(NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct VkEngineTypes.VkModuleVersionRef
struct FVkModuleVersionRef
{
public:
	class FString                                ModuleId;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Version;                                           // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct VkEngineTypes.VkModuleVersion
struct FVkModuleVersion
{
public:
	class FString                                ModuleId;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EA3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x28 - 0x18)
// ScriptStruct VkEngineTypes.VkModuleVersionWithArtifacts
struct FVkModuleVersionWithArtifacts : public FVkModuleVersion
{
public:
	TArray<struct FVkArtifactOption>             Artifacts;                                         // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x148 (0x148 - 0x0)
// ScriptStruct VkEngineTypes.VkModuleDoc
struct FVkModuleDoc
{
public:
	class FString                                ModuleId;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Created;                                           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Updated;                                           // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVkNamedId                            Author;                                            // 0x20(0x20)(NativeAccessSpecifierPublic)
	class FString                                ProjectID;                                         // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModuleName;                                        // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContentType;                                       // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EConsumerRole, bool>         Relevance;                                         // 0x70(0x50)(NativeAccessSpecifierPublic)
	class FString                                AliasForModuleId;                                  // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    Meta;                                              // 0xD0(0x20)(NativeAccessSpecifierPublic)
	TMap<class FString, int32>                   Labels;                                            // 0xF0(0x50)(NativeAccessSpecifierPublic)
	int32                                        LatestVersion;                                     // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EA4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct VkEngineTypes.VkContentPackage
struct FVkContentPackage
{
public:
	class FString                                ProjectID;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           ProjectFlags;                                      // 0x10(0x50)(NativeAccessSpecifierPublic)
	TArray<struct FVkModuleVersionWithArtifacts> Content;                                           // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct VkEngineTypes.VkModuleBinaries
struct FVkModuleBinaries
{
public:
	class FString                                BaseURL;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Manifest;                                          // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Files;                                             // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	double                                       TotalSizeKb;                                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ManifestSizeKb;                                    // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ManifestDiskSizeKb;                                // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ManifestDownloadSizeKb;                            // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct VkEngineTypes.VkResolvedModule
struct FVkResolvedModule
{
public:
	class FString                                ModuleId;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVkModuleBinaries                     Binaries;                                          // 0x10(0x50)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct VkEngineTypes.VkContentManifest
struct FVkContentManifest
{
public:
	TArray<struct FVkResolvedModule>             Content;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct VkEngineTypes.VkBuildVersion
struct FVkBuildVersion
{
public:
	class FString                                Major;                                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Minor;                                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Patch;                                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct VkEngineTypes.VkJobOutput
struct FVkJobOutput
{
public:
	class FString                                BaseURL;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalSizeKb;                                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EA6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Files;                                             // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Manifest;                                          // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x168 (0x168 - 0x0)
// ScriptStruct VkEngineTypes.VkModuleVersionDoc
struct FVkModuleVersionDoc
{
public:
	class FString                                ModuleId;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EA7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProjectID;                                         // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVkModuleAccess                   Access;                                            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EA8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             Created;                                           // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVkNamedId                            Author;                                            // 0x38(0x20)(NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    Meta;                                              // 0x58(0x20)(NativeAccessSpecifierPublic)
	TArray<struct FVkModuleVersionRef>           Dependencies;                                      // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVkJobOutput                          StagedFiles;                                       // 0x88(0x38)(NativeAccessSpecifierPublic)
	struct FVkBuildVersion                       SourceVersion;                                     // 0xC0(0x18)(NativeAccessSpecifierPublic)
	class FString                                ContentType;                                       // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EConsumerRole, bool>         Relevance;                                         // 0xE8(0x50)(NativeAccessSpecifierPublic)
	class FString                                ArtifactKey;                                       // 0x138(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Checksum;                                          // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVkArtifactOption>             Artifacts;                                         // 0x158(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct VkEngineTypes.VkPublishedLink
struct FVkPublishedLink
{
public:
	class FString                                LinkCode;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LinkVersion;                                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EA9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             LastPublished;                                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RootModuleId;                                      // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ModuleVersion;                                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EAA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MatchmakingScheme;                                 // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct VkEngineTypes.VkProjectDoc
struct FVkProjectDoc
{
public:
	class FString                                ProjectID;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Created;                                           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVkNamedId                            Author;                                            // 0x18(0x20)(NativeAccessSpecifierPublic)
	enum class EVkOwnerType                      OwnerType;                                         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EAB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVkNamedId                            Owner;                                             // 0x40(0x20)(NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    Meta;                                              // 0x60(0x20)(NativeAccessSpecifierPublic)
	struct FVkPublishedLink                      LiveLink;                                          // 0x80(0x48)(NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct VkEngineTypes.VkProjectUserInfo
struct FVkProjectUserInfo
{
public:
	class FString                                ProjectID;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccountId;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Title;                                             // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasStar;                                           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EAC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, bool>                    Access;                                            // 0x38(0x50)(NativeAccessSpecifierPublic)
	struct FVkPublishedLink                      PlaytestLink;                                      // 0x88(0x48)(NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct VkEngineTypes.VkCreateProjectRequest
struct FVkCreateProjectRequest
{
public:
	class FString                                DesiredProjectId;                                  // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    Meta;                                              // 0x10(0x20)(NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct VkEngineTypes.VkCreateModuleRequest
struct FVkCreateModuleRequest
{
public:
	class FString                                ModuleName;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    Meta;                                              // 0x10(0x20)(NativeAccessSpecifierPublic)
	class FString                                ContentType;                                       // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EConsumerRole, bool>         Relevance;                                         // 0x40(0x50)(NativeAccessSpecifierPublic)
	class FString                                DesiredModuleId;                                   // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct VkEngineTypes.VkCreateModuleVersionRequest
struct FVkCreateModuleVersionRequest
{
public:
	TMap<class FString, class FString>           RawFiles;                                          // 0x0(0x50)(NativeAccessSpecifierPublic)
	TArray<struct FVkModuleVersionRef>           Dependencies;                                      // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    Meta;                                              // 0x60(0x20)(NativeAccessSpecifierPublic)
	class FString                                Checksum;                                          // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct VkEngineTypes.VkResolvedContent
struct FVkResolvedContent
{
public:
	struct FVkModuleVersionRef                   Root;                                              // 0x0(0x20)(NativeAccessSpecifierPublic)
	TMap<class FString, int32>                   Resolutions;                                       // 0x20(0x50)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct VkEngineTypes.VkVersionedLinkCode
struct FVkVersionedLinkCode
{
public:
	class FString                                Mnemonic;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EB0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct VkEngineTypes.VkSnapshotSaveRequest
struct FVkSnapshotSaveRequest
{
public:
	struct FVkResolvedContent                    Content;                                           // 0x0(0x70)(NativeAccessSpecifierPublic)
	TArray<struct FVkVersionedLinkCode>          Palette;                                           // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                MapPath;                                           // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct VkEngineTypes.VkProjectSnapshot
struct FVkProjectSnapshot
{
public:
	class FString                                UniqueId;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProjectID;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccountId;                                         // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             CreatedAt;                                         // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DeltaFileIndex;                                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EB2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVkResolvedContent                    Content;                                           // 0x40(0x70)(NativeAccessSpecifierPublic)
	TArray<struct FVkVersionedLinkCode>          Palette;                                           // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                MapPath;                                           // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0xA0 - 0x70)
// ScriptStruct VkEngineTypes.VkPublishRequest
struct FVkPublishRequest : public FVkResolvedContent
{
public:
	class FString                                MatchmakingScheme;                                 // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    Meta;                                              // 0x80(0x20)(NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct VkEngineTypes.VkProjectSearchResult
struct FVkProjectSearchResult
{
public:
	class FString                                ProjectID;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Created;                                           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Updated;                                           // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    Meta;                                              // 0x20(0x20)(NativeAccessSpecifierPublic)
	class FString                                LinkCode;                                          // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct VkEngineTypes.VkLaunchData_LaunchLinkCode
struct FVkLaunchData_LaunchLinkCode
{
public:
	class FString                                LinkCode;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EB3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct VkEngineTypes.VkLaunchData_JoinMatchmakingSession
struct FVkLaunchData_JoinMatchmakingSession
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct VkEngineTypes.VkProjectPlaytestAccessRequest
struct FVkProjectPlaytestAccessRequest
{
public:
	TArray<class FString>                        Users;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x5 (0x5 - 0x0)
// ScriptStruct VkEngineTypes.VkProjectAccessControl
struct FVkProjectAccessControl
{
public:
	bool                                         Read;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Edit;                                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Operate;                                           // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Publish;                                           // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Admin;                                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct VkEngineTypes.VkProjectPlaytestAccessResult
struct FVkProjectPlaytestAccessResult
{
public:
	struct FVkNamedId                            Owner;                                             // 0x0(0x20)(NativeAccessSpecifierPublic)
	class FString                                OwnerType;                                         // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FVkProjectAccessControl> Playtesters;                                       // 0x30(0x50)(NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct VkEngineTypes.VkMetaDataFlags
struct FVkMetaDataFlags
{
public:
	TMap<class FString, class FString>           _validation_flags;                                 // 0x0(0x50)(NativeAccessSpecifierPrivate)
};

}


