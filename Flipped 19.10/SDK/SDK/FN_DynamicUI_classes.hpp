#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x230 - 0x220)
// Class DynamicUI.DynamicUIDirectorBase
class ADynamicUIDirectorBase : public AActor
{
public:
	TArray<class UDynamicUIScene*>               DefaultScenes;                                     // 0x220(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ADynamicUIDirectorBase* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class DynamicUI.DynamicUIConstraintBase
class UDynamicUIConstraintBase : public UObject
{
public:
	uint8                                        Pad_3672[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Offset;                                            // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicUIConstraintOverrideBase*      ConstraintOverride;                                // 0x70(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bUseOffset : 1;                                    // Mask: 0x1, PropSize: 0x10x78(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bUseOverride : 1;                                  // Mask: 0x2, PropSize: 0x10x78(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3674[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDynamicUIConstraintBase* GetDefaultObj();

};

// 0x10 (0x90 - 0x80)
// Class DynamicUI.DynamicUIConstraintPosition
class UDynamicUIConstraintPosition : public UDynamicUIConstraintBase
{
public:
	struct FVector2D                             Position;                                          // 0x80(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EDynamicUIAnchor                  Anchor;                                            // 0x88(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3676[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDynamicUIConstraintPosition* GetDefaultObj();

};

// 0x8 (0x88 - 0x80)
// Class DynamicUI.DynamicUIConstraintAlignment
class UDynamicUIConstraintAlignment : public UDynamicUIConstraintBase
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x80(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x81(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3679[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EDynamicUIAnchor                  Anchor;                                            // 0x84(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDynamicUIConstraintAlignment* GetDefaultObj();

};

// 0x58 (0xD8 - 0x80)
// Class DynamicUI.DynamicUIConstraintWidget
class UDynamicUIConstraintWidget : public UDynamicUIConstraintBase
{
public:
	enum class EDynamicUIAnchor                  Anchor;                                            // 0x80(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_367A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UUserWidget>             TargetWidget;                                      // 0x88(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  TargetUniqueID;                                    // 0xB0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EDynamicUIAnchor                  TargetAnchor;                                      // 0xB8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_367B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDynamicUIConstraintWidgetFallback> Fallbacks;                                         // 0xC0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        bUseFallbacks : 1;                                 // Mask: 0x1, PropSize: 0x10xD0(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_367C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDynamicUIConstraintWidget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DynamicUI.DynamicUIConstraintOverrideBase
class UDynamicUIConstraintOverrideBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UDynamicUIConstraintOverrideBase* GetDefaultObj();

};

// 0xA8 (0xD0 - 0x28)
// Class DynamicUI.DynamicUIConstraintPlatformOverride
class UDynamicUIConstraintPlatformOverride : public UDynamicUIConstraintOverrideBase
{
public:
	TMap<class FName, class UDynamicUIConstraintBase*> PlatformVisibilityControls;                        // 0x28(0x50)(Edit, ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TMap<enum class ECommonInputType, class UDynamicUIConstraintBase*> InputTypeVisibilityControls;                       // 0x78(0x50)(Edit, ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_3683[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDynamicUIConstraintPlatformOverride* GetDefaultObj();

};

// 0x118 (0x148 - 0x30)
// Class DynamicUI.DynamicUIManager
class UDynamicUIManager : public UWorldSubsystem
{
public:
	uint8                                        Pad_368D[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UDynamicUIScene*, struct FContextData> ActiveScenes;                                      // 0x80(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_368E[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, struct FDirectorData>    ActiveDirectors;                                   // 0xF8(0x50)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDynamicUIManager* GetDefaultObj();

	void RemoveScenes(const TArray<class UDynamicUIScene*>& Scenes, class UObject* OptionalContext);
	void RemoveScene(class UDynamicUIScene* Scene, class UObject* OptionalContext);
	void AddScenes(const TArray<class UDynamicUIScene*>& Scenes, class UObject* OptionalContext);
	void AddScene(class UDynamicUIScene* Scene, class UObject* OptionalContext);
};

// 0x20 (0x50 - 0x30)
// Class DynamicUI.DynamicUIScene
class UDynamicUIScene : public UDataAsset
{
public:
	TArray<struct FDynamicUIAllowed>             Allowed;                                           // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FDynamicUIUnallowed>           Unallowed;                                         // 0x40(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDynamicUIScene* GetDefaultObj();

};

// 0x28 (0x270 - 0x248)
// Class DynamicUI.DynamicUIVisualizerWidget
class UDynamicUIVisualizerWidget : public UUserWidget
{
public:
	TArray<class UDynamicUIScene*>               Scenes;                                            // 0x248(0x10)(Edit, ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         bRefresh;                                          // 0x258(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3693[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDynamicUIVisualizerWidget* GetDefaultObj();

};

}


