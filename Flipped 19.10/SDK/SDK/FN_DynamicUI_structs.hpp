#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDynamicUIStrength : uint8
{
	Weak                           = 0,
	Medium                         = 1,
	Strong                         = 2,
	Required                       = 3,
	EDynamicUIStrength_MAX         = 4,
};

enum class EDynamicUIAnchor : int32
{
	TopLeft                        = 0,
	TopCenter                      = 1,
	TopRight                       = 2,
	CenterLeft                     = 3,
	CenterCenter                   = 4,
	CenterRight                    = 5,
	BottomLeft                     = 6,
	BottomCenter                   = 7,
	BottomRight                    = 8,
	EDynamicUIAnchor_MAX           = 9,
};

enum class EDynamicUISide : uint8
{
	Top                            = 0,
	Bottom                         = 1,
	Left                           = 2,
	Right                          = 3,
	EDynamicUISide_MAX             = 4,
};

enum class EDynamicUIOperator : uint8
{
	Addition                       = 0,
	Substraction                   = 1,
	EDynamicUIOperator_MAX         = 2,
};

enum class EDynamicUIComparison : uint8
{
	Equal                          = 0,
	LessOrEqual                    = 1,
	GreaterOrEqual                 = 2,
	EDynamicUIComparison_MAX       = 3,
};

enum class EDynamicUIZOrder : int32
{
	Back                           = 1000,
	Middle                         = 2000,
	Front                          = 3000,
	Custom                         = 2000,
	CustomMin                      = 0,
	CustomMax                      = 5000,
	Loading                        = 30000,
	Top                            = 50000,
	EDynamicUIZOrder_MAX           = 50001,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct DynamicUI.DynamicUIConstraintWidgetFallback
struct FDynamicUIConstraintWidgetFallback
{
public:
	TSoftClassPtr<class UUserWidget>             TargetWidget;                                      // 0x0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TargetUniqueID;                                    // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DynamicUI.ContextData
struct FContextData
{
public:
	TArray<TWeakObjectPtr<class UObject>>        Contexts;                                          // 0x0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct DynamicUI.DirectorData
struct FDirectorData
{
public:
	TSoftClassPtr<class AActor>                  DirectorClass;                                     // 0x0(0x28)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Instance;                                          // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3696[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct DynamicUI.DynamicUIAllowed
struct FDynamicUIAllowed
{
public:
	TSoftClassPtr<class UUserWidget>             Widget;                                            // 0x0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDynamicUIZOrder                  ZOrder;                                            // 0x28(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CustomZOrder;                                      // 0x2C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUnique;                                         // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3697[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  UniqueId;                                          // 0x34(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSafeZone;                                      // 0x3C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3698[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicUIConstraintBase*              LayoutConstraint;                                  // 0x40(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct DynamicUI.DynamicUIUnallowed
struct FDynamicUIUnallowed
{
public:
	TSoftClassPtr<class UUserWidget>             Widget;                                            // 0x0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseUniqueID;                                      // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_369A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  UniqueId;                                          // 0x2C(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeAll;                                       // 0x34(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_369B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


