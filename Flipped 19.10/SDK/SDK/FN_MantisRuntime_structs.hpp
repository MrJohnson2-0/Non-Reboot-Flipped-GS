#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFortMantisTechniqueActivationInputType : uint8
{
	Primary                        = 0,
	Secondary                      = 1,
	Max_Invalid                    = 2,
	EFortMantisTechniqueActivationInputType_MAX = 3,
};

enum class EFortMantisNotifyEvent : uint8
{
	Invalid                        = 0,
	Branch                         = 1,
	EFortMantisNotifyEvent_MAX     = 2,
};

enum class EFortMantisNotifyWindow : uint8
{
	Invalid                        = 0,
	Input                          = 1,
	Execution                      = 2,
	Damage                         = 3,
	RootMotionWarp                 = 4,
	EFortMantisNotifyWindow_MAX    = 5,
};

enum class EFortMantisNotifyRotationWarpRateRule : uint8
{
	Snap                           = 0,
	WindowDurationLerp             = 1,
	EFortMantisNotifyRotationWarpRateRule_MAX = 2,
};

enum class EFortMantisBranchRule : uint8
{
	Off                            = 0,
	Any                            = 1,
	Starter                        = 2,
	EFortMantisBranchRule_MAX      = 3,
};

enum class EFortMantisBranchPath : uint8
{
	Default                        = 0,
	Path_1                         = 1,
	Path_2                         = 2,
	Path_3                         = 3,
	Path_4                         = 4,
	Path_5                         = 5,
	Blocked                        = 6,
	EFortMantisBranchPath_MAX      = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct MantisRuntime.FortMantisRootMotionWarpInfo
struct FFortMantisRootMotionWarpInfo
{
public:
	class AActor*                                WarpTarget;                                        // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_110B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x100 - 0x98)
// ScriptStruct MantisRuntime.FortRootMotionSource_Mantis
struct FFortRootMotionSource_Mantis : public FRootMotionSource
{
public:
	float                                        CurrentTechniqueTime;                              // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_110C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          TechniqueMontage;                                  // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortMantisRootMotionWarpInfo         WarpInfo;                                          // 0xA8(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               LatestRepMovementLocation;                         // 0xC0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_110D[0x34];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct MantisRuntime.FortMantisTargetData
struct FFortMantisTargetData : public FGameplayAbilityTargetData
{
public:
	struct FFortMantisRootMotionWarpInfo         TechniqueWarpInfo;                                 // 0x8(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                        TechniqueDataIndex;                                // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_110F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct MantisRuntime.FortMantisTechniqueData
struct FFortMantisTechniqueData
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartsSequence;                                   // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEndsSequence;                                     // 0x9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1110[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InputWindowDelay;                                  // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          Montage;                                           // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseRootMotion;                                    // 0x18(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMantisTechniqueActivationInputType ActivationInputType;                               // 0x19(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1111[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagQuery                     ActivationTagQuery;                                // 0x20(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     OngoingTagQuery;                                   // 0x68(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ApplicationTag;                                    // 0xB0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MantisRuntime.FortMantisTechniqueBranch
struct FFortMantisTechniqueBranch
{
public:
	class FName                                  FromTechnique;                                     // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ToTechnique;                                       // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMantisBranchPath             BranchPath;                                        // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1112[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MantisRuntime.FortMantisMontageData
struct FFortMantisMontageData
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1113[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


